/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v02.03.asn1"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2nodeComponentInterfaceS1.h"

asn_TYPE_member_t asn_MBR_E2nodeComponentInterfaceS1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2nodeComponentInterfaceS1, mme_name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MMEname,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mme-name"
		},
};
static const ber_tlv_tag_t asn_DEF_E2nodeComponentInterfaceS1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentInterfaceS1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mme-name */
};
asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentInterfaceS1_specs_1 = {
	sizeof(struct E2nodeComponentInterfaceS1),
	offsetof(struct E2nodeComponentInterfaceS1, _asn_ctx),
	asn_MAP_E2nodeComponentInterfaceS1_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentInterfaceS1 = {
	"E2nodeComponentInterfaceS1",
	"E2nodeComponentInterfaceS1",
	&asn_OP_SEQUENCE,
	asn_DEF_E2nodeComponentInterfaceS1_tags_1,
	sizeof(asn_DEF_E2nodeComponentInterfaceS1_tags_1)
		/sizeof(asn_DEF_E2nodeComponentInterfaceS1_tags_1[0]), /* 1 */
	asn_DEF_E2nodeComponentInterfaceS1_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeComponentInterfaceS1_tags_1)
		/sizeof(asn_DEF_E2nodeComponentInterfaceS1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2nodeComponentInterfaceS1_1,
	1,	/* Elements count */
	&asn_SPC_E2nodeComponentInterfaceS1_specs_1	/* Additional specs */
};

