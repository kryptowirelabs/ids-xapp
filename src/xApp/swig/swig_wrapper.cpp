//#include "FlexRIC.h"
#include "swig_wrapper.h"

#ifdef XAPP_LANG_PYTHON
#include "Python.h"
#endif

#include "../e42_xapp_api.h"

#include "../../sm/mac_sm/mac_sm_id.h"
#include "../../sm/rlc_sm/rlc_sm_id.h"
#include "../../sm/pdcp_sm/pdcp_sm_id.h"
#include "../../sm/gtp_sm/gtp_sm_id.h"

#include "../../sm/slice_sm/slice_sm_id.h"

#include "../../sm/kpm_sm/kpm_sm_id.h"

#include "../../util/conf_file.h"


#include <arpa/inet.h>
#include <cassert>
#include <ctime>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>
#include <iostream>

static
bool initialized = false;


static
const char* convert_period(Interval  inter_arg)
{
  if(inter_arg == Interval::ms_1 ){
    return "1_ms";
  } else if (inter_arg == Interval::ms_2) {
    return "2_ms";
  } else if(inter_arg == Interval::ms_5) {
    return "5_ms";
  } else if(inter_arg == Interval::ms_10) {
    return "10_ms";
  } else {
    assert(0 != 0 && "Unknown type");
  }

}




void init()
{
  assert(initialized == false && "Already initialized!");

  int const argc = 1;
  char** argv = NULL;
  fr_args_t args = init_fr_args(argc, argv);

  initialized = true; 

  init_xapp_api(&args);
}

bool try_stop()
{
  return try_stop_xapp_api();
}

std::vector<E2Node> conn_e2_nodes(void)
{
  e2_node_arr_t arr = e2_nodes_xapp_api();
   

  std::vector<E2Node> x;

  for(int i = 0; i < arr.len; ++i){

    E2Node tmp;

    e2_node_connected_t const* src = &arr.n[i];

    tmp.id.type = src->id.type;
    tmp.id.plmn.mcc = src->id.plmn.mcc;
    tmp.id.plmn.mnc = src->id.plmn.mnc;
    tmp.id.plmn.mnc_digit_len = src->id.plmn.mnc_digit_len;
    tmp.id.nb_id = src->id.nb_id;
    size_t cuduid_idx = 0;
    if (src->id.cu_du_id) {
      while (src->id.cu_du_id[cuduid_idx]) {
        tmp.id.cu_du_id.push_back(src->id.cu_du_id[cuduid_idx]);
        cuduid_idx++;
      }
    }

    std::vector<RanFunction> ran_func;//(src->len_rf);

    for(size_t j = 0; j < src->len_rf; ++j){
      ran_function_t rf = cp_ran_function(&src->ack_rf[j]);

      RanFunction tmp_ran;

      tmp_ran.id = rf.id;
      tmp_ran.rev = rf.rev;
      tmp_ran.def = rf.definition;
      // TODO: oid

      ran_func.push_back(tmp_ran);// [j] = rf;
    }
    tmp.ran_func = ran_func;
    x.push_back(tmp);//[i] = tmp;
  }

  free_e2_node_arr(&arr);

  return x;
}

static 
mac_cb* hndlr_mac_cb; 

static
void sm_cb_mac(sm_ag_if_rd_t const* rd, global_e2_node_id_t const* e2_node)
{
  assert(rd != NULL);
  assert(rd->type == INDICATION_MSG_AGENT_IF_ANS_V0);
  assert(rd->ind.type == MAC_STATS_V0);
  assert(hndlr_mac_cb != NULL);

  mac_ind_data_t const* data = &rd->ind.mac;

  swig_mac_ind_msg_t ind;
  ind.tstamp = data->msg.tstamp;

  ind.id.type = e2_node->type;
  ind.id.plmn.mcc = e2_node->plmn.mcc;
  ind.id.plmn.mnc = e2_node->plmn.mnc;
  ind.id.plmn.mnc_digit_len = e2_node->plmn.mnc_digit_len;
  ind.id.nb_id = e2_node->nb_id;
  size_t cuduid_idx = 0;
  if (e2_node->cu_du_id) {
    while (e2_node->cu_du_id[cuduid_idx]) {
      ind.id.cu_du_id.push_back(e2_node->cu_du_id[cuduid_idx]);
      cuduid_idx++;
    }
  }

  for(uint32_t i = 0; i < data->msg.len_ue_stats; ++i){
      mac_ue_stats_impl_t tmp = cp_mac_ue_stats_impl(&data->msg.ue_stats[i]) ;
      ind.ue_stats.emplace_back(tmp);
  }

#ifdef XAPP_LANG_PYTHON
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif
    hndlr_mac_cb->handle(&ind);

#ifdef XAPP_LANG_PYTHON
    PyGILState_Release(gstate);
#endif

}

