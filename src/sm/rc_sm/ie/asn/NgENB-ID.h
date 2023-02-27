/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_rc_v1_03.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_NgENB_ID_H_
#define	_NgENB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NgENB_ID_PR {
	NgENB_ID_PR_NOTHING,	/* No components present */
	NgENB_ID_PR_macroNgENB_ID,
	NgENB_ID_PR_shortMacroNgENB_ID,
	NgENB_ID_PR_longMacroNgENB_ID
	/* Extensions may appear below */
	
} NgENB_ID_PR;

/* NgENB-ID */
typedef struct NgENB_ID {
	NgENB_ID_PR present;
	union NgENB_ID_u {
		BIT_STRING_t	 macroNgENB_ID;
		BIT_STRING_t	 shortMacroNgENB_ID;
		BIT_STRING_t	 longMacroNgENB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NgENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NgENB_ID;
extern asn_CHOICE_specifics_t asn_SPC_NgENB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_NgENB_ID_1[3];
extern asn_per_constraints_t asn_PER_type_NgENB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NgENB_ID_H_ */
#include <asn_internal.h>
