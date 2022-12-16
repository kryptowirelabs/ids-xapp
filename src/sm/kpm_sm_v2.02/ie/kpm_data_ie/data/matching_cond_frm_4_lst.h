#ifndef MATCHING_CONDITION_FORMAT_4_LIST_KPM_V2_H
#define MATCHING_CONDITION_FORMAT_4_LIST_KPM_V2_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdlib.h>

#include "test_info_lst.h"
#include "enum_value.h"

/* Intermediate structure for  8.2.1.2.4  E2SM-KPM Action Definition Format 4 */

typedef struct {
    test_info_lst_t test_info_lst;  // 8.3.22

    enum_value_e *logical_OR;  // 8.3.25  -  OPTIONAL 

} matching_condition_format_4_lst_t;


#ifdef __cplusplus
}
#endif

#endif

// done