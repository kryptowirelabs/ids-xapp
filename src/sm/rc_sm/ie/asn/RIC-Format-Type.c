/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "RIC-Format-Type.h"

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_RIC_Format_Type_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RIC_Format_Type = {
	"RIC-Format-Type",
	"RIC-Format-Type",
	&asn_OP_NativeInteger,
	asn_DEF_RIC_Format_Type_tags_1,
	sizeof(asn_DEF_RIC_Format_Type_tags_1)
		/sizeof(asn_DEF_RIC_Format_Type_tags_1[0]), /* 1 */
	asn_DEF_RIC_Format_Type_tags_1,	/* Same as above */
	sizeof(asn_DEF_RIC_Format_Type_tags_1)
		/sizeof(asn_DEF_RIC_Format_Type_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeInteger_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

