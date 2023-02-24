#include "fill_rnd_data_kpm.h"

#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

kpm_event_trigger_def_t fill_kpm_event_trigger_def(void)
{
  kpm_event_trigger_def_t dst = {0};

  dst.type = rand()%END_FORMAT_RIC_EVENT_TRIGGER;

  if(dst.type == FORMAT_1_RIC_EVENT_TRIGGER  ){
    // Normally the period is not free, need to check in the specs
    dst.kpm_ric_event_trigger_format_1.report_period_ms = rand()%1000;
  } else {
    assert(0 != 0 && "unknown type");
  }

  return dst;
}

kpm_act_def_format_1_t fill_kpm_action_def_frm_1(void)
{
  kpm_act_def_format_1_t action_def_frm_1 = {0};

  // Measurement Information
  // [1, 65535]
  // mir: Here there is a bug. uncomment the following line i.e., (rand() % 65535)
  action_def_frm_1.meas_info_lst_len = 3; //(rand() % 65535) + 1;
                                            
  action_def_frm_1.meas_info_lst = calloc(action_def_frm_1.meas_info_lst_len, sizeof(meas_info_format_1_lst_t));
  assert(action_def_frm_1.meas_info_lst != NULL && "Memory exhausted" );
  
  for (size_t i = 0; i < action_def_frm_1.meas_info_lst_len; i++)
  {
    meas_info_format_1_lst_t* meas_info = &action_def_frm_1.meas_info_lst[i];
    
    // Measurement Type
    meas_info->meas_type.type = rand()%END_MEAS_TYPE;

    switch (meas_info->meas_type.type)
    {
    case NAME_MEAS_TYPE:
      meas_info->meas_type.type = NAME_MEAS_TYPE;
      meas_info->meas_type.name.buf = calloc(strlen("test") + 1, sizeof(char));
      memcpy(meas_info->meas_type.name.buf, "test", strlen("test"));
      meas_info->meas_type.name.len = strlen("test");
      break;
    
    case ID_MEAS_TYPE:
      meas_info->meas_type.type = ID_MEAS_TYPE;
      meas_info->meas_type.id = (rand() % 65536) + 1;
      break;

    default:
      assert(false && "Unknown Measurement Type");
    }
  

    // Label Information
    // [1, 2147483647]
    meas_info->label_info_lst_len = 2 ; // With the real number, we can run out of memory i.e., 2147483647
    meas_info->label_info_lst = calloc(meas_info->label_info_lst_len, sizeof(label_info_lst_t));
    assert(meas_info->label_info_lst != NULL && "Memory exhausted" );
    
    for (size_t j = 0; j < meas_info->label_info_lst_len; j++)
    {
      meas_info->label_info_lst[j].plmn_id = malloc(sizeof(plmn_t));
      assert(meas_info->label_info_lst[j].plmn_id  != NULL);

      *meas_info->label_info_lst[j].plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
      // action_def_frm_1.meas_info_lst[i].label_info_lst[j].noLabel = malloc(sizeof(enum_value_e));
      // *action_def_frm_1.meas_info_lst[i].label_info_lst[j].noLabel = TRUE_ENUM_VALUE;
    }
  }
  
  // Granularity Period
  action_def_frm_1.gran_period_ms = (rand() % 4294967295) + 0;
  
  // Cell Global ID - OPTIONAL
  action_def_frm_1.cell_global_id = calloc(1, sizeof(*action_def_frm_1.cell_global_id));
  action_def_frm_1.cell_global_id->type = rand()%END_CGI_RAT_TYPE;
  
  switch (action_def_frm_1.cell_global_id->type)
  {
  case NR_CGI_RAT_TYPE:
    action_def_frm_1.cell_global_id->nr_cgi.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
    action_def_frm_1.cell_global_id->nr_cgi.nr_cell_id = (rand() % 2^36) + 1;
    break;

  case EUTRA_CGI_RAT_TYPE:
    action_def_frm_1.cell_global_id->eutra.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
    action_def_frm_1.cell_global_id->eutra.eutra_cell_id = (rand() % 2^28) + 0;
    break;
  
  default:
    assert(false && "Unknown Cell Global ID Type");
  }
  
  // Measurement Bin Range - OPTIONAL
  // not yet implemented in ASN.1
  action_def_frm_1.meas_bin_range_info_lst_len = 0;
  action_def_frm_1.meas_bin_info_lst = NULL;

  return action_def_frm_1;
}

