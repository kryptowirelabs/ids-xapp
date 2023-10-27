/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v02.03_standard2.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_BinRangeList_H_
#define	_BinRangeList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BinRangeItem;

/* BinRangeList */
typedef struct BinRangeList {
	A_SEQUENCE_OF(struct BinRangeItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BinRangeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BinRangeList;
extern asn_SET_OF_specifics_t asn_SPC_BinRangeList_specs_1;
extern asn_TYPE_member_t asn_MBR_BinRangeList_1[1];
extern asn_per_constraints_t asn_PER_type_BinRangeList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BinRangeList_H_ */
#include <asn_internal.h>
