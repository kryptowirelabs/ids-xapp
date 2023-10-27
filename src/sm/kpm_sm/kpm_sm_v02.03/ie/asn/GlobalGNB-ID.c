/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v02.03_standard2.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "GlobalGNB-ID.h"

asn_TYPE_member_t asn_MBR_GlobalGNB_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalGNB_ID, pLMNIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNIdentity,
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
		"pLMNIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalGNB_ID, gNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GNB_ID,
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
		"gNB-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_GlobalGNB_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GlobalGNB_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gNB-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_GlobalGNB_ID_specs_1 = {
	sizeof(struct GlobalGNB_ID),
	offsetof(struct GlobalGNB_ID, _asn_ctx),
	asn_MAP_GlobalGNB_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GlobalGNB_ID = {
	"GlobalGNB-ID",
	"GlobalGNB-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_GlobalGNB_ID_tags_1,
	sizeof(asn_DEF_GlobalGNB_ID_tags_1)
		/sizeof(asn_DEF_GlobalGNB_ID_tags_1[0]), /* 1 */
	asn_DEF_GlobalGNB_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_GlobalGNB_ID_tags_1)
		/sizeof(asn_DEF_GlobalGNB_ID_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GlobalGNB_ID_1,
	2,	/* Elements count */
	&asn_SPC_GlobalGNB_ID_specs_1	/* Additional specs */
};

