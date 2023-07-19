/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////
#ifndef TORATSTPUSERAPISTRUCT_H__
#define TORATSTPUSERAPISTRUCT_H__

#include "TORATstpUserApiDataType.h"

namespace TORASTOCKAPI
{
	
	/// ��¼����
	struct CTORATstpReqUserLoginField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///��¼�˻�
		TTORATstpLogInAccountType	LogInAccount;
	
		///��¼�˻�����
		TTORATstpLogInAccountTypeType	LogInAccountType;
	
		///���͹�˾���Ŵ��루���ʽ��˺ŷ�ʽ��¼ʱ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///��֤��ʽ(ָ�ƻ�Կ�״���֤ʱ����)
		TTORATstpAuthModeType	AuthMode;
	
		///����(������֤ʱ����)
		TTORATstpPasswordType	Password;
	
		///�û��˲�Ʒ��Ϣ
		TTORATstpUserProductInfoType	UserProductInfo;
	
		///�ӿڶ˲�Ʒ��Ϣ
		TTORATstpInterfaceProductInfoType	InterfaceProductInfo;
	
		///�ն˲ɼ���Ϣ
		TTORATstpTerminalInfoType	TerminalInfo;
	
		///����IP��ַ
		TTORATstpIPAddressType	InnerIPAddress;
	
		///����IP��ַ
		TTORATstpIPAddressType	OuterIPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///�ӿ�����
		TTORATstpLangType	Lang;
	
		///�ն˶�̬��Կ
		TTORATstpPasswordType	DynamicPassword;
	
		///�豸��ʶ(ָ����֤ʱ����)
		TTORATstpDeviceIDType	DeviceID;
	
		///��֤���к�(ָ�ƻ�Կ�״���֤ʱ����)
		TTORATstpCertSerialType	CertSerial;
	
		///�豸���(ָ�ƻ�Կ�״���֤ʱ����)
		TTORATstpDeviceTypeType	DeviceType;
	
