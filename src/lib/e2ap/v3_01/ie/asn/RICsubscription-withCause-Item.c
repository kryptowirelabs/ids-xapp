/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "../e42ap_v3_01.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "RICsubscription-withCause-Item.h"

asn_TYPE_member_t asn_MBR_RICsubscription_withCause_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscription_withCause_Item, ricRequestID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICrequestID,
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
		"ricRequestID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscription_withCause_Item, ranFunctionID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANfunctionID,
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
		"ranFunctionID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscription_withCause_Item, cause),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Cause,
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
		"cause"
		},
};
static const ber_tlv_tag_t asn_DEF_RICsubscription_withCause_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICsubscription_withCause_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ricRequestID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ranFunctionID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cause */
};
asn_SEQUENCE_specifics_t asn_SPC_RICsubscription_withCause_Item_specs_1 = {
	sizeof(struct RICsubscription_withCause_Item),
	offsetof(struct RICsubscription_withCause_Item, _asn_ctx),
	asn_MAP_RICsubscription_withCause_Item_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICsubscription_withCause_Item = {
	"RICsubscription-withCause-Item",
	"RICsubscription-withCause-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_RICsubscription_withCause_Item_tags_1,
	sizeof(asn_DEF_RICsubscription_withCause_Item_tags_1)
		/sizeof(asn_DEF_RICsubscription_withCause_Item_tags_1[0]), /* 1 */
	asn_DEF_RICsubscription_withCause_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICsubscription_withCause_Item_tags_1)
		/sizeof(asn_DEF_RICsubscription_withCause_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RICsubscription_withCause_Item_1,
	3,	/* Elements count */
	&asn_SPC_RICsubscription_withCause_Item_specs_1	/* Additional specs */
};

