/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef XAPP_RIC_ID_H
#define XAPP_RIC_ID_H 

#include "../../lib/e2ap/ric_gen_id_wrapper.h"
#include <stdbool.h>
#include <stdint.h>


typedef struct{
  ric_gen_id_t ric_id;
  uint16_t xapp_id;
} xapp_ric_id_t;

int cmp_xapp_ric_gen_id(xapp_ric_id_t const* m0,  xapp_ric_id_t const* m1);
int cmp_xapp_ric_gen_id_wrapper(void const* m0, void const* m1);

bool eq_xapp_ric_gen_id(xapp_ric_id_t const* m0, xapp_ric_id_t const* m1);
bool eq_xapp_ric_gen_id_wrapper(void const* m0, void const* m1);
bool eq_xapp_id(uint16_t m0, uint16_t m1);

bool eq_xapp_id_gen_wrapper(void const* m0, void const* m1);
bool eq_xapp_ric_gen_id_wrapper(void const* m0, void const* m1);

typedef struct{
  bool has_value;
  union{
    char* error;
    xapp_ric_id_t xapp_ric_id;
  };
} xapp_ric_id_xpct_t;

#endif

