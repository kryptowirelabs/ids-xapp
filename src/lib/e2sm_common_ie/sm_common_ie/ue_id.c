#include <assert.h>
#include <stdlib.h>

#include "ue_id.h"

void free_ue_id(ue_id_t * src)
{
    assert(src != NULL);

    switch (src->type)
    {
    case GNB_UE_ID:
    {
        free(src->gnb.gnb_cu_ue_f1ap_lst);

        free(src->gnb.gnb_cu_cp_ue_e1ap_lst);

        if (src->gnb.ran_ue_id != NULL)
            free(src->gnb.ran_ue_id);

        if (src->gnb.ng_ran_node_ue_xnap_id != NULL)
            free(src->gnb.ng_ran_node_ue_xnap_id);

        if (src->gnb.global_gnb_id != NULL)
            free(src->gnb.global_gnb_id);

        if (src->gnb.global_ng_ran_node_id != NULL)
            free(src->gnb.global_ng_ran_node_id);

        break;
    }

    // to add other UE ID Types

    default:
        break;
    }



}

bool eq_ue_id(ue_id_t const * m0, ue_id_t const * m1)
{
    assert(m0 != NULL);
    assert(m1 != NULL);

    if (m0->type != m1->type)
      return false;

    switch (m0->type)
    {
    case GNB_UE_ID:
    {
        // AMF UE NGAP ID
        if (m0->gnb.amf_ue_ngap_id != m1->gnb.amf_ue_ngap_id)
          return false;

        // GUAMI => to add in guami.h
        if (eq_plmn(&m0->gnb.guami.plmn_id, &m1->gnb.guami.plmn_id) != true)
          return false;

        if (m0->gnb.guami.amf_region_id != m1->gnb.guami.amf_region_id)
          return false;

        if (m0->gnb.guami.amf_region_id != m1->gnb.guami.amf_region_id)
          return false;

        if (m0->gnb.guami.amf_set_id != m1->gnb.guami.amf_set_id)
          return false;

        if (m0->gnb.guami.amf_ptr != m1->gnb.guami.amf_ptr)
          return false;

        // gNB-CU UE F1AP ID List
        if (m0->gnb.gnb_cu_ue_f1ap_lst_len != m1->gnb.gnb_cu_ue_f1ap_lst_len)
          return false;

        for (size_t i = 0; i < m0->gnb.gnb_cu_ue_f1ap_lst_len; i++)
        {
            if (m0->gnb.gnb_cu_ue_f1ap_lst[i] != m1->gnb.gnb_cu_ue_f1ap_lst[i])
              return false;
        }


        // gNB-CU-CP UE E1AP
        if (m0->gnb.gnb_cu_cp_ue_e1ap_lst_len != m1->gnb.gnb_cu_cp_ue_e1ap_lst_len)
          return false;

        for (size_t i = 0; i < m0->gnb.gnb_cu_cp_ue_e1ap_lst_len; i++)
        {
            if (m0->gnb.gnb_cu_cp_ue_e1ap_lst[i] != m1->gnb.gnb_cu_cp_ue_e1ap_lst[i])
              return false;
        }

        // RAN UE ID
        if (m0->gnb.ran_ue_id != m1->gnb.ran_ue_id)
          return false;

        // M-NG-RAN node UE XnAP ID
        if (m0->gnb.ng_ran_node_ue_xnap_id != m1->gnb.ng_ran_node_ue_xnap_id)
          return false;

        // Global gNB ID
        if (m0->gnb.global_gnb_id != NULL && m1->gnb.global_gnb_id)
          assert(false && "Equivalency of Global gNB ID not yet implemented");
    
        // Global NG-RAN Node ID
        if (m0->gnb.global_ng_ran_node_id != NULL && m1->gnb.global_ng_ran_node_id)
          assert(false && "Equivalency of Global NG RAN Node ID not yet implemented");
    

        break;
    }

    // to add other UE ID Types

    default:
        break;
    }

    return true;
}