int report_mac_sm(swig_global_e2_node_id_t* id, Interval inter_arg, mac_cb* handler)
{
  assert(id != NULL);
  assert(handler != NULL);

  hndlr_mac_cb = handler;

  const char* period = convert_period(inter_arg);

  global_e2_node_id_t* e2node_id = (global_e2_node_id_t*)id;
  sm_ans_xapp_t ans = report_sm_xapp_api(e2node_id, SM_MAC_ID, (void*)period, sm_cb_mac);
  assert(ans.success == true);
  return ans.u.handle;
}


void rm_report_mac_sm(int handle)
{

#ifdef XAPP_LANG_PYTHON
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif

//  assert(hndlr_mac_ans.u.handle != 0);
  rm_report_sm_xapp_api(handle);

#ifdef XAPP_LANG_PYTHON
    PyGILState_Release(gstate);
#endif

}


//////////////////////////////////////
// RLC SM   
/////////////////////////////////////

//static
//pthread_t t_rlc;

static 
rlc_cb* hndlr_rlc_cb; 

static
void sm_cb_rlc(sm_ag_if_rd_t const* rd, global_e2_node_id_t const* e2_node)
{
  assert(rd != NULL);
  assert(rd->type == INDICATION_MSG_AGENT_IF_ANS_V0);
  assert(rd->ind.type == RLC_STATS_V0);
  assert(hndlr_rlc_cb != NULL);

  rlc_ind_data_t const* data = &rd->ind.rlc;

  swig_rlc_ind_msg_t ind;
  ind.tstamp = data->msg.tstamp;

  ind.id.type = e2_node->type;
  ind.id.plmn.mcc = e2_node->plmn.mcc;
  ind.id.plmn.mnc = e2_node->plmn.mnc;
  ind.id.plmn.mnc_digit_len = e2_node->plmn.mnc_digit_len;
  ind.id.nb_id = e2_node->nb_id;
  size_t cuduid_idx = 0;
  if (e2_node->cu_du_id) {
    while (e2_node->cu_du_id[cuduid_idx]) {
      ind.id.cu_du_id.push_back(e2_node->cu_du_id[cuduid_idx]);
      cuduid_idx++;
    }
  }

  for(uint32_t i = 0; i < data->msg.len; ++i){
    rlc_radio_bearer_stats_t tmp = data->msg.rb[i];
    ind.rb_stats.push_back(tmp);
  }

#ifdef XAPP_LANG_PYTHON
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif

    hndlr_rlc_cb->handle(&ind);

#ifdef XAPP_LANG_PYTHON
    PyGILState_Release(gstate);
#endif

}

int report_rlc_sm(swig_global_e2_node_id_t* id, Interval inter_arg, rlc_cb* handler)
{

  assert(id != NULL);
  assert(handler != NULL);

  hndlr_rlc_cb = handler;

  const char* period = convert_period(inter_arg);

  global_e2_node_id_t* e2node_id = (global_e2_node_id_t*)id;
  sm_ans_xapp_t ans = report_sm_xapp_api(e2node_id , SM_RLC_ID, (void*)period, sm_cb_rlc);
  assert(ans.success == true); 
  return ans.u.handle;
}

void rm_report_rlc_sm(int handler)
{

#ifdef XAPP_LANG_PYTHON
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif

  rm_report_sm_xapp_api(handler);

#ifdef XAPP_LANG_PYTHON
    PyGILState_Release(gstate);
#endif

}



//////////////////////////////////////
// PDCP 
/////////////////////////////////////

static 
pdcp_cb* hndlr_pdcp_cb; 

