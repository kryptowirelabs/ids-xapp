/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2SM-RC-IndicationMessage-Format4-ItemCell.h"

#include "NeighborRelation-Info.h"
asn_TYPE_member_t asn_MBR_E2SM_RC_IndicationMessage_Format4_ItemCell_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_IndicationMessage_Format4_ItemCell, cellGlobal_ID),
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
	{ ATF_POINTER, 2, offsetof(struct E2SM_RC_IndicationMessage_Format4_ItemCell, cellContextInfo),
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
	{ ATF_POINTER, 1, offsetof(struct E2SM_RC_IndicationMessage_Format4_ItemCell, neighborRelation_Table),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
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
static const int asn_MAP_E2SM_RC_IndicationMessage_Format4_ItemCell_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_E2SM_RC_IndicationMessage_Format4_ItemCell_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_IndicationMessage_Format4_ItemCell_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobal-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellContextInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* neighborRelation-Table */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_IndicationMessage_Format4_ItemCell_specs_1 = {
	sizeof(struct E2SM_RC_IndicationMessage_Format4_ItemCell),
	offsetof(struct E2SM_RC_IndicationMessage_Format4_ItemCell, _asn_ctx),
	asn_MAP_E2SM_RC_IndicationMessage_Format4_ItemCell_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E2SM_RC_IndicationMessage_Format4_ItemCell_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_IndicationMessage_Format4_ItemCell = {
	"E2SM-RC-IndicationMessage-Format4-ItemCell",
	"E2SM-RC-IndicationMessage-Format4-ItemCell",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_IndicationMessage_Format4_ItemCell_tags_1,
	sizeof(asn_DEF_E2SM_RC_IndicationMessage_Format4_ItemCell_tags_1)
		/sizeof(asn_DEF_E2SM_RC_IndicationMessage_Format4_ItemCell_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_IndicationMessage_Format4_ItemCell_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_IndicationMessage_Format4_ItemCell_tags_1)
		/sizeof(asn_DEF_E2SM_RC_IndicationMessage_Format4_ItemCell_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2SM_RC_IndicationMessage_Format4_ItemCell_1,
	3,	/* Elements count */
	&asn_SPC_E2SM_RC_IndicationMessage_Format4_ItemCell_specs_1	/* Additional specs */
};

