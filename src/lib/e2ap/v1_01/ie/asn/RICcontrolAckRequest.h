/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_RICcontrolAckRequest_H_
#define	_RICcontrolAckRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RICcontrolAckRequest {
	RICcontrolAckRequest_noAck	= 0,
	RICcontrolAckRequest_ack	= 1,
	RICcontrolAckRequest_nAck	= 2
	/*
	 * Enumeration is extensible
	 */
} e_RICcontrolAckRequest;

/* RICcontrolAckRequest */
typedef long	 RICcontrolAckRequest_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RICcontrolAckRequest_constr_1_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_RICcontrolAckRequest_e2ap_v1_01;
extern const asn_INTEGER_specifics_t asn_SPC_RICcontrolAckRequest_specs_1_e2ap_v1_01;
asn_struct_free_f RICcontrolAckRequest_free;
asn_struct_print_f RICcontrolAckRequest_print;
asn_constr_check_f RICcontrolAckRequest_constraint;
ber_type_decoder_f RICcontrolAckRequest_decode_ber;
der_type_encoder_f RICcontrolAckRequest_encode_der;
xer_type_decoder_f RICcontrolAckRequest_decode_xer;
xer_type_encoder_f RICcontrolAckRequest_encode_xer;
per_type_decoder_f RICcontrolAckRequest_decode_uper;
per_type_encoder_f RICcontrolAckRequest_encode_uper;
per_type_decoder_f RICcontrolAckRequest_decode_aper;
per_type_encoder_f RICcontrolAckRequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RICcontrolAckRequest_H_ */
#include <asn_internal.h>