static
void sm_cb_pdcp(sm_ag_if_rd_t const* rd, global_e2_node_id_t const* e2_node)
{
  assert(rd != NULL);
  assert(rd->type == INDICATION_MSG_AGENT_IF_ANS_V0);
  assert(rd->ind.type == PDCP_STATS_V0);
  assert(hndlr_pdcp_cb != NULL);

  pdcp_ind_data_t const* data = &rd->ind.pdcp;

  swig_pdcp_ind_msg_t ind;
  ind.tstamp = data->msg.tstamp;

  ind.id.type = e2_node->type;
  ind.id.plmn.mcc = e2_node->plmn.mcc;
  ind.id.plmn.mnc = e2_node->plmn.mnc;
  ind.id.plmn.mnc_digit_len = e2_node->plmn.mnc_digit_len;
  ind.id.nb_id = e2_node->nb_id;
  size_t cuduid_idx = 0;
  if (e2_node->cu_du_id) {
    while (e2_node->cu_du_id[cuduid_idx]) {
      ind.id.cu_du_id.push_back(e2_node->cu_du_id[cuduid_idx]);
      cuduid_idx++;
    }
  }

  for(uint32_t i = 0; i < data->msg.len; ++i){
    pdcp_radio_bearer_stats_t tmp = data->msg.rb[i];
    ind.rb_stats.push_back(tmp);
  }

#ifdef XAPP_LANG_PYTHON
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif

    hndlr_pdcp_cb->handle(&ind);

#ifdef XAPP_LANG_PYTHON
    PyGILState_Release(gstate);
#endif

}

int report_pdcp_sm(swig_global_e2_node_id_t* id, Interval inter_arg, pdcp_cb* handler)
{
  assert(id != NULL);
  assert(handler != NULL);

  hndlr_pdcp_cb = handler;

  const char* period = convert_period(inter_arg);

  global_e2_node_id_t* e2node_id = (global_e2_node_id_t*)id;
  sm_ans_xapp_t ans = report_sm_xapp_api(e2node_id , SM_PDCP_ID, (void*)period, sm_cb_pdcp);
  assert(ans.success == true); 
  return ans.u.handle;
}

void rm_report_pdcp_sm(int handler)
{

#ifdef XAPP_LANG_PYTHON
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif

  rm_report_sm_xapp_api(handler);

#ifdef XAPP_LANG_PYTHON
    PyGILState_Release(gstate);
#endif

}

//////////////////////////////////////
// SLICE Indication & Control
/////////////////////////////////////

static
slice_cb* hndlr_slice_cb;

static
void sm_cb_slice(sm_ag_if_rd_t const* rd, global_e2_node_id_t const* e2_node)
{
  assert(rd != NULL);
  assert(rd->type == INDICATION_MSG_AGENT_IF_ANS_V0);
  assert(rd->ind.type == SLICE_STATS_V0);
  assert(hndlr_slice_cb != NULL);

  slice_ind_data_t const* data = &rd->ind.slice;

  swig_slice_ind_msg_t ind;
  ind.tstamp = data->msg.tstamp;

  ind.id.type = e2_node->type;
  ind.id.plmn.mcc = e2_node->plmn.mcc;
  ind.id.plmn.mnc = e2_node->plmn.mnc;
  ind.id.plmn.mnc_digit_len = e2_node->plmn.mnc_digit_len;
  ind.id.nb_id = e2_node->nb_id;
  size_t cuduid_idx = 0;
  if (e2_node->cu_du_id) {
    while (e2_node->cu_du_id[cuduid_idx]) {
      ind.id.cu_du_id.push_back(e2_node->cu_du_id[cuduid_idx]);
      cuduid_idx++;
    }
  }


  ind.slice_stats.dl.len_slices = data->msg.slice_conf.dl.len_slices;
  ind.slice_stats.dl.sched_name.push_back(data->msg.slice_conf.dl.sched_name);
  for (size_t i = 0; i < ind.slice_stats.dl.len_slices; ++i) {
    swig_fr_slice_t tmp;
    tmp.id = data->msg.slice_conf.dl.slices[i].id;
    tmp.label.push_back(data->msg.slice_conf.dl.slices[i].label);
    tmp.sched.push_back(data->msg.slice_conf.dl.slices[i].sched);
    tmp.params = data->msg.slice_conf.dl.slices[i].params;
    ind.slice_stats.dl.slices.emplace_back(tmp);
  }

  ind.ue_slice_stats.len_ue_slice = data->msg.ue_slice_conf.len_ue_slice;
  for (size_t i = 0; i < ind.ue_slice_stats.len_ue_slice; ++i) {
    ue_slice_assoc_t tmp_ue;
    tmp_ue.rnti = data->msg.ue_slice_conf.ues[i].rnti;
    tmp_ue.dl_id = data->msg.ue_slice_conf.ues[i].dl_id;
    tmp_ue.ul_id = data->msg.ue_slice_conf.ues[i].ul_id;
    ind.ue_slice_stats.ues.emplace_back(tmp_ue);
  }

#ifdef XAPP_LANG_PYTHON
  PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif

  hndlr_slice_cb->handle(&ind);

#ifdef XAPP_LANG_PYTHON
  PyGILState_Release(gstate);
#endif

}

