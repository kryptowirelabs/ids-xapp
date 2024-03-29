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


#ifndef ASYNC_INPUT_OUTPUT_RIC_H
#define ASYNC_INPUT_OUTPUT_RIC_H

#include <stddef.h>

typedef struct{
  // epoll based fd
  int efd; 

} asio_ric_t;


void init_asio_ric(asio_ric_t* io);

void add_fd_asio_ric(asio_ric_t* io, int fd);

int create_timer_ms_asio_ric(asio_ric_t* io, long initial_ms, long interval_ms);

void rm_fd_asio_ric(asio_ric_t* io, int fd);

typedef struct{
  int fd[64];
  int len;
} fd_read_t;

fd_read_t event_asio_ric(asio_ric_t const* io);

#endif

