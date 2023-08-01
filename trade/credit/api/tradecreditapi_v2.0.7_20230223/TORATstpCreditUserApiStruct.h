/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpCreditUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////
#ifndef TORATSTPCREDITUSERAPISTRUCT_H__
#define TORATSTPCREDITUSERAPISTRUCT_H__

#include "TORATstpCreditUserApiDataType.h"

namespace TORACREDITAPI
{
	/// ��¼����
	struct CTORATstpReqUserLoginField
	{
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
	};

	/// ��¼��Ӧ
	struct CTORATstpRspUserLoginField
	{
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
	};

	/// ����¼���豸����
	struct CTORATstpReqInputDeviceSerialField
	{
		///�û�����
		TTORATstpUserIDType	UserID;
	
		///�豸��ʶ
		TTORATstpDeviceIDType	DeviceID;
	
		///�豸���к�
		TTORATstpCertSerialType	CertSerial;
	
		///�豸���
		TTORATstpDeviceTypeType	DeviceType;
	};

	/// ����¼���豸������Ӧ
	struct CTORATstpRspInputDeviceSerialField
	{
		///�û�����
		TTORATstpUserIDType	UserID;
	};

	/// ���뱨��
	struct CTORATstpInputOrderField
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
	
		///ǿƽԭ��
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ������
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///��Ϣ�ۿ�ȯ��ţ�0��ʾ��ʹ���ۿ�ȯ��
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
	
		///ǿƽԭ��
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///����ͷ����
		TTORATstpQuotaIDType	CreditQuotaID;
	
		///ͷ������
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///���ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///�ر����Ӹ�����������Ϣ
		TTORATstpFloatInfoType	RtnFloatInfo;
	
		///�ر�������������
		TTORATstpIntInfoType	RtnIntInfo;
	
		///��չ����״̬
		TTORATstpExtendOrderStatusType	ExtendOrderStatus;
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
	
		///ǿƽԭ��
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ������
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///��Ϣ�ۿ�ȯ��ţ�0��ʾ��ʹ���ۿ�ȯ��
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
	
		///ǿƽԭ��
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ������
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///��Ϣ�ۿ�ȯ��ţ�0��ʾ��ʹ���ۿ�ȯ��
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
	
		///ָ�����������ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ǿƽԭ��
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///ʵ�ʳ������(����)
		TTORATstpMoneyType	RealAmount;
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
	
