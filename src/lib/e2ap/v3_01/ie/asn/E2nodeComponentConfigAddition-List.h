/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "../e42ap_v3_01.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_E2nodeComponentConfigAddition_List_H_
#define	_E2nodeComponentConfigAddition_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* E2nodeComponentConfigAddition-List */
typedef struct E2nodeComponentConfigAddition_List {
	A_SEQUENCE_OF(struct ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2nodeComponentConfigAddition_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2nodeComponentConfigAddition_List;
extern asn_SET_OF_specifics_t asn_SPC_E2nodeComponentConfigAddition_List_specs_1;
extern asn_TYPE_member_t asn_MBR_E2nodeComponentConfigAddition_List_1[1];
extern asn_per_constraints_t asn_PER_type_E2nodeComponentConfigAddition_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _E2nodeComponentConfigAddition_List_H_ */
#include <asn_internal.h>
