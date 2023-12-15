/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_cedric/skeletons/ -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2SM-RC-ActionDefinition-Format2-Item.h"

#include "RANParameter-Testing.h"
asn_TYPE_member_t asn_MBR_E2SM_RC_ActionDefinition_Format2_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_ActionDefinition_Format2_Item, ric_PolicyAction),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_PolicyAction,
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
		"ric-PolicyAction"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_RC_ActionDefinition_Format2_Item, ric_PolicyConditionDefinition),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANParameter_Testing,
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
		"ric-PolicyConditionDefinition"
		},
};
static const int asn_MAP_E2SM_RC_ActionDefinition_Format2_Item_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_E2SM_RC_ActionDefinition_Format2_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_ActionDefinition_Format2_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ric-PolicyAction */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ric-PolicyConditionDefinition */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_ActionDefinition_Format2_Item_specs_1 = {
	sizeof(struct E2SM_RC_ActionDefinition_Format2_Item),
	offsetof(struct E2SM_RC_ActionDefinition_Format2_Item, _asn_ctx),
	asn_MAP_E2SM_RC_ActionDefinition_Format2_Item_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_E2SM_RC_ActionDefinition_Format2_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_ActionDefinition_Format2_Item = {
	"E2SM-RC-ActionDefinition-Format2-Item",
	"E2SM-RC-ActionDefinition-Format2-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_ActionDefinition_Format2_Item_tags_1,
	sizeof(asn_DEF_E2SM_RC_ActionDefinition_Format2_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_ActionDefinition_Format2_Item_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_ActionDefinition_Format2_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_ActionDefinition_Format2_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_ActionDefinition_Format2_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2SM_RC_ActionDefinition_Format2_Item_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_RC_ActionDefinition_Format2_Item_specs_1	/* Additional specs */
};

