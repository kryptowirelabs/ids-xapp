/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "../e42ap_v3_01.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_ProtocolIE_Container_H_
#define	_ProtocolIE_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RICsubscriptionRequest_IEs;
struct RICsubscriptionResponse_IEs;
struct RICsubscriptionFailure_IEs;
struct RICsubscriptionDeleteRequest_IEs;
struct E42RICsubscriptionRequest_IEs;
struct E42RICsubscriptionDeleteRequest_IEs;
struct RICsubscriptionDeleteResponse_IEs;
struct RICsubscriptionDeleteFailure_IEs;
struct RICsubscriptionDeleteRequired_IEs;
struct RICsubscriptionModificationRequest_IEs;
struct RICsubscriptionModificationResponse_IEs;
struct RICsubscriptionModificationFailure_IEs;
struct RICsubscriptionModificationRequired_IEs;
struct RICsubscriptionModificationConfirm_IEs;
struct RICsubscriptionModificationRefuse_IEs;
struct RICindication_IEs;
struct RICcontrolRequest_IEs;
struct E42RICcontrolRequest_IEs;
struct RICcontrolAcknowledge_IEs;
struct RICcontrolFailure_IEs;
struct RICQueryRequest_IEs;
struct RICQueryResponse_IEs;
struct RICQueryFailure_IEs;
struct ErrorIndication_IEs;
struct E2setupRequestIEs;
struct E42setupRequestIEs;
struct E2setupResponseIEs;
struct E42setupResponseIEs;
struct E2setupFailureIEs;
struct E2connectionUpdate_IEs;
struct E2connectionUpdateAck_IEs;
struct E2connectionUpdateFailure_IEs;
struct E2nodeConfigurationUpdate_IEs;
struct E2nodeConfigurationUpdateAcknowledge_IEs;
struct E2nodeConfigurationUpdateFailure_IEs;
struct ResetRequestIEs;
struct ResetResponseIEs;
struct RICserviceUpdate_IEs;
struct E2nodeConnected_ItemIEs;
struct RICserviceUpdateAcknowledge_IEs;
struct RICserviceUpdateFailure_IEs;
struct RICserviceQuery_IEs;
struct E2RemovalRequestIEs;
struct E2RemovalResponseIEs;
struct E2RemovalFailureIEs;

