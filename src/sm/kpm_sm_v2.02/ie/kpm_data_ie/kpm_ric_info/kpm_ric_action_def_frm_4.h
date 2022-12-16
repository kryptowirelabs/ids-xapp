#ifndef ACTION_DEFINITION_FORMAT_4_KPM_V2_H
#define ACTION_DEFINITION_FORMAT_4_KPM_V2_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stdint.h>

#include "kpm_ric_action_def_frm_1.h"
#include "../data/matching_cond_frm_4_lst.h"

//  8.2.1.2.4  E2SM-KPM Action Definition Format 4

typedef struct {
    size_t matching_cond_lst_len;  // [1, 32768]
    matching_condition_format_4_lst_t *matching_cond_lst;

    kpm_act_def_format_1_t action_def_format_1;  // 8.2.1.2.1

} kpm_act_def_format_4_t;

#ifdef __cplusplus
}
#endif

#endif

// done