		///�����ڵ���(�ڲ�ʹ��)
		TTORATstpNodeIDType	NodeRef;
	};
	
	/// ��¼��Ӧ
	struct CTORATstpRspUserLoginField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///��¼�˻�
		TTORATstpLogInAccountType	LogInAccount;
	
		///��¼�˻�����
		TTORATstpLogInAccountTypeType	LogInAccountType;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///��󱨵�����
		TTORATstpOrderRefType	MaxOrderRef;
	
		///˽��������
		TTORATstpVolumeType	PrivateFlowCount;
	
		///����������
		TTORATstpVolumeType	PublicFlowCount;
	
		///��¼ʱ��
		TTORATstpTimeType	LoginTime;
	
		///����ϵͳ����
		TTORATstpSystemNameType	SystemName;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///�û�����
		TTORATstpUserIDType	UserID;
	
		///�û�����
		TTORATstpUserNameType	UserName;
	
		///�û�����
		TTORATstpUserTypeType	UserType;
	
		///��������
		TTORATstpCommFluxType	OrderInsertCommFlux;
	
		///��������
		TTORATstpCommFluxType	OrderActionCommFlux;
	
		///���뵽������
		TTORATstpDateType	PasswordExpiryDate;
	
		///�Ƿ���Ҫ����
		TTORATstpBoolType	NeedUpdatePassword;
	
		///��֤���к�
		TTORATstpCertSerialType	CertSerial;
	
		///����IP��ַ
		TTORATstpIPAddressType	InnerIPAddress;
	
		///����IP��ַ
		TTORATstpIPAddressType	OuterIPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///�����ڵ���(�ڲ�ʹ��)
		TTORATstpNodeIDType	NodeRef;
	};
	
	/// ��Ӧ��Ϣ
	struct CTORATstpRspInfoField
	{
		///�������
		TTORATstpErrorIDType	ErrorID;
	
		///������Ϣ
		TTORATstpErrorMsgType	ErrorMsg;
	};
	
	/// �û��ǳ�
	struct CTORATstpUserLogoutField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///�û�����
		TTORATstpUserIDType	UserID;
	};
	
	/// �޸��û�����
	struct CTORATstpUserPasswordUpdateField
	{
		///�û�����
		TTORATstpUserIDType	UserID;
	
		///������
		TTORATstpPasswordType	OldPassword;
	
		///������
		TTORATstpPasswordType	NewPassword;
	
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	};
	
	/// ����¼���豸����
	struct CTORATstpReqInputDeviceSerialField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///�û�����
		TTORATstpUserIDType	UserID;
	
		///�豸��ʶ
		TTORATstpDeviceIDType	DeviceID;
	
		///�豸���к�
		TTORATstpCertSerialType	CertSerial;
	
		///�豸���
		TTORATstpDeviceTypeType	DeviceType;
	};
	
	/// ¼���豸������Ӧ
	struct CTORATstpRspInputDeviceSerialField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///�û�����
		TTORATstpUserIDType	UserID;
	};
	
	/// ���뱨��
	struct CTORATstpInputOrderField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�۸�
		TTORATstpPriceType	LimitPrice;
	
		///����
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///�����۸�����
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///��Ч������
		TTORATstpTimeConditionType	TimeCondition;
	
		///�ɽ�������
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///��������
		TTORATstpOrderRefType	OrderRef;
	
		///�۹�ͨ������������
		TTORATstpLotTypeType	LotType;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///�������
		TTORATstpCondCheckType	CondCheck;
	
		///��Ч����
		TTORATstpDateType	GTDate;
	
		///ǿƽԭ��(����ר��)
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������(����ר��)
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ������(����ר��)
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///��Ϣ�ۿ�ȯ��ţ�0��ʾ��ʹ���ۿ�ȯ��(����ר��)
		TTORATstpIntSerialType	DiscountCouponID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// ����
	struct CTORATstpOrderField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�����۸�����
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///��Ч������
		TTORATstpTimeConditionType	TimeCondition;
	
		///�ɽ�������
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///�۸�
		TTORATstpPriceType	LimitPrice;
	
		///����
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///�۹�ͨ������������
		TTORATstpLotTypeType	LotType;
	
		///��Ч����
		TTORATstpDateType	GTDate;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�������
		TTORATstpCondCheckType	CondCheck;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///������
		TTORATstpRequestIDType	RequestID;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///��������
		TTORATstpOrderRefType	OrderRef;
	
		///���ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///����״̬
		TTORATstpOrderStatusType	OrderStatus;
	
		///�����ύ״̬
		TTORATstpOrderSubmitStatusType	OrderSubmitStatus;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///�ѳɽ�����
		TTORATstpVolumeType	VolumeTraded;
	
		///�ѳ�������
		TTORATstpVolumeType	VolumeCanceled;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///�걨�û�
		TTORATstpUserIDType	InsertUser;
	
		///�걨����
		TTORATstpDateType	InsertDate;
	
		///�걨ʱ��
		TTORATstpTimeType	InsertTime;
	
		///����������ʱ��
		TTORATstpTimeType	AcceptTime;
	
		///�����û�
		TTORATstpUserIDType	CancelUser;
	
		///����ʱ��
		TTORATstpTimeType	CancelTime;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///���׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///�ɽ����
		TTORATstpMoneyType	Turnover;
	
		///��������
		TTORATstpOrderTypeType	OrderType;
	
		///�û��˲�Ʒ��Ϣ
		TTORATstpUserProductInfoType	UserProductInfo;
	
		///ǿƽԭ��(����ר��)
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///����ͷ����(����ר��)
		TTORATstpQuotaIDType	CreditQuotaID;
	
		///ͷ������(����ר��)
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///���ø�ծ���(����ר��)
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///�ر����Ӹ�����������Ϣ
		TTORATstpFloatInfoType	RtnFloatInfo;
	
		///�ر�������������
		TTORATstpIntInfoType	RtnIntInfo;
	
		///�ر����Ӹ���������1
		TTORATstpFloatInfoType	RtnFloatInfo1;
	
		///�ر����Ӹ���������2
		TTORATstpFloatInfoType	RtnFloatInfo2;
	
		///�ر����Ӹ���������3
		TTORATstpFloatInfoType	RtnFloatInfo3;
	};
	
	/// �û���ʶ
	struct CTORATstpUserRefField
	{
		///�û�����
		TTORATstpUserIDType	UserID;
	};
	
	/// �ɽ�
	struct CTORATstpTradeField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ɽ����
		TTORATstpTradeIDType	TradeID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///���ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///�ɽ��۸�
		TTORATstpPriceType	Price;
	
		///�ɽ�����
		TTORATstpVolumeType	Volume;
	
		///�ɽ�����
		TTORATstpDateType	TradeDate;
	
		///�ɽ�ʱ��
		TTORATstpTimeType	TradeTime;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///���׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///��������
		TTORATstpOrderRefType	OrderRef;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	};
	
	/// ���볷������
	struct CTORATstpInputOrderActionField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��������ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///���������Ự���
		TTORATstpSessionIDType	SessionID;
	
		///������������
		TTORATstpOrderRefType	OrderRef;
	
		///��������ϵͳ���
		TTORATstpOrderSysIDType	OrderSysID;
	
		///������־
		TTORATstpActionFlagType	ActionFlag;
	
		///������������
		TTORATstpOrderRefType	OrderActionRef;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	CancelOrderSysID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// ������¼����
	struct CTORATstpInputCondOrderField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�۸�����
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///��Ч������
		TTORATstpTimeConditionType	TimeCondition;
	
		///�ɽ�������
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///�����۸�
		TTORATstpPriceType	LimitPrice;
	
		///��������
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�۹�ͨ������������
		TTORATstpLotTypeType	LotType;
	
		///�������
		TTORATstpCondCheckType	CondCheck;
	
		///��Ч����
		TTORATstpDateType	GTDate;
	
		///ǿƽԭ��(����ר��)
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������(����ר��)
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ������(����ר��)
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///��Ϣ�ۿ�ȯ��ţ�0��ʾ��ʹ���ۿ�ȯ��(����ר��)
		TTORATstpIntSerialType	DiscountCouponID;
	
		///������������
		TTORATstpOrderRefType	CondOrderRef;
	
		///�����������
		TTORATstpCondOrderIDType	CondOrderID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///������׼��������
		TTORATstpTriggerOrderVolumeTypeType	TriggerOrderVolumeType;
	
		///������׼������
		TTORATstpTriggerOrderPriceTypeType	TriggerOrderPriceType;
	
		///��������������
		TTORATstpContingentConditionType	ContingentCondition;
	
		///������
		TTORATstpPriceType	ConditionPrice;
	
		///�۸񸡶�tick��
		TTORATstpVolumeType	PriceTicks;
	
		///������������
		TTORATstpVolumeMultipleType	VolumeMultiple;
	
		///���ǰ�ñ��
		TTORATstpFrontIDType	RelativeFrontID;
	
		///��ػỰ���
		TTORATstpSessionIDType	RelativeSessionID;
	
		///�����������
		TTORATstpRelativeCondParamType	RelativeParam;
	
		///������������������
		TTORATstpContingentConditionType	AppendContingentCondition;
	
		///����������
		TTORATstpPriceType	AppendConditionPrice;
	
		///�������ǰ�ñ��
		TTORATstpFrontIDType	AppendRelativeFrontID;
	
		///������ػỰ���
		TTORATstpSessionIDType	AppendRelativeSessionID;
	
		///���������������
		TTORATstpRelativeCondParamType	AppendRelativeParam;
	};
	
	/// ��������
	struct CTORATstpConditionOrderField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�۸�����
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///��Ч������
		TTORATstpTimeConditionType	TimeCondition;
	
		///�ɽ�������
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///�����۸�
		TTORATstpPriceType	LimitPrice;
	
		///��������
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�۹�ͨ������������
		TTORATstpLotTypeType	LotType;
	
		///�������
		TTORATstpCondCheckType	CondCheck;
	
		///��Ч����
		TTORATstpDateType	GTDate;
	
		///ǿƽԭ��(����ר��)
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������(����ר��)
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ������(����ר��)
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///��Ϣ�ۿ�ȯ��ţ�0��ʾ��ʹ���ۿ�ȯ��(����ר��)
		TTORATstpIntSerialType	DiscountCouponID;
	
		///������������
		TTORATstpOrderRefType	CondOrderRef;
	
		///�������
		TTORATstpCondOrderIDType	CondOrderID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///������׼��������
		TTORATstpTriggerOrderVolumeTypeType	TriggerOrderVolumeType;
	
		///������׼������
		TTORATstpTriggerOrderPriceTypeType	TriggerOrderPriceType;
	
		///��������������
		TTORATstpContingentConditionType	ContingentCondition;
	
		///������
		TTORATstpPriceType	ConditionPrice;
	
		///�۸񸡶�tick��
		TTORATstpVolumeType	PriceTicks;
	
		///������������
		TTORATstpVolumeMultipleType	VolumeMultiple;
	
		///���ǰ�ñ��
		TTORATstpFrontIDType	RelativeFrontID;
	
		///��ػỰ���
		TTORATstpSessionIDType	RelativeSessionID;
	
		///�����������
		TTORATstpRelativeCondParamType	RelativeParam;
	
		///������������������
		TTORATstpContingentConditionType	AppendContingentCondition;
	
		///����������
		TTORATstpPriceType	AppendConditionPrice;
	
		///�������ǰ�ñ��
		TTORATstpFrontIDType	AppendRelativeFrontID;
	
		///������ػỰ���
		TTORATstpSessionIDType	AppendRelativeSessionID;
	
		///���������������
		TTORATstpRelativeCondParamType	AppendRelativeParam;
	
		///������
		TTORATstpRequestIDType	RequestID;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///������״̬
		TTORATstpCondOrderStatusType	CondOrderStatus;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///�걨�û�
		TTORATstpUserIDType	InsertUser;
	
		///�걨����
		TTORATstpDateType	InsertDate;
	
		///�걨ʱ��
		TTORATstpTimeType	InsertTime;
	
		///��������
		TTORATstpDateType	ActiveDate;
	
		///����ʱ��
		TTORATstpTimeType	ActiveTime;
	
		///�����û�
		TTORATstpUserIDType	CancelUser;
	
		///����ʱ��
		TTORATstpTimeType	CancelTime;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�û��˲�Ʒ��Ϣ
		TTORATstpUserProductInfoType	UserProductInfo;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	};
	
	/// ����������¼��
	struct CTORATstpInputCondOrderActionField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///����������ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�����������Ự���
		TTORATstpSessionIDType	SessionID;
	
		///��������������
		TTORATstpOrderRefType	CondOrderRef;
	
		///�������������
		TTORATstpCondOrderIDType	CondOrderID;
	
		///������־
		TTORATstpActionFlagType	ActionFlag;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///��������������
		TTORATstpOrderRefType	CondOrderActionRef;
	
		///�������������
		TTORATstpCondOrderIDType	CancelCondOrderID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// ���뱨��
	struct CTORATstpInputNegoOrderField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�۸�
		TTORATstpPriceType	LimitPrice;
	
		///����
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///��ϵ��(�����걨ʱ����)
		TTORATstpNegoContractorType	Contractor;
	
		///��ϵ��ʽ(�����걨ʱ����)
		TTORATstpNegoContractorInfoType	ContractorInfo;
	
		///Լ����(�ɽ��걨ʱ����)
		TTORATstpNegoConfirmIDType	ConfirmID;
	
		///���ַ�ϯλ��(�ɽ��걨ʱ����)
		TTORATstpPbuIDType	CounterpartyPbuID;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// Э�齻�ױ���
	struct CTORATstpNegoOrderField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�۸�
		TTORATstpPriceType	LimitPrice;
	
		///����
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///��ϵ��
		TTORATstpNegoContractorType	Contractor;
	
		///��ϵ��ʽ
		TTORATstpNegoContractorInfoType	ContractorInfo;
	
		///Լ����
		TTORATstpNegoConfirmIDType	ConfirmID;
	
		///���ַ�ϯλ��
		TTORATstpPbuIDType	CounterpartyPbuID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///������
		TTORATstpRequestIDType	RequestID;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///���ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///����״̬
		TTORATstpOrderStatusType	OrderStatus;
	
		///�����ύ״̬
		TTORATstpOrderSubmitStatusType	OrderSubmitStatus;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///�ѳɽ�����
		TTORATstpVolumeType	VolumeTraded;
	
		///�ѳ�������
		TTORATstpVolumeType	VolumeCanceled;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///�걨�û�
		TTORATstpUserIDType	InsertUser;
	
		///�걨����
		TTORATstpDateType	InsertDate;
	
		///�걨ʱ��
		TTORATstpTimeType	InsertTime;
	
		///����������ʱ��
		TTORATstpTimeType	AcceptTime;
	
		///�����û�
		TTORATstpUserIDType	CancelUser;
	
		///����ʱ��
		TTORATstpTimeType	CancelTime;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///���׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///�û��˲�Ʒ��Ϣ
		TTORATstpUserProductInfoType	UserProductInfo;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	};
	
	/// Э�齻�׳ɽ�
	struct CTORATstpNegoTradeField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ɽ����
		TTORATstpTradeIDType	TradeID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///���ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///�ɽ��۸�
		TTORATstpPriceType	Price;
	
		///�ɽ�����
		TTORATstpVolumeType	Volume;
	
		///�ɽ�����
		TTORATstpDateType	TradeDate;
	
		///�ɽ�ʱ��
		TTORATstpTimeType	TradeTime;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///���׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///���ַ����׵�Ԫ����
		TTORATstpPbuIDType	CounterpartyPbuID;
	
		///���ַ��ɶ��˺�
		TTORATstpShareholderIDType	CounterpartyShareholderID;
	};
	
	/// ����Э�齻�׳�������
	struct CTORATstpInputNegoOrderActionField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��������ϵͳ���
		TTORATstpOrderSysIDType	OrderSysID;
	
		///������־
		TTORATstpActionFlagType	ActionFlag;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	CancelOrderSysID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// ���뱨��
	struct CTORATstpInputOrderExField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�۸�
		TTORATstpPriceType	LimitPrice;
	
		///����
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///�����۸�����
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///��Ч������
		TTORATstpTimeConditionType	TimeCondition;
	
		///�ɽ�������
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///��������
		TTORATstpOrderRefType	OrderRef;
	
		///�۹�ͨ������������
		TTORATstpLotTypeType	LotType;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///�������
		TTORATstpCondCheckType	CondCheck;
	
		///��Ч����
		TTORATstpDateType	GTDate;
	
		///ǿƽԭ��(����ר��)
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������(����ר��)
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ������(����ר��)
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///��Ϣ�ۿ�ȯ��ţ�0��ʾ��ʹ���ۿ�ȯ��(����ר��)
		TTORATstpIntSerialType	DiscountCouponID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///�����ڵ���
		TTORATstpNodeIDType	NodeRef;
	};
	
	/// ���볷������
	struct CTORATstpInputOrderActionExField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��������ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///���������Ự���
		TTORATstpSessionIDType	SessionID;
	
		///������������
		TTORATstpOrderRefType	OrderRef;
	
		///��������ϵͳ���
		TTORATstpOrderSysIDType	OrderSysID;
	
		///������־
		TTORATstpActionFlagType	ActionFlag;
	
		///������������
		TTORATstpOrderRefType	OrderActionRef;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	CancelOrderSysID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// �г�״̬
	struct CTORATstpMarketStatusField
	{
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�г�״̬
		TTORATstpMarketStatusType	MarketStatus;
	};
	
	/// �ʽ�ת��
	struct CTORATstpInputTransferFundField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ת�Ʒ���
		TTORATstpTransferDirectionType	TransferDirection;
	
		///ת�ƽ��
		TTORATstpMoneyType	Amount;
	
		///���д���(��֤ת��ʱ����)
		TTORATstpBankIDType	BankID;
	
		///�ʽ�����(֤ȯת����ʱ����)
		TTORATstpPasswordType	AccountPassword;
	
		///��������(����ת֤ȯʱ����)
		TTORATstpPasswordType	BankPassword;
	
		///�ⲿ�ڵ��(�ڵ���ʽ����ʱ����)
		TTORATstpNodeIDType	ExternalNodeID;
	
		///ָ�����������ø�ծ���(����ר��)
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ǿƽԭ��(����ר��)
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///ʵ�ʳ������(����)(����ר��)
		TTORATstpMoneyType	RealAmount;
	
		///ǿ�Ʊ�ʶ(֤ȯת����ʱ��Ч)
		TTORATstpBoolType	ForceFlag;
	};
	
	/// �ʽ�ת�ƻر�
	struct CTORATstpTransferFundField
	{
		///ת����ˮ��
		TTORATstpIntSerialType	FundSerial;
	
		///������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///ת�Ʒ���
		TTORATstpTransferDirectionType	TransferDirection;
	
		///ת�ƽ��
		TTORATstpMoneyType	Amount;
	
		///ת��״̬
		TTORATstpTransferStatusType	TransferStatus;
	
		///������Ա
		TTORATstpUserIDType	OperatorID;
	
		///��������
		TTORATstpDateType	OperateDate;
	
		///����ʱ��
		TTORATstpTimeType	OperateTime;
	
		///ǩԼ�����˻�
		TTORATstpBankAccountIDType	BankAccountID;
	
		///���д���
		TTORATstpBankIDType	BankID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ⲿ�ڵ��
		TTORATstpNodeIDType	ExternalNodeID;
	
		///ǿƽԭ��(����ר��)
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};
	
	/// ��λת��
	struct CTORATstpInputTransferPositionField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ת�Ʒ���
		TTORATstpTransferDirectionType	TransferDirection;
	
		///����
		TTORATstpVolumeType	Volume;
	
		///ת�Ƴֲ�����
		TTORATstpTransferPositionTypeType	TransferPositionType;
	
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ⲿ�ڵ���(�ⲿϵͳת��ʱ����)
		TTORATstpNodeIDType	ExternalNodeID;
	};
	
	/// ��λת�ƻر�
	struct CTORATstpTransferPositionField
	{
		///��λת����ˮ��
		TTORATstpIntSerialType	PositionSerial;
	
		///������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///ת�Ʒ���
		TTORATstpTransferDirectionType	TransferDirection;
	
		///ת�Ƴֲ�����
		TTORATstpTransferPositionTypeType	TransferPositionType;
	
		///���ճֲ�����
		TTORATstpVolumeType	HistoryVolume;
	
		///���������ֲ�����
		TTORATstpVolumeType	TodayBSVolume;
	
		///��������ֲ�����
		TTORATstpVolumeType	TodayPRVolume;
	
		///���ղ�ֺϲ��ֲ�����
		TTORATstpVolumeType	TodaySMVolume;
	
		///ת��״̬
		TTORATstpTransferStatusType	TransferStatus;
	
		///������Ա
		TTORATstpUserIDType	OperatorID;
	
		///��������
		TTORATstpDateType	OperateDate;
	
		///����ʱ��
		TTORATstpTimeType	OperateTime;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///�ⲿ�ڵ���
		TTORATstpNodeIDType	ExternalNodeID;
	};
	
	/// ��Χϵͳ��λת�ƻر�
	struct CTORATstpPeripheryTransferPositionField
	{
		///��λ������ˮ��
		TTORATstpIntSerialType	PositionSerial;
	
		///��λ����������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///��λ��������
		TTORATstpTransferDirectionType	TransferDirection;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������λת��ת������
		TTORATstpVolumeType	TodayBSPos;
	
		///���������λת������
		TTORATstpVolumeType	TodayPRPos;
	
		///���ղ�λת������
		TTORATstpVolumeType	HistoryPos;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///��λ����ԭ��
		TTORATstpTransferReasonType	TransferReason;
	
		///ת��״̬
		TTORATstpTransferStatusType	TransferStatus;
	
		///��������
		TTORATstpDateType	OperateDate;
	
		///����ʱ��
		TTORATstpTimeType	OperateTime;
	
		///��������
		TTORATstpDateType	RepealDate;
	
		///����ʱ��
		TTORATstpTimeType	RepealTime;
	
		///����ԭ��
		TTORATstpTransferReasonType	RepealReason;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///���ղ�ֺϲ���λת������
		TTORATstpVolumeType	TodaySMPos;
	};
	
	/// ��Χϵͳ�ʽ�ת�ƻر�
	struct CTORATstpPeripheryTransferFundField
	{
		///�ʽ������ˮ��
		TTORATstpIntSerialType	FundSerial;
	
		///�ʽ����������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///�ʽ��������
		TTORATstpTransferDirectionType	TransferDirection;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///ת�ƽ��
		TTORATstpMoneyType	Amount;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ʽ����ԭ��
		TTORATstpTransferReasonType	TransferReason;
	
		///ת��״̬
		TTORATstpTransferStatusType	TransferStatus;
	
		///��������
		TTORATstpDateType	OperateDate;
	
		///����ʱ��
		TTORATstpTimeType	OperateTime;
	
		///��������
		TTORATstpDateType	RepealDate;
	
		///����ʱ��
		TTORATstpTimeType	RepealTime;
	
		///����ԭ��
		TTORATstpTransferReasonType	RepealReason;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};
	
	/// ��ѯ���н���ϵͳ�ʽ�����
	struct CTORATstpReqInquiryJZFundField
	{
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	};
	
	/// ��ѯ���н���ϵͳ�ʽ���Ӧ
	struct CTORATstpRspInquiryJZFundField
	{
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///���ý��
		TTORATstpMoneyType	UsefulMoney;
	
		///��ȡ���
		TTORATstpMoneyType	FetchLimit;
	
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	};
	
	/// ��ѯ�����˻��������
	struct CTORATstpReqInquiryBankAccountFundField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///���д���
		TTORATstpBankIDType	BankID;
	
		///��������
		TTORATstpPasswordType	BankPassword;
	};
	
	/// ��ѯ�����˻������Ӧ
	struct CTORATstpRspInquiryBankAccountFundField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///���д���
		TTORATstpBankIDType	BankID;
	
		///ǩԼ�����˻�
		TTORATstpBankAccountIDType	BankAccountID;
	
		///�˻����
		TTORATstpMoneyType	Balance;
	};
	
	/// ����֪ͨ
	struct CTORATstpTradingNoticeField
	{
		///֪ͨ��ˮ��
		TTORATstpIntSerialType	NoticeSerial;
	
		///֪ͨ����
		TTORATstpDateType	InsertDate;
	
		///֪ͨʱ��
		TTORATstpTimeType	InsertTime;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///֪ͨ��Ϣ����
		TTORATstpContentType	Content;
	
		///����Ա
		TTORATstpUserIDType	OperatorID;
	};
	
	/// ��ѯ��󱨵�������
	struct CTORATstpReqInquiryMaxOrderVolumeField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�����۸�����
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///��Ч������
		TTORATstpTimeConditionType	TimeCondition;
	
		///�ɽ�������
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///�۸�
		TTORATstpPriceType	LimitPrice;
	
		///�۹�ͨ������������
		TTORATstpLotTypeType	LotType;
	
		///���ί������
		TTORATstpVolumeType	MaxVolume;
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������������ר�ã�
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ�����ͣ�����ר�ã�
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	};
	
	/// ��ѯ��󱨵�����Ӧ
	struct CTORATstpRspInquiryMaxOrderVolumeField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�����۸�����
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///��Ч������
		TTORATstpTimeConditionType	TimeCondition;
	
		///�ɽ�������
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///�۸�
		TTORATstpPriceType	LimitPrice;
	
		///�۹�ͨ������������
		TTORATstpLotTypeType	LotType;
	
		///���ί������
		TTORATstpVolumeType	MaxVolume;
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������������ר�ã�
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ�����ͣ�����ר�ã�
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	};
	
	/// ���׳ɽ����ж�
	struct CTORATstpInquiryTradeConcentrationField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ���߳ɽ���/�ɽ�����
		TTORATstpRatioType	ConcentrationRatio1;
	
		///Ͷ���߳ɽ����/�ɽ��ܽ��
		TTORATstpRatioType	ConcentrationRatio2;
	};
	
	/// �����޸Ŀ��ֳɱ�
	struct CTORATstpReqModifyOpenPosCostField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///���ֳɱ�
		TTORATstpMoneyType	OpenPosCost;
	};
	
	/// ¼��ڵ��ʽ������Ϣ
	struct CTORATstpInputNodeFundAssignmentField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˺�
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ڵ���1
		TTORATstpNodeIDType	NodeID1;
	
		///�ʽ����1
		TTORATstpRatioType	AmtRatio1;
	
		///�ڵ���2
		TTORATstpNodeIDType	NodeID2;
	
		///�ʽ����2
		TTORATstpRatioType	AmtRatio2;
	
		///�ڵ���3
		TTORATstpNodeIDType	NodeID3;
	
		///�ʽ����3
		TTORATstpRatioType	AmtRatio3;
	
		///�ڵ���4
		TTORATstpNodeIDType	NodeID4;
	
		///�ʽ����4
		TTORATstpRatioType	AmtRatio4;
	
		///�ڵ���5
		TTORATstpNodeIDType	NodeID5;
	
		///�ʽ����5
		TTORATstpRatioType	AmtRatio5;
	};
	
	/// ��ѯ�ڵ��ʽ�����������
	struct CTORATstpReqInquiryNodeFundAssignmentField
	{
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˺�
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///�ڵ���
		TTORATstpNodeIDType	NodeID;
	
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	};
	
	/// ��ѯ�ڵ��ʽ���������Ӧ
	struct CTORATstpRspInquiryNodeFundAssignmentField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˺�
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ڵ���1
		TTORATstpNodeIDType	NodeID1;
	
		///�ʽ����1
		TTORATstpRatioType	AmtRatio1;
	
		///�ڵ���2
		TTORATstpNodeIDType	NodeID2;
	
		///�ʽ����2
		TTORATstpRatioType	AmtRatio2;
	
		///�ڵ���3
		TTORATstpNodeIDType	NodeID3;
	
		///�ʽ����3
		TTORATstpRatioType	AmtRatio3;
	
		///�ڵ���4
		TTORATstpNodeIDType	NodeID4;
	
		///�ʽ����4
		TTORATstpRatioType	AmtRatio4;
	
		///�ڵ���5
		TTORATstpNodeIDType	NodeID5;
	
		///�ʽ����5
		TTORATstpRatioType	AmtRatio5;
	};
	
	/// ��ѯ������
	struct CTORATstpQryExchangeField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	};
	
	/// ������
	struct CTORATstpExchangeField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///����������
		TTORATstpNameType	ExchangeName;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///����ͬ��״̬
		TTORATstpDataSyncStatusType	DataSyncStatus;
	};
	
	/// ��ѯ֤ȯ��Ϣ
	struct CTORATstpQrySecurityField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��Ʒ����
		TTORATstpProductIDType	ProductID;
	};
	
	/// ֤ȯ��Ϣ
	struct CTORATstpSecurityField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///֤ȯ����(��)
		TTORATstpSecurityNameType	ShortSecurityName;
	
		///����֤ȯ����
		TTORATstpSecurityIDType	UnderlyingSecurityID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///��Ʒ����
		TTORATstpProductIDType	ProductID;
	
		///֤ȯ���
		TTORATstpSecurityTypeType	SecurityType;
	
		///�걨��λ
		TTORATstpOrderUnitType	OrderUnit;
	
		///�޼����뽻�׵�λ
		TTORATstpTradingUnitType	LimitBuyTradingUnit;
	
		///�޼۵�������µ���
		TTORATstpVolumeType	MaxLimitOrderBuyVolume;
	
		///�޼۵�����С�µ���
		TTORATstpVolumeType	MinLimitOrderBuyVolume;
	
		///�޼��������׵�λ
		TTORATstpTradingUnitType	LimitSellTradingUnit;
	
		///�޼۵�������µ���
		TTORATstpVolumeType	MaxLimitOrderSellVolume;
	
		///�޼۵�����С�µ���
		TTORATstpVolumeType	MinLimitOrderSellVolume;
	
		///�м����뽻�׵�λ
		TTORATstpTradingUnitType	MarketBuyTradingUnit;
	
		///�м۵�������µ���
		TTORATstpVolumeType	MaxMarketOrderBuyVolume;
	
		///�м۵�����С�µ���
		TTORATstpVolumeType	MinMarketOrderBuyVolume;
	
		///�м��������׵�λ
		TTORATstpTradingUnitType	MarketSellTradingUnit;
	
		///�м۵�������µ���
		TTORATstpVolumeType	MaxMarketOrderSellVolume;
	
		///�м۵�����С�µ���
		TTORATstpVolumeType	MinMarketOrderSellVolume;
	
		///�̺󶨼����뽻�׵�λ
		TTORATstpTradingUnitType	FixPriceBuyTradingUnit;
	
		///�̺󶨼�������µ���
		TTORATstpVolumeType	MaxFixPriceOrderBuyVolume;
	
		///�̺󶨼�����С�µ���
		TTORATstpVolumeType	MinFixPriceOrderBuyVolume;
	
		///�̺󶨼��������׵�λ
		TTORATstpTradingUnitType	FixPriceSellTradingUnit;
	
		///�̺󶨼�������µ���
		TTORATstpVolumeType	MaxFixPriceOrderSellVolume;
	
		///�̺󶨼�����С�µ���
		TTORATstpVolumeType	MinFixPriceOrderSellVolume;
	
		///��������
		TTORATstpVolumeMultipleType	VolumeMultiple;
	
		///��С�䶯��λ
		TTORATstpPriceTickType	PriceTick;
	
		///������
		TTORATstpDateType	OpenDate;
	
		///��ֵ
		TTORATstpParValueType	ParValue;
	
		///֤ȯ״̬
		TTORATstpSecurityStatusType	SecurityStatus;
	
		///ծȯӦ����Ϣ
		TTORATstpInterestType	BondInterest;
	
		///������
		TTORATstpRatioType	ConversionRate;
	
		///�ܹɱ�
		TTORATstpLargeVolumeType	TotalEquity;
	
		///��ͨ�ɱ�
		TTORATstpLargeVolumeType	CirculationEquity;
	
		///�Ƿ������ǵ�ͣ���
		TTORATstpBoolType	bPriceLimit;
	
		///�����̼�
		TTORATstpPriceType	PreClosePrice;
	
		///��ͣ���
		TTORATstpPriceType	UpperLimitPrice;
	
		///��ͣ���
		TTORATstpPriceType	LowerLimitPrice;
	};
	
	/// ��ѯ�¹���Ϣ
	struct CTORATstpQryIPOInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�깺����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// �¹���Ϣ
	struct CTORATstpIPOInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�깺����
		TTORATstpSecurityIDType	SecurityID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///��Ʒ����
		TTORATstpProductIDType	ProductID;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///��С�깺�۸�
		TTORATstpPriceType	MinPrice;
	
		///���ִ���
		TTORATstpCurrencyIDType	CurrencyID;
	
		///�깺֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///�¹�֤ȯ����
		TTORATstpSecurityIDType	UnderlyingSecurityID;
	
		///�¹�֤ȯ����
		TTORATstpSecurityNameType	UnderlyingSecurityName;
	
		///�����깺��С����
		TTORATstpVolumeType	MinVolume;
	
		///�����깺�������
		TTORATstpVolumeType	MaxVolume;
	
		///�����깺��λ����
		TTORATstpVolumeType	VolumeUnit;
	
		///���з�ʽ
		TTORATstpIssueModeType	IssueMode;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///����깺�۸�
		TTORATstpPriceType	MaxPrice;
	};
	
	/// ��ѯ�û�
	struct CTORATstpQryUserField
	{
		///�û�����
		TTORATstpUserIDType	UserID;
	
		///�û�����
		TTORATstpUserTypeType	UserType;
	};
	
	/// �û�
	struct CTORATstpUserField
	{
		///�û�����
		TTORATstpUserIDType	UserID;
	
		///�û�����
		TTORATstpUserNameType	UserName;
	
		///�û�����
		TTORATstpUserTypeType	UserType;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///��¼������
		TTORATstpLoginLimitType	LoginLimit;
	
		///��¼״̬
		TTORATstpLoginStatusType	LoginStatus;
	
		///��������
		TTORATstpDateType	OpenDate;
	
		///��������
		TTORATstpDateType	CloseDate;
	
		///��������
		TTORATstpCommFluxType	OrderInsertCommFlux;
	
		///��������
		TTORATstpCommFluxType	OrderActionCommFlux;
	};
	
	/// ��ѯͶ����
	struct CTORATstpQryInvestorField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	};
	
	/// Ͷ����
	struct CTORATstpInvestorField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ��������
		TTORATstpInvestorTypeType	InvestorType;
	
		///Ͷ��������
		TTORATstpInvestorNameType	InvestorName;
	
		///֤������
		TTORATstpIdCardTypeType	IdCardType;
	
		///֤������
		TTORATstpIdCardNoType	IdCardNo;
	
		///��������
		TTORATstpDateType	OpenDate;
	
		///��������
		TTORATstpDateType	CloseDate;
	
		///����״̬
		TTORATstpTradingStatusType	TradingStatus;
	
		///ί�з�ʽ
		TTORATstpOperwaysType	Operways;
	
		///�ֻ�
		TTORATstpMobileType	Mobile;
	
		///��ϵ�绰
		TTORATstpTelephoneType	Telephone;
	
		///�����ʼ�
		TTORATstpEmailType	Email;
	
		///����
		TTORATstpFaxType	Fax;
	
		///ͨѶ��ַ
		TTORATstpAddressType	Address;
	
		///��������
		TTORATstpZipCodeType	ZipCode;
	
		///רҵͶ�������
		TTORATstpProfInvestorTypeType	ProfInvestorType;
	
		///�ײ�����(����ר��)
		TTORATstpPlanTypeType	PlanType;
	
		///�Ƿ�����Ͷ���������ײ�(����ר��)
		TTORATstpBoolType	AllowSelfSwitchPlan;
	
		///��ע
		TTORATstpRemarkType	Remark;
	};
	
	/// ��ѯ���׹ɶ��˻�
	struct CTORATstpQryShareholderAccountField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ��˻��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDTypeType	ShareholderIDType;
	};
	
	/// ���׹ɶ��˻�
	struct CTORATstpShareholderAccountField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�ͻ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDTypeType	ShareholderIDType;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///��ͨ�������������Ʊ�־(����ר��)
		TTORATstpBoolType	BSWhiteListCtl;
	
		///���˻���ʶ
		TTORATstpBoolType	MainFlag;
	};
	
	/// ��ѯ�����ծ��Ϣ
	struct CTORATstpQryRationalInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�����ծ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// �����ծ��Ϣ
	struct CTORATstpRationalInfoField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�깺����
		TTORATstpSecurityIDType	SecurityID;
	
		///�����ծ�۸�
		TTORATstpPriceType	Price;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///֤ȯƷ�ִ���
		TTORATstpProductIDType	ProductID;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///�������
		TTORATstpSecurityNameType	SecurityName;
	
		///����֤ȯ����
		TTORATstpSecurityIDType	UnderlyingSecurityID;
	
		///����֤ȯ����
		TTORATstpSecurityNameType	UnderlyingSecurityName;
	
		///�����ծ��С����
		TTORATstpVolumeType	MinVolume;
	
		///�����ծ�������
		TTORATstpVolumeType	MaxVolume;
	
		///�����ծ��λ����
		TTORATstpVolumeType	VolumeUnit;
	};
	
	/// ��ѯ����
	struct CTORATstpQryOrderField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///Insert Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Insert Time
		TTORATstpTimeType	InsertTimeEnd;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///�Ƿ�ɳ�
		TTORATstpBoolType	IsCancel;
	};
	
	/// ��ѯ����
	struct CTORATstpQryOrderActionField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///���ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///���س������
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// ����
	struct CTORATstpOrderActionField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��������ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///���������Ự���
		TTORATstpSessionIDType	SessionID;
	
		///������������
		TTORATstpOrderRefType	OrderRef;
	
		///��������ϵͳ���
		TTORATstpOrderSysIDType	OrderSysID;
	
		///������־
		TTORATstpActionFlagType	ActionFlag;
	
		///���س������
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�����������ر��
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///�����û�
		TTORATstpUserIDType	ActionUser;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///��������
		TTORATstpDateType	ActionDate;
	
		///����ʱ��
		TTORATstpTimeType	ActionTime;
	
		///����״̬
		TTORATstpCancelOrderStatusType	CancelOrderStatus;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///������
		TTORATstpRequestIDType	RequestID;
	
		///����ǰ�ñ��
		TTORATstpFrontIDType	ActionFrontID;
	
		///�����Ự���
		TTORATstpSessionIDType	ActionSessionID;
	
		///��������
		TTORATstpOrderRefType	OrderActionRef;
	
		///���س���ϵͳ���
		TTORATstpOrderSysIDType	CancelOrderSysID;
	
		///��������
		TTORATstpCancelOrderTypeType	CancelOrderType;
	
		///���׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	};
	
	/// ��ѯ�ɽ�
	struct CTORATstpQryTradeField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�ɽ����
		TTORATstpTradeIDType	TradeID;
	
		///Insert Time
		TTORATstpTimeType	TradeTimeStart;
	
		///Insert Time
		TTORATstpTimeType	TradeTimeEnd;
	};
	
	/// ��ѯ�ʽ��˻�
	struct CTORATstpQryTradingAccountField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///�ʽ��˻�����
		TTORATstpAccountTypeType	AccountType;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	};
	
	/// �ʽ��˻�
	struct CTORATstpTradingAccountField
	{
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///���ִ���
		TTORATstpCurrencyIDType	CurrencyID;
	
		///���ս��
		TTORATstpMoneyType	PreDeposit;
	
		///�����ʽ�
		TTORATstpMoneyType	UsefulMoney;
	
		///��ȡ�ʽ�
		TTORATstpMoneyType	FetchLimit;
	
		///����δ���ս��(�۹�ͨר���ֶ�)
		TTORATstpMoneyType	PreUnDeliveredMoney;
	
		///����δ���ս��(�۹�ͨר���ֶ�)
		TTORATstpMoneyType	UnDeliveredMoney;
	
		///���������
		TTORATstpMoneyType	Deposit;
	
		///���ճ�����
		TTORATstpMoneyType	Withdraw;
	
		///������ʽ�(�۹�ͨ���ֶβ�����δ���ղ��ֶ����ʽ�)
		TTORATstpMoneyType	FrozenCash;
	
		///����δ���ս��(�۹�ͨר��)
		TTORATstpMoneyType	UnDeliveredFrozenCash;
	
		///�����������(�۹�ͨ���ֶβ�����δ���ղ��ֶ���������)
		TTORATstpMoneyType	FrozenCommission;
	
		///����δ����������(�۹�ͨר��)
		TTORATstpMoneyType	UnDeliveredFrozenCommission;
	
		///������(�۹�ͨ���ֶβ�����δ���ղ���������)
		TTORATstpMoneyType	Commission;
	
		///ռ��δ����������(�۹�ͨר��)
		TTORATstpMoneyType	UnDeliveredCommission;
	
		///�ʽ��˻�����
		TTORATstpAccountTypeType	AccountType;
	
		///�ʽ��˻�����Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///���д���
		TTORATstpBankIDType	BankID;
	
		///�����˻�
		TTORATstpBankAccountIDType	BankAccountID;
	
		///Ȩ��������(����ר��)
		TTORATstpMoneyType	RoyaltyIn;
	
		///Ȩ����֧��(����ר��)
		TTORATstpMoneyType	RoyaltyOut;
	
		///��ȯ�������(����ר��)
		TTORATstpMoneyType	CreditSellAmount;
	
		///��ȯ����ʹ�ý��(���ڳ������ʸ�ծ��������Ʒ�ֵĽ��)(����ר��)
		TTORATstpMoneyType	CreditSellUseAmount;
	
		///�����ʲ�(����ר��)
		TTORATstpMoneyType	VirtualAssets;
	
		///��ȯ��������(���ڳ������ʸ�ծ��������Ʒ�ֵ�δ�ɽ�������)(����ר��)
		TTORATstpMoneyType	CreditSellFrozenAmount;
	
		///������Ԫ
		TTORATstpBusinessUnitIDType	OwnerUnit;
	};
	
	/// ��ѯͶ���ֲ߳�
	struct CTORATstpQryPositionField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	};
	
	/// Ͷ���ֲ߳�
	struct CTORATstpPositionField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///���
		TTORATstpVolumeType	HistoryPos;
	
		///��ֶ���
		TTORATstpVolumeType	HistoryPosFrozen;
	
		///��������
		TTORATstpVolumeType	TodayBSPos;
	
		///�������ֶ���
		TTORATstpVolumeType	TodayBSPosFrozen;
	
		///��������ֲ�
		TTORATstpVolumeType	TodayPRPos;
	
		///��������ֲֶ���
		TTORATstpVolumeType	TodayPRPosFrozen;
	
		///���ֺϲ��ֲ�
		TTORATstpVolumeType	TodaySMPos;
	
		///���ֺϲ��ֲֶ���
		TTORATstpVolumeType	TodaySMPosFrozen;
	
		///��ֳɱ���
		TTORATstpPriceType	HistoryPosPrice;
	
		///�ֲֳɱ�
		TTORATstpMoneyType	TotalPosCost;
	
		///�ϴ����(���в���)
		TTORATstpVolumeType	PrePosition;
	
		///�ɷݿ���
		TTORATstpVolumeType	AvailablePosition;
	
		///�ɷ����
		TTORATstpVolumeType	CurrentPosition;
	
		///���ֳɱ�
		TTORATstpMoneyType	OpenPosCost;
	
		///���ʲ�λ(����ר��)
		TTORATstpVolumeType	CreditBuyPos;
	
		///��ȯ��λ(����ר��)
		TTORATstpVolumeType	CreditSellPos;
	
		///������ȯ��λ(����ר��)
		TTORATstpVolumeType	TodayCreditSellPos;
	
		///������λ(����ר��)
		TTORATstpVolumeType	CollateralOutPos;
	
		///��ȯδ�ɽ�����(����ר��)
		TTORATstpVolumeType	RepayUntradeVolume;
	
		///ֱ�ӻ�ȯδ�ɽ�����(����ר��)
		TTORATstpVolumeType	RepayTransferUntradeVolume;
	
		///����Ʒ����δ�ɽ����(����ר��)
		TTORATstpMoneyType	CollateralBuyUntradeAmount;
	
		///����Ʒ����δ�ɽ�����(����ר��)
		TTORATstpVolumeType	CollateralBuyUntradeVolume;
	
		///����������(�������׷���)(����ר��)
		TTORATstpMoneyType	CreditBuyAmount;
	
		///��������δ�ɽ����(�������׷���)(����ר��)
		TTORATstpMoneyType	CreditBuyUntradeAmount;
	
		///���ʶ��ᱣ֤��(����ר��)
		TTORATstpMoneyType	CreditBuyFrozenMargin;
	
		///����������Ϣ(����ר��)
		TTORATstpMoneyType	CreditBuyInterestFee;
	
		///��������δ�ɽ�����(����ר��)
		TTORATstpVolumeType	CreditBuyUntradeVolume;
	
		///��ȯ�������(�Գɽ��ۼ���)(����ר��)
		TTORATstpMoneyType	CreditSellAmount;
	
		///��ȯ����δ�ɽ����(����ר��)
		TTORATstpMoneyType	CreditSellUntradeAmount;
	
		///��ȯ���ᱣ֤��(����ר��)
		TTORATstpMoneyType	CreditSellFrozenMargin;
	
		///��ȯ����Ϣ��(����ר��)
		TTORATstpMoneyType	CreditSellInterestFee;
	
		///��ȯ����δ�ɽ�����(����ר��)
		TTORATstpVolumeType	CreditSellUntradeVolume;
	
		///������ղ�(����ר��)
		TTORATstpVolumeType	CollateralInPos;
	
		///�����������ᱣ֤��(����ר��)
		TTORATstpMoneyType	CreditBuyFrozenCirculateMargin;
	
		///��ȯ�������ᱣ֤��(����ר��)
		TTORATstpMoneyType	CreditSellFrozenCirculateMargin;
	
		///�ۼ�ƽ��ӯ��(����ר��)
		TTORATstpMoneyType	CloseProfit;
	
		///�����ۼƿ�������
		TTORATstpVolumeType	TodayTotalOpenVolume;
	
		///��������
		TTORATstpMoneyType	TodayCommission;
	
		///�����ۼ�������
		TTORATstpMoneyType	TodayTotalBuyAmount;
	
		///�����ۼ��������
		TTORATstpMoneyType	TodayTotalSellAmount;
	
		///���ն���(���в���)
		TTORATstpVolumeType	PreFrozen;
	};
	
	/// ��ѯ�������׷���
	struct CTORATstpQryTradingFeeField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	};
	
	/// �������׷���
	struct CTORATstpTradingFeeField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��Ʒ����
		TTORATstpProductIDType	ProductID;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///ҵ�����
		TTORATstpBizClassType	BizClass;
	
		///ӡ��˰(�۹�ӡ��˰)�������ȡ����
		TTORATstpRatioType	StampTaxRatioByAmt;
	
		///ӡ��˰(�۹�ӡ��˰)����ֵ��ȡ����
		TTORATstpRatioType	StampTaxRatioByPar;
	
		///ӡ��˰(�۹�ӡ��˰,��λ�۱�)������ȡ���
		TTORATstpMoneyType	StampTaxFeePerOrder;
	
		///ӡ��˰(�۹�ӡ��˰,��λ�۱�)��������ȡ���
		TTORATstpMoneyType	StampTaxFeeByVolume;
	
		///ӡ��˰(�۹�ӡ��˰,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	StampTaxFeeMin;
	
		///ӡ��˰(�۹�ӡ��˰,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	StampTaxFeeMax;
	
		///������(�۹�֤ȯ��Ϸ�)�������ȡ����
		TTORATstpRatioType	TransferRatioByAmt;
	
		///������(�۹�֤ȯ��Ϸ�)����ֵ��ȡ����
		TTORATstpRatioType	TransferRatioByPar;
	
		///������(�۹�֤ȯ��Ϸ�,��λ�۱�)������ȡ���
		TTORATstpMoneyType	TransferFeePerOrder;
	
		///������(�۹�֤ȯ��Ϸ�,��λ�۱�)��������ȡ���
		TTORATstpMoneyType	TransferFeeByVolume;
	
		///������(�۹�֤ȯ��Ϸ�,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	TransferFeeMin;
	
		///������(�۹�֤ȯ��Ϸ�,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	TransferFeeMax;
	
		///���ַ�(�۹ɽ��׷�)�������ȡ����
		TTORATstpRatioType	HandlingRatioByAmt;
	
		///���ַ�(�۹ɽ��׷�)����ֵ��ȡ����
		TTORATstpRatioType	HandlingRatioByPar;
	
		///���ַ�(�۹ɽ��׷�,��λ�۱�)������ȡ���
		TTORATstpMoneyType	HandlingFeePerOrder;
	
		///���ַ�(�۹ɽ��׷�,��λ�۱�)��������ȡ���
		TTORATstpMoneyType	HandlingFeeByVolume;
	
		///���ַ�(�۹ɽ��׷�,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	HandlingFeeMin;
	
		///���ַ�(�۹ɽ��׷�,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	HandlingFeeMax;
	
		///֤�ܷ�(�۹ɽ�������)�������ȡ����
		TTORATstpRatioType	RegulateRatioByAmt;
	
		///֤�ܷ�(�۹ɽ�������)����ֵ��ȡ����
		TTORATstpRatioType	RegulateRatioByPar;
	
		///֤�ܷ�(�۹ɽ�������,��λ�۱�)������ȡ���
		TTORATstpMoneyType	RegulateFeePerOrder;
	
		///֤�ܷ�(�۹ɽ�������,��λ�۱�)��������ȡ���
		TTORATstpMoneyType	RegulateFeeByVolume;
	
		///֤�ܷ�(�۹ɽ�������,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	RegulateFeeMin;
	
		///֤�ܷ�(�۹ɽ�������,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	RegulateFeeMax;
	
		///�����(�۹ɹɷݽ��շ�)�������ȡ����
		TTORATstpRatioType	SettlementRatioByAmt;
	
		///�����(�۹ɹɷݽ��շ�)����ֵ��ȡ����
		TTORATstpRatioType	SettlementRatioByPar;
	
		///�����(�۹ɹɷݽ��շ�,��λ�۱�)������ȡ���
		TTORATstpMoneyType	SettlementFeePerOrder;
	
		///�����(�۹ɹɷݽ��շ�,��λ�۱�)��������ȡ���
		TTORATstpMoneyType	SettlementFeeByVolume;
	
		///�����(�۹ɹɷݽ��շ�,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	SettlementFeeMin;
	
		///�����(�۹ɹɷݽ��շ�,��λ�۱�)�����ȡ���
		TTORATstpMoneyType	SettlementFeeMax;
	};
	
	/// ��ѯӶ�����
	struct CTORATstpQryInvestorTradingFeeField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	};
	
	/// Ӷ�����
	struct CTORATstpInvestorTradingFeeField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��Ʒ����
		TTORATstpProductIDType	ProductID;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///��Լ����
		TTORATstpSecurityIDType	SecurityID;
	
		///ҵ�����
		TTORATstpBizClassType	BizClass;
	
		///Ӷ������
		TTORATstpBrokerageTypeType	BrokerageType;
	
		///Ӷ�𰴽����ȡ����
		TTORATstpRatioType	RatioByAmt;
	
		///Ӷ����ֵ��ȡ����
		TTORATstpRatioType	RatioByPar;
	
		///Ӷ�𰴱���ȡ���
		TTORATstpMoneyType	FeePerOrder;
	
		///Ӷ�������ȡ���
		TTORATstpMoneyType	FeeMin;
	
		///Ӷ�������ȡ���
		TTORATstpMoneyType	FeeMax;
	
		///Ӷ��������ȡ���
		TTORATstpMoneyType	FeeByVolume;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///��������
		TTORATstpOrderTypeType	OrderType;
	};
	
	/// ��ѯ�¹��깺���
	struct CTORATstpQryIPOQuotaField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	};
	
	/// �¹��깺���
	struct CTORATstpIPOQuotaField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ͻ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///���깺���
		TTORATstpLongVolumeType	MaxVolume;
	
		///�ƴ�����깺���
		TTORATstpLongVolumeType	KCMaxVolume;
	};
	
	/// ��ѯ������ϸ�ʽ�
	struct CTORATstpQryOrderFundDetailField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	};
	
	/// ������ϸ�ʽ�
	struct CTORATstpOrderFundDetailField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///���׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///���ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///�������
		TTORATstpMoneyType	OrderAmount;
	
		///�ɽ����
		TTORATstpMoneyType	Turnover;
	
		///ӡ��˰(�۹�Ϊӡ��˰)
		TTORATstpMoneyType	StampTaxFee;
	
		///���ַ�(�۹�Ϊ���׷�)
		TTORATstpMoneyType	HandlingFee;
	
		///������(�۹�Ϊ֤ȯ��Ϸ�)
		TTORATstpMoneyType	TransferFee;
	
		///֤�ܷ�(�۹�Ϊ��������)
		TTORATstpMoneyType	RegulateFee;
	
		///�����(�۹�Ϊ�ɷݽ��շ�)
		TTORATstpMoneyType	SettlementFee;
	
		///Ӷ��
		TTORATstpMoneyType	BrokerageFee;
	
		///�ܷ���
		TTORATstpMoneyType	TotalFee;
	
		///������ʼ������
		TTORATstpMoneyType	OrderCashFrozen;
	
		///Ԥ�������ֽ�
		TTORATstpMoneyType	EstimateCashFrozen;
	
		///��ʼ�����ܷ���
		TTORATstpMoneyType	TotalFeeFrozen;
	
		///��ʼ������ϼ�
		TTORATstpMoneyType	TotalFrozen;
	
		///��֤��(����ר��)
		TTORATstpMoneyType	Margin;
	
		///�������(����ר��)
		TTORATstpMoneyType	RepayAmount;
	
		///��������(����ר��)
		TTORATstpVolumeType	RepayVolume;
	
		///��ʼ���ᱣ֤��(����ר��)
		TTORATstpMoneyType	MarginFrozen;
	
		///��ʼ����������֤��(����ר��)
		TTORATstpMoneyType	CirculateMarginFrozen;
	};
	
	/// ��ѯ�ʽ�ת����ˮ
	struct CTORATstpQryFundTransferDetailField
	{
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///ת�Ʒ���
		TTORATstpTransferDirectionType	TransferDirection;
	};
	
	/// �ʽ�ת����ˮ
	struct CTORATstpFundTransferDetailField
	{
		///ת����ˮ��
		TTORATstpIntSerialType	FundSerial;
	
		///������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///ת�Ʒ���
		TTORATstpTransferDirectionType	TransferDirection;
	
		///�������
		TTORATstpMoneyType	Amount;
	
		///ת��״̬
		TTORATstpTransferStatusType	TransferStatus;
	
		///������Դ
		TTORATstpOperateSourceType	OperateSource;
	
		///������Ա
		TTORATstpUserIDType	OperatorID;
	
		///��������
		TTORATstpDateType	OperateDate;
	
		///����ʱ��
		TTORATstpTimeType	OperateTime;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///���д���
		TTORATstpBankIDType	BankID;
	
		///ǩԼ�����˻�
		TTORATstpBankAccountIDType	BankAccountID;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ⲿ��ˮ��
		TTORATstpExternalSerialType	ExternalSerial;
	
		///�ⲿϵͳ�ڵ��
		TTORATstpNodeIDType	ExternalNodeID;
	
		///ǿƽԭ��(����ר��)
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///(ֱ�ӻ�����)ָ������ʱ�ĸ�ծ���(����ר��)
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///ҵ����
		TTORATstpBizRefType	BizRef;
	
		///����������
		TTORATstpExchangeIDType	ExchangeRef;
	};
	
	/// ��ѯ�ֲ�ת����ˮ
	struct CTORATstpQryPositionTransferDetailField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///ת�Ʒ���
		TTORATstpTransferDirectionType	TransferDirection;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};
	
	/// �ֲ�ת����ˮ
	struct CTORATstpPositionTransferDetailField
	{
		///��ˮ��
		TTORATstpIntSerialType	PositionSerial;
	
		///������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�����˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��������
		TTORATstpDateType	TradingDay;
	
		///ת�Ʒ���
		TTORATstpTransferDirectionType	TransferDirection;
	
		///ת�Ƴֲ�����
		TTORATstpTransferPositionTypeType	TransferPositionType;
	
		///ת��״̬
		TTORATstpTransferStatusType	TransferStatus;
	
		///���ղ�λ����
		TTORATstpVolumeType	HistoryVolume;
	
		///����������λ����
		TTORATstpVolumeType	TodayBSVolume;
	
		///���������λ����
		TTORATstpVolumeType	TodayPRVolume;
	
		///���ղ�ֺϲ���λ����
		TTORATstpVolumeType	TodaySMVolume;
	
		///������Ա
		TTORATstpUserIDType	OperatorID;
	
		///��������
		TTORATstpDateType	OperateDate;
	
		///����ʱ��
		TTORATstpTimeType	OperateTime;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///�ⲿ�ڵ���
		TTORATstpNodeIDType	ExternalNodeID;
	};
	
	/// ��ѯ��Χϵͳ��λ������ˮ
	struct CTORATstpQryPeripheryPositionTransferDetailField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��λ��������
		TTORATstpTransferDirectionType	TransferDirection;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};
	
	/// ��Χϵͳ��λ������ˮ
	struct CTORATstpPeripheryPositionTransferDetailField
	{
		///��λ����ϵͳ��ˮ��
		TTORATstpIntSerialType	PositionSerial;
	
		///��λ����������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///��λ��������
		TTORATstpTransferDirectionType	TransferDirection;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ֻ�ϵͳͶ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ֻ�ϵͳͶ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ֻ�ϵͳ�����˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������λת��ת������
		TTORATstpVolumeType	TodayBSPos;
	
		///���������λת������
		TTORATstpVolumeType	TodayPRPos;
	
		///���ղ�ֺϲ���λת������
		TTORATstpVolumeType	TodaySMPos;
	
		///���ղ�λת������
		TTORATstpVolumeType	HistoryPos;
	
		///��������
		TTORATstpDateType	TradingDay;
	
		///��λ����ԭ��
		TTORATstpTransferReasonType	TransferReason;
	
		///ת��״̬
		TTORATstpTransferStatusType	TransferStatus;
	
		///��������
		TTORATstpDateType	OperateDate;
	
		///����ʱ��
		TTORATstpTimeType	OperateTime;
	
		///��������
		TTORATstpDateType	RepealDate;
	
		///����ʱ��
		TTORATstpTimeType	RepealTime;
	
		///����ԭ��
		TTORATstpTransferReasonType	RepealReason;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	};
	
	/// ��ѯ��Χϵͳ�ʽ�ת����ˮ
	struct CTORATstpQryPeripheryFundTransferDetailField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///�ʽ��������
		TTORATstpTransferDirectionType	TransferDirection;
	};
	
	/// ��Χϵͳ�ʽ�ת����ˮ
	struct CTORATstpPeripheryFundTransferDetailField
	{
		///ת����ˮ��
		TTORATstpIntSerialType	FundSerial;
	
		///������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///ת�Ʒ���
		TTORATstpTransferDirectionType	TransferDirection;
	
		///�������
		TTORATstpMoneyType	Amount;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///ת��״̬
		TTORATstpTransferStatusType	TransferStatus;
	
		///�ʽ����ԭ��
		TTORATstpTransferReasonType	TransferReason;
	
		///��������
		TTORATstpDateType	OperateDate;
	
		///����ʱ��
		TTORATstpTimeType	OperateTime;
	
		///��������
		TTORATstpDateType	RepealDate;
	
		///����ʱ��
		TTORATstpTimeType	RepealTime;
	
		///����ԭ��
		TTORATstpTransferReasonType	RepealReason;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};
	
	/// ��ѯծȯת����Ϣ
	struct CTORATstpQryBondConversionInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// ծȯת����Ϣ
	struct CTORATstpBondConversionInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///ת���걨����
		TTORATstpSecurityIDType	ConvertOrderID;
	
		///ת�ɼ۸�
		TTORATstpPriceType	ConvertPrice;
	
		///ÿ�ο���ת����С���׵�λ
		TTORATstpTradingUnitType	ConvertVolUnit;
	
		///֤ȯ����ת�ɵ��������
		TTORATstpVolumeType	ConvertVolMax;
	
		///֤ȯ����ת�ɵ���С����
		TTORATstpVolumeType	ConvertVolMin;
	
		///ת�ɿ�ʼ����
		TTORATstpDateType	BeginDate;
	
		///ת�ɽ�������
		TTORATstpDateType	EndDate;
	
		///ת������
		TTORATstpSecurityNameType	ConvertName;
	};
	
	/// ��ѯծȯ������Ϣ
	struct CTORATstpQryBondPutbackInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// ծȯ������Ϣ
	struct CTORATstpBondPutbackInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�����걨����
		TTORATstpSecurityIDType	PutbackOrderID;
	
		///��������
		TTORATstpSecurityNameType	PutbackName;
	
		///���ۼ۸�
		TTORATstpPriceType	PutbackPrice;
	
		///ÿ�ο��Ի�����С���׵�λ
		TTORATstpTradingUnitType	PutbackVolUnit;
	
		///ծȯ���Ի��۵��������
		TTORATstpVolumeType	PutbackVolMax;
	
		///ծȯ���Ի��۵���С����
		TTORATstpVolumeType	PutbackVolMin;
	
		///���ۿ�ʼ����
		TTORATstpDateType	PutbackBeginDate;
	
		///���۽�������
		TTORATstpDateType	PutbackEndDate;
	
		///���۳�����ʼ����
		TTORATstpDateType	RelieveBeginDate;
	
		///���۳�����������
		TTORATstpDateType	RelieveEndDate;
	};
	
	/// ��ѯͶ�������������Ʋ���
	struct CTORATstpQryInvestorCondOrderLimitParamField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	};
	
	/// Ͷ�������������Ʋ���
	struct CTORATstpInvestorCondOrderLimitParamField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�����������
		TTORATstpVolumeType	MaxCondOrderLimitCnt;
	
		///��ǰ��������
		TTORATstpVolumeType	CurrCondOrderCnt;
	};
	
	/// ��ѯ������
	struct CTORATstpQryConditionOrderField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�������
		TTORATstpCondOrderIDType	CondOrderID;
	
		///Insert Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Insert Time
		TTORATstpTimeType	InsertTimeEnd;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// ��ѯ����������
	struct CTORATstpQryCondOrderActionField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�������������
		TTORATstpCondOrderIDType	CondOrderID;
	
		///�������������
		TTORATstpCondOrderIDType	CancelCondOrderID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// ����������
	struct CTORATstpCondOrderActionField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///����������ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�����������Ự���
		TTORATstpSessionIDType	SessionID;
	
		///��������������
		TTORATstpOrderRefType	CondOrderRef;
	
		///�������������
		TTORATstpCondOrderIDType	CondOrderID;
	
		///������־
		TTORATstpActionFlagType	ActionFlag;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///��������������
		TTORATstpOrderRefType	CondOrderActionRef;
	
		///�������������
		TTORATstpCondOrderIDType	CancelCondOrderID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///������
		TTORATstpRequestIDType	RequestID;
	
		///����ǰ�ñ��
		TTORATstpFrontIDType	ActionFrontID;
	
		///�����Ự���
		TTORATstpSessionIDType	ActionSessionID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�����û�
		TTORATstpUserIDType	ActionUser;
	
		///��������
		TTORATstpDateType	ActionDate;
	
		///����ʱ��
		TTORATstpTimeType	ActionTime;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	};
	
	/// ��ѯ����֪ͨ
	struct CTORATstpQryTradingNoticeField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Insert Date
		TTORATstpDateType	InsertDateStart;
	
		///Insert Date
		TTORATstpDateType	InsertDateEnd;
	
		///Insert Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Insert Time
		TTORATstpTimeType	InsertTimeEnd;
	};
	
	/// ��ѯ�¹��깺��Ž��
	struct CTORATstpQryIPONumberResultField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�깺����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�ɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	};
	
	/// �¹��깺��Ž��
	struct CTORATstpIPONumberResultField
	{
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///����
		TTORATstpDateType	Day;
	
		///�깺֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///��ʼ���
		TTORATstpIPONumberIDType	BeginNumberID;
	
		///�������
		TTORATstpVolumeType	Volume;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	};
	
	/// ��ѯ�¹��깺��ǩ���
	struct CTORATstpQryIPOMatchNumberResultField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�깺����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�ɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///��ǩ���
		TTORATstpIPONumberIDType	MatchNumberID;
	};
	
	/// �¹��깺��ǩ���
	struct CTORATstpIPOMatchNumberResultField
	{
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///��ǩ���
		TTORATstpIPONumberIDType	MatchNumberID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///����
		TTORATstpDateType	Day;
	
		///�깺֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///����ǩ��ӵ�е�֤ȯ����
		TTORATstpVolumeType	Volume;
	
		///�깺�۸�
		TTORATstpPriceType	Price;
	
		///�깺���
		TTORATstpMoneyType	Amout;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	};
	
	/// ��ѯ����Э��
	struct CTORATstpQryShareholderSpecPrivilegeField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///����Ȩ�����
		TTORATstpSpecPrivilegeTypeType	SpecPrivilegeType;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	};
	
	/// ����Э��
	struct CTORATstpShareholderSpecPrivilegeField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�����˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///����Ȩ�����
		TTORATstpSpecPrivilegeTypeType	SpecPrivilegeType;
	
		///�������
		TTORATstpDirectionType	Direction;
	
		///�Ƿ��ֹ
		TTORATstpBoolType	bForbidden;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	};
	
	/// ��ѯ�г�
	struct CTORATstpQryMarketField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	};
	
	/// �г�
	struct CTORATstpMarketField
	{
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�г�����
		TTORATstpNameType	MarketName;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�״̬
		TTORATstpMarketStatusType	MarketStatus;
	};
	
	/// ��ѯETF�嵥��Ϣ
	struct CTORATstpQryETFFileField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///ETF�����г����״���
		TTORATstpSecurityIDType	ETFSecurityID;
	
		///ETFһ���г��������
		TTORATstpSecurityIDType	ETFCreRedSecurityID;
	};
	
	/// ETF�嵥��Ϣ
	struct CTORATstpETFFileField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///ETF���״���
		TTORATstpSecurityIDType	ETFSecurityID;
	
		///ETF�������
		TTORATstpSecurityIDType	ETFCreRedSecurityID;
	
		///��С�깺��ص�λ����
		TTORATstpVolumeType	CreationRedemptionUnit;
	
		///����ֽ��������
		TTORATstpRatioType	Maxcashratio;
	
		///Ԥ���ֽ���
		TTORATstpMoneyType	EstimateCashComponent;
	
		///ǰһ�������ֽ���
		TTORATstpMoneyType	CashComponent;
	
		///ǰһ�����ջ���λ��ֵ
		TTORATstpMoneyType	NAV;
	
		///ǰһ�����������׼��λ��ֵ
		TTORATstpMoneyType	NAVperCU;
	
		///�����깺��ػ�׼��λ�ĺ������
		TTORATstpMoneyType	DividendPerCU;
	
		///ETF��������
		TTORATstpCreRedTypeType	ETFCreRedType;
	
		///ETF֤ȯ����
		TTORATstpSecurityNameType	ETFSecurityName;
	};
	
	/// ��ѯETF�ɷ�֤ȯ��Ϣ
	struct CTORATstpQryETFBasketField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///ETF�����г����״���
		TTORATstpSecurityIDType	ETFSecurityID;
	
		///ETF�ɷ�֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// ETF�ɷ�֤ȯ��Ϣ
	struct CTORATstpETFBasketField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///ETF���״���
		TTORATstpSecurityIDType	ETFSecurityID;
	
		///ETF�ɷ�֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ɷ�֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///�ɷ�֤ȯ����
		TTORATstpVolumeType	Volume;
	
		///�ֽ������־
		TTORATstpETFCurrenceReplaceStatusType	ETFCurrenceReplaceStatus;
	
		///��۱���
		TTORATstpRatioType	Premium;
	
		///�깺������
		TTORATstpMoneyType	CreationReplaceAmount;
	
		///���������
		TTORATstpMoneyType	RedemptionReplaceAmount;
	
		///�����г�
		TTORATstpMarketIDType	MarketID;
	
		///ETF��������
		TTORATstpCreRedTypeType	ETFCreRedType;
	};
	
	/// ��ѯͶ�����޲���Ϣ
	struct CTORATstpQryInvestorPositionLimitField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// Ͷ�����޲���Ϣ
	struct CTORATstpInvestorPositionLimitField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpVolumeType	BuyLimit;
	
		///��ʹ�õ���������
		TTORATstpVolumeType	BuyFrozen;
	
		///�����������
		TTORATstpVolumeType	SellLimit;
	
		///��ʹ�õ����������
		TTORATstpVolumeType	SellFrozen;
	
		///�����깺���
		TTORATstpVolumeType	PurchaseLimit;
	
		///��ʹ�õ����깺���
		TTORATstpVolumeType	PurchaseFrozen;
	
		///������ض��
		TTORATstpVolumeType	RedeemLimit;
	
		///��ʹ�õ�����ض��
		TTORATstpVolumeType	RedeemFrozen;
	
		///������Ѻ�����
		TTORATstpVolumeType	PledgeInLimit;
	
		///��ʹ�õ�����Ѻ�����
		TTORATstpVolumeType	PledgeInFrozen;
	
		///������Ѻ������
		TTORATstpVolumeType	PledgeOutLimit;
	
		///��ʹ�õ�����Ѻ������
		TTORATstpVolumeType	PledgeOutFrozen;
	
		///����ծת�ɶ��
		TTORATstpVolumeType	ConvertLimit;
	
		///��ʹ�õ���ծת�ɶ��
		TTORATstpVolumeType	ConvertFrozen;
	
		///����ծȯ���۶��
		TTORATstpVolumeType	PutbackLimit;
	
		///��ʹ�õ���ծȯ���۶��
		TTORATstpVolumeType	PutbackFrozen;
	
		///���������ծ���
		TTORATstpVolumeType	RationalLimit;
	
		///��ʹ�õ��������ծ���
		TTORATstpVolumeType	RationalFrozen;
	
		///�ֲֶܳ��
		TTORATstpVolumeType	TotalPositionLimit;
	
		///��ʹ���ֲֶܳ��
		TTORATstpVolumeType	TotalPositionFrozen;
	
		///���ղ�ֶ��
		TTORATstpVolumeType	SplitLimit;
	
		///��ʹ�õ��ղ�ֶ��
		TTORATstpVolumeType	SplitFrozen;
	
		///���պϲ����
		TTORATstpVolumeType	MergeLimit;
	
		///��ʹ�õ��պϲ����
		TTORATstpVolumeType	MergeFrozen;
	
		///ͨ��ͳһ����ʶ����
		TTORATstpUUPICType	UUPIC;
	};
	
	/// ��ѯ���ͨ�����г�����״̬��Ϣ
	struct CTORATstpQrySZSEImcParamsField
	{
		///�г�����
		TTORATstpMarketIDType	MarketID;
	};
	
	/// ���ͨ�����г�����״̬��Ϣ
	struct CTORATstpSZSEImcParamsField
	{
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�Ƿ񿪷�
		TTORATstpBoolType	OpenFlag;
	
		///��ʼ���
		TTORATstpMoneyType	ThresholdAmount;
	
		///����ʣ����
		TTORATstpMoneyType	PosAmt;
	
		///����Ƿ����
		TTORATstpBoolType	AmountStatus;
	};
	
	/// ��ѯ���ͨ�����г�����������Ϣ
	struct CTORATstpQrySZSEImcExchangeRateField
	{
		///Դ���ұ���
		TTORATstpCurrencyIDType	FromCurrency;
	
		///Ŀ����ұ���
		TTORATstpCurrencyIDType	ToCurrency;
	};
	
	/// ���ͨ�����г�����������Ϣ
	struct CTORATstpSZSEImcExchangeRateField
	{
		///Դ���ұ���
		TTORATstpCurrencyIDType	FromCurrency;
	
		///Ŀ����ұ���
		TTORATstpCurrencyIDType	ToCurrency;
	
		///�ο����������
		TTORATstpPriceType	BidRate;
	
		///�ο�����������
		TTORATstpPriceType	OfferRate;
	
		///�ο������м��
		TTORATstpPriceType	MidPointRate;
	};
	
	/// ��ѯ���ͨ��С�۲���Ϣ
	struct CTORATstpQrySZSEHKPriceTickInfoField
	{
		///�۲�Ʒ��
		TTORATstpPriceTickIDType	PriceTickID;
	};
	
	/// ���ͨ��С�۲���Ϣ
	struct CTORATstpSZSEHKPriceTickInfoField
	{
		///�۲�Ʒ��
		TTORATstpPriceTickIDType	PriceTickID;
	
		///�۲����
		TTORATstpPriceTickGroupIDType	PriceTickGroupID;
	
		///�۲����
		TTORATstpPriceTickTypeType	PriceTickType;
	
		///�۲�����ʼ�۸�
		TTORATstpPriceType	BeginPrice;
	
		///�۲�������۸�
		TTORATstpPriceType	EndPrice;
	
		///�۲�ֵ
		TTORATstpPriceType	PriceTick;
	};
	
	/// ��ѯLOF������Ϣ
	struct CTORATstpQryLofFundInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�������
		TTORATstpSecurityIDType	FundID;
	
		///���������
		TTORATstpSecurityIDType	MainFundID;
	};
	
	/// LOF������Ϣ
	struct CTORATstpLofFundInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�������
		TTORATstpSecurityIDType	FundID;
	
		///���������
		TTORATstpSecurityIDType	MainFundID;
	
		///��������
		TTORATstpFundTypeType	FundType;
	
		///���������λ
		TTORATstpVolumeType	SplitUnit;
	
		///��С�������
		TTORATstpVolumeType	SplitMinVol;
	
		///�ϲ�������λ
		TTORATstpVolumeType	MergeUnit;
	
		///��С�ϲ�����
		TTORATstpVolumeType	MergeMinVol;
	
		///����ת��ϵ��
		TTORATstpRatioType	FundRatio;
	};
	
	/// ��ѯͶ������Ѻ�ֲ�
	struct CTORATstpQryPledgePositionField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};
	
	/// Ͷ������Ѻ�ֲ�
	struct CTORATstpPledgePositionField
	{
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ͻ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///������Ѻ�ֲ�
		TTORATstpVolumeType	HisPledgePos;
	
		///������Ѻ�ֲֶ���
		TTORATstpVolumeType	HisPledgePosFrozen;
	
		///����������Ѻ�ֲ�
		TTORATstpVolumeType	TodayPledgePos;
	
		///����������Ѻ�ֲֶ���
		TTORATstpVolumeType	TodayPledgePosFrozen;
	
		///������Ѻ������ȯ����
		TTORATstpVolumeType	PreTotalPledgePos;
	
		///������Ѻ������ȯ��������
		TTORATstpVolumeType	PreAvailablePledgePos;
	};
	
	/// ��ѯ֤ȯ��Ѻ��Ϣ
	struct CTORATstpQryPledgeInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// ֤ȯ��Ѻ��Ϣ
	struct CTORATstpPledgeInfoField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��Ѻ�걨����
		TTORATstpSecurityIDType	PledgeOrderID;
	
		///��Ѻ����
		TTORATstpSecurityNameType	PledgeName;
	
		///��׼ȯ����
		TTORATstpSecurityIDType	StandardBondID;
	
		///��׼ȯ������/����ֵ
		TTORATstpRatioType	ConversionRate;
	
		///ÿ�ο���������С���׵�λ
		TTORATstpTradingUnitType	PledgeInTradingUnit;
	
		///ÿ�ο��Գ������С���׵�λ
		TTORATstpTradingUnitType	PledgeOutTradingUnit;
	
		///֤ȯ���������������
		TTORATstpVolumeType	PledgeInVolMax;
	
		///֤ȯ����������С����
		TTORATstpVolumeType	PledgeInVolMin;
	
		///֤ȯ���Գ�����������
		TTORATstpVolumeType	PledgeOutVolMax;
	
		///֤ȯ���Գ������С����
		TTORATstpVolumeType	PledgeOutVolMin;
	};
	
	/// ��ѯϵͳ�ڵ���Ϣ
	struct CTORATstpQrySystemNodeInfoField
	{
		///�ڵ���
		TTORATstpNodeIDType	NodeID;
	};
	
	/// ϵͳ�ڵ���Ϣ
	struct CTORATstpSystemNodeInfoField
	{
		///�ڵ���
		TTORATstpNodeIDType	NodeID;
	
		///�ڵ���Ϣ
		TTORATstpNodeInfoType	NodeInfo;
	
		///�Ƿ�ǰ�ڵ�
		TTORATstpBoolType	bCurrent;
	};
	
	/// ��ѯͶ���߱�׼ȯ���
	struct CTORATstpQryStandardBondPositionField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};
	
	/// Ͷ���߱�׼ȯ���
	struct CTORATstpStandardBondPositionField
	{
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ͻ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///��׼ȯ���ö��
		TTORATstpVolumeType	AvailablePosition;
	
		///��׼ȯ���ö�ȶ���
		TTORATstpVolumeType	AvailablePosFrozen;
	
		///��׼ȯ�������
		TTORATstpVolumeType	TotalPosition;
	};
	
	/// ��ѯδ����ծȯ��Ѻ�ع�ί��
	struct CTORATstpQryPrematurityRepoOrderField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///���ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///֤ȯƷ�ִ���
		TTORATstpProductIDType	ProductID;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///��������
		TTORATstpDirectionType	Direction;
	
		///�ɽ����
		TTORATstpTradeIDType	TradeID;
	};
	
	/// δ����ծȯ��Ѻ�ع�ί��
	struct CTORATstpPrematurityRepoOrderField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�����˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɽ�����
		TTORATstpDateType	TradeDay;
	
		///��������
		TTORATstpDateType	ExpireDay;
	
		///�������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///֤ȯƷ�ִ���
		TTORATstpProductIDType	ProductID;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///�������
		TTORATstpDirectionType	Direction;
	
		///�ɽ�����
		TTORATstpVolumeType	VolumeTraded;
	
		///�ɽ��۸�
		TTORATstpPriceType	Price;
	
		///�ɽ����
		TTORATstpMoneyType	Turnover;
	
		///�ɽ����
		TTORATstpTradeIDType	TradeID;
	
		///����Ӧ�ս��
		TTORATstpMoneyType	RepoTotalMoney;
	
		///��Ϣ���
		TTORATstpMoneyType	InterestAmount;
	};
	
	/// ��ѯЭ�齻�ױ���
	struct CTORATstpQryNegoOrderField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///Insert Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Insert Time
		TTORATstpTimeType	InsertTimeEnd;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// ��ѯЭ�齻�׳���
	struct CTORATstpQryNegoOrderActionField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///���ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///���س������
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};
	
	/// Э�齻�׳���
	struct CTORATstpNegoOrderActionField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///������־
		TTORATstpActionFlagType	ActionFlag;
	
		///���س������
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	CancelOrderSysID;
	
		///��������ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///�����������ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///�����û�
		TTORATstpUserIDType	ActionUser;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///��������
		TTORATstpDateType	ActionDate;
	
		///����ʱ��
		TTORATstpTimeType	ActionTime;
	
		///����״̬
		TTORATstpCancelOrderStatusType	CancelOrderStatus;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///������
		TTORATstpRequestIDType	RequestID;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	ActionFrontID;
	
		///�Ự���
		TTORATstpSessionIDType	ActionSessionID;
	
		///���׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	};
	
	/// ��ѯЭ�齻�׳ɽ�
	struct CTORATstpQryNegoTradeField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�ɽ����
		TTORATstpTradeIDType	TradeID;
	
		///Insert Time
		TTORATstpTimeType	TradeTimeStart;
	
		///Insert Time
		TTORATstpTimeType	TradeTimeEnd;
	};
	
	/// ��ѯЭ�齻�ײ���
	struct CTORATstpQryNegotiationParamField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// Э�齻�ײ���
	struct CTORATstpNegotiationParamField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��Լ����
		TTORATstpSecurityIDType	SecurityID;
	
		///���뽻�׵�λ
		TTORATstpTradingUnitType	BuyTradingUnit;
	
		///�������׵�λ
		TTORATstpTradingUnitType	SellTradingUnit;
	
		///�����ż�
		TTORATstpVolumeType	MinOrderVolume;
	
		///����ż�
		TTORATstpMoneyType	MinOrderAmt;
	
		///��С�䶯��λ
		TTORATstpPriceTickType	PriceTick;
	
		///��ͣ���
		TTORATstpPriceType	UpperLimitPrice;
	
		///��ͣ���
		TTORATstpPriceType	LowerLimitPrice;
	
		///�Ƿ���������
		TTORATstpBoolType	bMarketMaker;
	};
	
	/// fens�û���Ϣ
	struct CTORATstpFensUserInfoField
	{
		///�汾��Ϣ
		TTORATstpFensVerType	FensVer;
	
		///�������
		TTORATstpFensEnvIDType	FensEnvID;
	
		///�ڵ���
		TTORATstpFensNodeIDType	FensNodeID;
	
		///Fens�û�����
		TTORATstpFensUserIDType	FensUserID;
	
		///�û�����
		TTORATstpUserIDType	UserID;
	
		///�ն���Ϣ
		TTORATstpClientInfoType	ClientInfo;
	};
	
	/// ������Ϣ
	struct CTORATstpConnectionInfoField
	{
		///�û�������
		TTORATstpRequestIDType	UserRequestID;
	
		///����IP��ַ
		TTORATstpIPAddressType	InnerIPAddress;
	
		///�����˿ں�
		TTORATstpPortType	InnerPort;
	
		///����IP��ַ
		TTORATstpIPAddressType	OuterIPAddress;
	
		///�����˿ں�
		TTORATstpPortType	OuterPort;
	
		///MAC��ַ
		TTORATstpMacAddressType	MacAddress;
	};
	
}
#endif // TORATSTPUSERAPISTRUCT_H__