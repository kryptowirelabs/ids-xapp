/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v02.03_standard2.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "RANfunction-Name.h"

static const int permitted_alphabet_table_2[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 2, 3, 4, 0, 5, 6, 7, 8, 9,	/* .      '() +,-./ */
10,11,12,13,14,15,16,17,18,19,20, 0, 0,21, 0,22,	/* 0123456789:  = ? */
 0,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,	/*  ABCDEFGHIJKLMNO */
38,39,40,41,42,43,44,45,46,47,48, 0, 0, 0, 0, 0,	/* PQRSTUVWXYZ      */
 0,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,	/*  abcdefghijklmno */
64,65,66,67,68,69,70,71,72,73,74, 0, 0, 0, 0, 0,	/* pqrstuvwxyz      */
};
static const int permitted_alphabet_code2value_2[74] = {
32,39,40,41,43,44,45,46,47,48,49,50,51,52,53,54,
55,56,57,58,61,63,65,66,67,68,69,70,71,72,73,74,
75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,
97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,
113,114,115,116,117,118,119,120,121,122,};


static int check_permitted_alphabet_2(const void *sptr) {
	const int *table = permitted_alphabet_table_2;
	/* The underlying type is PrintableString */
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static const int permitted_alphabet_table_3[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 2, 3, 4, 0, 5, 6, 7, 8, 9,	/* .      '() +,-./ */
10,11,12,13,14,15,16,17,18,19,20, 0, 0,21, 0,22,	/* 0123456789:  = ? */
 0,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,	/*  ABCDEFGHIJKLMNO */
38,39,40,41,42,43,44,45,46,47,48, 0, 0, 0, 0, 0,	/* PQRSTUVWXYZ      */
 0,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,	/*  abcdefghijklmno */
64,65,66,67,68,69,70,71,72,73,74, 0, 0, 0, 0, 0,	/* pqrstuvwxyz      */
};
static const int permitted_alphabet_code2value_3[74] = {
32,39,40,41,43,44,45,46,47,48,49,50,51,52,53,54,
55,56,57,58,61,63,65,66,67,68,69,70,71,72,73,74,
75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,
97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,
113,114,115,116,117,118,119,120,121,122,};


static int check_permitted_alphabet_3(const void *sptr) {
	const int *table = permitted_alphabet_table_3;
	/* The underlying type is PrintableString */
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static const int permitted_alphabet_table_4[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 2, 3, 4, 0, 5, 6, 7, 8, 9,	/* .      '() +,-./ */
10,11,12,13,14,15,16,17,18,19,20, 0, 0,21, 0,22,	/* 0123456789:  = ? */
 0,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,	/*  ABCDEFGHIJKLMNO */
38,39,40,41,42,43,44,45,46,47,48, 0, 0, 0, 0, 0,	/* PQRSTUVWXYZ      */
 0,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,	/*  abcdefghijklmno */
64,65,66,67,68,69,70,71,72,73,74, 0, 0, 0, 0, 0,	/* pqrstuvwxyz      */
};
static const int permitted_alphabet_code2value_4[74] = {
32,39,40,41,43,44,45,46,47,48,49,50,51,52,53,54,
55,56,57,58,61,63,65,66,67,68,69,70,71,72,73,74,
75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,
97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,
113,114,115,116,117,118,119,120,121,122,};


static int check_permitted_alphabet_4(const void *sptr) {
	const int *table = permitted_alphabet_table_4;
	/* The underlying type is PrintableString */
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static int
memb_ranFunction_ShortName_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1UL && size <= 150UL)
		 && !check_permitted_alphabet_2(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_ranFunction_ShortName_2_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_2)/sizeof(permitted_alphabet_table_2[0]))
		return -1;
	return permitted_alphabet_table_2[value] - 1;
}
static int asn_PER_MAP_ranFunction_ShortName_2_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_2)/sizeof(permitted_alphabet_code2value_2[0]))
		return -1;
	return permitted_alphabet_code2value_2[code];
}
static int
memb_ranFunction_E2SM_OID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1UL && size <= 1000UL)
		 && !check_permitted_alphabet_3(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_ranFunction_E2SM_OID_3_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_3)/sizeof(permitted_alphabet_table_3[0]))
		return -1;
	return permitted_alphabet_table_3[value] - 1;
}
static int asn_PER_MAP_ranFunction_E2SM_OID_3_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_3)/sizeof(permitted_alphabet_code2value_3[0]))
		return -1;
	return permitted_alphabet_code2value_3[code];
}
static int
memb_ranFunction_Description_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1UL && size <= 150UL)
		 && !check_permitted_alphabet_4(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_ranFunction_Description_4_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_4)/sizeof(permitted_alphabet_table_4[0]))
		return -1;
	return permitted_alphabet_table_4[value] - 1;
}
static int asn_PER_MAP_ranFunction_Description_4_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_4)/sizeof(permitted_alphabet_code2value_4[0]))
		return -1;
	return permitted_alphabet_code2value_4[code];
}
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ranFunction_ShortName_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  32,  122 }	/* (32..122) */,
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  8,  8,  1,  150 }	/* (SIZE(1..150,...)) */,
	asn_PER_MAP_ranFunction_ShortName_2_v2c,	/* Value to PER code map */
	asn_PER_MAP_ranFunction_ShortName_2_c2v	/* PER code to value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ranFunction_E2SM_OID_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  32,  122 }	/* (32..122) */,
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  10,  10,  1,  1000 }	/* (SIZE(1..1000,...)) */,
	asn_PER_MAP_ranFunction_E2SM_OID_3_v2c,	/* Value to PER code map */
	asn_PER_MAP_ranFunction_E2SM_OID_3_c2v	/* PER code to value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ranFunction_Description_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  32,  122 }	/* (32..122) */,
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  8,  8,  1,  150 }	/* (SIZE(1..150,...)) */,
	asn_PER_MAP_ranFunction_Description_4_v2c,	/* Value to PER code map */
	asn_PER_MAP_ranFunction_Description_4_c2v	/* PER code to value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_RANfunction_Name_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANfunction_Name, ranFunction_ShortName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrintableString,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ranFunction_ShortName_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_ranFunction_ShortName_constraint_1
		},
		0, 0, /* No default value */
		"ranFunction-ShortName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANfunction_Name, ranFunction_E2SM_OID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrintableString,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ranFunction_E2SM_OID_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_ranFunction_E2SM_OID_constraint_1
		},
		0, 0, /* No default value */
		"ranFunction-E2SM-OID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANfunction_Name, ranFunction_Description),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrintableString,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ranFunction_Description_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_ranFunction_Description_constraint_1
		},
		0, 0, /* No default value */
		"ranFunction-Description"
		},
	{ ATF_POINTER, 1, offsetof(struct RANfunction_Name, ranFunction_Instance),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
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
		"ranFunction-Instance"
		},
};
static const int asn_MAP_RANfunction_Name_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_RANfunction_Name_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANfunction_Name_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ranFunction-ShortName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ranFunction-E2SM-OID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ranFunction-Description */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ranFunction-Instance */
};
asn_SEQUENCE_specifics_t asn_SPC_RANfunction_Name_specs_1 = {
	sizeof(struct RANfunction_Name),
	offsetof(struct RANfunction_Name, _asn_ctx),
	asn_MAP_RANfunction_Name_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RANfunction_Name_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RANfunction_Name = {
	"RANfunction-Name",
	"RANfunction-Name",
	&asn_OP_SEQUENCE,
	asn_DEF_RANfunction_Name_tags_1,
	sizeof(asn_DEF_RANfunction_Name_tags_1)
		/sizeof(asn_DEF_RANfunction_Name_tags_1[0]), /* 1 */
	asn_DEF_RANfunction_Name_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANfunction_Name_tags_1)
		/sizeof(asn_DEF_RANfunction_Name_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RANfunction_Name_1,
	4,	/* Elements count */
	&asn_SPC_RANfunction_Name_specs_1	/* Additional specs */
};

