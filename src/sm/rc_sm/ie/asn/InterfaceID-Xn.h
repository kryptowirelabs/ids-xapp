/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_InterfaceID_Xn_H_
#define	_InterfaceID_Xn_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GlobalNGRANNodeID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterfaceID-Xn */
typedef struct InterfaceID_Xn {
	GlobalNGRANNodeID_t	 global_NG_RAN_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterfaceID_Xn_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterfaceID_Xn;
extern asn_SEQUENCE_specifics_t asn_SPC_InterfaceID_Xn_specs_1;
extern asn_TYPE_member_t asn_MBR_InterfaceID_Xn_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _InterfaceID_Xn_H_ */
#include <asn_internal.h>
