/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e42ap_v2_03.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "RICindicationHeader.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_RICindicationHeader_tags_1_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RICindicationHeader = {
	"RICindicationHeader",
	"RICindicationHeader",
	&asn_OP_OCTET_STRING,
	asn_DEF_RICindicationHeader_tags_1_e2ap_v2_03,
	sizeof(asn_DEF_RICindicationHeader_tags_1_e2ap_v2_03)
		/sizeof(asn_DEF_RICindicationHeader_tags_1_e2ap_v2_03[0]), /* 1 */
	asn_DEF_RICindicationHeader_tags_1_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_RICindicationHeader_tags_1_e2ap_v2_03)
		/sizeof(asn_DEF_RICindicationHeader_tags_1_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		OCTET_STRING_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

