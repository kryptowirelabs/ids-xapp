/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v03.00_standard.asn1"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_UEID_GNB_CU_CP_F1AP_ID_Item_H_
#define	_UEID_GNB_CU_CP_F1AP_ID_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNB-CU-UE-F1AP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UEID-GNB-CU-CP-F1AP-ID-Item */
typedef struct UEID_GNB_CU_CP_F1AP_ID_Item {
	GNB_CU_UE_F1AP_ID_t	 gNB_CU_UE_F1AP_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEID_GNB_CU_CP_F1AP_ID_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEID_GNB_CU_CP_F1AP_ID_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_UEID_GNB_CU_CP_F1AP_ID_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_UEID_GNB_CU_CP_F1AP_ID_Item_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UEID_GNB_CU_CP_F1AP_ID_Item_H_ */
#include <asn_internal.h>
