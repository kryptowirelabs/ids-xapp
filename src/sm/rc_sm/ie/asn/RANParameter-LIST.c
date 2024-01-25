/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "RANParameter-LIST.h"

#include "RANParameter-STRUCTURE.h"
static int
memb_list_of_ranParameter_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
static asn_per_constraints_t asn_PER_type_list_of_ranParameter_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_list_of_ranParameter_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_list_of_ranParameter_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RANParameter_STRUCTURE,
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
static const ber_tlv_tag_t asn_DEF_list_of_ranParameter_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_list_of_ranParameter_specs_2 = {
	sizeof(struct RANParameter_LIST__list_of_ranParameter),
	offsetof(struct RANParameter_LIST__list_of_ranParameter, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_list_of_ranParameter_2 = {
	"list-of-ranParameter",
	"list-of-ranParameter",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_list_of_ranParameter_tags_2,
	sizeof(asn_DEF_list_of_ranParameter_tags_2)
		/sizeof(asn_DEF_list_of_ranParameter_tags_2[0]) - 1, /* 1 */
	asn_DEF_list_of_ranParameter_tags_2,	/* Same as above */
	sizeof(asn_DEF_list_of_ranParameter_tags_2)
		/sizeof(asn_DEF_list_of_ranParameter_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_list_of_ranParameter_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_list_of_ranParameter_2,
	1,	/* Single element */
	&asn_SPC_list_of_ranParameter_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RANParameter_LIST_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANParameter_LIST, list_of_ranParameter),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_list_of_ranParameter_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_list_of_ranParameter_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_list_of_ranParameter_constraint_1
		},
		0, 0, /* No default value */
		"list-of-ranParameter"
		},
};
static const ber_tlv_tag_t asn_DEF_RANParameter_LIST_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANParameter_LIST_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* list-of-ranParameter */
};
asn_SEQUENCE_specifics_t asn_SPC_RANParameter_LIST_specs_1 = {
	sizeof(struct RANParameter_LIST),
	offsetof(struct RANParameter_LIST, _asn_ctx),
	asn_MAP_RANParameter_LIST_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RANParameter_LIST = {
	"RANParameter-LIST",
	"RANParameter-LIST",
	&asn_OP_SEQUENCE,
	asn_DEF_RANParameter_LIST_tags_1,
	sizeof(asn_DEF_RANParameter_LIST_tags_1)
		/sizeof(asn_DEF_RANParameter_LIST_tags_1[0]), /* 1 */
	asn_DEF_RANParameter_LIST_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANParameter_LIST_tags_1)
		/sizeof(asn_DEF_RANParameter_LIST_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RANParameter_LIST_1,
	1,	/* Elements count */
	&asn_SPC_RANParameter_LIST_specs_1	/* Additional specs */
};

