/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v03.00_modified.asn1"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "UEID-GNB-CU-F1AP-ID-List.h"

#include "UEID-GNB-CU-CP-F1AP-ID-Item.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_UEID_GNB_CU_F1AP_ID_List_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_UEID_GNB_CU_F1AP_ID_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_UEID_GNB_CU_CP_F1AP_ID_Item,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_UEID_GNB_CU_F1AP_ID_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_UEID_GNB_CU_F1AP_ID_List_specs_1 = {
	sizeof(struct UEID_GNB_CU_F1AP_ID_List),
	offsetof(struct UEID_GNB_CU_F1AP_ID_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_UEID_GNB_CU_F1AP_ID_List = {
	"UEID-GNB-CU-F1AP-ID-List",
	"UEID-GNB-CU-F1AP-ID-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_UEID_GNB_CU_F1AP_ID_List_tags_1,
	sizeof(asn_DEF_UEID_GNB_CU_F1AP_ID_List_tags_1)
		/sizeof(asn_DEF_UEID_GNB_CU_F1AP_ID_List_tags_1[0]), /* 1 */
	asn_DEF_UEID_GNB_CU_F1AP_ID_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEID_GNB_CU_F1AP_ID_List_tags_1)
		/sizeof(asn_DEF_UEID_GNB_CU_F1AP_ID_List_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_UEID_GNB_CU_F1AP_ID_List_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_UEID_GNB_CU_F1AP_ID_List_1,
	1,	/* Single element */
	&asn_SPC_UEID_GNB_CU_F1AP_ID_List_specs_1	/* Additional specs */
};

