/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpLev2ApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(_TORA_TSTPLEV2APISTRUCT_H)
#define _TORA_TSTPLEV2APISTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TORATstpLev2ApiDataType.h"

namespace TORALEV2API
{

	/// fens�û���Ϣ
	struct CTORATstpFensUserInfoField
	{
			
		///��¼�˻�
		TTORATstpLogInAccountType	LogInAccount;

		///��¼�˻�����
		TTORATstpLogInAccountTypeType	LogInAccountType;

	};

	/// ��¼����
	struct CTORATstpReqUserLoginField
	{
			
		///��¼�˻�
		TTORATstpLogInAccountType	LogInAccount;

		///��¼�˻�����
		TTORATstpLogInAccountTypeType	LogInAccountType;

		///����(������֤ʱ����)
		TTORATstpPasswordType	Password;

		///�û��˲�Ʒ��Ϣ
		TTORATstpProductInfoType	UserProductInfo;

		///�ӿڶ˲�Ʒ��Ϣ
		TTORATstpProductInfoType	InterfaceProductInfo;

		///Э����Ϣ
		TTORATstpProtocolInfoType	ProtocolInfo;

		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;

		///�ƶ��豸�ֻ���
		TTORATstpMobileType	Mobile;

		///����IP��ַ
		TTORATstpIPAddressType	InnerIPAddress;

		///�ӿ�����
		TTORATstpLangType	Lang;

		///�ն���Ϣ
		TTORATstpTerminalInfoType	TerminalInfo;

		///����Mac��ַ
		TTORATstpMacAddressType	GWMacAddress;

		///��������IP��ַ
		TTORATstpIPAddressType	GWInnerIPAddress;

		///��������IP��ַ
		TTORATstpIPAddressType	GWOuterIPAddress;

		///һ���������루���ʽ��˺ŷ�ʽ��¼ʱ���
		TTORATstpDepartmentIDType	DepartmentID;

		///Ӳ�����к�
		TTORATstpHDSerialType	HDSerial;

		///��֤��ʽ(ָ�ƻ�Կ�״���֤ʱ����)
		TTORATstpAuthModeType	AuthMode;

		///�豸��ʶ(ָ����֤ʱ����)
		TTORATstpDeviceIDType	DeviceID;

		///��֤���к�(ָ�ƻ�Կ�״���֤ʱ����)
		TTORATstpCertSerialType	CertSerial;

		///����IP��ַ
		TTORATstpIPAddressType	OuterIPAddress;

		///��̬����
		TTORATstpPasswordType	DynamicPassword;

		///�����˿ں�
		TTORATstpPortType	OuterPort;

	};

	/// ��¼Ӧ��
	struct CTORATstpRspUserLoginField
	{
			
		///��¼ʱ��
		TTORATstpTimeType	LoginTime;

		///��¼�˻�
		TTORATstpLogInAccountType	LogInAccount;

		///��¼�˻�����
		TTORATstpLogInAccountTypeType	LogInAccountType;

		///����ϵͳ����
		TTORATstpSystemNameType	SystemName;

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

		///������
		TTORATstpDateType	TradingDay;

		///�û�����
		TTORATstpUserIDType	UserID;

		///�û�����
		TTORATstpUserNameType	UserName;

		///�û�����
		TTORATstpUserTypeType	UserType;

		///һ����������
		TTORATstpDepartmentIDType	DepartmentID;

		///�ն�IP��ַ
		TTORATstpIPAddressType	InnerIPAddress;

		///Mac��ַ
		TTORATstpMacAddressType	MacAddress;

		///Ӳ�����к�
		TTORATstpHDSerialType	HDSerial;

		///��������
		TTORATstpCommFluxType	OrderInsertCommFlux;

		///�����޸�����(��),��Ϊ0��������Ч
		TTORATstpCountType	PasswordUpdatePeriod;

		///������Чʣ������
		TTORATstpCountType	PasswordRemainDays;

		///�Ƿ���Ҫ����
		TTORATstpBoolType	NeedUpdatePassword;

		///��������
		TTORATstpCommFluxType	OrderActionCommFlux;

		///�ƶ��豸�ֻ���
		TTORATstpMobileType	Mobile;

		///����IP��ַ
		TTORATstpIPAddressType	OuterIPAddress;

		///��֤���к�
		TTORATstpCertSerialType	CertSerial;

		///�����˿ں�
		TTORATstpPortType	OuterPort;

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

	/// ��������
	struct CTORATstpSpecificSecurityField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

	};