gnb_t fill_gnb_data(void)
{
  gnb_t gnb = {0};

  // 6.2.3.16
  // Mandatory
  // AMF UE NGAP ID
  gnb.amf_ue_ngap_id = (rand() % 2^40) + 0;

  // Mandatory
  //GUAMI 6.2.3.17 
  gnb.guami.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
  
  gnb.guami.amf_region_id = (rand() % 2^8) + 0;
  gnb.guami.amf_set_id = (rand() % 2^10) + 0;
  gnb.guami.amf_ptr = (rand() % 2^6) + 0;

  // gNB-CU UE F1AP ID List
  // C-ifCUDUseparated 
  gnb.gnb_cu_ue_f1ap_lst_len = (rand() % 4) + 1;
  gnb.gnb_cu_ue_f1ap_lst = calloc(gnb.gnb_cu_ue_f1ap_lst_len, sizeof(uint32_t));
  for (size_t i = 0; i < gnb.gnb_cu_ue_f1ap_lst_len; i++)
  {
    gnb.gnb_cu_ue_f1ap_lst[i] = (rand() % 4294967296) + 0;
  }

  //gNB-CU-CP UE E1AP ID List
  //C-ifCPUPseparated 
  gnb.gnb_cu_cp_ue_e1ap_lst_len = 3; //(rand() % 65535) + 1;
  gnb.gnb_cu_cp_ue_e1ap_lst = calloc(gnb.gnb_cu_cp_ue_e1ap_lst_len, sizeof(uint32_t));
  for (size_t i = 0; i < gnb.gnb_cu_cp_ue_e1ap_lst_len; i++)
  {
    gnb.gnb_cu_cp_ue_e1ap_lst[i] = (rand() % 4294967296) + 0;
  }

  // RAN UE ID
  // Optional
  // 6.2.3.25
  gnb.ran_ue_id = calloc(1, sizeof(uint64_t));
  assert(gnb.ran_ue_id != NULL && "Memory exhausted");
  *gnb.ran_ue_id = 14294967296; // (rand() % 2^64) + 0;

  //  M-NG-RAN node UE XnAP ID
  // C- ifDCSetup
  // 6.2.3.19
  gnb.ng_ran_node_ue_xnap_id = calloc(1, sizeof(uint32_t));
  assert(gnb.ng_ran_node_ue_xnap_id != NULL && "Memory exhausted");
  *gnb.ng_ran_node_ue_xnap_id = (rand() % 4294967296) + 0;

  // Global gNB ID
  // 6.2.3.3
  // Optional
  // This IE shall not be used. Global NG-RAN Node ID IE shall replace this IE 
  gnb.global_gnb_id = calloc(1, sizeof(global_gnb_id_t));
  assert(gnb.global_gnb_id != NULL && "Memory exhausted");
  gnb.global_gnb_id->type = GNB_TYPE_ID;
  gnb.global_gnb_id->plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
  gnb.global_gnb_id->gnb_id = (rand() % 4294967296) + 0;

  // Global NG-RAN Node ID
  // C-ifDCSetup
  // 6.2.3.2
  gnb.global_ng_ran_node_id = calloc(1, sizeof(*gnb.global_ng_ran_node_id));
  gnb.global_ng_ran_node_id->type = rand()%END_GLOBAL_TYPE_ID;

  switch (gnb.global_ng_ran_node_id->type)
  {
  case GNB_GLOBAL_TYPE_ID:
    gnb.global_ng_ran_node_id->global_gnb_id.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
    gnb.global_ng_ran_node_id->global_gnb_id.type = GNB_TYPE_ID;
    gnb.global_ng_ran_node_id->global_gnb_id.gnb_id = (rand() % 4294967296) + 0;
    break;
  
  case NG_ENB_GLOBAL_TYPE_ID:
    gnb.global_ng_ran_node_id->global_ng_enb_id.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
    gnb.global_ng_ran_node_id->global_ng_enb_id.type = LONG_MACRO_NG_ENB_TYPE_ID;  // rand()%END_NG_ENB_TYPE_ID;

    switch (gnb.global_ng_ran_node_id->global_ng_enb_id.type)
    {
    case MACRO_NG_ENB_TYPE_ID:
      gnb.global_ng_ran_node_id->global_ng_enb_id.macro_ng_enb_id = (rand() % 2^20) + 0;
      break;

    case SHORT_MACRO_NG_ENB_TYPE_ID:
      gnb.global_ng_ran_node_id->global_ng_enb_id.short_macro_ng_enb_id = (rand() % 2^18) + 0;
      break;

    case LONG_MACRO_NG_ENB_TYPE_ID:
      gnb.global_ng_ran_node_id->global_ng_enb_id.long_macro_ng_enb_id = (rand() % 2^21) + 0;
      break;
    
    default:
      assert(false && "Unknown Global NG eNB ID Type");
    }
    break;

  default:
    assert(false && "Unknown Global NG-RAN Node ID Type");
  }

  return gnb;
}

gnb_du_t fill_gnb_du_data(void)
{
  gnb_du_t gnb_du = {0};
  gnb_du.gnb_cu_ue_f1ap = (rand() % 4294967296) + 0;

  gnb_du.ran_ue_id = calloc(1, sizeof(*gnb_du.ran_ue_id));
  *gnb_du.ran_ue_id = (rand() % 2^64) + 0;

  return gnb_du;
}

gnb_cu_up_t fill_gnb_cu_up_data(void)
{
  gnb_cu_up_t gnb_cu_up = {0};
  gnb_cu_up.gnb_cu_cp_ue_e1ap = (rand() % 4294967296) + 0;

  gnb_cu_up.ran_ue_id = calloc(1, sizeof(*gnb_cu_up.ran_ue_id));
  *gnb_cu_up.ran_ue_id = (rand() % 2^64) + 0;

  return gnb_cu_up;
}

