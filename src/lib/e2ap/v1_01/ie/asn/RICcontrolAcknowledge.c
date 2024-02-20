/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "RICcontrolAcknowledge.h"

asn_TYPE_member_t asn_MBR_RICcontrolAcknowledge_1_e2ap_v1_01[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICcontrolAcknowledge, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_011,
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
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_RICcontrolAcknowledge_e2ap_v1_01_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICcontrolAcknowledge_tag2el_1_e2ap_v1_01[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_RICcontrolAcknowledge_specs_1_e2ap_v1_01 = {
	sizeof(struct RICcontrolAcknowledge),
	offsetof(struct RICcontrolAcknowledge, _asn_ctx),
	asn_MAP_RICcontrolAcknowledge_tag2el_1_e2ap_v1_01,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICcontrolAcknowledge_e2ap_v1_01 = {
	"RICcontrolAcknowledge",
	"RICcontrolAcknowledge",
	&asn_OP_SEQUENCE_e2ap_v1_01,
	asn_DEF_RICcontrolAcknowledge_e2ap_v1_01_tags_1,
	sizeof(asn_DEF_RICcontrolAcknowledge_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_RICcontrolAcknowledge_e2ap_v1_01_tags_1[0]), /* 1 */
	asn_DEF_RICcontrolAcknowledge_e2ap_v1_01_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICcontrolAcknowledge_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_RICcontrolAcknowledge_e2ap_v1_01_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v1_01
	},
	asn_MBR_RICcontrolAcknowledge_1_e2ap_v1_01,
	1,	/* Elements count */
	&asn_SPC_RICcontrolAcknowledge_specs_1_e2ap_v1_01	/* Additional specs */
};