int report_slice_sm(swig_global_e2_node_id_t* id, Interval inter_arg, slice_cb* handler)
{
  assert( id != NULL);
  (void)inter_arg;
  assert(handler != NULL);

  hndlr_slice_cb = handler;

  const char* period = convert_period(inter_arg);

  global_e2_node_id_t* e2node_id = (global_e2_node_id_t*)id;
  sm_ans_xapp_t ans = report_sm_xapp_api(e2node_id, SM_SLICE_ID, (void*)period, sm_cb_slice);
  assert(ans.success == true);
  return ans.u.handle;
}

void rm_report_slice_sm(int handler)
{

#ifdef XAPP_LANG_PYTHON
  PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif

  rm_report_sm_xapp_api(handler);

#ifdef XAPP_LANG_PYTHON
  PyGILState_Release(gstate);
#endif

}

void control_slice_sm(swig_global_e2_node_id_t* id, slice_ctrl_msg_t* ctrl)
{
  assert(id != NULL);
  assert(ctrl != NULL);

  if(ctrl->type == SLICE_CTRL_SM_V0_ADD){
    slice_conf_t* s_conf = &ctrl->u.add_mod_slice;
    assert(s_conf->dl.sched_name != NULL);

    if (s_conf->dl.len_slices == 0)
      std::cout << "RESET DL SLICE, algo = NONE" << '\n';
    for(size_t i =0; i < s_conf->dl.len_slices; ++i) {
      fr_slice_t *s = &s_conf->dl.slices[i];
      assert(s->len_sched != 0);
      assert(s->sched != NULL);
      slice_params_t *p = &s->params;
      if (p->type == SLICE_ALG_SM_V0_STATIC) {
        static_slice_t *sta_sli = &p->u.sta;
        std::cout << "ADD STATIC DL SLICE: id " << s->id <<
                  ", label " << s->label <<
                  ", pos_low " << sta_sli->pos_low <<
                  ", pos_high " << sta_sli->pos_high << '\n';
      } else if (p->type == SLICE_ALG_SM_V0_NVS) {
        nvs_slice_t *nvs_sli = &p->u.nvs;
        if (nvs_sli->conf == SLICE_SM_NVS_V0_RATE)
          std::cout << "ADD NVS DL SLICE: id " << s->id <<
                    ", label " << s->label <<
                    ", conf " << nvs_sli->conf << "(rate)" <<
                    ", mbps_required " << nvs_sli->u.rate.u1.mbps_required <<
                    ", mbps_reference " << nvs_sli->u.rate.u2.mbps_reference << '\n';
        else if (nvs_sli->conf == SLICE_SM_NVS_V0_CAPACITY)
          std::cout << "ADD NVS DL SLICE: id " << s->id <<
                    ", label " << s->label <<
                    ", conf " << nvs_sli->conf << "(capacity)" <<
                    ", pct_reserved " << nvs_sli->u.capacity.u.pct_reserved << '\n';
        else assert(0 != 0 && "Unknow NVS conf");
      } else if (p->type == SLICE_ALG_SM_V0_EDF) {
        edf_slice_t *edf_sli = &p->u.edf;
        std::cout << "ADD EDF DL SLICE: id " << s->id <<
                  ", label " << s->label <<
                  ", deadline " << edf_sli->deadline <<
                  ", guaranteed_prbs " << edf_sli->guaranteed_prbs <<
                  ", max_replenish " << edf_sli->max_replenish << '\n';
      } else assert(0 != 0 && "Unknow slice algo type");
    }
  } else if(ctrl->type == SLICE_CTRL_SM_V0_UE_SLICE_ASSOC){
    for (size_t i = 0; i <  ctrl->u.ue_slice.len_ue_slice; ++i)
      std::cout << "ASSOC DL SLICE: rnti " << std::hex << ctrl->u.ue_slice.ues[i].rnti <<
                ", to slice id " << ctrl->u.ue_slice.ues[i].dl_id << '\n';
  } else if (ctrl->type == SLICE_CTRL_SM_V0_DEL) {
    del_slice_conf_t* d_conf = &ctrl->u.del_slice;
    for (size_t i = 0; i <  d_conf->len_dl; ++i)
      std::cout << "DEL DL SLICE: id " << d_conf->dl[i] << '\n';
    // TODO: UL

  } else {
    assert(0!=0 && "not foreseen case");
  }

  sm_ag_if_wr_t wr;
  wr.type = CONTROL_SM_AG_IF_WR;
  wr.ctrl.type = SLICE_CTRL_REQ_V0;
  wr.ctrl.slice_req_ctrl.msg = cp_slice_ctrl_msg(ctrl);

  global_e2_node_id_t* e2node_id = (global_e2_node_id_t*)id;
  control_sm_xapp_api(e2node_id, SM_SLICE_ID,  &wr);
}