	/// Lev2����
	struct CTORATstpLev2MarketDataField
	{
			
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///���齻��������
		TTORATstpExchangeIDType	ExchangeID;

		///ʱ���
		TTORATstpTimeStampType	DataTimeStamp;

		///������
		TTORATstpPriceType	PreClosePrice;

		///����
		TTORATstpPriceType	OpenPrice;

		///�ɽ�����
		TTORATstpLongVolumeType	NumTrades;

		///�ɽ�����
		TTORATstpLongVolumeType	TotalVolumeTrade;

		///�ɽ��ܽ��
		TTORATstpMoneyType	TotalValueTrade;

		///ί����������
		TTORATstpLongVolumeType	TotalBidVolume;

		///��Ȩƽ��ί����۸�
		TTORATstpPriceType	AvgBidPrice;

		///ί����������
		TTORATstpLongVolumeType	TotalAskVolume;

		///��Ȩƽ��ί�����۸�
		TTORATstpPriceType	AvgAskPrice;

		///��߼�
		TTORATstpPriceType	HighestPrice;

		///��ͼ�
		TTORATstpPriceType	LowestPrice;

		///�ּ�
		TTORATstpPriceType	LastPrice;

		///�����һ
		TTORATstpPriceType	BidPrice1;

		///������һ
		TTORATstpLongVolumeType	BidVolume1;

		///������һ
		TTORATstpPriceType	AskPrice1;

		///������һ
		TTORATstpLongVolumeType	AskVolume1;

		///�����۶�
		TTORATstpPriceType	AskPrice2;

		///��������
		TTORATstpLongVolumeType	AskVolume2;

		///��������
		TTORATstpPriceType	AskPrice3;

		///��������
		TTORATstpLongVolumeType	AskVolume3;

		///����۶�
		TTORATstpPriceType	BidPrice2;

		///��������
		TTORATstpLongVolumeType	BidVolume2;

		///�������
		TTORATstpPriceType	BidPrice3;

		///��������
		TTORATstpLongVolumeType	BidVolume3;

		///��������
		TTORATstpPriceType	AskPrice4;

		///��������
		TTORATstpLongVolumeType	AskVolume4;

		///��������
		TTORATstpPriceType	AskPrice5;

		///��������
		TTORATstpLongVolumeType	AskVolume5;

		///�������
		TTORATstpPriceType	BidPrice4;

		///��������
		TTORATstpLongVolumeType	BidVolume4;

		///�������
		TTORATstpPriceType	BidPrice5;

		///��������
		TTORATstpLongVolumeType	BidVolume5;

		///��������
		TTORATstpPriceType	AskPrice6;

		///��������
		TTORATstpLongVolumeType	AskVolume6;

		///��������
		TTORATstpPriceType	AskPrice7;

		///��������
		TTORATstpLongVolumeType	AskVolume7;

		///�������
		TTORATstpPriceType	BidPrice6;

		///��������
		TTORATstpLongVolumeType	BidVolume6;

		///�������
		TTORATstpPriceType	BidPrice7;

		///��������
		TTORATstpLongVolumeType	BidVolume7;

		///�����۰�
		TTORATstpPriceType	AskPrice8;

		///��������
		TTORATstpLongVolumeType	AskVolume8;

		///�����۾�
		TTORATstpPriceType	AskPrice9;

		///��������
		TTORATstpLongVolumeType	AskVolume9;

		///����۰�
		TTORATstpPriceType	BidPrice8;

		///��������
		TTORATstpLongVolumeType	BidVolume8;

		///����۾�
		TTORATstpPriceType	BidPrice9;

		///��������
		TTORATstpLongVolumeType	BidVolume9;

		///�����ʮ
		TTORATstpPriceType	BidPrice10;

		///������ʮ
		TTORATstpLongVolumeType	BidVolume10;

		///������ʮ
		TTORATstpPriceType	AskPrice10;

		///������ʮ
		TTORATstpLongVolumeType	AskVolume10;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

		///��ͣ���(ֻ������������Ч)
		TTORATstpPriceType	UpperLimitPrice;

		///��ͣ���(ֻ������������Ч)
		TTORATstpPriceType	LowerLimitPrice;

		///�����̼�(ֻ���Ϻ�������Ч)
		TTORATstpPriceType	ClosePrice;

		///�����Ʒʵʱ״̬
		TTORATstpMDSecurityStatType	MDSecurityStat;

		///�����ܱ���(ֻ���Ϻ�������Ч)
		TTORATstpVolumeType	TotalBidNumber;