ng_enb_t fill_ng_enb_data(void)
{
  ng_enb_t ng_enb = {0};

  // 6.2.3.16
  // Mandatory
  // AMF UE NGAP ID
  ng_enb.amf_ue_ngap_id = (rand() % 2^40) + 0;

  // 6.2.3.17
  // Mandatory
  // GUAMI
  ng_enb.guami.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
  
  ng_enb.guami.amf_region_id = (rand() % 2^8) + 0;
  ng_enb.guami.amf_set_id = (rand() % 2^10) + 0;
  ng_enb.guami.amf_ptr = (rand() % 2^6) + 0;

  // 6.2.3.22
  // C-if CU DU separated
  // ng-eNB-CU UE W1AP ID
  ng_enb.ng_enb_cu_ue_w1ap_id = calloc(1, sizeof(uint32_t));
  assert(ng_enb.ng_enb_cu_ue_w1ap_id != NULL && "Memory exhausted");
  *ng_enb.ng_enb_cu_ue_w1ap_id = (rand() % 4294967296) + 0;

  // 6.2.3.19
  // C- ifDCSetup
  // M-NG-RAN node UE XnAP ID
  ng_enb.ng_ran_node_ue_xnap_id = calloc(1, sizeof(uint32_t));
  assert(ng_enb.ng_ran_node_ue_xnap_id != NULL && "Memory exhausted");
  *ng_enb.ng_ran_node_ue_xnap_id = (rand() % 4294967296) + 0;

  // OPTIONAL
  // This IE shall not be used. Global NG-RAN Node ID IE shall replace this IE
  ng_enb.global_ng_enb_id = calloc(1, sizeof(*ng_enb.global_ng_enb_id));
  assert(ng_enb.global_ng_enb_id != NULL && "Memory exhausted");
  ng_enb.global_ng_enb_id->plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};

  ng_enb.global_ng_enb_id->type = rand()%END_NG_ENB_TYPE_ID;

  switch (ng_enb.global_ng_enb_id->type)
  {
  case MACRO_NG_ENB_TYPE_ID:
    ng_enb.global_ng_enb_id->macro_ng_enb_id = (rand() % 2^20) + 0;
    break;

  case SHORT_MACRO_NG_ENB_TYPE_ID:
    ng_enb.global_ng_enb_id->short_macro_ng_enb_id = (rand() % 2^18) + 0;
    break;

  case LONG_MACRO_NG_ENB_TYPE_ID:
    ng_enb.global_ng_enb_id->long_macro_ng_enb_id = (rand() % 2^21) + 0;
    break;
  
  default:
    assert(false && "Unknown Global NG eNB ID Type");
  }


  // Global NG-RAN Node ID
  // C-ifDCSetup
  // 6.2.3.2
  ng_enb.global_ng_ran_node_id = calloc(1, sizeof(*ng_enb.global_ng_ran_node_id));
  assert(ng_enb.global_ng_ran_node_id != NULL && "Memory exhausted");
  ng_enb.global_ng_ran_node_id->type = rand()%END_GLOBAL_TYPE_ID;

  switch (ng_enb.global_ng_ran_node_id->type)
  {
  case GNB_GLOBAL_TYPE_ID:
    ng_enb.global_ng_ran_node_id->global_gnb_id.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
    ng_enb.global_ng_ran_node_id->global_gnb_id.type = GNB_TYPE_ID;
    ng_enb.global_ng_ran_node_id->global_gnb_id.gnb_id = (rand() % 4294967296) + 0;
    break;
  
  case NG_ENB_GLOBAL_TYPE_ID:
    ng_enb.global_ng_ran_node_id->global_ng_enb_id.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
    ng_enb.global_ng_ran_node_id->global_ng_enb_id.type = LONG_MACRO_NG_ENB_TYPE_ID;  // rand()%END_NG_ENB_TYPE_ID;

    switch (ng_enb.global_ng_ran_node_id->global_ng_enb_id.type)
    {
    case MACRO_NG_ENB_TYPE_ID:
      ng_enb.global_ng_ran_node_id->global_ng_enb_id.macro_ng_enb_id = (rand() % 2^20) + 0;
      break;

    case SHORT_MACRO_NG_ENB_TYPE_ID:
      ng_enb.global_ng_ran_node_id->global_ng_enb_id.short_macro_ng_enb_id = (rand() % 2^18) + 0;
      break;

    case LONG_MACRO_NG_ENB_TYPE_ID:
      ng_enb.global_ng_ran_node_id->global_ng_enb_id.long_macro_ng_enb_id = (rand() % 2^21) + 0;
      break;
    
    default:
      assert(false && "Unknown Global NG eNB ID Type");
    }
    break;

  default:
    assert(false && "Unknown Global NG-RAN Node ID Type");
  }

  return ng_enb;
}

ng_enb_du_t fill_ng_enb_du_data(void)
{
  ng_enb_du_t ng_enb_du = {0};

  // 6.2.3.22
  // C-if CU DU separated
  // ng-eNB-CU UE W1AP ID
  ng_enb_du.ng_enb_cu_ue_w1ap_id = (rand() % 4294967296) + 0;

  return ng_enb_du;
}

