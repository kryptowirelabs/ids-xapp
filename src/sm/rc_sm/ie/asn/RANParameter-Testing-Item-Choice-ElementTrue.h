/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_cedric/skeletons/ -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_RANParameter_Testing_Item_Choice_ElementTrue_H_
#define	_RANParameter_Testing_Item_Choice_ElementTrue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANParameter-Value.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANParameter-Testing-Item-Choice-ElementTrue */
typedef struct RANParameter_Testing_Item_Choice_ElementTrue {
	RANParameter_Value_t	 ranParameter_value;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANParameter_Testing_Item_Choice_ElementTrue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANParameter_Testing_Item_Choice_ElementTrue;
extern asn_SEQUENCE_specifics_t asn_SPC_RANParameter_Testing_Item_Choice_ElementTrue_specs_1;
extern asn_TYPE_member_t asn_MBR_RANParameter_Testing_Item_Choice_ElementTrue_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RANParameter_Testing_Item_Choice_ElementTrue_H_ */
#include <asn_internal.h>