		///�����ܱ���(ֻ���Ϻ�������Ч)
		TTORATstpVolumeType	TotalOfferNumber;

		///����ί�гɽ����ȴ�ʱ��(ֻ���Ϻ�������Ч)
		TTORATstpVolumeType	BidTradeMaxDuration;

		///����ί�гɽ����ȴ�ʱ��(ֻ���Ϻ�������Ч)
		TTORATstpVolumeType	OfferTradeMaxDuration;

		///����ʵʱ�ο���ֵ
		TTORATstpPriceType	IOPV;

		///��һ������ί�б���
		TTORATstpVolumeType	Ask1NumOrders;

		///��һ������ί�б���
		TTORATstpVolumeType	Bid1NumOrders;

		///����������ί�б���
		TTORATstpVolumeType	Ask2NumOrders;

		///���������ί�б���
		TTORATstpVolumeType	Bid2NumOrders;

		///����������ί�б���
		TTORATstpVolumeType	Ask3NumOrders;

		///����������ί�б���
		TTORATstpVolumeType	Bid3NumOrders;

		///���ļ�����ί�б���
		TTORATstpVolumeType	Ask4NumOrders;

		///���ļ�����ί�б���
		TTORATstpVolumeType	Bid4NumOrders;

		///���������ί�б���
		TTORATstpVolumeType	Ask5NumOrders;

		///���������ί�б���
		TTORATstpVolumeType	Bid5NumOrders;

		///����������ί�б���
		TTORATstpVolumeType	Ask6NumOrders;

		///����������ί�б���
		TTORATstpVolumeType	Bid6NumOrders;

		///���߼�����ί�б���
		TTORATstpVolumeType	Ask7NumOrders;

		///���߼�����ί�б���
		TTORATstpVolumeType	Bid7NumOrders;

		///���˼�����ί�б���
		TTORATstpVolumeType	Ask8NumOrders;

		///��˼�����ί�б���
		TTORATstpVolumeType	Bid8NumOrders;

		///���ż�����ί�б���
		TTORATstpVolumeType	Ask9NumOrders;

		///��ż�����ί�б���
		TTORATstpVolumeType	Bid9NumOrders;

		///��ʮ������ί�б���
		TTORATstpVolumeType	Ask10NumOrders;

		///��ʮ������ί�б���
		TTORATstpVolumeType	Bid10NumOrders;

		///���볷������(ֻ���Ϻ�������Ч)
		TTORATstpVolumeType	WithdrawBuyNumber;

		///���볷������(ֻ���Ϻ�������Ч)
		TTORATstpLongVolumeType	WithdrawBuyAmount;

		///���볷�����(ֻ���Ϻ�������Ч)
		TTORATstpMoneyType	WithdrawBuyMoney;

		///������������(ֻ���Ϻ�������Ч)
		TTORATstpVolumeType	WithdrawSellNumber;

		///������������(ֻ���Ϻ�������Ч)
		TTORATstpLongVolumeType	WithdrawSellAmount;

		///�����������(ֻ���Ϻ�������Ч)
		TTORATstpMoneyType	WithdrawSellMoney;

	};

	/// Lev2ָ������
	struct CTORATstpLev2IndexField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///ʱ���
		TTORATstpTimeStampType	DataTimeStamp;

		///ǰ����ָ��
		TTORATstpPriceType	PreCloseIndex;

		///����ָ��
		TTORATstpPriceType	OpenIndex;

		///���ָ��
		TTORATstpPriceType	HighIndex;

		///���ָ��
		TTORATstpPriceType	LowIndex;

		///����ָ��
		TTORATstpPriceType	LastIndex;

		///���������Ӧָ���ĳɽ���Ԫ
		TTORATstpMoneyType	Turnover;

		///���������Ӧָ���Ľ�������(��)
		TTORATstpLongVolumeType	TotalVolumeTraded;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

