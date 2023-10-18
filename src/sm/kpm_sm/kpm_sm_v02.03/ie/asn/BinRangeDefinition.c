/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v02.03_modified.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "BinRangeDefinition.h"

#include "BinRangeList.h"
asn_TYPE_member_t asn_MBR_BinRangeDefinition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BinRangeDefinition, binRangeListX),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BinRangeList,
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
		"binRangeListX"
		},
	{ ATF_POINTER, 2, offsetof(struct BinRangeDefinition, binRangeListY),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BinRangeList,
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
		"binRangeListY"
		},
	{ ATF_POINTER, 1, offsetof(struct BinRangeDefinition, binRangeListZ),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BinRangeList,
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
		"binRangeListZ"
		},
};
static const int asn_MAP_BinRangeDefinition_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_BinRangeDefinition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BinRangeDefinition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* binRangeListX */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* binRangeListY */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* binRangeListZ */
};
asn_SEQUENCE_specifics_t asn_SPC_BinRangeDefinition_specs_1 = {
	sizeof(struct BinRangeDefinition),
	offsetof(struct BinRangeDefinition, _asn_ctx),
	asn_MAP_BinRangeDefinition_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_BinRangeDefinition_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BinRangeDefinition = {
	"BinRangeDefinition",
	"BinRangeDefinition",
	&asn_OP_SEQUENCE,
	asn_DEF_BinRangeDefinition_tags_1,
	sizeof(asn_DEF_BinRangeDefinition_tags_1)
		/sizeof(asn_DEF_BinRangeDefinition_tags_1[0]), /* 1 */
	asn_DEF_BinRangeDefinition_tags_1,	/* Same as above */
	sizeof(asn_DEF_BinRangeDefinition_tags_1)
		/sizeof(asn_DEF_BinRangeDefinition_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BinRangeDefinition_1,
	3,	/* Elements count */
	&asn_SPC_BinRangeDefinition_specs_1	/* Additional specs */
};

