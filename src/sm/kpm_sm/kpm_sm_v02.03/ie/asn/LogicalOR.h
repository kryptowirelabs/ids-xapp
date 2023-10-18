/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v02.03_modified.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_LogicalOR_H_
#define	_LogicalOR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LogicalOR {
	LogicalOR_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_LogicalOR;

/* LogicalOR */
typedef long	 LogicalOR_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LogicalOR_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LogicalOR;
extern const asn_INTEGER_specifics_t asn_SPC_LogicalOR_specs_1;
asn_struct_free_f LogicalOR_free;
asn_struct_print_f LogicalOR_print;
asn_constr_check_f LogicalOR_constraint;
xer_type_decoder_f LogicalOR_decode_xer;
xer_type_encoder_f LogicalOR_encode_xer;
per_type_decoder_f LogicalOR_decode_aper;
per_type_encoder_f LogicalOR_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LogicalOR_H_ */
#include <asn_internal.h>
