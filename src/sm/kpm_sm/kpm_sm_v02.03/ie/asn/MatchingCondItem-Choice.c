/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v02.03_standard.asn1"
 * 	`asn1c -S /home/mir/workspace/asn1c_cedric/skeletons/ -no-gen-OER -no-gen-JER -no-gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "MatchingCondItem-Choice.h"

#include "MeasurementLabel.h"
#include "TestCondInfo.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_MatchingCondItem_Choice_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_MatchingCondItem_Choice_1[] = {
	{ ATF_POINTER, 0, offsetof(struct MatchingCondItem_Choice, choice.measLabel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementLabel,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"measLabel"
		},
	{ ATF_POINTER, 0, offsetof(struct MatchingCondItem_Choice, choice.testCondInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TestCondInfo,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"testCondInfo"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MatchingCondItem_Choice_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measLabel */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* testCondInfo */
};
asn_CHOICE_specifics_t asn_SPC_MatchingCondItem_Choice_specs_1 = {
	sizeof(struct MatchingCondItem_Choice),
	offsetof(struct MatchingCondItem_Choice, _asn_ctx),
	offsetof(struct MatchingCondItem_Choice, present),
	sizeof(((struct MatchingCondItem_Choice *)0)->present),
	asn_MAP_MatchingCondItem_Choice_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MatchingCondItem_Choice = {
	"MatchingCondItem-Choice",
	"MatchingCondItem-Choice",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_MatchingCondItem_Choice_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_MatchingCondItem_Choice_1,
	2,	/* Elements count */
	&asn_SPC_MatchingCondItem_Choice_specs_1	/* Additional specs */
};