		///ǿƽԭ��
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
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
	};

	/// ��ѯ���н���ϵͳ�ʽ�����
	struct CTORATstpReqInquiryJZFundField
	{
		///�ʽ��˻�����
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
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
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// ��ѯ�����˻��������
	struct CTORATstpReqInquiryBankAccountFundField
	{
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
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ������
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	};

	/// ��ѯ��󱨵�����Ӧ
	struct CTORATstpRspInquiryMaxOrderVolumeField
	{
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
	
		///ָ�����������ø�ծ��ţ����ֶ��ÿձ�ʾ��ָ��������
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ͷ������
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	};

	/// ��ѯ�ֻ��ֲ�����
	struct CTORATstpReqInquiryStockPositionField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�������µĽ����г�
		TTORATstpMarketIDType	MarketID;
	
		///�����˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///��������
		TTORATstpDateType	TradingDay;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�ֻ�֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};

	/// ��ѯ�ֻ��ֲ���Ӧ
	struct CTORATstpRspInquiryStockPositionField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�����˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///��������
		TTORATstpDateType	TradingDay;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///���ճֲ֣��������ճֲֶ���������
		TTORATstpVolumeType	HistoryPos;
	
		///���ճֲֶ���
		TTORATstpVolumeType	HistoryPosFrozen;
	
		///���������ֲ֣��������������ֲֶ���������
		TTORATstpVolumeType	TodayBSPos;
	
		///���������ֲֶ���
		TTORATstpVolumeType	TodayBSPosFrozen;
	
		///��������ֲ֣�������������ֲֶ���������
		TTORATstpVolumeType	TodayPRPos;
	
		///��������ֲֶ���
		TTORATstpVolumeType	TodayPRPosFrozen;
	
		///���ղ�ֺϲ��ֲ֣��������ղ�ֺϲ��ֲֶ���������
		TTORATstpVolumeType	TodaySMPos;
	
		///���ղ�ֺϲ��ֲֶ���
		TTORATstpVolumeType	TodaySMPosFrozen;
	
		///���ճֲֳɱ���
		TTORATstpMoneyType	HistoryPosCost;
	
		///�ֲֳܳɱ�
		TTORATstpMoneyType	TotalPosCost;
	
		///���ʲ�λ
		TTORATstpVolumeType	MarginBuyPos;
	
		///��ȯ��λ������������ȯ��λ��
		TTORATstpVolumeType	ShortSellPos;
	
		///������ȯ��λ
		TTORATstpVolumeType	TodayShortSellPos;
	
		///�ϴ����(���в���)
		TTORATstpVolumeType	PrePosition;
	
		///�ɷݿ���
		TTORATstpVolumeType	AvailablePosition;
	
		///�ɷ����
		TTORATstpVolumeType	CurrentPosition;
	};

	/// ���û�ת��������
	struct CTORATstpInputCreditTransferField
	{
		///��Լ��ϵͳ�еı��
		TTORATstpSecurityIDType	SecurityID;
	
		///Ͷ����˵���ĶԱ�����Ψһ����
		TTORATstpOrderRefType	OrderRef;
	
		///����ת�Ʒ���
		TTORATstpDirectionType	Direction;
	
		///��ת����
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///һ���������ı��
		TTORATstpExchangeIDType	ExchangeID;
	
		///�ɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///���û�ת���
		TTORATstpOrderSysIDType	OrderSysID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///��ȯ��תָ���������ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///ǿƽԭ��
		TTORATstpForceCloseReasonType	ForceCloseReason;
	};

	/// ���û�ת
	struct CTORATstpCreditTransferField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///���׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///���ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///ȫϵͳ��Ψһ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///��������
		TTORATstpOrderRefType	OrderRef;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�������
		TTORATstpDirectionType	Direction;
	
		///�����걨����
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///��������
		TTORATstpVolumeType	VolumeCanceled;
	
		///����ת��״̬
		TTORATstpCreditTransferStatusType	CreditTransferStatus;
	
		///��������״̬
		TTORATstpOrderSubmitStatusType	OrderSubmitStatus;
	
		///״̬��Ϣ
		TTORATstpStatusMsgType	StatusMsg;
	
		///ϵͳ�������
		TTORATstpErrorIDType	ErrorID;
	
		///������ΪӪҵ������Ĵ���
		TTORATstpBranchIDType	BranchID;
	
		///�����걨�û�
		TTORATstpUserIDType	InsertUser;
	
		///�걨����
		TTORATstpDateType	InsertDate;
	
		///�걨ʱ��
		TTORATstpTimeType	InsertTime;
	
		///�걨ʱ��(����)
		TTORATstpMillisecType	InsertMillisec;
	
		///����������ʱ��
		TTORATstpTimeType	AcceptTime;
	
		///����ʱ��
		TTORATstpTimeType	CancelTime;
	
		///�����걨�û�
		TTORATstpUserIDType	CancelUser;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///������
		TTORATstpRequestIDType	RequestID;
	
		///��¼���(����֤����ʹ��)
		TTORATstpSequenceNoType	RecordNumber;
	
		///�ֲ�ת����ˮ��
		TTORATstpIntSerialType	PositionSerial;
	
		///��ȯ��תָ���������ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///�ʽ��˻�
		TTORATstpAccountIDType	AccountID;
	
		///����
		TTORATstpCurrencyIDType	CurrencyID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ֻ��ֲ�ת����ˮ��
		TTORATstpIntSerialType	StockPositionSerial;
	
		///Ͷ��������
		TTORATstpInvestorTypeType	InvestorType;
	
		///��������ˮ��(�����ڵǼǽ��㱨��ʹ��)
		TTORATstpSerialNoType	SerialNumber;
	
		///ǿƽԭ��
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///���ױ��̱��
		TTORATstpTraderOfferIDType	TraderOfferID;
	};

	/// �������û�ת
	struct CTORATstpInputCancelCreditTransferField
	{
		///Ͷ����˵���ĶԱ���������Ψһ����
		TTORATstpOrderRefType	OrderActionRef;
	
		///Ͷ����˵���ĶԱ�����Ψһ����
		TTORATstpOrderRefType	OrderRef;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///һ���������ı��
		TTORATstpExchangeIDType	ExchangeID;
	
		///�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///ί�в�����־
		TTORATstpActionFlagType	ActionFlag;
	
		///ȫϵͳ��Ψһ�������
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// ��ծչ������
	struct CTORATstpInputDebtExtendField
	{
		///������ˮ��
		TTORATstpIntSerialType	ApplySerial;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��Լ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// ��ծչ����Ϣ
	struct CTORATstpDebtExtendField
	{
		///չ����ˮ��
		TTORATstpIntSerialType	ExtendSerial;
	
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
	
		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///���ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ԭ��ծ������
		TTORATstpDateType	OldExpireDate;
	
		///�¸�ծ������
		TTORATstpDateType	NewExpireDate;
	
		///չ��״̬
		TTORATstpExtendStatusType	ExtendStatus;
	
		///״̬��Ϣ
		TTORATstpErrorMsgType	StatusMsg;
	
		///������
		TTORATstpMoneyType	Commisition;
	
		///�Զ�������Ϣ
		TTORATstpMoneyType	AutoRepayInterest;
	
		///�Զ������ʽ���ˮ��
		TTORATstpIntSerialType	FundSerial;
	
		///������ˮ��
		TTORATstpCreditRepayIDType	CreditRepayID;
	
		///������Ա
		TTORATstpUserIDType	OperatorID;
	
		///��������
		TTORATstpDateType	OperateDate;
	
		///����ʱ��
		TTORATstpTimeType	OperateTime;
	
		///����޸�ʱ��
		TTORATstpTimeType	ActiveTime;
	
		///��¼IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///��¼Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///�û�������
		TTORATstpRequestIDType	RequestID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// ������ծչ������
	struct CTORATstpInputCancelDebtExtendField
	{
		///���볷������
		TTORATstpIntSerialType	ApplySerial;
	
		///Ҫ������չ����ˮ��
		TTORATstpIntSerialType	ExtendSerial;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///��ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///��ծչ�ڳ������
		TTORATstpIntSerialType	CancelExtendSerial;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// �޸��ײ���������
	struct CTORATstpReqChangePlanTypeField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ײ�����
		TTORATstpPlanTypeType	PlanType;
	};

	/// �޸��ײ�������Ӧ
	struct CTORATstpRspChangePlanTypeField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ײ�����
		TTORATstpPlanTypeType	PlanType;
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
	
		///���м۸�
		TTORATstpPriceType	Price;
	
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
	
		///�ײ�����
		TTORATstpPlanTypeType	PlanType;
	
		///�Ƿ�����Ͷ���������ײ�
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
	
		///��ͨ�������������Ʊ�־
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
	
		///Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Time
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
	
		///�ɶ��˻�����
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
	
		///һ����������
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
	
		///Time
		TTORATstpTimeType	TradeTimeStart;
	
		///Time
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
	
		///Ȩ��������
		TTORATstpMoneyType	RoyaltyIn;
	
		///Ȩ����֧��
		TTORATstpMoneyType	RoyaltyOut;
	
		///��ȯ����ʣ����
		TTORATstpMoneyType	CreditSellAmount;
	
		///�����ֶ�
		TTORATstpMoneyType	CreditSellUseAmount;
	
		///�����ʲ�
		TTORATstpMoneyType	VirtualAssets;
	
		///��ȯ��������(���ڳ������ʸ�ծ��������Ʒ�ֵ�δ�ɽ�������)
		TTORATstpMoneyType	CreditSellFrozenAmount;
	
		///������һ����Ʒ��ռ����ȯ��������
		TTORATstpMoneyType	CreditSellOccupyAmount;
	
		///����������һ����Ʒ��ռ����ȯ��������
		TTORATstpMoneyType	CreditSellTodayOccupyAmount;
	
		///�����������һ����Ʒ���ͷ���ȯ��������
		TTORATstpMoneyType	CreditSellTodayReleaseAmount;
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
	
		///���ʲ�λ
		TTORATstpVolumeType	CreditBuyPos;
	
		///��ȯ��λ
		TTORATstpVolumeType	CreditSellPos;
	
		///������ȯ��λ
		TTORATstpVolumeType	TodayCreditSellPos;
	
		///������λ
		TTORATstpVolumeType	CollateralOutPos;
	
		///��ȯδ�ɽ�����
		TTORATstpVolumeType	RepayUntradeVolume;
	
		///ֱ�ӻ�ȯδ�ɽ�����
		TTORATstpVolumeType	RepayTransferUntradeVolume;
	
		///����Ʒ����δ�ɽ����
		TTORATstpMoneyType	CollateralBuyUntradeAmount;
	
		///����Ʒ����δ�ɽ�����
		TTORATstpVolumeType	CollateralBuyUntradeVolume;
	
		///����������(�������׷���)
		TTORATstpMoneyType	CreditBuyAmount;
	
		///��������δ�ɽ����(�������׷���)
		TTORATstpMoneyType	CreditBuyUntradeAmount;
	
		///���ʶ��ᱣ֤��
		TTORATstpMoneyType	CreditBuyFrozenMargin;
	
		///����������Ϣ
		TTORATstpMoneyType	CreditBuyInterestFee;
	
		///��������δ�ɽ�����
		TTORATstpVolumeType	CreditBuyUntradeVolume;
	
		///��ȯ�������(�Գɽ��ۼ���)
		TTORATstpMoneyType	CreditSellAmount;
	
		///��ȯ����δ�ɽ����
		TTORATstpMoneyType	CreditSellUntradeAmount;
	
		///��ȯ���ᱣ֤��
		TTORATstpMoneyType	CreditSellFrozenMargin;
	
		///��ȯ����Ϣ��
		TTORATstpMoneyType	CreditSellInterestFee;
	
		///��ȯ����δ�ɽ�����
		TTORATstpVolumeType	CreditSellUntradeVolume;
	
		///������ղ�
		TTORATstpVolumeType	CollateralInPos;
	
		///�����������ᱣ֤��
		TTORATstpMoneyType	CreditBuyFrozenCirculateMargin;
	
		///��ȯ�������ᱣ֤��
		TTORATstpMoneyType	CreditSellFrozenCirculateMargin;
	
		///�ۼ�ƽ��ӯ��
		TTORATstpMoneyType	CloseProfit;
	
		///�����ۼƿ�������
		TTORATstpVolumeType	TodayTotalOpenVolume;
	
		///�������
		TTORATstpVolumeType	RationVolume;
	
		///��ɽ��
		TTORATstpMoneyType	RationAmount;
	
		///�����ۼ�������
		TTORATstpMoneyType	TodayTotalBuyAmount;
	
		///�����ۼ��������
		TTORATstpMoneyType	TodayTotalSellAmount;
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
	
		///֤ȯ����
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
	
		///���������׵�Ԫ����
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
	
		///ӡ��˰
		TTORATstpMoneyType	StampTaxFee;
	
		///���ַ�
		TTORATstpMoneyType	HandlingFee;
	
		///������
		TTORATstpMoneyType	TransferFee;
	
		///֤�ܷ�
		TTORATstpMoneyType	RegulateFee;
	
		///�����
		TTORATstpMoneyType	SettlementFee;
	
		///Ӷ��
		TTORATstpMoneyType	BrokerageFee;
	
		///�ܷ���
		TTORATstpMoneyType	TotalFee;
	
		///������ʼ������
		TTORATstpMoneyType	OrderCashFrozen;
	
		///Ԥ�������ֽ�
		TTORATstpMoneyType	EstimateCashFrozen;
	
		///��ʼ������úϼ�
		TTORATstpMoneyType	TotalFeeFrozen;
	
		///��ʼ�����ܷ���
		TTORATstpMoneyType	TotalFrozen;
	
		///��֤��
		TTORATstpMoneyType	Margin;
	
		///�������
		TTORATstpMoneyType	RepayAmount;
	
		///��������
		TTORATstpVolumeType	RepayVolume;
	
		///��ʼ���ᱣ֤��
		TTORATstpMoneyType	MarginFrozen;
	
		///��ʼ����������֤��
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
	
		///ǿƽԭ��
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///(ֱ�ӻ�����)ָ������ʱ�ĸ�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
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
	
		///Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Time
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
	
		///һ����������
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
	
		///Date
		TTORATstpDateType	DateStart;
	
		///Date
		TTORATstpDateType	DateEnd;
	
		///Time
		TTORATstpTimeType	TimeStart;
	
		///Time
		TTORATstpTimeType	TimeEnd;
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

	/// ��ѯ����ת��
	struct CTORATstpQryCreditTransferField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///ȫϵͳ��Ψһ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Time
		TTORATstpTimeType	InsertTimeEnd;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// ��ѯ��������ת��
	struct CTORATstpQryCancelCreditTransferField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///���׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///ȫϵͳ��Ψһ�������
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///�ó�����Ӧ���������ı��ر������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// ��������ת��
	struct CTORATstpCancelCreditTransferField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///�������ر��
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///����ǰ�ñ��
		TTORATstpFrontIDType	ActionFrontID;
	
		///�����Ự���
		TTORATstpSessionIDType	ActionSessionID;
	
		///��������
		TTORATstpOrderRefType	OrderActionRef;
	
		///������־
		TTORATstpActionFlagType	ActionFlag;
	
		///���ر����������
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///ǰ�ñ��
		TTORATstpFrontIDType	FrontID;
	
		///�Ự���
		TTORATstpSessionIDType	SessionID;
	
		///��������
		TTORATstpOrderRefType	OrderRef;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����״̬
		TTORATstpCancelOrderStatusType	CancelOrderStatus;
	
		///��������
		TTORATstpVolumeType	VolumeCanceled;
	
		///״̬��Ϣ
		TTORATstpStatusMsgType	StatusMsg;
	
		///ϵͳ�������
		TTORATstpErrorIDType	ErrorID;
	
		///������Ӫҵ������
		TTORATstpBranchIDType	BranchID;
	
		///���������׵�Ԫ����
		TTORATstpPbuIDType	PbuID;
	
		///�����걨�û�
		TTORATstpUserIDType	InsertUser;
	
		///��������
		TTORATstpDateType	InsertDate;
	
		///����ʱ��
		TTORATstpTimeType	InsertTime;
	
		///�걨ʱ��(����)
		TTORATstpMillisecType	InsertMillisec;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///������
		TTORATstpRequestIDType	RequestID;
	
		///���ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// ��ѯͶ������ȯ�ֲ�
	struct CTORATstpQrySurplusPositionField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�������µĽ����г�
		TTORATstpMarketIDType	MarketID;
	
		///�����˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};

	/// Ͷ������ȯ�ֲ�
	struct CTORATstpSurplusPositionField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ͻ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///���ճֲ�
		TTORATstpVolumeType	Volume;
	
		///�ѻ�ת����
		TTORATstpVolumeType	ReturnVolume;
	};

	/// ���ý���Ϣ���ۿ�ȯ��Ϣ
	struct CTORATstpQryCreditDiscountCouponInfoField
	{
		///�ۿ�ȯ���
		TTORATstpIntSerialType	DiscountCouponID;
	};

	/// ����Ϣ���ۿ�ȯ��Ϣ
	struct CTORATstpCreditDiscountCouponInfoField
	{
		///�ۿ�ȯ���
		TTORATstpIntSerialType	DiscountCouponID;
	
		///�ۿ�ȯ����
		TTORATstpNameType	DiscountName;
	
		///�ۿ�ϵ��
		TTORATstpRatioType	Factor;
	
		///��ʼ����
		TTORATstpDateType	StartDate;
	
		///��������
		TTORATstpDateType	EndDate;
	};

	/// Ͷ����Ϣ���ۿ�ȯ
	struct CTORATstpQryInvestorCreditDiscountCouponField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ۿ�ȯ���
		TTORATstpIntSerialType	DiscountCouponID;
	};

	/// ��Ϣ���ۿ�ȯ
	struct CTORATstpInvestorCreditDiscountCouponField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ۿ�ȯ���
		TTORATstpIntSerialType	DiscountCouponID;
	
		///��������
		TTORATstpVolumeType	Volume;
	};

	/// ��ѯ������֤ȯ����
	struct CTORATstpQryWhiteListSecurityCtrlField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�ɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��Լ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�������
		TTORATstpDirectionType	Direction;
	};

	/// ������֤ȯ����
	struct CTORATstpWhiteListSecurityCtrlField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�������
		TTORATstpDirectionType	Direction;
	};

	/// ����������Ϣ
	struct CTORATstpQryCreditRatingInfoField
	{
		///Ͷ������������
		TTORATstpCreditRatingType	CreditRating;
	};

	/// ������Ϣ
	struct CTORATstpCreditRatingInfoField
	{
		///Ͷ������������
		TTORATstpCreditRatingType	CreditRating;
	
		///��������ϵ��
		TTORATstpMoneyType	CollateralCreditRatio;
	
		///��������
		TTORATstpRatioType	CreditBuyInterestRate;
	
		///��ȯ����
		TTORATstpRatioType	CreditSellFeeRate;
	
		///�����������
		TTORATstpRatioType	QuotaCreditBuyInterestRate;
	
		///�������ռ�÷���
		TTORATstpRatioType	QuotaCreditBuyOccupyRate;
	};

	/// ��ѯͶ����������ȯ��Ϣ
	struct CTORATstpQryInvestorCreditInfoField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	};

	/// Ͷ����������ȯ��Ϣ
	struct CTORATstpInvestorCreditInfoField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ������������
		TTORATstpCreditRatingType	CreditRating;
	
		///��ͨ�ʽ�ͷ����
		TTORATstpQuotaIDType	NormalFundQuotaID;
	
		///��ͨ�ֲ�ͷ����
		TTORATstpQuotaIDType	NormalPositionQuotaID;
	
		///ר���ʽ�ͷ����
		TTORATstpQuotaIDType	SpecialFundQuotaID;
	
		///ר��ֲ�ͷ����
		TTORATstpQuotaIDType	SpecialPositionQuotaID;
	
		///���ʶ������
		TTORATstpMoneyType	CreditBuyLimitAmount;
	
		///��ȯ�������
		TTORATstpMoneyType	CreditSellLimitAmount;
	
		///����������
		TTORATstpMoneyType	CreditBuyAmount;
	
		///��������δ�ɽ����
		TTORATstpMoneyType	CreditBuyUntradeAmount;
	
		///���ʶ��ᱣ֤��
		TTORATstpMoneyType	CreditBuyFrozenMargin;
	
		///����������Ϣ
		TTORATstpMoneyType	CreditBuyInterestFee;
	
		///��ȯ�������
		TTORATstpMoneyType	CreditSellAmount;
	
		///��ȯ����δ�ɽ����
		TTORATstpMoneyType	CreditSellUntradeAmount;
	
		///��ȯ���ᱣ֤��
		TTORATstpMoneyType	CreditSellFrozenMargin;
	
		///��ȯ��������
		TTORATstpMoneyType	CreditSellInterestFee;
	
		///�����������ᱣ֤��
		TTORATstpMoneyType	CreditBuyFrozenCirculateMargin;
	
		///��ȯ�������ᱣ֤��
		TTORATstpMoneyType	CreditSellFrozenCirculateMargin;
	};

	/// ��ѯ֤ȯ���ʼ۸�
	struct CTORATstpQrySecurityFairPriceField
	{
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	};

	/// ֤ȯ���ʼ۸�
	struct CTORATstpSecurityFairPriceField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///���ʼ۸�
		TTORATstpPriceType	FairPrice;
	};

	/// ��ѯͶ���ߵ���������ز���
	struct CTORATstpQryInvestorCollateralRiskParamField
	{
		///Ͷ���ߴ��루00000000��������Ͷ���ߣ�
		TTORATstpInvestorIDType	InvestorID;
	
		///���͹�˾���Ŵ��루00000000��������Ӫҵ����
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// Ͷ���ߵ���������ز���
	struct CTORATstpInvestorCollateralRiskParamField
	{
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///��ȡ��
		TTORATstpRatioType	WithdrawLine;
	
		///ǿ��ƽ����
		TTORATstpRatioType	ForceCloseLine;
	
		///ƽ�ֵ�λ����
		TTORATstpRatioType	ForceCloseTargetLine;
	
		///׷������
		TTORATstpRatioType	AddMarginLine;
	
		///׷����λ����
		TTORATstpRatioType	AddMarginTargetLine;
	
		///Ԥ������
		TTORATstpRatioType	WarningLine;
	
		///��ע��������
		TTORATstpRatioType	ConcernLine;
	
		///�Զ�ǿ��ƽ����
		TTORATstpRatioType	AutoForceCloseLine;
	
		///�Ƿ��Զ�ǿƽ
		TTORATstpBoolType	bAutoForceClose;
	};

	/// ��ѯͶ��������
	struct CTORATstpQryInvestorCreditInterestRateField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///���͹�˾���Ŵ��루00000000��������Ӫҵ����
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// Ͷ��������
	struct CTORATstpInvestorCreditInterestRateField
	{
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///��������
		TTORATstpRatioType	InterestRate;
	
		///��ȯ����
		TTORATstpRatioType	FeeRate;
	
		///ר����������
		TTORATstpRatioType	SpecialInterestRate;
	
		///ר����ȯ����
		TTORATstpRatioType	SpecialFeeRate;
	};

	/// ��ѯͶ�����Ż�����
	struct CTORATstpQryInvestorCreditBenefitInterestRateField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///���͹�˾���Ŵ��루00000000��������Ӫҵ����
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// Ͷ�����Ż�����
	struct CTORATstpInvestorCreditBenefitInterestRateField
	{
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///�Ż���������
		TTORATstpRatioType	BenefitInterestRate;
	
		///�����Ż�����
		TTORATstpRecordCntType	BenefitDays;
	};

	/// ��ѯ���ø�ծ
	struct CTORATstpQryCreditDebtField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///���ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///���ø�ծ����
		TTORATstpCreditDebtTypeType	CreditDebtType;
	
		///���ú�Լ״̬
		TTORATstpCreditDebtStatusType	CreditDebtStatus;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};

	/// ���ø�ծ
	struct CTORATstpCreditDebtField
	{
		///���ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///���ø�ծ����
		TTORATstpCreditDebtTypeType	CreditDebtType;
	
		///���ú�Լ״̬
		TTORATstpCreditDebtStatusType	CreditDebtStatus;
	
		///ͷ������
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��������
		TTORATstpDateType	OpenDate;
	
		///����ʱ��
		TTORATstpTimeType	OpenTime;
	
		///������
		TTORATstpDateType	ExpireDate;
	
		///����
		TTORATstpVolumeType	Volume;
	
		///���
		TTORATstpMoneyType	Amount;
	
		///δ��������
		TTORATstpVolumeType	UnpaidVolume;
	
		///δ�������
		TTORATstpMoneyType	UnpaidAmount;
	
		///δ�������׷��ã����ʣ�
		TTORATstpMoneyType	UnpaidTradingFee;
	
		///δ����Ϣ�ѣ�������Ϣ����ȯ���ã�
		TTORATstpMoneyType	UnpaidInterestFee;
	
		///��ȯδ�ɽ�����
		TTORATstpVolumeType	RepayUntradeVolume;
	
		///��չ�ڴ���
		TTORATstpExtendNumType	ExtendNum;
	
		///�ճ�����
		TTORATstpRatioType	PreInterestRate;
	
		///����
		TTORATstpRatioType	InterestRate;
	
		///��Ϣ�ۿ�ȯ���
		TTORATstpIntSerialType	DiscountCouponID;
	};

	/// ��ѯ�����ʽ�ͷ��
	struct CTORATstpQryCreditFundQuotaField
	{
		///����ͷ����
		TTORATstpQuotaIDType	FundQuotaID;
	};

	/// �����ʽ�ͷ��
	struct CTORATstpCreditFundQuotaField
	{
		///����ͷ����
		TTORATstpQuotaIDType	FundQuotaID;
	
		///ͷ������
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///�ܿ��ڽ��˻���
		TTORATstpMoneyType	TotalAmount;
	
		///���ڳ����
		TTORATstpMoneyType	ConsumeAmount;
	
		///���ն�����
		TTORATstpMoneyType	FrozenAmount;
	};

	/// ��ѯ��ȯ֤ȯͷ��
	struct CTORATstpQryCreditPositionQuotaField
	{
		///��ȯͷ����
		TTORATstpQuotaIDType	PositionQuotaID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};

	/// ��ȯ֤ȯͷ��
	struct CTORATstpCreditPositionQuotaField
	{
		///��ȯͷ����
		TTORATstpQuotaIDType	PositionQuotaID;
	
		///ͷ������
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ܿ�������
		TTORATstpVolumeType	TotalVolume;
	
		///���ڳ�����
		TTORATstpVolumeType	ConsumeVolume;
	
		///���ն�������
		TTORATstpVolumeType	FrozenVolume;
	
		///��������
		TTORATstpDateType	ExpireDate;
	};

	/// ��ѯ������ȯ������ϸ
	struct CTORATstpQryCreditRepaymentField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///���ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///������ˮ��
		TTORATstpCreditRepayIDType	CreditRepayID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///ϵͳ�������(ֱ�ӻ���ʱ��Ӧ�ʽ�ת�����)
		TTORATstpOrderSysIDType	OrderSysID;
	};

	/// ������ȯ������ϸ
	struct CTORATstpCreditRepaymentField
	{
		///������ˮ��
		TTORATstpCreditRepayIDType	CreditRepayID;
	
		///���ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///ϵͳ�������
		TTORATstpOrderSysIDType	OrderSysID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�������
		TTORATstpMoneyType	RepaidAmount;
	
		///��������
		TTORATstpVolumeType	RepaidVolume;
	
		///�������׷���
		TTORATstpMoneyType	RepaidTradingFee;
	
		///����Ϣ��
		TTORATstpMoneyType	RepaidInterestFee;
	
		///�������
		TTORATstpRepayDirectionType	RepayDirection;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};

	/// ��ѯͶ�������ñ�֤�����
	struct CTORATstpQryInvestorCreditMarginRateField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};

	/// Ͷ�������ñ�֤�����
	struct CTORATstpInvestorCreditMarginRateField
	{
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��Ʒ����
		TTORATstpProductIDType	ProductID;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�������뱣֤����
		TTORATstpRatioType	CreditBuyRate;
	
		///��ȯ������֤����
		TTORATstpRatioType	CreditSellRate;
	};

	/// ��ѯͶ���ߵ���Ʒ������
	struct CTORATstpQryInvestorCollateralConversionRateField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};

	/// Ͷ���ߵ���Ʒ������
	struct CTORATstpInvestorCollateralConversionRateField
	{
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///��Ʒ����
		TTORATstpProductIDType	ProductID;
	
		///֤ȯ������
		TTORATstpSecurityTypeType	SecurityType;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///������
		TTORATstpRatioType	ConversionRate;
	};

	/// ��ѯ�˻�֤ȯ���׺�����
	struct CTORATstpQryShareholderSecurityBlackListField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�������
		TTORATstpDirectionType	Direction;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	};

	/// �˻�֤ȯ���׺�����
	struct CTORATstpShareholderSecurityBlackListField
	{
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�����˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�������
		TTORATstpDirectionType	Direction;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	};

	/// ��ѯ��˾�ʸ�֤ȯ
	struct CTORATstpQryBrokerCreditSecurityField
	{
		///��Լ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	};

	/// ��˾�ʸ�֤ȯ
	struct CTORATstpBrokerCreditSecurityField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�Ƿ��ǵ���Ʒ֤ȯ
		TTORATstpBoolType	bCollateral;
	
		///�Ƿ�����ȯ���
		TTORATstpBoolType	bCreditSell;
	
		///�Ƿ������ʱ��
		TTORATstpBoolType	bCreditBuy;
	
		///��˾������
		TTORATstpRatioType	ConversionRate;
	
		///��˾�������뱣֤����
		TTORATstpRatioType	CreditBuyRate;
	
		///��˾��ȯ������֤����
		TTORATstpRatioType	CreditSellRate;
	
		///֤ȯ���ý���״̬
		TTORATstpSecurityCreditStatusType	SecurityCreditStatus;
	
		///�Ƿ��������ȯ���֤ȯ
		TTORATstpBoolType	IsWhiteList;
	
		///���չ�ڴ���(0��ʾ��֧��չ��)
		TTORATstpExtendNumType	MaxExtendNum;
	};

	/// ��ѯ��ծչ��
	struct CTORATstpQryDebtExtendField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///չ����ˮ��
		TTORATstpIntSerialType	ExtendSerial;
	
		///Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Time
		TTORATstpTimeType	InsertTimeEnd;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// ��ѯ������ծչ��
	struct CTORATstpQryCancelDebtExtendField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///���ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///��ծչ�ڳ������
		TTORATstpIntSerialType	CancelExtendSerial;
	
		///����չ�ڱ��
		TTORATstpIntSerialType	ExtendSerial;
	
		///�ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// ������ծչ��
	struct CTORATstpCancelDebtExtendField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///��ծչ�ڳ������
		TTORATstpIntSerialType	CancelExtendSerial;
	
		///����ǰ�ñ��
		TTORATstpFrontIDType	CancelFrontID;
	
		///�����Ự���
		TTORATstpSessionIDType	CancelSessionID;
	
		///��������
		TTORATstpIntSerialType	ApplySerial;
	
		///����չ�ڱ��
		TTORATstpIntSerialType	ExtendSerial;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ɶ��˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///���ø�ծ���
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����״̬
		TTORATstpCancelOrderStatusType	CancelOrderStatus;
	
		///�����걨�û�
		TTORATstpUserIDType	InsertUser;
	
		///��������
		TTORATstpDateType	InsertDate;
	
		///����ʱ��
		TTORATstpTimeType	InsertTime;
	
		///�걨ʱ��(����)
		TTORATstpMillisecType	InsertMillisec;
	
		///IP��ַ
		TTORATstpIPAddressType	IPAddress;
	
		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;
	
		///������
		TTORATstpRequestIDType	RequestID;
	
		///ί�з�ʽ
		TTORATstpOperwayType	Operway;
	
		///���ַ���������Ϣ
		TTORATstpStrInfoType	SInfo;
	
		///���θ�����Ϣ
		TTORATstpIntInfoType	IInfo;
	};

	/// ��ѯ֤ȯ�����ʲ�����
	struct CTORATstpQrySecurityCirculateAssetParamField
	{
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯƷ�ִ���
		TTORATstpProductIDType	ProductID;
	
		///��ع�ģָ��֤ȯ���
		TTORATstpRiskScaleIndicatorSecurityTypeType	SecurityType;
	};

	/// ֤ȯ�����ʲ�����
	struct CTORATstpSecurityCirculateAssetParamField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯƷ�ִ���
		TTORATstpProductIDType	ProductID;
	
		///��ع�ģָ��֤ȯ���
		TTORATstpRiskScaleIndicatorSecurityTypeType	SecurityType;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����ϵ�������տ�����λ�����ʣ�
		TTORATstpRatioType	CirculateRate;
	
		///������ϵ�������ղ�������λ�����ʣ�
		TTORATstpRatioType	NonCirculateRate;
	
		///����������֤����
		TTORATstpRatioType	CreditBuyMarginRate;
	
		///��ȯ������֤����
		TTORATstpRatioType	CreditSellMarginRate;
	};

	/// ��ѯͶ����֤ȯ�����ʲ���Ϣ
	struct CTORATstpQrySecurityCirculateAssetInfoField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�����˻�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///Ͷ�����ײ�����
		TTORATstpPlanTypeType	PlanType;
	};

	/// Ͷ����֤ȯ�����ʲ���Ϣ
	struct CTORATstpSecurityCirculateAssetInfoField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ�ʵ�Ԫ����
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�ͻ�����
		TTORATstpShareholderIDType	ShareholderID;
	
		///������
		TTORATstpDateType	TradingDay;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///��Լ����
		TTORATstpSecurityNameType	SecurityName;
	
		///�����ֲ�����
		TTORATstpVolumeType	CirculatePos;
	
		///�����ֲ���ֵ
		TTORATstpMoneyType	CirculateMarketValue;
	
		///�����ʲ�
		TTORATstpMoneyType	CirculateAsset;
	
		///����ϵ��
		TTORATstpMoneyType	CirculateRate;
	
		///�������ֲ�����
		TTORATstpVolumeType	NonCirculatePos;
	
		///�������ֲ���ֵ
		TTORATstpMoneyType	NonCirculateMarketValue;
	
		///�������ʲ�
		TTORATstpMoneyType	NonCirculateAsset;
	
		///������ϵ��
		TTORATstpMoneyType	NonCirculateRate;
	
		///����۸�
		TTORATstpPriceType	LastPrice;
	
		///Ͷ�����ײ�����
		TTORATstpPlanTypeType	PlanType;
	
		///����ʱ��
		TTORATstpTimeType	UpdateTime;
	};

	/// ��ѯͶ����ʵʱ������ȯ��Ϣ
	struct CTORATstpQryInvestorRealTimeCreditInfoField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	};

	/// Ͷ����ʵʱ������ȯ��Ϣ
	struct CTORATstpInvestorRealTimeCreditInfoField
	{
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///���͹�˾���Ŵ���
		TTORATstpDepartmentIDType	DepartmentID;
	
		///ά�ֵ�������
		TTORATstpRatioType	CollateralRatio;
	
		///���ñ�֤��
		TTORATstpMoneyType	UsefulMargin;
	
		///���ս��
		TTORATstpMoneyType	PreDeposit;
	
		///���ý��
		TTORATstpMoneyType	UsefulMoney;
	
		///�����
		TTORATstpMoneyType	Deposit;
	
		///������
		TTORATstpMoneyType	Withdraw;
	
		///֤ȯ��ֵ
		TTORATstpMoneyType	StockMarketValue;
	
		///��ֱ�֤��֤ȯ��ֵ
		TTORATstpMoneyType	CollateralValue;
	
		///���ʸ�ծ(�������׷���)
		TTORATstpMoneyType	CreditBuyDebt;
	
		///����δ�ɽ���ծ
		TTORATstpMoneyType	CreditBuyUntradeDebt;
	
		///����δ�ɽ����ᱣ֤��
		TTORATstpMoneyType	CreditBuyFrozenMargin;
	
		///����ӯ��
		TTORATstpMoneyType	CreditBuyProfit;
	
		///��ȯ����������ȯ���������
		TTORATstpMoneyType	CreditSellMoney;
	
		///��ȯ������ծ����ȯ��ֵ��
		TTORATstpMoneyType	CreditSellDebt;
	
		///��ȯ����δ�ɽ���ծ
		TTORATstpMoneyType	CreditSellUntradeDebt;
	
		///��ȯ���ᱣ֤��
		TTORATstpMoneyType	CreditSellFrozenMargin;
	
		///��ȯӯ��
		TTORATstpMoneyType	CreditSellProfit;
	
		///��Ϣ/����
		TTORATstpMoneyType	InterestFee;
	
		///���ʲ�
		TTORATstpMoneyType	TotalAsset;
	
		///�ܸ�ծ
		TTORATstpMoneyType	TotalDebt;
	
		///���ʲ�
		TTORATstpMoneyType	NetAsset;
	
		///����ռ�ñ�֤��
		TTORATstpMoneyType	CreditBuyMargin;
	
		///��ȯռ�ñ�֤��
		TTORATstpMoneyType	CreditSellMargin;
	
		///���������ӯ��
		TTORATstpMoneyType	CreditConvertBuyProfit;
	
		///�������ȯӯ��
		TTORATstpMoneyType	CreditConvertSellProfit;
	
		///Ԥ��ά�ֵ�������(�����������������)
		TTORATstpRatioType	PredictCollateralRatio;
	
		///�������ʲ�
		TTORATstpMoneyType	TotalCirculateAsset;
	
		///ʣ���������ʲ�
		TTORATstpMoneyType	RemainCirculateAsset;
	
		///��������ռ�ñ�֤��
		TTORATstpMoneyType	CreditBuyCirculateMargin;
	
		///�����������ᱣ֤��
		TTORATstpMoneyType	CreditBuyFrozenCirculateMargin;
	
		///��ȯ����ռ�ñ�֤��
		TTORATstpMoneyType	CreditSellCirculateMargin;
	
		///��ȯ�������ᱣ֤��
		TTORATstpMoneyType	CreditSellFrozenCirculateMargin;
	
		///����ʱ��
		TTORATstpTimeType	UpdateTime;
	};

	/// ��ѯͶ���߷��ҵ���ģ���жȲ���
	struct CTORATstpQryInvestorBusinessScaleConcentrationParamField
	{
		///�ͻ���
		TTORATstpInvestorIDType	InvestorID;
	
		///Ͷ���߷�ع�ģָ��
		TTORATstpInvestorRiskScaleIndicatorType	InvestorRiskScaleIndicator;
	
		///��ع�ģָ��֤ȯ���
		TTORATstpRiskScaleIndicatorSecurityTypeType	SecurityType;
	
		///��Լ����
		TTORATstpSecurityIDType	SecurityID;
	};

	/// Ͷ���߷��ҵ���ģ���жȲ���
	struct CTORATstpInvestorBusinessScaleConcentrationParamField
	{
		///��ع�ģָ��
		TTORATstpInvestorRiskScaleIndicatorType	InvestorRiskScaleIndicator;
	
		///Ͷ���ߴ���
		TTORATstpInvestorIDType	InvestorID;
	
		///��ع�ģָ��֤ȯ���
		TTORATstpRiskScaleIndicatorSecurityTypeType	SecurityType;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�ο�ֵ����
		TTORATstpMoneyType	ReferenceUpperLimit;
	
		///�ο�ֵ����
		TTORATstpMoneyType	ReferenceLowerLimit;
	
		///��ֵ
		TTORATstpMoneyType	Value;
	
		///�Ƿ���Ч
		TTORATstpCharBoolType	IsValid;
	
		///�ο�ֵ����
		TTORATstpReferenceTypeType	ReferenceType;
	
		///����ʲ�����,0��ʾ������
		TTORATstpMoneyType	LowestAsset;
	};

	/// ��ѯ�����ײ���Ϣ
	struct CTORATstpQryCreditPlanInfoField
	{
		///�ײ�����
		TTORATstpPlanTypeType	PlanType;
	};

	/// �����ײ���Ϣ
	struct CTORATstpCreditPlanInfoField
	{
		///�ײ�����
		TTORATstpPlanTypeType	PlanType;
	
		///�ײ�˵��
		TTORATstpLongRemarkType	PlanRemark;
	};

	/// fens�û���Ϣ
	struct CTORATstpFensUserInfoField
	{
		///��¼�˻�
		TTORATstpLogInAccountType	LogInAccount;
	
		///��¼�˻�����
		TTORATstpLogInAccountTypeType	LogInAccountType;
	};

	/// ������Ϣ
	struct CTORATstpConnectionInfoField
	{
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
#endif // TORATSTPCREDITUSERAPISTRUCT_H__