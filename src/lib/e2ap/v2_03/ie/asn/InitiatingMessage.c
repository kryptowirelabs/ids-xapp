/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "e42ap_v2_03.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "InitiatingMessage.h"

static const long asn_VAL_1_id_RICsubscription_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 8;
static const long asn_VAL_1_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_2_id_RICsubscriptionDelete_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 9;
static const long asn_VAL_2_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_3_id_RICserviceUpdate_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 7;
static const long asn_VAL_3_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_4_id_RICcontrol_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 4;
static const long asn_VAL_4_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_5_id_E2setup_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 1;
static const long asn_VAL_5_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_6_id_E2nodeConfigurationUpdate_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 10;
static const long asn_VAL_6_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_7_id_E2connectionUpdate_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 11;
static const long asn_VAL_7_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_8_id_Reset_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 3;
static const long asn_VAL_8_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_9_id_E2removal_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 13;
static const long asn_VAL_9_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_10_id_E42setup_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 14;
static const long asn_VAL_10_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_11_id_E42RICsubscription_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 15;
static const long asn_VAL_11_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_12_id_E42RICsubscriptionDelete_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 16;
static const long asn_VAL_12_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_13_id_E42RICcontrol_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 17;
static const long asn_VAL_13_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 0;
static const long asn_VAL_14_id_RICindication_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 5;
static const long asn_VAL_14_ignore_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 1;
static const long asn_VAL_15_id_RICserviceQuery_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 6;
static const long asn_VAL_15_ignore_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 1;
static const long asn_VAL_16_id_ErrorIndication_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 2;
static const long asn_VAL_16_ignore_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 1;
static const long asn_VAL_17_id_RICsubscriptionDeleteRequired_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 12;
static const long asn_VAL_17_ignore_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = 1;
static const asn_ioc_cell_t asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionResponse_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionFailure_e2ap_v2_03 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_1_id_RICsubscription_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_1_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionDeleteRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteResponse_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteFailure_e2ap_v2_03 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_2_id_RICsubscriptionDelete_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_2_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICserviceUpdate_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICserviceUpdate_e2ap_v2_03Acknowledge_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICserviceUpdate_e2ap_v2_03Failure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_3_id_RICserviceUpdate_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_3_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICcontrolRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolAcknowledge_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolFailure_e2ap_v2_03 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_4_id_RICcontrol_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_4_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E2setupRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E2setupResponse_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2setupFailure_e2ap_v2_03 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_5_id_E2setup_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_5_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E2nodeConfigurationUpdate_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E2nodeConfigurationUpdate_e2ap_v2_03Acknowledge_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2nodeConfigurationUpdate_e2ap_v2_03Failure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_6_id_E2nodeConfigurationUpdate_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_6_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E2connectionUpdate_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E2connectionUpdate_e2ap_v2_03Acknowledge_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2connectionUpdate_e2ap_v2_03Failure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_7_id_E2connectionUpdate_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_7_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ResetRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_ResetResponse_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_8_id_Reset_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_8_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E2RemovalRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E2RemovalResponse_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2RemovalFailure_e2ap_v2_03 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_9_id_E2removal_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_9_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E42setupRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E42setupResponse_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2setupFailure_e2ap_v2_03 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_10_id_E42setup_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_10_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E42RICsubscriptionRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionResponse_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionFailure_e2ap_v2_03 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_11_id_E42RICsubscription_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_11_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E42RICsubscriptionDeleteRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteResponse_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteFailure_e2ap_v2_03 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_12_id_E42RICsubscriptionDelete_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_12_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E42RICcontrolRequest_e2ap_v2_03 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolAcknowledge_e2ap_v2_03 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolFailure_e2ap_v2_03 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_13_id_E42RICcontrol_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_13_reject_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICindication_e2ap_v2_03 },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_14_id_RICindication_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_14_ignore_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICserviceQuery_e2ap_v2_03 },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_15_id_RICserviceQuery_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_15_ignore_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ErrorIndication_e2ap_v2_03 },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_16_id_ErrorIndication_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_16_ignore_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionDeleteRequired_e2ap_v2_03 },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v2_03, &asn_VAL_17_id_RICsubscriptionDeleteRequired_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v2_03, &asn_VAL_17_ignore_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 }
};
static const asn_ioc_set_t asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03[] = {
	{ 17, 5, asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_rows }
};
static int
memb_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_type_selector_result_t
select_InitiatingMessage_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct InitiatingMessage, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_InitiatingMessage_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 0; /* &InitiatingMessage */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct InitiatingMessage, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_procedureCode_constr_2_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_criticality_constr_3_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_value_constr_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_value_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICsubscriptionRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionRequest_e2ap_v2_03,
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
		"RICsubscriptionRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICsubscriptionDeleteRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionDeleteRequest_e2ap_v2_03,
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
		"RICsubscriptionDeleteRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICserviceUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICserviceUpdate_e2ap_v2_03,
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
		"RICserviceUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICcontrolRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICcontrolRequest_e2ap_v2_03,
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
		"RICcontrolRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.E2setupRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2setupRequest_e2ap_v2_03,
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
		"E2setupRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.E2nodeConfigurationUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2nodeConfigurationUpdate_e2ap_v2_03,
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
		"E2nodeConfigurationUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.E2connectionUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2connectionUpdate_e2ap_v2_03,
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
		"E2connectionUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.ResetRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ResetRequest_e2ap_v2_03,
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
		"ResetRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.E2RemovalRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2RemovalRequest_e2ap_v2_03,
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
		"E2RemovalRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.E42setupRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E42setupRequest_e2ap_v2_03,
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
		"E42setupRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.E42RICsubscriptionRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E42RICsubscriptionRequest_e2ap_v2_03,
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
		"E42RICsubscriptionRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.E42RICsubscriptionDeleteRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E42RICsubscriptionDeleteRequest_e2ap_v2_03,
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
		"E42RICsubscriptionDeleteRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.E42RICcontrolRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E42RICcontrolRequest_e2ap_v2_03,
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
		"E42RICcontrolRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICindication),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICindication_e2ap_v2_03,
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
		"RICindication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICserviceQuery),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICserviceQuery_e2ap_v2_03,
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
		"RICserviceQuery"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.ErrorIndication),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ErrorIndication_e2ap_v2_03,
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
		"ErrorIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICsubscriptionDeleteRequired),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionDeleteRequired_e2ap_v2_03,
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
		"RICsubscriptionDeleteRequired"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_value_tag2el_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 16 }, /* RICsubscriptionRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 15 }, /* RICsubscriptionDeleteRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 14 }, /* RICserviceUpdate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 13 }, /* RICcontrolRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 12 }, /* E2setupRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 11 }, /* E2nodeConfigurationUpdate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6, 10 }, /* E2connectionUpdate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7, 9 }, /* ResetRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 8, -8, 8 }, /* E2RemovalRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 9, -9, 7 }, /* E42setupRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 10, -10, 6 }, /* E42RICsubscriptionRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 11, -11, 5 }, /* E42RICsubscriptionDeleteRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 12, -12, 4 }, /* E42RICcontrolRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 13, -13, 3 }, /* RICindication */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 14, -14, 2 }, /* RICserviceQuery */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 15, -15, 1 }, /* ErrorIndication */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 16, -16, 0 } /* RICsubscriptionDeleteRequired */
};
static asn_CHOICE_specifics_t asn_SPC_value_specs_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = {
	sizeof(struct InitiatingMessage__value),
	offsetof(struct InitiatingMessage__value, _asn_ctx),
	offsetof(struct InitiatingMessage__value, present),
	sizeof(((struct InitiatingMessage__value *)0)->present),
	asn_MAP_value_tag2el_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03,
	17,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_value_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE_e2ap_v2_03,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		OPEN_TYPE_constraint
	},
	asn_MBR_value_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03,
	17,	/* Elements count */
	&asn_SPC_value_specs_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_InitiatingMessage_1_e2ap_v2_03[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcedureCode_e2ap_v2_03,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_procedureCode_constr_2_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_procedureCode_constraint_1
		},
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Criticality_e2ap_v2_03,
		select_InitiatingMessage_criticality_type,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_criticality_constr_3_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_criticality_constraint_1
		},
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_value_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03,
		select_InitiatingMessage_value_type,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_value_constr_4_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03_e2ap_v2_03,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_value_constraint_1
		},
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_InitiatingMessage_e2ap_v2_03_tags_1_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InitiatingMessage_tag2el_1_e2ap_v2_03[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_InitiatingMessage_specs_1_e2ap_v2_03 = {
	sizeof(struct InitiatingMessage),
	offsetof(struct InitiatingMessage, _asn_ctx),
	asn_MAP_InitiatingMessage_tag2el_1_e2ap_v2_03,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InitiatingMessage_e2ap_v2_03 = {
	"InitiatingMessage",
	"InitiatingMessage",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_InitiatingMessage_e2ap_v2_03_tags_1_e2ap_v2_03,
	sizeof(asn_DEF_InitiatingMessage_e2ap_v2_03_tags_1_e2ap_v2_03)
		/sizeof(asn_DEF_InitiatingMessage_e2ap_v2_03_tags_1_e2ap_v2_03[0]), /* 1 */
	asn_DEF_InitiatingMessage_e2ap_v2_03_tags_1_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_InitiatingMessage_e2ap_v2_03_tags_1_e2ap_v2_03)
		/sizeof(asn_DEF_InitiatingMessage_e2ap_v2_03_tags_1_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_InitiatingMessage_1_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_InitiatingMessage_specs_1_e2ap_v2_03	/* Additional specs */
};

