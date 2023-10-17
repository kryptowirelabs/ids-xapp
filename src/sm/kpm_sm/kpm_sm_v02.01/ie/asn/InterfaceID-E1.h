/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v02.01_standard.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_InterfaceID_E1_H_
#define	_InterfaceID_E1_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GlobalGNB-ID.h"
#include "GNB-CU-UP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterfaceID-E1 */
typedef struct InterfaceID_E1 {
	GlobalGNB_ID_t	 globalGNB_ID;
	GNB_CU_UP_ID_t	 gNB_CU_UP_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterfaceID_E1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterfaceID_E1;
extern asn_SEQUENCE_specifics_t asn_SPC_InterfaceID_E1_specs_1;
extern asn_TYPE_member_t asn_MBR_InterfaceID_E1_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InterfaceID_E1_H_ */
#include <asn_internal.h>
