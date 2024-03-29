#ifndef SM_RLC_READ_WRITE_AGENT_H
#define SM_RLC_READ_WRITE_AGENT_H

#include "../../../src/agent/e2_agent_api.h"

void init_rlc_sm(void);

void free_rlc_sm(void);

bool read_rlc_sm(void*);

void read_rlc_setup_sm(void* data);

sm_ag_if_ans_t write_ctrl_rlc_sm(void const* data);

#endif

