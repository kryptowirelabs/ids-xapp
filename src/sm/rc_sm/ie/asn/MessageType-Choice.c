/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "MessageType-Choice.h"

#include "MessageType-Choice-NI.h"
#include "MessageType-Choice-RRC.h"
asn_per_constraints_t asn_PER_type_MessageType_Choice_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MessageType_Choice_1[] = {
	{ ATF_POINTER, 0, offsetof(struct MessageType_Choice, choice.messageType_Choice_NI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MessageType_Choice_NI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageType-Choice-NI"
		},
	{ ATF_POINTER, 0, offsetof(struct MessageType_Choice, choice.messageType_Choice_RRC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MessageType_Choice_RRC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageType-Choice-RRC"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MessageType_Choice_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* messageType-Choice-NI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageType-Choice-RRC */
};
asn_CHOICE_specifics_t asn_SPC_MessageType_Choice_specs_1 = {
	sizeof(struct MessageType_Choice),
	offsetof(struct MessageType_Choice, _asn_ctx),
	offsetof(struct MessageType_Choice, present),
	sizeof(((struct MessageType_Choice *)0)->present),
	asn_MAP_MessageType_Choice_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MessageType_Choice = {
	"MessageType-Choice",
	"MessageType-Choice",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_MessageType_Choice_constr_1, CHOICE_constraint },
	asn_MBR_MessageType_Choice_1,
	2,	/* Elements count */
	&asn_SPC_MessageType_Choice_specs_1	/* Additional specs */
};