/* ProtocolIE-Container */
typedef struct ProtocolIE_Container_2697P0 {
	A_SEQUENCE_OF(struct RICsubscriptionRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P0_t;
typedef struct ProtocolIE_Container_2697P1 {
	A_SEQUENCE_OF(struct RICsubscriptionResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P1_t;
typedef struct ProtocolIE_Container_2697P2 {
	A_SEQUENCE_OF(struct RICsubscriptionFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P2_t;
typedef struct ProtocolIE_Container_2697P3 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P3_t;
typedef struct ProtocolIE_Container_2697P4 {
	A_SEQUENCE_OF(struct E42RICsubscriptionRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P4_t;
typedef struct ProtocolIE_Container_2697P5 {
	A_SEQUENCE_OF(struct E42RICsubscriptionDeleteRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P5_t;
typedef struct ProtocolIE_Container_2697P6 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P6_t;
typedef struct ProtocolIE_Container_2697P7 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P7_t;
typedef struct ProtocolIE_Container_2697P8 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteRequired_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P8_t;
typedef struct ProtocolIE_Container_2697P9 {
	A_SEQUENCE_OF(struct RICsubscriptionModificationRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P9_t;
typedef struct ProtocolIE_Container_2697P10 {
	A_SEQUENCE_OF(struct RICsubscriptionModificationResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P10_t;
typedef struct ProtocolIE_Container_2697P11 {
	A_SEQUENCE_OF(struct RICsubscriptionModificationFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P11_t;
typedef struct ProtocolIE_Container_2697P12 {
	A_SEQUENCE_OF(struct RICsubscriptionModificationRequired_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P12_t;
typedef struct ProtocolIE_Container_2697P13 {
	A_SEQUENCE_OF(struct RICsubscriptionModificationConfirm_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P13_t;
typedef struct ProtocolIE_Container_2697P14 {
	A_SEQUENCE_OF(struct RICsubscriptionModificationRefuse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P14_t;
typedef struct ProtocolIE_Container_2697P15 {
	A_SEQUENCE_OF(struct RICindication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P15_t;
typedef struct ProtocolIE_Container_2697P16 {
	A_SEQUENCE_OF(struct RICcontrolRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P16_t;
typedef struct ProtocolIE_Container_2697P17 {
	A_SEQUENCE_OF(struct E42RICcontrolRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P17_t;
typedef struct ProtocolIE_Container_2697P18 {
	A_SEQUENCE_OF(struct RICcontrolAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P18_t;
typedef struct ProtocolIE_Container_2697P19 {
	A_SEQUENCE_OF(struct RICcontrolFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P19_t;
typedef struct ProtocolIE_Container_2697P20 {
	A_SEQUENCE_OF(struct RICQueryRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P20_t;
typedef struct ProtocolIE_Container_2697P21 {
	A_SEQUENCE_OF(struct RICQueryResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P21_t;
typedef struct ProtocolIE_Container_2697P22 {
	A_SEQUENCE_OF(struct RICQueryFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P22_t;
typedef struct ProtocolIE_Container_2697P23 {
	A_SEQUENCE_OF(struct ErrorIndication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P23_t;
typedef struct ProtocolIE_Container_2697P24 {
	A_SEQUENCE_OF(struct E2setupRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P24_t;
typedef struct ProtocolIE_Container_2697P25 {
	A_SEQUENCE_OF(struct E42setupRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P25_t;
typedef struct ProtocolIE_Container_2697P26 {
	A_SEQUENCE_OF(struct E2setupResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P26_t;
typedef struct ProtocolIE_Container_2697P27 {
	A_SEQUENCE_OF(struct E42setupResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P27_t;
typedef struct ProtocolIE_Container_2697P28 {
	A_SEQUENCE_OF(struct E2setupFailureIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P28_t;
typedef struct ProtocolIE_Container_2697P29 {
	A_SEQUENCE_OF(struct E2connectionUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P29_t;
typedef struct ProtocolIE_Container_2697P30 {
	A_SEQUENCE_OF(struct E2connectionUpdateAck_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P30_t;
typedef struct ProtocolIE_Container_2697P31 {
	A_SEQUENCE_OF(struct E2connectionUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P31_t;
typedef struct ProtocolIE_Container_2697P32 {
	A_SEQUENCE_OF(struct E2nodeConfigurationUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P32_t;
typedef struct ProtocolIE_Container_2697P33 {
	A_SEQUENCE_OF(struct E2nodeConfigurationUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P33_t;
typedef struct ProtocolIE_Container_2697P34 {
	A_SEQUENCE_OF(struct E2nodeConfigurationUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P34_t;
typedef struct ProtocolIE_Container_2697P35 {
	A_SEQUENCE_OF(struct ResetRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P35_t;
typedef struct ProtocolIE_Container_2697P36 {
	A_SEQUENCE_OF(struct ResetResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P36_t;
typedef struct ProtocolIE_Container_2697P37 {
	A_SEQUENCE_OF(struct RICserviceUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P37_t;
typedef struct ProtocolIE_Container_2697P38 {
	A_SEQUENCE_OF(struct E2nodeConnected_ItemIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P38_t;
typedef struct ProtocolIE_Container_2697P39 {
	A_SEQUENCE_OF(struct RICserviceUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P39_t;
typedef struct ProtocolIE_Container_2697P40 {
	A_SEQUENCE_OF(struct RICserviceUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P40_t;
typedef struct ProtocolIE_Container_2697P41 {
	A_SEQUENCE_OF(struct RICserviceQuery_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P41_t;
typedef struct ProtocolIE_Container_2697P42 {
	A_SEQUENCE_OF(struct E2RemovalRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P42_t;
typedef struct ProtocolIE_Container_2697P43 {
	A_SEQUENCE_OF(struct E2RemovalResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P43_t;
typedef struct ProtocolIE_Container_2697P44 {
	A_SEQUENCE_OF(struct E2RemovalFailureIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_2697P44_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P0;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P0_specs_1;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P0_1[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P0_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P1;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P1_specs_3;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P1_3[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P1_constr_3;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P2;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P2_specs_5;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P2_5[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P2_constr_5;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P3;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P3_specs_7;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P3_7[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P3_constr_7;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P4;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P4_specs_9;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P4_9[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P4_constr_9;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P5;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P5_specs_11;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P5_11[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P5_constr_11;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P6;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P6_specs_13;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P6_13[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P6_constr_13;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P7;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P7_specs_15;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P7_15[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P7_constr_15;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P8;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P8_specs_17;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P8_17[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P8_constr_17;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P9;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P9_specs_19;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P9_19[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P9_constr_19;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P10;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P10_specs_21;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P10_21[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P10_constr_21;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P11;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P11_specs_23;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P11_23[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P11_constr_23;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P12;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P12_specs_25;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P12_25[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P12_constr_25;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P13;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P13_specs_27;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P13_27[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P13_constr_27;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P14;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P14_specs_29;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P14_29[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P14_constr_29;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P15;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P15_specs_31;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P15_31[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P15_constr_31;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P16;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P16_specs_33;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P16_33[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P16_constr_33;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P17;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P17_specs_35;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P17_35[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P17_constr_35;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P18;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P18_specs_37;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P18_37[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P18_constr_37;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P19;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P19_specs_39;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P19_39[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P19_constr_39;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P20;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P20_specs_41;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P20_41[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P20_constr_41;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P21;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P21_specs_43;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P21_43[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P21_constr_43;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P22;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P22_specs_45;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P22_45[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P22_constr_45;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P23;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P23_specs_47;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P23_47[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P23_constr_47;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P24;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P24_specs_49;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P24_49[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P24_constr_49;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P25;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P25_specs_51;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P25_51[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P25_constr_51;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P26;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P26_specs_53;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P26_53[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P26_constr_53;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P27;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P27_specs_55;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P27_55[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P27_constr_55;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P28;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P28_specs_57;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P28_57[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P28_constr_57;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P29;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P29_specs_59;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P29_59[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P29_constr_59;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P30;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P30_specs_61;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P30_61[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P30_constr_61;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P31;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P31_specs_63;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P31_63[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P31_constr_63;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P32;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P32_specs_65;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P32_65[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P32_constr_65;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P33;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P33_specs_67;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P33_67[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P33_constr_67;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P34;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P34_specs_69;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P34_69[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P34_constr_69;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P35;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P35_specs_71;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P35_71[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P35_constr_71;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P36;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P36_specs_73;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P36_73[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P36_constr_73;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P37;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P37_specs_75;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P37_75[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P37_constr_75;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P38;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P38_specs_77;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P38_77[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P38_constr_77;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P39;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P39_specs_79;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P39_79[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P39_constr_79;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P40;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P40_specs_81;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P40_81[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P40_constr_81;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P41;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P41_specs_83;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P41_83[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P41_constr_83;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P42;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P42_specs_85;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P42_85[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P42_constr_85;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P43;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P43_specs_87;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P43_87[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P43_constr_87;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_2697P44;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_2697P44_specs_89;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_2697P44_89[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_2697P44_constr_89;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolIE_Container_H_ */
#include <asn_internal.h>
