/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v02.03_standard.asn1"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -S /home/mir/workspace/asn1_nokia/skeletons/`
 */

#ifndef	_MeasurementCondUEidItem_H_
#define	_MeasurementCondUEidItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementType.h"
#include "MatchingCondList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MatchingUEidList;
struct MatchingUEidPerGP;

/* MeasurementCondUEidItem */
typedef struct MeasurementCondUEidItem {
	MeasurementType_t	 measType;
	MatchingCondList_t	 matchingCond;
	struct MatchingUEidList	*matchingUEidList;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MatchingUEidPerGP	*matchingUEidPerGP;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementCondUEidItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementCondUEidItem;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementCondUEidItem_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementCondUEidItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementCondUEidItem_H_ */
#include <asn_internal.h>