en_gnb_t fill_en_gnb_data(void)
{
  en_gnb_t en_gnb = {0};

  // 6.2.3.23
  // Mandatory
  // MeNB UE X2AP ID
  en_gnb.enb_ue_x2ap_id = (rand() % 4095) + 1;

  // 6.2.3.24
  // OPTIONAL
  // MeNB UE X2AP ID Extension
  en_gnb.enb_ue_x2ap_id_extension = calloc(1, sizeof(uint16_t));
  assert(en_gnb.enb_ue_x2ap_id_extension != NULL && "Memory exhausted");
  *en_gnb.enb_ue_x2ap_id_extension = (rand() % 4095) + 1;

  // 6.2.3.9
  // Mandatory
  // Global eNB ID
  en_gnb.global_enb_id.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};

  en_gnb.global_enb_id.type = rand()%SHORT_MACRO_ENB_TYPE_ID;

  switch (en_gnb.global_enb_id.type)
  {
  case MACRO_ENB_TYPE_ID:
    en_gnb.global_enb_id.macro_enb_id = (rand() % 2^20) + 0;
    break;
  
  case HOME_ENB_TYPE_ID:
    en_gnb.global_enb_id.home_enb_id = (rand() % 2^28) + 0;
    break;

  /* Possible extensions: */
  // case SHORT_MACRO_ENB_TYPE_ID:
  //   en_gnb.global_enb_id.short_macro_enb_id = (rand() % 2^18) + 0;
  //   break;

  // case LONG_MACRO_ENB_TYPE_ID:
  //   en_gnb.global_enb_id.long_macro_enb_id = (rand() % 2^21) + 0;
  //   break;

  default:
    break;
  }

  // 6.2.3.21
  // gNB-CU UE F1AP ID
  // C-ifCUDUseparated 
  en_gnb.gnb_cu_ue_f1ap_lst = calloc(1, sizeof(uint32_t));
  assert(en_gnb.gnb_cu_ue_f1ap_lst != NULL && "Memory exhausted");
  *en_gnb.gnb_cu_ue_f1ap_lst = (rand() % 4294967296) + 0;

  // gNB-CU-CP UE E1AP ID List
  // C-ifCPUPseparated 
  en_gnb.gnb_cu_cp_ue_e1ap_lst_len = 3;
  en_gnb.gnb_cu_cp_ue_e1ap_lst = calloc(en_gnb.gnb_cu_cp_ue_e1ap_lst_len, sizeof(uint32_t));
  for (size_t i = 0; i < en_gnb.gnb_cu_cp_ue_e1ap_lst_len; i++)
  {
    en_gnb.gnb_cu_cp_ue_e1ap_lst[i] = (rand() % 4294967296) + 0;
  }

  // RAN UE ID
  // Optional
  // 6.2.3.25
  en_gnb.ran_ue_id = calloc(1, sizeof(uint64_t));
  assert(en_gnb.ran_ue_id != NULL && "Memory exhausted");
  *en_gnb.ran_ue_id = (rand() % 2^64) + 0;

  return en_gnb;
}

enb_t fill_enb_data(void)
{
  enb_t enb = {0};

  // 6.2.3.26
  // Mandatory
  // MME UE S1AP ID
  enb.mme_ue_s1ap_id = (rand() % 4294967296) + 0;

  // 6.2.3.18
  // Mandatory
  // GUMMEI
  enb.gummei.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
  enb.gummei.mme_group_id = (rand() % 2^16) + 0;
  enb.gummei.mme_code = (rand() % 2^8) + 0;

  // 6.2.3.23
  // C-ifDCSetup
  // MeNB UE X2AP ID
  enb.enb_ue_x2ap_id = calloc(1, sizeof(uint16_t));
  assert(enb.enb_ue_x2ap_id != NULL && "Memory exhausted");
  *enb.enb_ue_x2ap_id = (rand() % 4095) + 1;

  // 6.2.3.24
  // C-ifDCSetup
  // MeNB UE X2AP ID Extension
  enb.enb_ue_x2ap_id_extension = calloc(1, sizeof(uint16_t));
  assert(enb.enb_ue_x2ap_id_extension != NULL && "Memory exhausted");
  *enb.enb_ue_x2ap_id_extension = (rand() % 4095) + 1;

  // 6.2.3.9
  // C-ifDCSetup
  // Global eNB ID
  enb.global_enb_id = calloc(1, sizeof(*enb.global_enb_id));
  assert(enb.global_enb_id != NULL && "Memory exhausted");

  enb.global_enb_id->plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};

  enb.global_enb_id->type = MACRO_ENB_TYPE_ID;  // rand()%END_ENB_TYPE_ID;

  switch (enb.global_enb_id->type)
  {
  case MACRO_ENB_TYPE_ID:
    enb.global_enb_id->macro_enb_id = (rand() % 2^20) + 0;
    break;
  
  case HOME_ENB_TYPE_ID:
    enb.global_enb_id->home_enb_id = (rand() % 2^28) + 0;
    break;

  /* Possible extensions: */
  // case SHORT_MACRO_ENB_TYPE_ID:
  //   enb.global_enb_id->short_macro_enb_id = (rand() % 2^18) + 0;
  //   break;

  // case LONG_MACRO_ENB_TYPE_ID:
  //   enb.global_enb_id->long_macro_enb_id = (rand() % 2^21) + 0;
  //   break;

  default:
    break;
  }

  return enb;
}
ue_id_t fill_ue_id_data(void)
{
  ue_id_t ue_id_data = {0};

  ue_id_data.type = GNB_UE_ID; // rand()%END_UE_ID;

  switch (ue_id_data.type)
  {
  case GNB_UE_ID:
    ue_id_data.gnb = fill_gnb_data();
    break;

  case GNB_DU_UE_ID:
    ue_id_data.gnb_du = fill_gnb_du_data();
    break;
  
  case GNB_CU_UP_UE_ID:
    ue_id_data.gnb_cu_up = fill_gnb_cu_up_data();
    break;

  case NG_ENB_UE_ID:
    ue_id_data.ng_enb = fill_ng_enb_data();
    break;

  case NG_ENB_DU_UE_ID:
    ue_id_data.ng_enb_du = fill_ng_enb_du_data();
    break;

  case EN_GNB_UE_ID:
    ue_id_data.en_gnb = fill_en_gnb_data();
    break;

  case ENB_UE_ID:
    ue_id_data.enb = fill_enb_data();
    break;
  
  default:
    assert(false && "Unknown UE ID Type");
  }


  return ue_id_data;
}

kpm_act_def_format_2_t fill_kpm_action_def_frm_2(void)
{
  kpm_act_def_format_2_t action_def_frm_2 = {0};

  // UE ID
  action_def_frm_2.ue_id = fill_ue_id_data();
  

  // Action Definition Format 1

  action_def_frm_2.action_def_format_1 = fill_kpm_action_def_frm_1();

  return action_def_frm_2;
}

