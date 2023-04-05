#ifndef O_GNB_DU_FUNCTION_NODE_H
#define O_GNB_DU_FUNCTION_NODE_H

#include <stdint.h>

typedef enum {
    GNB_DU_ID_ATTRIBUTE_O_GNB_DU_FUNCTION_NODE,
    GNB_DU_NAME_ATTRIBUTE_O_GNB_DU_FUNCTION_NODE,
    GNB_ID_ATTRIBUTE_O_GNB_DU_FUNCTION_NODE,
    GNB_ID_LENGTH_ATTRIBUTE_O_GNB_DU_FUNCTION_NODE,

    END_ATTRIBUTE_O_GNB_DU_FUNCTION_NODE

} o_gnb_du_attributes_e;  // for event trigger and action definition


// 8.8.1.1  O-GNBDUFunction - REPORT service

typedef union {

    const uint64_t gnb_du_id:36;  // It uniquely identifies the DU at least within a gNB-CU. See 'gNB-DU ID' in subclause 9.3.1.9 of 3GPP TS 38.473 [8].
    const byte_array_t gnb_du_name;  // It identifies the Distributed Entity of a NR node, see subclause 9.2.1.5 of 3GPP TS 38.473 [8].
    const uint32_t gnb_id;  // It identifies a gNB within a PLMN. The gNB ID is part of the NR Cell Identifier (NCI) of the gNB cells. See "gNB Identifier (gNB ID)" of subclause 8.2 of TS 38.300 [3]. 
    const uint8_t gnb_id_length:5;  // This indicates the number of bits for encoding the gNB ID. See "Global gNB ID" in subclause 9.3.1.6 of TS 38.413 [5].

} o_gnb_du_function_node_u;  //  for indication message



#endif
