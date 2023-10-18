/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v02.03_modified.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_MeasurementCondList_H_
#define	_MeasurementCondList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasurementCondItem;

/* MeasurementCondList */
typedef struct MeasurementCondList {
	A_SEQUENCE_OF(struct MeasurementCondItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementCondList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementCondList;
extern asn_SET_OF_specifics_t asn_SPC_MeasurementCondList_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementCondList_1[1];
extern asn_per_constraints_t asn_PER_type_MeasurementCondList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementCondList_H_ */
#include <asn_internal.h>