test_info_lst_t fill_kpm_test_info(void)
{
  test_info_lst_t test_info = {0};

  test_info.test_cond_type = rand()%UL_RSRP_TEST_COND_TYPE;

  switch (test_info.test_cond_type)
  {
  case GBR_TEST_COND_TYPE:
    test_info.GBR = TRUE_TEST_COND_TYPE;
    break;
  
  case AMBR_TEST_COND_TYPE:
    test_info.AMBR = TRUE_TEST_COND_TYPE;
    break;
  
  case IsStat_TEST_COND_TYPE:
    test_info.IsStat = TRUE_TEST_COND_TYPE;
    break;
  
  case IsCatM_TEST_COND_TYPE:
    test_info.IsCatM = TRUE_TEST_COND_TYPE;
    break;
  
  case DL_RSRP_TEST_COND_TYPE:
    test_info.DL_RSRP = TRUE_TEST_COND_TYPE;
    break;
  
  case DL_RSRQ_TEST_COND_TYPE:
    test_info.DL_RSRQ = TRUE_TEST_COND_TYPE;
    break;
  
  /* Possible extensions: */
  // case UL_RSRP_TEST_COND_TYPE:
  //   test_info.UL_RSRP = TRUE_TEST_COND_TYPE;
  //   break;
  
  // case CQI_TEST_COND_TYPE:
  //   test_info.CQI = TRUE_TEST_COND_TYPE;
  //   break;
  
  // case fiveQI_TEST_COND_TYPE:
  //   test_info.fiveQI = TRUE_TEST_COND_TYPE;
  //   break;
  
  // case QCI_TEST_COND_TYPE:
  //   test_info.QCI = TRUE_TEST_COND_TYPE;
  //   break;
  
  // case S_NSSAI_TEST_COND_TYPE:
  //   test_info.S_NSSAI = TRUE_TEST_COND_TYPE;
  //   break;
  
  default:
    assert(false && "Condition type out of the range");
    break;
  }

  test_info.test_cond = NULL;

  test_info.test_cond_value = NULL;



  return test_info;
}

kpm_act_def_format_3_t fill_kpm_action_def_frm_3(void)
{
  kpm_act_def_format_3_t action_def_frm_3 = {0};

  // Measurement Information
  // [1, 65535]
  action_def_frm_3.meas_info_lst_len = 10; //(rand() % 65535) + 1;
                                            
  action_def_frm_3.meas_info_lst = calloc(action_def_frm_3.meas_info_lst_len, sizeof(meas_info_format_3_lst_t));
  assert(action_def_frm_3.meas_info_lst != NULL && "Memory exhausted" );
  
  for (size_t i = 0; i < action_def_frm_3.meas_info_lst_len; i++)
  {
    meas_info_format_3_lst_t* meas_info = &action_def_frm_3.meas_info_lst[i];

    // Measurement Type
    meas_info->meas_type.type = rand()%END_MEAS_TYPE;

    switch (meas_info->meas_type.type)
    {
    case NAME_MEAS_TYPE:
      meas_info->meas_type.type = NAME_MEAS_TYPE;
      meas_info->meas_type.name.buf = calloc(strlen("test") + 1, sizeof(char));
      memcpy(meas_info->meas_type.name.buf, "test", strlen("test"));
      meas_info->meas_type.name.len = strlen("test");
      break;
    
    case ID_MEAS_TYPE:
      meas_info->meas_type.type = ID_MEAS_TYPE;
      meas_info->meas_type.id = (rand() % 65536) + 1;
      break;

    default:
      assert(false && "Unknown Measurement Type");
    }
      
    // Matching Condition Format 3
    // [1, 32768]
    meas_info->matching_cond_lst_len = 10;  // (rand() % 32768) + 1;

    meas_info->matching_cond_lst = calloc(meas_info->matching_cond_lst_len, sizeof(*meas_info->matching_cond_lst));
    assert(meas_info->matching_cond_lst != NULL && "Memory exhausted" );
      
    for (size_t j = 0; j < meas_info->matching_cond_lst_len; j++)
    {      
      // Matching Condition Type
      meas_info->matching_cond_lst[j].cond_type = TEST_INFO; // rand()&END_INFO;
      
      switch (meas_info->matching_cond_lst[j].cond_type)
      {
      case LABEL_INFO:
        meas_info->matching_cond_lst[j].label_info_lst.plmn_id = calloc(1, sizeof(plmn_t));
        assert(meas_info->matching_cond_lst[j].label_info_lst.plmn_id != NULL && "Memory exhausted");
        *meas_info->matching_cond_lst[j].label_info_lst.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
        break;
      
      case TEST_INFO:
        meas_info->matching_cond_lst[j].test_info_lst = fill_kpm_test_info();
        break;
      
      default:
        assert(false && "Unknown Matching Condition Type");
      }
      
      // Logical OR
      meas_info->matching_cond_lst[j].logical_OR = NULL;  // not implemented in ASN.1

      
    }

    // Bin Range Definition
    meas_info->bin_range_def = NULL;  // not implemented in ASN.1


  }

  // Granularity Period
  // [0, 4294967295]
  action_def_frm_3.gran_period_ms = (rand() % 4294967295) + 0;

  // Cell Global ID
  // Optional
  action_def_frm_3.cell_global_id = calloc(1, sizeof(*action_def_frm_3.cell_global_id));
  action_def_frm_3.cell_global_id->type = rand()%END_CGI_RAT_TYPE;
  
  switch (action_def_frm_3.cell_global_id->type)
  {
  case NR_CGI_RAT_TYPE:
    action_def_frm_3.cell_global_id->nr_cgi.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
    action_def_frm_3.cell_global_id->nr_cgi.nr_cell_id = (rand() % 2^36) + 1;
    break;

  case EUTRA_CGI_RAT_TYPE:
    action_def_frm_3.cell_global_id->eutra.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
    action_def_frm_3.cell_global_id->eutra.eutra_cell_id = (rand() % 2^28) + 0;
    break;
  
  default:
    assert(false && "Unknown Cell Global ID Type");
  }


  return action_def_frm_3;
}

