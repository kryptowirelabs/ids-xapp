/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v02.03_standard.asn1"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -S /home/mir/workspace/asn1_nokia/skeletons/`
 */

#include "E2SM-KPM-IndicationMessage-Format2.h"

asn_TYPE_member_t asn_MBR_E2SM_KPM_IndicationMessage_Format2_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_IndicationMessage_Format2, measData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measData"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_IndicationMessage_Format2, measCondUEidList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementCondUEidList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measCondUEidList"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_KPM_IndicationMessage_Format2, granulPeriod),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GranularityPeriod,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"granulPeriod"
		},
};
static const int asn_MAP_E2SM_KPM_IndicationMessage_Format2_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_IndicationMessage_Format2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_IndicationMessage_Format2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measCondUEidList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* granulPeriod */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_IndicationMessage_Format2_specs_1 = {
	sizeof(struct E2SM_KPM_IndicationMessage_Format2),
	offsetof(struct E2SM_KPM_IndicationMessage_Format2, _asn_ctx),
	asn_MAP_E2SM_KPM_IndicationMessage_Format2_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E2SM_KPM_IndicationMessage_Format2_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_IndicationMessage_Format2 = {
	"E2SM-KPM-IndicationMessage-Format2",
	"E2SM-KPM-IndicationMessage-Format2",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_IndicationMessage_Format2_tags_1,
	sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format2_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format2_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_IndicationMessage_Format2_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format2_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format2_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_KPM_IndicationMessage_Format2_1,
	3,	/* Elements count */
	&asn_SPC_E2SM_KPM_IndicationMessage_Format2_specs_1	/* Additional specs */
};

