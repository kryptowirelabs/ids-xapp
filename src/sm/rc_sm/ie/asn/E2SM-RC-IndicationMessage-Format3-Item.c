/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2SM-RC-IndicationMessage-Format3-Item.h"

#include "NeighborRelation-Info.h"
asn_TYPE_member_t asn_MBR_E2SM_RC_IndicationMessage_Format3_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_IndicationMessage_Format3_Item, cellGlobal_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CGI,
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
		"cellGlobal-ID"
		},
	{ ATF_POINTER, 3, offsetof(struct E2SM_RC_IndicationMessage_Format3_Item, cellContextInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"cellContextInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct E2SM_RC_IndicationMessage_Format3_Item, cellDeleted),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"cellDeleted"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_RC_IndicationMessage_Format3_Item, neighborRelation_Table),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighborRelation_Info,
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
		"neighborRelation-Table"
		},
};
static const int asn_MAP_E2SM_RC_IndicationMessage_Format3_Item_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_E2SM_RC_IndicationMessage_Format3_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_IndicationMessage_Format3_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobal-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellContextInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellDeleted */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* neighborRelation-Table */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_IndicationMessage_Format3_Item_specs_1 = {
	sizeof(struct E2SM_RC_IndicationMessage_Format3_Item),
	offsetof(struct E2SM_RC_IndicationMessage_Format3_Item, _asn_ctx),
	asn_MAP_E2SM_RC_IndicationMessage_Format3_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_E2SM_RC_IndicationMessage_Format3_Item_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_IndicationMessage_Format3_Item = {
	"E2SM-RC-IndicationMessage-Format3-Item",
	"E2SM-RC-IndicationMessage-Format3-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_IndicationMessage_Format3_Item_tags_1,
	sizeof(asn_DEF_E2SM_RC_IndicationMessage_Format3_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_IndicationMessage_Format3_Item_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_IndicationMessage_Format3_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_IndicationMessage_Format3_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_IndicationMessage_Format3_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2SM_RC_IndicationMessage_Format3_Item_1,
	4,	/* Elements count */
	&asn_SPC_E2SM_RC_IndicationMessage_Format3_Item_specs_1	/* Additional specs */
};

