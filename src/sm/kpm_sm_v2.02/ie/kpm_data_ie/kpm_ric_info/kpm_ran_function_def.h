#ifndef KPM_V2_RAN_FUNCTION_DEFINITION_H
#define KPM_V2_RAN_FUNCTION_DEFINITION_H

#ifdef __cplusplus
extern "C" {
#endif

#include "kpm_ric_event_trigger_def.h"
#include "kpm_ric_action_def.h"
#include "kpm_ric_ind_hdr.h"
#include "kpm_ric_ind_msg.h"


typedef struct {
    byte_array_t	 short_name;
	byte_array_t	 E2SM_OID;
	byte_array_t	 description;
	long	        *instance;	/* OPTIONAL: it is suggested to be used when E2 Node declares
                                   multiple RAN Function ID supporting the same  E2SM specification */
} ran_function_name_t;


typedef struct {
    style_ric_event_trigger_e style_type; // 8.3.3
    byte_array_t style_name;  // 8.3.4
    format_ric_event_trigger_e format_type;  // 8.3.5

} ric_event_trigger_style_item_t;



typedef struct {
    byte_array_t name; // 8.3.9
    uint16_t *id; // 8.3.10  -  OPTIONAL

    bin_range_def_t *bin_range_def;  // 8.3.26  -  OPTIONAL

} meas_info_for_action_lst_t;

typedef struct {
    ric_service_report_e report_style_type;  // 8.3.3
    byte_array_t report_style_name;  // 8.3.4
    format_action_def_e act_def_format_type;  // 8.3.5

    size_t meas_info_for_action_lst_len;  // [1, 65535]
    meas_info_for_action_lst_t *meas_info_for_action_lst;

    format_ind_hdr_e ind_hdr_format_type;  // 8.3.5
    format_ind_msg_e ind_msg_format_type;  // 8.3.5


} ric_report_style_item_t;

// Table 7.8-1: for more information about style-format mapping




/* 8.2.2.1  RAN Function Definition IE */

typedef struct {
    ran_function_name_t ran_function_Name;  // 8.3.2

    size_t ric_event_trigger_style_list_len;  // [0, 63]
    ric_event_trigger_style_item_t *ric_event_trigger_style_list;

    size_t ric_report_style_list_len;  // [0, 63]
    ric_report_style_item_t *ric_report_style_list;

} kpm_ran_function_def_t;



// add in c file ric_event_trigger_style_item default values, see 7.3.1

// do I need separate messages for RIC Subscription and RIC Indication as defined in kpm_data_ie.h
// and kpm_setup_data_t ???

#ifdef __cplusplus
}
#endif

#endif