//////////////////////////////////////
// GTP SM   
/////////////////////////////////////

static 
gtp_cb* hndlr_gtp_cb; 

static
void sm_cb_gtp(sm_ag_if_rd_t const* rd, global_e2_node_id_t const* e2_node)
{
  assert(rd != NULL);
  assert(rd->type == INDICATION_MSG_AGENT_IF_ANS_V0);
  assert(rd->ind.type == GTP_STATS_V0);
  assert(hndlr_gtp_cb != NULL);

  gtp_ind_data_t const* data = &rd->ind.gtp;

  swig_gtp_ind_msg_t ind;
  ind.tstamp = data->msg.tstamp;

  ind.id.type = e2_node->type;
  ind.id.plmn.mcc = e2_node->plmn.mcc;
  ind.id.plmn.mnc = e2_node->plmn.mnc;
  ind.id.plmn.mnc_digit_len = e2_node->plmn.mnc_digit_len;
  ind.id.nb_id = e2_node->nb_id;
  size_t cuduid_idx = 0;
  if (e2_node->cu_du_id) {
    while (e2_node->cu_du_id[cuduid_idx]) {
      ind.id.cu_du_id.push_back(e2_node->cu_du_id[cuduid_idx]);
      cuduid_idx++;
    }
  }

  for(uint32_t i = 0; i < data->msg.len; ++i){
    gtp_ngu_t_stats_t tmp = data->msg.ngut[i];
    ind.gtp_stats.push_back(tmp);
  }

#ifdef XAPP_LANG_PYTHON
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif

    hndlr_gtp_cb->handle(&ind);

#ifdef XAPP_LANG_PYTHON
    PyGILState_Release(gstate);
#endif

}

int report_gtp_sm(swig_global_e2_node_id_t* id, Interval inter_arg, gtp_cb* handler)
{
  assert(id != NULL);
  assert(handler != NULL);

  hndlr_gtp_cb = handler;

  const char* period = convert_period(inter_arg);

  global_e2_node_id_t* e2node_id = (global_e2_node_id_t*)id;
  sm_ans_xapp_t ans = report_sm_xapp_api(e2node_id , SM_GTP_ID, (void*)period, sm_cb_gtp);
  assert(ans.success == true); 
  return ans.u.handle;
}

void rm_report_gtp_sm(int handler)
{

#ifdef XAPP_LANG_PYTHON
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
#endif

  rm_report_sm_xapp_api(handler);

#ifdef XAPP_LANG_PYTHON
    PyGILState_Release(gstate);
#endif

}

