/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_E2SM_RC_ActionDefinition_Format3_Item_H_
#define	_E2SM_RC_ActionDefinition_Format3_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANParameter-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANParameter_Definition;

/* E2SM-RC-ActionDefinition-Format3-Item */
typedef struct E2SM_RC_ActionDefinition_Format3_Item {
	RANParameter_ID_t	 ranParameter_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RANParameter_Definition	*ranParameter_Definition;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_ActionDefinition_Format3_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_ActionDefinition_Format3_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_ActionDefinition_Format3_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_RC_ActionDefinition_Format3_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_ActionDefinition_Format3_Item_H_ */
#include <asn_internal.h>
