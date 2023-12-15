/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v02.03_standard.asn1"
 * 	`asn1c -S /home/mir/workspace/asn1c_cedric/skeletons/ -no-gen-OER -no-gen-JER -no-gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2SM-KPM-ActionDefinition-Format5.h"

asn_TYPE_member_t asn_MBR_E2SM_KPM_ActionDefinition_Format5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_ActionDefinition_Format5, matchingUEidList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MatchingUEidPerSubList,
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
		"matchingUEidList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_ActionDefinition_Format5, subscriptionInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_KPM_ActionDefinition_Format1,
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
		"subscriptionInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_ActionDefinition_Format5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_ActionDefinition_Format5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* matchingUEidList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subscriptionInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_ActionDefinition_Format5_specs_1 = {
	sizeof(struct E2SM_KPM_ActionDefinition_Format5),
	offsetof(struct E2SM_KPM_ActionDefinition_Format5, _asn_ctx),
	asn_MAP_E2SM_KPM_ActionDefinition_Format5_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_ActionDefinition_Format5 = {
	"E2SM-KPM-ActionDefinition-Format5",
	"E2SM-KPM-ActionDefinition-Format5",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_ActionDefinition_Format5_tags_1,
	sizeof(asn_DEF_E2SM_KPM_ActionDefinition_Format5_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_ActionDefinition_Format5_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_ActionDefinition_Format5_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_ActionDefinition_Format5_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_ActionDefinition_Format5_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2SM_KPM_ActionDefinition_Format5_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_KPM_ActionDefinition_Format5_specs_1	/* Additional specs */
};