/////////////////////////////////////
// KPM SM
/////////////////////////////////////
//
//static
//kpm_cb* hndlr_kpm_cb;
//
//static
//void sm_cb_kpm(sm_ag_if_rd_t const* rd, global_e2_node_id_t const* e2_node)
//{
//  assert(rd != NULL);
//  assert(rd->type == KPM_STATS_V0);
//  assert(hndlr_kpm_cb != NULL);
//
//  kpm_ind_data_t const* data = &rd->kpm_stats;
//
//  swig_kpm_ind_msg_t ind;
//
//  ind.id.type = e2_node->type;
//  ind.id.plmn.mcc = e2_node->plmn.mcc;
//  ind.id.plmn.mnc = e2_node->plmn.mnc;
//  ind.id.plmn.mnc_digit_len = e2_node->plmn.mnc_digit_len;
//  ind.id.nb_id = e2_node->nb_id;
//  size_t cuduid_idx = 0;
//  if (e2_node->cu_du_id) {
//    while (e2_node->cu_du_id[cuduid_idx]) {
//      ind.id.cu_du_id.push_back(e2_node->cu_du_id[cuduid_idx]);
//      cuduid_idx++;
//    }
//  }
//
//  ind.MeasData_len = data->msg.MeasData_len;
//
//  for (size_t i = 0; i < data->msg.MeasData_len; ++i) {
//    swig_adapter_MeasDataItem_t item;
//    item.measRecord_len = data->msg.MeasData[i].measRecord_len;
//    item.incompleteFlag = data->msg.MeasData[i].incompleteFlag;
//
//    for (size_t j = 0; j < data->msg.MeasData[i].measRecord_len; ++j) {
//      swig_adapter_MeasRecord_t record;
//
//      // swig_MeasRecordType type;
//      // type.
//
//      // record.type = data->msg.MeasData[i].measRecord[j].type;
//      record.int_val = data->msg.MeasData[i].measRecord[j].int_val;
//      record.real_val = data->msg.MeasData[i].measRecord[j].real_val;
//      item.measRecord.push_back(record);
//    }
//
//    ind.MeasData.push_back(item);
//  }
//
//  ind.MeasInfo_len = data->msg.MeasInfo_len;
//
//  if (data->msg.MeasInfo_len > 0) {
//    for (size_t i = 0; i < data->msg.MeasInfo_len; ++i) {
//      swig_MeasInfo_t info;
//      info.meas_type = data->msg.MeasInfo[i].meas_type;
//
//      byte_array_t measName;
//      measName = data->msg.MeasInfo[i].measName;
//
//      std::string name(measName.buf, measName.buf + measName.len);
//
//      info.measName = name;
//      info.measID = data->msg.MeasInfo[i].measID;
//      //info.labelInfo = data->msg.MeasInfo[i].labelInfo;
//      info.labelInfo_len = data->msg.MeasInfo[i].labelInfo_len;
//      ind.MeasInfo.push_back(info);
//    }
//  }
//
//  //ind.granulPeriod = data->msg.granulPeriod;
//
//
//#ifdef XAPP_LANG_PYTHON
//  PyGILState_STATE gstate;
//  gstate = PyGILState_Ensure();
//#endif
//
//  hndlr_kpm_cb->handle(&ind);
//
//#ifdef XAPP_LANG_PYTHON
//  PyGILState_Release(gstate);
//#endif
//}
//
//int report_kpm_sm(swig_global_e2_node_id_t* id, Interval inter_arg, kpm_cb* handler)
//{
//  assert(id != NULL);
//  assert(handler != NULL);
//
//  hndlr_kpm_cb = handler;
//
//  const char* period = convert_period(inter_arg);
//
//  global_e2_node_id_t* e2node_id = (global_e2_node_id_t*)id;
//  sm_ans_xapp_t ans = report_sm_xapp_api(e2node_id, SM_KPM_ID, period, sm_cb_kpm);
//  assert(ans.success == true);
//  return ans.u.handle;
//}
//
//void rm_report_kpm_sm(int handler)
//{
//#ifdef XAPP_LANG_PYTHON
//  PyGILState_STATE gstate;
//  gstate = PyGILState_Ensure();
//#endif
//
//  rm_report_sm_xapp_api(handler);
//
//#ifdef XAPP_LANG_PYTHON
//  PyGILState_Release(gstate);
//#endif
//}