kpm_act_def_t fill_kpm_action_def(void)
{
  kpm_act_def_t action_def = {0};

  action_def.type = FORMAT_3_ACTION_DEFINITION;  // rand()%END_ACTION_DEFINITION;

  switch (action_def.type)
  {
  case FORMAT_1_ACTION_DEFINITION:
    action_def.frm_1 = fill_kpm_action_def_frm_1();
    break;

  case FORMAT_2_ACTION_DEFINITION:
    action_def.frm_2 = fill_kpm_action_def_frm_2();
    break;

  case FORMAT_3_ACTION_DEFINITION:
    action_def.frm_3 = fill_kpm_action_def_frm_3();
    break;
  
  // to be filled with other formats

  default:
    assert(false && "Unknown KPM Action Definition Format Type");
  }

  return action_def;
}







static
int64_t time_now_us(void)
{
  struct timespec tms;

  /* The C11 way */
  /* if (! timespec_get(&tms, TIME_UTC))  */

  /* POSIX.1-2008 way */
  if (clock_gettime(CLOCK_REALTIME,&tms)) {
    return -1;
  }
  /* seconds, multiplied with 1 million */
  int64_t micros = tms.tv_sec * 1000000;
  /* Add full microseconds */
  micros += tms.tv_nsec/1000;
  /* round up if necessary */
  if (tms.tv_nsec % 1000 >= 500) {
    ++micros;
  }
  return micros;
}



kpm_ric_ind_hdr_format_1_t fill_kpm_ind_hdr_frm_1(void)
{
  kpm_ric_ind_hdr_format_1_t hdr_frm_1 = {0};

  int64_t t = time_now_us();
  hdr_frm_1.collectStartTime = t / 1000000; // needs to be truncated to 32 bits to arrive to a resolution of seconds
  
  hdr_frm_1.fileformat_version = NULL;
  
  hdr_frm_1.sender_name = calloc(1, sizeof(byte_array_t));
  hdr_frm_1.sender_name->buf = calloc(strlen("My OAI-CU") + 1, sizeof(char));
  memcpy(hdr_frm_1.sender_name->buf, "My OAI-CU", strlen("My OAI-CU"));
  hdr_frm_1.sender_name->len = strlen("My OAI-CU");
  
  hdr_frm_1.sender_type = calloc(1, sizeof(byte_array_t));
  hdr_frm_1.sender_type->buf = calloc(strlen("CU") + 1, sizeof(char));
  memcpy(hdr_frm_1.sender_type->buf, "CU", strlen("CU"));
  hdr_frm_1.sender_type->len = strlen("CU");
  
  hdr_frm_1.vendor_name = calloc(1, sizeof(byte_array_t));
  hdr_frm_1.vendor_name->buf = calloc(strlen("OAI") + 1, sizeof(char));
  memcpy(hdr_frm_1.vendor_name->buf, "OAI", strlen("OAI"));
  hdr_frm_1.vendor_name->len = strlen("OAI");

  return hdr_frm_1;
}

kpm_ind_hdr_t fill_kpm_ind_hdr(void)
{
  kpm_ind_hdr_t hdr = {0};

  hdr.type = rand()%END_INDICATION_HEADER;

  switch (hdr.type)
  {
  case FORMAT_1_INDICATION_HEADER:
    hdr.kpm_ric_ind_hdr_format_1 = fill_kpm_ind_hdr_frm_1();
    break;
  
  default:
    assert(false && "Unknown KPM Indication Header Type");
  }


  return hdr;
}

