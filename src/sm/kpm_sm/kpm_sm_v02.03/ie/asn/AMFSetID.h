/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v02.03_standard.asn1"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_AMFSetID_H_
#define	_AMFSetID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AMFSetID */
typedef BIT_STRING_t	 AMFSetID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AMFSetID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AMFSetID;
asn_struct_free_f AMFSetID_free;
asn_struct_print_f AMFSetID_print;
asn_constr_check_f AMFSetID_constraint;
xer_type_decoder_f AMFSetID_decode_xer;
xer_type_encoder_f AMFSetID_encode_xer;
per_type_decoder_f AMFSetID_decode_aper;
per_type_encoder_f AMFSetID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AMFSetID_H_ */
#include <asn_internal.h>
