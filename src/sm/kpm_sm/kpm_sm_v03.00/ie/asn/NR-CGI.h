/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v03.00_standard.asn1"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_NR_CGI_H_
#define	_NR_CGI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNIdentity.h"
#include "NRCellIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR-CGI */
typedef struct NR_CGI {
	PLMNIdentity_t	 pLMNIdentity;
	NRCellIdentity_t	 nRCellIdentity;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CGI;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CGI_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CGI_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CGI_H_ */
#include <asn_internal.h>