kpm_ind_msg_format_1_t fill_kpm_ind_msg_frm_1(void)
{
  kpm_ind_msg_format_1_t msg_frm_1 = {0};
  
  // Measurement Data
  msg_frm_1.meas_data_lst_len = 10;  // (rand() % 65535) + 1;
  msg_frm_1.meas_data_lst = calloc(msg_frm_1.meas_data_lst_len, sizeof(*msg_frm_1.meas_data_lst));
  assert(msg_frm_1.meas_data_lst != NULL && "Memory exhausted" );
  
  for (size_t i = 0; i < msg_frm_1.meas_data_lst_len; i++)
  {
      // Incomplete Flag
      msg_frm_1.meas_data_lst[i].incomplete_flag = calloc(1, sizeof(enum_value_e));
      assert(msg_frm_1.meas_data_lst[i].incomplete_flag != NULL && "Memory exhausted");
      *msg_frm_1.meas_data_lst[i].incomplete_flag = TRUE_ENUM_VALUE;
      
      // Measurement Record
      msg_frm_1.meas_data_lst[i].meas_record_len = 10;  // (rand() % 65535) + 1;
      msg_frm_1.meas_data_lst[i].meas_record_lst = calloc(msg_frm_1.meas_data_lst[i].meas_record_len, sizeof(meas_record_lst_t));
      assert(msg_frm_1.meas_data_lst[i].meas_record_lst != NULL && "Memory exhausted" );
      
      for (size_t j = 0; j < msg_frm_1.meas_data_lst[i].meas_record_len; j++)
      {
        msg_frm_1.meas_data_lst[i].meas_record_lst[j].value = rand()%END_MEAS_VALUE;

        switch (msg_frm_1.meas_data_lst[i].meas_record_lst[j].value)
        {
        case INTEGER_MEAS_VALUE:
          msg_frm_1.meas_data_lst[i].meas_record_lst[j].int_val = (rand() % 4294967295) + 0;
          break;

        case REAL_MEAS_VALUE:
          msg_frm_1.meas_data_lst[i].meas_record_lst[j].real_val = (rand() % 256) + 0;
          break;

        case NO_VALUE_MEAS_VALUE:
          msg_frm_1.meas_data_lst[i].meas_record_lst[j].no_value = NULL;
          break;
        
        default:
          assert(false && "Unknown Measurement Record Type");
        }
          
      }
  }
  
  // Granularity Period - OPTIONAL: (1..4294967295)
  msg_frm_1.gran_period_ms = calloc(1, sizeof(*msg_frm_1.gran_period_ms));
  assert(msg_frm_1.gran_period_ms != NULL && "Memory exhausted");
  *msg_frm_1.gran_period_ms = (rand() % 4294967295) + 1;
  
  // Measurement Information - OPTIONAL
  msg_frm_1.meas_info_lst_len = 3;
  msg_frm_1.meas_info_lst = calloc(msg_frm_1.meas_info_lst_len, sizeof(meas_info_format_1_lst_t));
  assert(msg_frm_1.meas_info_lst != NULL && "Memory exhausted" );
  
  for (size_t i = 0; i < msg_frm_1.meas_info_lst_len; i++)
  {
      // Measurement Type
      msg_frm_1.meas_info_lst[i].meas_type.type = rand()%END_MEAS_TYPE;

      switch (msg_frm_1.meas_info_lst[i].meas_type.type)
      {
      case NAME_MEAS_TYPE:
        msg_frm_1.meas_info_lst[i].meas_type.type = NAME_MEAS_TYPE;
        char s[100];
        snprintf(s, 100, "RNTI %04x PrbDlUsage", (unsigned) (1111*i + 1111));
        msg_frm_1.meas_info_lst[i].meas_type.name.buf = calloc(strlen(s) + 1, sizeof(char));
        memcpy(msg_frm_1.meas_info_lst[i].meas_type.name.buf, s, strlen(s));
        msg_frm_1.meas_info_lst[i].meas_type.name.len = strlen(s);
        break;
    
      case ID_MEAS_TYPE:
        msg_frm_1.meas_info_lst[i].meas_type.type = ID_MEAS_TYPE;
        msg_frm_1.meas_info_lst[i].meas_type.id = (rand() % 65536) + 1;
        break;

      default:
        assert(false && "Unknown Measurement Type");
      }

      
      
      // Label Information
      msg_frm_1.meas_info_lst[i].label_info_lst_len = 2;
      msg_frm_1.meas_info_lst[i].label_info_lst = calloc(msg_frm_1.meas_info_lst[i].label_info_lst_len, sizeof(label_info_lst_t));
      assert(msg_frm_1.meas_info_lst[i].label_info_lst != NULL && "Memory exhausted" );
      
      for (size_t j = 0; j < msg_frm_1.meas_info_lst[i].label_info_lst_len; j++)
      {
          // msg_frm_1.meas_info_lst[i].label_info_lst[j].plmn_id = malloc(sizeof(plmn_t));
          // *msg_frm_1.meas_info_lst[i].label_info_lst[j].plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
          msg_frm_1.meas_info_lst[i].label_info_lst[j].noLabel = malloc(sizeof(enum_value_e));
          *msg_frm_1.meas_info_lst[i].label_info_lst[j].noLabel = TRUE_ENUM_VALUE;
      }
  }


  return msg_frm_1;
}

