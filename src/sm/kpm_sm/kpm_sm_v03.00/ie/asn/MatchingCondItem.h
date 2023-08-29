/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v03.00_modified.asn1"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_MatchingCondItem_H_
#define	_MatchingCondItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MatchingCondItem-Choice.h"
#include "LogicalOR.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MatchingCondItem */
typedef struct MatchingCondItem {
	MatchingCondItem_Choice_t	 matchingCondChoice;
	LogicalOR_t	*logicalOR;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MatchingCondItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MatchingCondItem;
extern asn_SEQUENCE_specifics_t asn_SPC_MatchingCondItem_specs_1;
extern asn_TYPE_member_t asn_MBR_MatchingCondItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MatchingCondItem_H_ */
#include <asn_internal.h>