/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v02.03.asn1"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_E2nodeComponentInterfaceNG_H_
#define	_E2nodeComponentInterfaceNG_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AMFName.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E2nodeComponentInterfaceNG */
typedef struct E2nodeComponentInterfaceNG {
	AMFName_t	 amf_name;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2nodeComponentInterfaceNG_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2nodeComponentInterfaceNG;
extern asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentInterfaceNG_specs_1;
extern asn_TYPE_member_t asn_MBR_E2nodeComponentInterfaceNG_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _E2nodeComponentInterfaceNG_H_ */
#include <asn_internal.h>
