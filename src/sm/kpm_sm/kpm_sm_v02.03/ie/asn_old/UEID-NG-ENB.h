/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v02.03_modified.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_UEID_NG_ENB_H_
#define	_UEID_NG_ENB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AMF-UE-NGAP-ID.h"
#include "GUAMI.h"
#include "NGENB-CU-UE-W1AP-ID.h"
#include "NG-RANnodeUEXnAPID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GlobalNgENB_ID;
struct GlobalNGRANNodeID;

/* UEID-NG-ENB */
typedef struct UEID_NG_ENB {
	AMF_UE_NGAP_ID_t	 amf_UE_NGAP_ID;
	GUAMI_t	 guami;
	NGENB_CU_UE_W1AP_ID_t	*ng_eNB_CU_UE_W1AP_ID;	/* OPTIONAL */
	NG_RANnodeUEXnAPID_t	*m_NG_RAN_UE_XnAP_ID;	/* OPTIONAL */
	struct GlobalNgENB_ID	*globalNgENB_ID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct GlobalNGRANNodeID	*globalNG_RANNode_ID;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEID_NG_ENB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEID_NG_ENB;
extern asn_SEQUENCE_specifics_t asn_SPC_UEID_NG_ENB_specs_1;
extern asn_TYPE_member_t asn_MBR_UEID_NG_ENB_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _UEID_NG_ENB_H_ */
#include <asn_internal.h>
