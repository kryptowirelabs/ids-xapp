/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v02.03_standard.asn1"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -S /home/mir/workspace/asn1_nokia/skeletons/`
 */

#ifndef	_GlobalenGNB_ID_H_
#define	_GlobalenGNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNIdentity.h"
#include "EN-GNB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GlobalenGNB-ID */
typedef struct GlobalenGNB_ID {
	PLMNIdentity_t	 pLMN_Identity;
	EN_GNB_ID_t	 en_gNB_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalenGNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalenGNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_GlobalenGNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalenGNB_ID_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalenGNB_ID_H_ */
#include <asn_internal.h>
