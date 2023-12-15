/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_cedric/skeletons/ -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_RANParameter_Definition_Choice_STRUCTURE_H_
#define	_RANParameter_Definition_Choice_STRUCTURE_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANParameter_Definition_Choice_STRUCTURE_Item;

/* RANParameter-Definition-Choice-STRUCTURE */
typedef struct RANParameter_Definition_Choice_STRUCTURE {
	struct RANParameter_Definition_Choice_STRUCTURE__ranParameter_STRUCTURE {
		A_SEQUENCE_OF(struct RANParameter_Definition_Choice_STRUCTURE_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ranParameter_STRUCTURE;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANParameter_Definition_Choice_STRUCTURE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANParameter_Definition_Choice_STRUCTURE;
extern asn_SEQUENCE_specifics_t asn_SPC_RANParameter_Definition_Choice_STRUCTURE_specs_1;
extern asn_TYPE_member_t asn_MBR_RANParameter_Definition_Choice_STRUCTURE_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RANParameter_Definition_Choice_STRUCTURE_H_ */
#include <asn_internal.h>
