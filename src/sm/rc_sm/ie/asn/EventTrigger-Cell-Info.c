/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "EventTrigger-Cell-Info.h"

#include "EventTrigger-Cell-Info-Item.h"
static int
memb_cellInfo_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 65535UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_cellInfo_List_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_cellInfo_List_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_cellInfo_List_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_EventTrigger_Cell_Info_Item,
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
static const ber_tlv_tag_t asn_DEF_cellInfo_List_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_cellInfo_List_specs_2 = {
	sizeof(struct EventTrigger_Cell_Info__cellInfo_List),
	offsetof(struct EventTrigger_Cell_Info__cellInfo_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellInfo_List_2 = {
	"cellInfo-List",
	"cellInfo-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_cellInfo_List_tags_2,
	sizeof(asn_DEF_cellInfo_List_tags_2)
		/sizeof(asn_DEF_cellInfo_List_tags_2[0]) - 1, /* 1 */
	asn_DEF_cellInfo_List_tags_2,	/* Same as above */
	sizeof(asn_DEF_cellInfo_List_tags_2)
		/sizeof(asn_DEF_cellInfo_List_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_cellInfo_List_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_cellInfo_List_2,
	1,	/* Single element */
	&asn_SPC_cellInfo_List_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_EventTrigger_Cell_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EventTrigger_Cell_Info, cellInfo_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellInfo_List_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_cellInfo_List_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_cellInfo_List_constraint_1
		},
		0, 0, /* No default value */
		"cellInfo-List"
		},
};
static const ber_tlv_tag_t asn_DEF_EventTrigger_Cell_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EventTrigger_Cell_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellInfo-List */
};
asn_SEQUENCE_specifics_t asn_SPC_EventTrigger_Cell_Info_specs_1 = {
	sizeof(struct EventTrigger_Cell_Info),
	offsetof(struct EventTrigger_Cell_Info, _asn_ctx),
	asn_MAP_EventTrigger_Cell_Info_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EventTrigger_Cell_Info = {
	"EventTrigger-Cell-Info",
	"EventTrigger-Cell-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_EventTrigger_Cell_Info_tags_1,
	sizeof(asn_DEF_EventTrigger_Cell_Info_tags_1)
		/sizeof(asn_DEF_EventTrigger_Cell_Info_tags_1[0]), /* 1 */
	asn_DEF_EventTrigger_Cell_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_EventTrigger_Cell_Info_tags_1)
		/sizeof(asn_DEF_EventTrigger_Cell_Info_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_EventTrigger_Cell_Info_1,
	1,	/* Elements count */
	&asn_SPC_EventTrigger_Cell_Info_specs_1	/* Additional specs */
};