		///����ָ��
		TTORATstpPriceType	CloseIndex;

	};

	/// Lev2��ʳɽ�
	struct CTORATstpLev2TransactionField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///ʱ���
		TTORATstpTimeStampType	TradeTime;

		///�ɽ��۸�
		TTORATstpPriceType	TradePrice;

		///�ɽ�����
		TTORATstpLongVolumeType	TradeVolume;

		///�ɽ����ֻ������������Ч��
		TTORATstpExecTypeType	ExecType;

		///�����
		TTORATstpSequenceNoType	MainSeq;

		///�����
		TTORATstpLongSequenceType	SubSeq;

		///��ί�����
		TTORATstpLongSequenceType	BuyNo;

		///����ί�����
		TTORATstpLongSequenceType	SellNo;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

		///�����̱�־��ֻ���Ϻ�������Ч��
		TTORATstpTradeBSFlagType	TradeBSFlag;

		///ҵ����ţ�ֻ���Ϻ�������Ч��
		TTORATstpLongSequenceType	BizIndex;

	};

	/// Lev2���ί��
	struct CTORATstpLev2OrderDetailField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///ʱ���
		TTORATstpTimeStampType	OrderTime;

		///ί�м۸�
		TTORATstpPriceType	Price;

		///ί������
		TTORATstpLongVolumeType	Volume;

		///ί�з���
		TTORATstpLSideType	Side;

		///�������ֻ������������Ч��
		TTORATstpLOrderTypeType	OrderType;

		///�����
		TTORATstpSequenceNoType	MainSeq;

		///�����
		TTORATstpSequenceNoType	SubSeq;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

		///ί�����
		TTORATstpLongSequenceType	OrderNO;

		///����״̬
		TTORATstpLOrderStatusType	OrderStatus;

		///ҵ����ţ�ֻ���Ϻ�������Ч��
		TTORATstpLongSequenceType	BizIndex;

	};

	/// Lev2�̺󶨼�����
	struct CTORATstpLev2PHMarketDataField
	{
			
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///���齻��������
		TTORATstpExchangeIDType	ExchangeID;

		///ʱ���
		TTORATstpTimeStampType	DataTimeStamp;

		///�����̼�(ֻ���Ϻ�������Ч)
		TTORATstpPriceType	ClosePrice;

		///�����Ʒʵʱ״̬
		TTORATstpMDSecurityStatType	MDSecurityStat;

		///�ɽ�����
		TTORATstpLongVolumeType	NumTrades;

		///�ɽ�����
		TTORATstpLongVolumeType	TotalVolumeTrade;

		///�ɽ��ܽ��
		TTORATstpMoneyType	TotalValueTrade;

		///ί����������
		TTORATstpLongVolumeType	TotalBidVolume;

		///ί����������
		TTORATstpLongVolumeType	TotalAskVolume;

		///���볷������
		TTORATstpLongVolumeType	WithdrawBuyNumber;

		///���볷������
		TTORATstpLongVolumeType	WithdrawBuyAmount;

		///������������
		TTORATstpLongVolumeType	WithdrawSellNumber;

		///������������
		TTORATstpLongVolumeType	WithdrawSellAmount;

		///������1
		TTORATstpLongVolumeType	BidOrderQty;

		///ʵ�ʵ���ί�б���1
		TTORATstpLongVolumeType	BidNumOrders;

		///������1
		TTORATstpLongVolumeType	AskOrderQty;

		///ʵ�ʵ���ί�б���1
		TTORATstpLongVolumeType	AskNumOrders;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

	};

	/// Lev2�̺󶨼���ʳɽ�
	struct CTORATstpLev2PHTransactionField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///ʱ���
		TTORATstpTimeStampType	TradeTime;

		///�ɽ��۸�
		TTORATstpPriceType	TradePrice;

		///�ɽ�����
		TTORATstpLongVolumeType	TradeVolume;

		///�ɽ����(Ԫ)
		TTORATstpMoneyType	TradeMoney;

		///�ɽ����
		TTORATstpExecTypeType	ExecType;

		///�����
		TTORATstpSequenceNoType	MainSeq;

		///�����
		TTORATstpLongSequenceType	SubSeq;

		///��ί�����
		TTORATstpLongSequenceType	BuyNo;

		///����ί�����
		TTORATstpLongSequenceType	SellNo;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

		///�����̱�־
		TTORATstpTradeBSFlagType	TradeBSFlag;

	};

	/// Lev2��ʳɽ��ش�
	struct CTORATstpLev2ResendTransactionField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///ʱ���
		TTORATstpTimeStampType	TradeTime;

		///�ɽ��۸�
		TTORATstpPriceType	TradePrice;

		///�ɽ�����
		TTORATstpLongVolumeType	TradeVolume;

		///�ɽ����ֻ������������Ч��
		TTORATstpExecTypeType	ExecType;

		///�����
		TTORATstpSequenceNoType	MainSeq;

		///�����
		TTORATstpLongSequenceType	SubSeq;

		///��ί�����
		TTORATstpLongSequenceType	BuyNo;

		///����ί�����
		TTORATstpLongSequenceType	SellNo;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

		///�����̱�־��ֻ���Ϻ�������Ч��
		TTORATstpTradeBSFlagType	TradeBSFlag;

		///ҵ����ţ�ֻ���Ϻ�������Ч��
		TTORATstpLongSequenceType	BizIndex;

	};

	/// Lev2���ί���ش�
	struct CTORATstpLev2ResendOrderDetailField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///ʱ���
		TTORATstpTimeStampType	OrderTime;

		///ί�м۸�
		TTORATstpPriceType	Price;

		///ί������
		TTORATstpLongVolumeType	Volume;

		///ί�з���
		TTORATstpLSideType	Side;

		///�������ֻ������������Ч��
		TTORATstpLOrderTypeType	OrderType;

		///�����
		TTORATstpSequenceNoType	MainSeq;

		///�����
		TTORATstpSequenceNoType	SubSeq;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

		///ί�����
		TTORATstpLongSequenceType	OrderNO;

		///����״̬
		TTORATstpLOrderStatusType	OrderStatus;

		///ҵ����ţ�ֻ���Ϻ�������Ч��
		TTORATstpLongSequenceType	BizIndex;

	};

	/// Lev2ծȯ��������(�Ϻ�)
	struct CTORATstpLev2XTSMarketDataField
	{
			
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///���齻��������
		TTORATstpExchangeIDType	ExchangeID;

		///ʱ���
		TTORATstpTimeStampType	DataTimeStamp;

		///������
		TTORATstpPriceType	PreClosePrice;

		///����
		TTORATstpPriceType	OpenPrice;

		///�ɽ�����
		TTORATstpLongVolumeType	NumTrades;

		///�ɽ�����
		TTORATstpLongVolumeType	TotalVolumeTrade;

		///�ɽ��ܽ��
		TTORATstpMoneyType	TotalValueTrade;

		///ί����������
		TTORATstpLongVolumeType	TotalBidVolume;

		///��Ȩƽ��ί����۸�
		TTORATstpPriceType	AvgBidPrice;

		///ί����������
		TTORATstpLongVolumeType	TotalAskVolume;

		///��Ȩƽ��ί�����۸�
		TTORATstpPriceType	AvgAskPrice;

		///��߼�
		TTORATstpPriceType	HighestPrice;

		///��ͼ�
		TTORATstpPriceType	LowestPrice;

		///�ּ�
		TTORATstpPriceType	LastPrice;

		///�����һ
		TTORATstpPriceType	BidPrice1;

		///������һ
		TTORATstpLongVolumeType	BidVolume1;

		///��һ������ί�б���
		TTORATstpVolumeType	Bid1NumOrders;

		///������һ
		TTORATstpPriceType	AskPrice1;

		///������һ
		TTORATstpLongVolumeType	AskVolume1;

		///��һ������ί�б���
		TTORATstpVolumeType	Ask1NumOrders;

		///�����۶�
		TTORATstpPriceType	AskPrice2;

		///��������
		TTORATstpLongVolumeType	AskVolume2;

		///����������ί�б���
		TTORATstpVolumeType	Ask2NumOrders;

		///��������
		TTORATstpPriceType	AskPrice3;

		///��������
		TTORATstpLongVolumeType	AskVolume3;

		///����������ί�б���
		TTORATstpVolumeType	Ask3NumOrders;

		///����۶�
		TTORATstpPriceType	BidPrice2;

		///��������
		TTORATstpLongVolumeType	BidVolume2;

		///���������ί�б���
		TTORATstpVolumeType	Bid2NumOrders;

		///�������
		TTORATstpPriceType	BidPrice3;

		///��������
		TTORATstpLongVolumeType	BidVolume3;

		///����������ί�б���
		TTORATstpVolumeType	Bid3NumOrders;

		///��������
		TTORATstpPriceType	AskPrice4;

		///��������
		TTORATstpLongVolumeType	AskVolume4;

		///���ļ�����ί�б���
		TTORATstpVolumeType	Ask4NumOrders;

		///��������
		TTORATstpPriceType	AskPrice5;

		///��������
		TTORATstpLongVolumeType	AskVolume5;

		///���������ί�б���
		TTORATstpVolumeType	Ask5NumOrders;

		///�������
		TTORATstpPriceType	BidPrice4;

		///��������
		TTORATstpLongVolumeType	BidVolume4;

		///���ļ�����ί�б���
		TTORATstpVolumeType	Bid4NumOrders;

		///�������
		TTORATstpPriceType	BidPrice5;

		///��������
		TTORATstpLongVolumeType	BidVolume5;

		///���������ί�б���
		TTORATstpVolumeType	Bid5NumOrders;

		///��������
		TTORATstpPriceType	AskPrice6;

		///��������
		TTORATstpLongVolumeType	AskVolume6;

		///����������ί�б���
		TTORATstpVolumeType	Ask6NumOrders;

		///��������
		TTORATstpPriceType	AskPrice7;

		///��������
		TTORATstpLongVolumeType	AskVolume7;

		///���߼�����ί�б���
		TTORATstpVolumeType	Ask7NumOrders;

		///�������
		TTORATstpPriceType	BidPrice6;

		///��������
		TTORATstpLongVolumeType	BidVolume6;

		///����������ί�б���
		TTORATstpVolumeType	Bid6NumOrders;

		///�������
		TTORATstpPriceType	BidPrice7;

		///��������
		TTORATstpLongVolumeType	BidVolume7;

		///���߼�����ί�б���
		TTORATstpVolumeType	Bid7NumOrders;

		///�����۰�
		TTORATstpPriceType	AskPrice8;

		///��������
		TTORATstpLongVolumeType	AskVolume8;

		///���˼�����ί�б���
		TTORATstpVolumeType	Ask8NumOrders;

		///�����۾�
		TTORATstpPriceType	AskPrice9;

		///��������
		TTORATstpLongVolumeType	AskVolume9;

		///���ż�����ί�б���
		TTORATstpVolumeType	Ask9NumOrders;

		///����۰�
		TTORATstpPriceType	BidPrice8;

		///��������
		TTORATstpLongVolumeType	BidVolume8;

		///��˼�����ί�б���
		TTORATstpVolumeType	Bid8NumOrders;

		///����۾�
		TTORATstpPriceType	BidPrice9;

		///��������
		TTORATstpLongVolumeType	BidVolume9;

		///��ż�����ί�б���
		TTORATstpVolumeType	Bid9NumOrders;

		///�����ʮ
		TTORATstpPriceType	BidPrice10;

		///������ʮ
		TTORATstpLongVolumeType	BidVolume10;

		///��ʮ������ί�б���
		TTORATstpVolumeType	Bid10NumOrders;

		///������ʮ
		TTORATstpPriceType	AskPrice10;

		///������ʮ
		TTORATstpLongVolumeType	AskVolume10;

		///��ʮ������ί�б���
		TTORATstpVolumeType	Ask10NumOrders;

		///�����̼�
		TTORATstpPriceType	ClosePrice;

		///�����Ʒʵʱ״̬
		TTORATstpMDSecurityStatType	MDSecurityStat;

		///�����ܱ���
		TTORATstpVolumeType	TotalBidNumber;

		///�����ܱ���
		TTORATstpVolumeType	TotalOfferNumber;

		///����ί�гɽ������ȴ�ʱ��
		TTORATstpVolumeType	BidTradeMaxDuration;

		///����ί�гɽ������ȴ�ʱ��
		TTORATstpVolumeType	OfferTradeMaxDuration;

		///���볷������
		TTORATstpVolumeType	WithdrawBuyNumber;

		///���볷������
		TTORATstpLongVolumeType	WithdrawBuyAmount;

		///���볷�����
		TTORATstpMoneyType	WithdrawBuyMoney;

		///������������
		TTORATstpVolumeType	WithdrawSellNumber;

		///������������
		TTORATstpLongVolumeType	WithdrawSellAmount;

		///�����������
		TTORATstpMoneyType	WithdrawSellMoney;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

	};

	/// Lev2ծȯ�������(�Ϻ�)
	struct CTORATstpLev2XTSTickField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///�����
		TTORATstpSequenceNoType	MainSeq;

		///�����
		TTORATstpLongSequenceType	SubSeq;

		///ʱ���
		TTORATstpTimeStampType	TickTime;

		///�������
		TTORATstpLTickTypeType	TickType;

		///��ί�����
		TTORATstpLongSequenceType	BuyNo;

		///����ί�����
		TTORATstpLongSequenceType	SellNo;

		///�۸�
		TTORATstpPriceType	Price;

		///����
		TTORATstpLongVolumeType	Volume;

		///�ɽ����
		TTORATstpMoneyType	TradeMoney;

		///ί�з���
		TTORATstpLSideType	Side;

		///�����̱�־
		TTORATstpTradeBSFlagType	TradeBSFlag;

		///�����Ʒʵʱ״̬
		TTORATstpMDSecurityStatType	MDSecurityStat;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

	};

	/// Lev2�������(�Ϻ�)
	struct CTORATstpLev2NGTSTickField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///�����
		TTORATstpSequenceNoType	MainSeq;

		///�����
		TTORATstpLongSequenceType	SubSeq;

		///ʱ���
		TTORATstpTimeStampType	TickTime;

		///�������
		TTORATstpLTickTypeType	TickType;

		///��ί�����
		TTORATstpLongSequenceType	BuyNo;

		///����ί�����
		TTORATstpLongSequenceType	SellNo;

		///�۸�
		TTORATstpPriceType	Price;

		///����
		TTORATstpLongVolumeType	Volume;

		///�ɽ���������ί�ж����ѳɽ�ί����
		TTORATstpMoneyType	TradeMoney;

		///ί�з���
		TTORATstpLSideType	Side;

		///�����̱�־
		TTORATstpTradeBSFlagType	TradeBSFlag;

		///�����Ʒʵʱ״̬
		TTORATstpMDSecurityStatType	MDSecurityStat;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

	};

	/// Lev2����ծȯ��������
	struct CTORATstpLev2BondMarketDataField
	{
			
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///���齻��������
		TTORATstpExchangeIDType	ExchangeID;

		///ʱ���
		TTORATstpTimeStampType	DataTimeStamp;

		///������
		TTORATstpPriceType	PreClosePrice;

		///����
		TTORATstpPriceType	OpenPrice;

		///�����̼�Ȩƽ����
		TTORATstpPriceType	AvgPreClosePrice;

		///�ɽ�����
		TTORATstpLongVolumeType	NumTrades;

		///�ɽ�����
		TTORATstpLongVolumeType	TotalVolumeTrade;

		///�ɽ��ܽ��
		TTORATstpMoneyType	TotalValueTrade;

		///ƥ��ɽ��ɽ���
		TTORATstpLongVolumeType	AuctionVolumeTrade;

		///ƥ��ɽ��ɽ����
		TTORATstpMoneyType	AuctionValueTrade;

		///ί����������
		TTORATstpLongVolumeType	TotalBidVolume;

		///��Ȩƽ��ί����۸�
		TTORATstpPriceType	AvgBidPrice;

		///ί����������
		TTORATstpLongVolumeType	TotalAskVolume;

		///��Ȩƽ��ί�����۸�
		TTORATstpPriceType	AvgAskPrice;

		///��߼�
		TTORATstpPriceType	HighestPrice;

		///��ͼ�
		TTORATstpPriceType	LowestPrice;

		///�����
		TTORATstpPriceType	LastPrice;

		///ƥ��ɽ������
		TTORATstpPriceType	AuctionLastPrice;

		///��Ȩƽ���۸�
		TTORATstpPriceType	AvgPrice;

		///����1
		TTORATstpPriceType	PriceUpDown1;

		///����2
		TTORATstpPriceType	PriceUpDown2;

		///�����̼�
		TTORATstpPriceType	ClosePrice;

		///�����Ʒʵʱ״̬
		TTORATstpMDSecurityStatType	MDSecurityStat;

		///�����һ
		TTORATstpPriceType	BidPrice1;

		///������һ
		TTORATstpLongVolumeType	BidVolume1;

		///��һ������ί�б���
		TTORATstpVolumeType	Bid1NumOrders;

		///������һ
		TTORATstpPriceType	AskPrice1;

		///������һ
		TTORATstpLongVolumeType	AskVolume1;

		///��һ������ί�б���
		TTORATstpVolumeType	Ask1NumOrders;

		///�����۶�
		TTORATstpPriceType	AskPrice2;

		///��������
		TTORATstpLongVolumeType	AskVolume2;

		///����������ί�б���
		TTORATstpVolumeType	Ask2NumOrders;

		///��������
		TTORATstpPriceType	AskPrice3;

		///��������
		TTORATstpLongVolumeType	AskVolume3;

		///����������ί�б���
		TTORATstpVolumeType	Ask3NumOrders;

		///����۶�
		TTORATstpPriceType	BidPrice2;

		///��������
		TTORATstpLongVolumeType	BidVolume2;

		///���������ί�б���
		TTORATstpVolumeType	Bid2NumOrders;

		///�������
		TTORATstpPriceType	BidPrice3;

		///��������
		TTORATstpLongVolumeType	BidVolume3;

		///����������ί�б���
		TTORATstpVolumeType	Bid3NumOrders;

		///��������
		TTORATstpPriceType	AskPrice4;

		///��������
		TTORATstpLongVolumeType	AskVolume4;

		///���ļ�����ί�б���
		TTORATstpVolumeType	Ask4NumOrders;

		///��������
		TTORATstpPriceType	AskPrice5;

		///��������
		TTORATstpLongVolumeType	AskVolume5;

		///���������ί�б���
		TTORATstpVolumeType	Ask5NumOrders;

		///�������
		TTORATstpPriceType	BidPrice4;

		///��������
		TTORATstpLongVolumeType	BidVolume4;

		///���ļ�����ί�б���
		TTORATstpVolumeType	Bid4NumOrders;

		///�������
		TTORATstpPriceType	BidPrice5;

		///��������
		TTORATstpLongVolumeType	BidVolume5;

		///���������ί�б���
		TTORATstpVolumeType	Bid5NumOrders;

		///��������
		TTORATstpPriceType	AskPrice6;

		///��������
		TTORATstpLongVolumeType	AskVolume6;

		///����������ί�б���
		TTORATstpVolumeType	Ask6NumOrders;

		///��������
		TTORATstpPriceType	AskPrice7;

		///��������
		TTORATstpLongVolumeType	AskVolume7;

		///���߼�����ί�б���
		TTORATstpVolumeType	Ask7NumOrders;

		///�������
		TTORATstpPriceType	BidPrice6;

		///��������
		TTORATstpLongVolumeType	BidVolume6;

		///����������ί�б���
		TTORATstpVolumeType	Bid6NumOrders;

		///�������
		TTORATstpPriceType	BidPrice7;

		///��������
		TTORATstpLongVolumeType	BidVolume7;

		///���߼�����ί�б���
		TTORATstpVolumeType	Bid7NumOrders;

		///�����۰�
		TTORATstpPriceType	AskPrice8;

		///��������
		TTORATstpLongVolumeType	AskVolume8;

		///���˼�����ί�б���
		TTORATstpVolumeType	Ask8NumOrders;

		///�����۾�
		TTORATstpPriceType	AskPrice9;

		///��������
		TTORATstpLongVolumeType	AskVolume9;

		///���ż�����ί�б���
		TTORATstpVolumeType	Ask9NumOrders;

		///����۰�
		TTORATstpPriceType	BidPrice8;

		///��������
		TTORATstpLongVolumeType	BidVolume8;

		///��˼�����ί�б���
		TTORATstpVolumeType	Bid8NumOrders;

		///����۾�
		TTORATstpPriceType	BidPrice9;

		///��������
		TTORATstpLongVolumeType	BidVolume9;

		///��ż�����ί�б���
		TTORATstpVolumeType	Bid9NumOrders;

		///�����ʮ
		TTORATstpPriceType	BidPrice10;

		///������ʮ
		TTORATstpLongVolumeType	BidVolume10;

		///��ʮ������ί�б���
		TTORATstpVolumeType	Bid10NumOrders;

		///������ʮ
		TTORATstpPriceType	AskPrice10;

		///������ʮ
		TTORATstpLongVolumeType	AskVolume10;

		///��ʮ������ί�б���
		TTORATstpVolumeType	Ask10NumOrders;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

	};

	/// Lev2����ծȯ�������
	struct CTORATstpLev2BondOrderDetailField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///ʱ���
		TTORATstpTimeStampType	OrderTime;

		///ί�м۸�
		TTORATstpPriceType	Price;

		///ί������
		TTORATstpLongVolumeType	Volume;

		///ί�з���
		TTORATstpLSideType	Side;

		///�������
		TTORATstpLOrderTypeType	OrderType;

		///�����
		TTORATstpSequenceNoType	MainSeq;

		///�����
		TTORATstpLongSequenceType	SubSeq;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

	};

	/// Lev2����ծȯ�������
	struct CTORATstpLev2BondTransactionField
	{
			
		///����������
		TTORATstpExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;

		///ʱ���
		TTORATstpTimeStampType	TradeTime;

		///�ɽ��۸�
		TTORATstpPriceType	TradePrice;

		///�ɽ�����
		TTORATstpLongVolumeType	TradeVolume;

		///�ɽ����
		TTORATstpExecTypeType	ExecType;

		///�����
		TTORATstpSequenceNoType	MainSeq;

		///�����
		TTORATstpLongSequenceType	SubSeq;

		///��ί�����
		TTORATstpLongSequenceType	BuyNo;

		///����ί�����
		TTORATstpLongSequenceType	SellNo;

		///������Ϣ1
		TTORATstpIntInfoType	Info1;

		///������Ϣ2
		TTORATstpIntInfoType	Info2;

		///������Ϣ3
		TTORATstpIntInfoType	Info3;

	};

}
#endif