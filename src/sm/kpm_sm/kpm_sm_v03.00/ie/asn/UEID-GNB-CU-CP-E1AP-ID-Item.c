/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v03.00_standard.asn1"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "UEID-GNB-CU-CP-E1AP-ID-Item.h"

asn_TYPE_member_t asn_MBR_UEID_GNB_CU_CP_E1AP_ID_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEID_GNB_CU_CP_E1AP_ID_Item, gNB_CU_CP_UE_E1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNB_CU_CP_UE_E1AP_ID,
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
		"gNB-CU-CP-UE-E1AP-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_UEID_GNB_CU_CP_E1AP_ID_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEID_GNB_CU_CP_E1AP_ID_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gNB-CU-CP-UE-E1AP-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_UEID_GNB_CU_CP_E1AP_ID_Item_specs_1 = {
	sizeof(struct UEID_GNB_CU_CP_E1AP_ID_Item),
	offsetof(struct UEID_GNB_CU_CP_E1AP_ID_Item, _asn_ctx),
	asn_MAP_UEID_GNB_CU_CP_E1AP_ID_Item_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEID_GNB_CU_CP_E1AP_ID_Item = {
	"UEID-GNB-CU-CP-E1AP-ID-Item",
	"UEID-GNB-CU-CP-E1AP-ID-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_UEID_GNB_CU_CP_E1AP_ID_Item_tags_1,
	sizeof(asn_DEF_UEID_GNB_CU_CP_E1AP_ID_Item_tags_1)
		/sizeof(asn_DEF_UEID_GNB_CU_CP_E1AP_ID_Item_tags_1[0]), /* 1 */
	asn_DEF_UEID_GNB_CU_CP_E1AP_ID_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEID_GNB_CU_CP_E1AP_ID_Item_tags_1)
		/sizeof(asn_DEF_UEID_GNB_CU_CP_E1AP_ID_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_UEID_GNB_CU_CP_E1AP_ID_Item_1,
	1,	/* Elements count */
	&asn_SPC_UEID_GNB_CU_CP_E1AP_ID_Item_specs_1	/* Additional specs */
};

