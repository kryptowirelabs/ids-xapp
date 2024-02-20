/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-CommonDataTypes"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "ProcedureCode.h"

int
ProcedureCode_constraint_e2ap_v1_01(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ProcedureCode_constr_1_e2ap_v1_01 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_ProcedureCode_e2ap_v1_01_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProcedureCode_e2ap_v1_01 = {
	"ProcedureCode",
	"ProcedureCode",
	&asn_OP_NativeInteger_e2ap_v1_01,
	asn_DEF_ProcedureCode_e2ap_v1_01_tags_1,
	sizeof(asn_DEF_ProcedureCode_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_ProcedureCode_e2ap_v1_01_tags_1[0]), /* 1 */
	asn_DEF_ProcedureCode_e2ap_v1_01_tags_1,	/* Same as above */
	sizeof(asn_DEF_ProcedureCode_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_ProcedureCode_e2ap_v1_01_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ProcedureCode_constr_1_e2ap_v1_01,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		ProcedureCode_constraint_e2ap_v1_01
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

