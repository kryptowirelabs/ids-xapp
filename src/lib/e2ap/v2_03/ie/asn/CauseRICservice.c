/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e42ap_v2_03.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "CauseRICservice.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_CauseRICservice_constr_1_e2ap_v2_03 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_CauseRICservice_value2enum_1_e2ap_v2_03[] = {
	{ 0,	26,	"ran-function-not-supported" },
	{ 1,	19,	"excessive-functions" },
	{ 2,	18,	"ric-resource-limit" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_CauseRICservice_enum2value_1_e2ap_v2_03[] = {
	1,	/* excessive-functions(1) */
	0,	/* ran-function-not-supported(0) */
	2	/* ric-resource-limit(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_CauseRICservice_specs_1_e2ap_v2_03 = {
	asn_MAP_CauseRICservice_value2enum_1_e2ap_v2_03,	/* "tag" => N; sorted by tag */
	asn_MAP_CauseRICservice_enum2value_1_e2ap_v2_03,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Cause_e2ap_v2_03RICservice_tags_1_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Cause_e2ap_v2_03RICservice = {
	"CauseRICservice",
	"CauseRICservice",
	&asn_OP_NativeEnumerated_e2ap_v2_03,
	asn_DEF_Cause_e2ap_v2_03RICservice_tags_1_e2ap_v2_03,
	sizeof(asn_DEF_Cause_e2ap_v2_03RICservice_tags_1_e2ap_v2_03)
		/sizeof(asn_DEF_Cause_e2ap_v2_03RICservice_tags_1_e2ap_v2_03[0]), /* 1 */
	asn_DEF_Cause_e2ap_v2_03RICservice_tags_1_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_Cause_e2ap_v2_03RICservice_tags_1_e2ap_v2_03)
		/sizeof(asn_DEF_Cause_e2ap_v2_03RICservice_tags_1_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_CauseRICservice_constr_1_e2ap_v2_03,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CauseRICservice_specs_1_e2ap_v2_03	/* Additional specs */
};

