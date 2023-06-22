/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2nodeComponentGNB-CU-UP-ID.h"

asn_TYPE_member_t asn_MBR_E2nodeComponentGNB_CU_UP_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2nodeComponentGNB_CU_UP_ID, gNB_CU_UP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNB_CU_UP_ID,
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
		"gNB-CU-UP-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_E2nodeComponentGNB_CU_UP_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentGNB_CU_UP_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gNB-CU-UP-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentGNB_CU_UP_ID_specs_1 = {
	sizeof(struct E2nodeComponentGNB_CU_UP_ID),
	offsetof(struct E2nodeComponentGNB_CU_UP_ID, _asn_ctx),
	asn_MAP_E2nodeComponentGNB_CU_UP_ID_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentGNB_CU_UP_ID = {
	"E2nodeComponentGNB-CU-UP-ID",
	"E2nodeComponentGNB-CU-UP-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_E2nodeComponentGNB_CU_UP_ID_tags_1,
	sizeof(asn_DEF_E2nodeComponentGNB_CU_UP_ID_tags_1)
		/sizeof(asn_DEF_E2nodeComponentGNB_CU_UP_ID_tags_1[0]), /* 1 */
	asn_DEF_E2nodeComponentGNB_CU_UP_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeComponentGNB_CU_UP_ID_tags_1)
		/sizeof(asn_DEF_E2nodeComponentGNB_CU_UP_ID_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2nodeComponentGNB_CU_UP_ID_1,
	1,	/* Elements count */
	&asn_SPC_E2nodeComponentGNB_CU_UP_ID_specs_1	/* Additional specs */
};