kpm_ind_msg_format_2_t fill_kpm_ind_msg_frm_2(void)
{
  kpm_ind_msg_format_2_t msg_frm_2 = {0};

  // Measurement Data
  msg_frm_2.meas_data_lst_len = 2;  // (rand() % 65535) + 1;
  msg_frm_2.meas_data_lst = calloc(msg_frm_2.meas_data_lst_len, sizeof(*msg_frm_2.meas_data_lst));
  assert(msg_frm_2.meas_data_lst != NULL && "Memory exhausted" );
  
  for (size_t i = 0; i < msg_frm_2.meas_data_lst_len; i++)
  {
      // Incomplete Flag
      msg_frm_2.meas_data_lst[i].incomplete_flag = calloc(1, sizeof(enum_value_e));
      assert(msg_frm_2.meas_data_lst[i].incomplete_flag != NULL && "Memory exhausted");
      *msg_frm_2.meas_data_lst[i].incomplete_flag = TRUE_ENUM_VALUE;
      
      // Measurement Record
      msg_frm_2.meas_data_lst[i].meas_record_len = 1;  // (rand() % 65535) + 1;
      msg_frm_2.meas_data_lst[i].meas_record_lst = calloc(msg_frm_2.meas_data_lst[i].meas_record_len, sizeof(meas_record_lst_t));
      assert(msg_frm_2.meas_data_lst[i].meas_record_lst != NULL && "Memory exhausted" );
      
      for (size_t j = 0; j < msg_frm_2.meas_data_lst[i].meas_record_len; j++)
      {
        msg_frm_2.meas_data_lst[i].meas_record_lst[j].value = rand()%END_MEAS_VALUE;

        switch (msg_frm_2.meas_data_lst[i].meas_record_lst[j].value)
        {
        case INTEGER_MEAS_VALUE:
          msg_frm_2.meas_data_lst[i].meas_record_lst[j].int_val = (rand() % 4294967295) + 0;
          break;

        case REAL_MEAS_VALUE:
          msg_frm_2.meas_data_lst[i].meas_record_lst[j].real_val = (rand() % 256) + 0;
          break;

        case NO_VALUE_MEAS_VALUE:
          msg_frm_2.meas_data_lst[i].meas_record_lst[j].no_value = NULL;
          break;
        
        default:
          assert(false && "Unknown Measurement Record Type");
        }
      }
  }

  // Granularity Period - OPTIONAL
  msg_frm_2.gran_period_ms = calloc(1, sizeof(*msg_frm_2.gran_period_ms));
  assert(msg_frm_2.gran_period_ms != NULL && "Memory exhausted");
  *msg_frm_2.gran_period_ms = (rand() % 4294967295) + 1;

  // Measurement Information Condition UE
  // [1, 65535]
  msg_frm_2.meas_info_cond_ue_lst_len = 3;  // (rand() % 65535) + 1;
  msg_frm_2.meas_info_cond_ue_lst = calloc(msg_frm_2.meas_info_cond_ue_lst_len, sizeof(meas_info_cond_ue_lst_t));
  assert(msg_frm_2.meas_info_cond_ue_lst != NULL && "Memory exhausted");

  for (size_t i = 0; i<msg_frm_2.meas_info_cond_ue_lst_len; i++)
  {
    meas_info_cond_ue_lst_t * cond_ue = &msg_frm_2.meas_info_cond_ue_lst[i];

    // Measurement Type
    cond_ue->meas_type.type = rand()%END_MEAS_TYPE;

    switch (cond_ue->meas_type.type)
    {
    case NAME_MEAS_TYPE:
      cond_ue->meas_type.type = NAME_MEAS_TYPE;
      cond_ue->meas_type.name.buf = calloc(strlen("condition UE measurement") + 1, sizeof(char));
      memcpy(cond_ue->meas_type.name.buf, "condition UE measurement", strlen("condition UE measurement"));
      cond_ue->meas_type.name.len = strlen("condition UE measurement");
      break;
    
    case ID_MEAS_TYPE:
      cond_ue->meas_type.type = ID_MEAS_TYPE;
      cond_ue->meas_type.id = (rand() % 65536) + 1;
      break;

    default:
      assert(false && "Unknown Measurement Type");
    }

    
    // Matching Condition Format 3
    // [1, 32768]
    cond_ue->matching_cond_lst_len = 5; // (rand() % 32768) + 1;
    cond_ue->matching_cond_lst = calloc(cond_ue->matching_cond_lst_len, sizeof(*cond_ue->matching_cond_lst));
    assert(cond_ue->matching_cond_lst != NULL && "Memory exhausted" );
      
    for (size_t j = 0; j < cond_ue->matching_cond_lst_len; j++)
    {      
      // Matching Condition Type
      cond_ue->matching_cond_lst[j].cond_type = rand()%END_INFO;
      
      switch (cond_ue->matching_cond_lst[j].cond_type)
      {
      case LABEL_INFO:
        cond_ue->matching_cond_lst[j].label_info_lst.plmn_id = calloc(1, sizeof(plmn_t));
        assert(cond_ue->matching_cond_lst[j].label_info_lst.plmn_id != NULL && "Memory exhausted");
        *cond_ue->matching_cond_lst[j].label_info_lst.plmn_id = (plmn_t) {.mcc = 505, .mnc = 1, .mnc_digit_len = 2};
        break;
      
      case TEST_INFO:
        cond_ue->matching_cond_lst[j].test_info_lst = fill_kpm_test_info();
        break;
      
      default:
        assert(false && "Unknown Matching Condition Type");
      }
      
      // Logical OR
      cond_ue->matching_cond_lst[j].logical_OR = NULL;  // not implemented in ASN.1      
    }

    // List of matched UE IDs
    // Optional [0, 65535]
    cond_ue->ue_id_matched_lst_len = 3;  // (rand() % 65535) + 0;
    cond_ue->ue_id_matched_lst = calloc(cond_ue->ue_id_matched_lst_len, sizeof(ue_id_t));
    assert(cond_ue->ue_id_matched_lst != NULL && "Memory exhausted");

    for (size_t j = 0; j<cond_ue->ue_id_matched_lst_len; j++)
    {
      cond_ue->ue_id_matched_lst[j] = fill_ue_id_data();
    }

    // Sequence of Matched UE IDs for Granularity Periods
    cond_ue->ue_id_gran_period_lst = 0; 
    cond_ue->ue_id_gran_period_lst = NULL;  // not yet implemented in ASN.1
  }

  return msg_frm_2;
}

kpm_ind_msg_t fill_kpm_ind_msg(void)
{
  kpm_ind_msg_t msg = {0};

  msg.type = FORMAT_2_INDICATION_MESSAGE;  // rand()%END_INDICATION_MESSAGE;
  
  switch (msg.type)
  {
  case FORMAT_1_INDICATION_MESSAGE:
    msg.frm_1 = fill_kpm_ind_msg_frm_1();
    break;

  case FORMAT_2_INDICATION_MESSAGE:
    msg.frm_2 = fill_kpm_ind_msg_frm_2();
    break;

  // to be filled with other formats
  
  default:
    assert(false && "Unknown KPM Indication Message Format Type");
  }
  return msg;
}