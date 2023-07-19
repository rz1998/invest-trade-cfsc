/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpXMdApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////
#ifndef TORATSTPXMDAPISTRUCT_H__
#define TORATSTPXMDAPISTRUCT_H__

#include "TORATstpXMdApiDataType.h"

namespace TORALEV1API
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
	
	/// ��������
	struct CTORATstpSpecificSecurityField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// �����г�
	struct CTORATstpSpecificMarketField
	{
		///�г�����
		TTORATstpMarketIDType	MarketID;
	};
	
	/// ��ѯ�������
	struct CTORATstpInquiryMarketDataField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// �������֪ͨ
	struct CTORATstpMarketDataField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///�����̼�
		TTORATstpPriceType	PreClosePrice;
	
		///���̼�
		TTORATstpPriceType	OpenPrice;
	
		///�ɽ���
		TTORATstpLongVolumeType	Volume;
	
		///�ɽ���
		TTORATstpMoneyType	Turnover;
	
		///�ɽ�����
		TTORATstpLongVolumeType	TradingCount;
	
		///���¼ۣ��۹�Ϊ���̼ۣ�
		TTORATstpPriceType	LastPrice;
	
		///��߼�
		TTORATstpPriceType	HighestPrice;
	
		///��ͼ�
		TTORATstpPriceType	LowestPrice;
	
		///��1��
		TTORATstpPriceType	BidPrice1;
	
		///��1��
		TTORATstpPriceType	AskPrice1;
	
		///��ͣ�ۣ��۹�Ϊ�侲�ڻ򼯺Ͼ��۵ļ۸����ޣ�
		TTORATstpPriceType	UpperLimitPrice;
	
		///��ͣ�ۣ��۹�Ϊ�侲�ڻ򼯺Ͼ��۵ļ۸����ޣ�
		TTORATstpPriceType	LowerLimitPrice;
	
		///��ӯ��1
		TTORATstpRatioType	PERatio1;
	
		///��ӯ��2
		TTORATstpRatioType	PERatio2;
	
		///�۸�����1
		TTORATstpPriceType	PriceUpDown1;
	
		///�۸�����2
		TTORATstpPriceType	PriceUpDown2;
	
		///�ֲ���
		TTORATstpLargeVolumeType	OpenInterest;
	
		///��1��
		TTORATstpLongVolumeType	BidVolume1;
	
		///��1��
		TTORATstpLongVolumeType	AskVolume1;
	
		///��2��
		TTORATstpPriceType	BidPrice2;
	
		///��2��
		TTORATstpLongVolumeType	BidVolume2;
	
		///��2��
		TTORATstpPriceType	AskPrice2;
	
		///��2��
		TTORATstpLongVolumeType	AskVolume2;
	
		///��3��
		TTORATstpPriceType	BidPrice3;
	
		///��3��
		TTORATstpLongVolumeType	BidVolume3;
	
		///��3��
		TTORATstpPriceType	AskPrice3;
	
		///��3��
		TTORATstpLongVolumeType	AskVolume3;
	
		///��4��
		TTORATstpPriceType	BidPrice4;
	
		///��4��
		TTORATstpLongVolumeType	BidVolume4;
	
		///��4��
		TTORATstpPriceType	AskPrice4;
	
		///��4��
		TTORATstpLongVolumeType	AskVolume4;
	
		///��5��
		TTORATstpPriceType	BidPrice5;
	
		///��5��
		TTORATstpLongVolumeType	BidVolume5;
	
		///��5��
		TTORATstpPriceType	AskPrice5;
	
		///��5��
		TTORATstpLongVolumeType	AskVolume5;
	
		///����ʱ��
		TTORATstpTimeType	UpdateTime;
	
		///���º���
		TTORATstpMillisecType	UpdateMillisec;
	
		///�����̼�
		TTORATstpPriceType	ClosePrice;
	
		///������
		TTORATstpPriceType	SettlementPrice;
	
		///�����Ʒʵʱ״̬
		TTORATstpMDSecurityStatType	MDSecurityStat;
	
		///��ʾ����
		TTORATstpHWLevelType	HWLevel;
	
		///����T-1������ʱ�̾�ֵ
		TTORATstpPriceType	PreCloseIOPV;
	
		///����ʵʱ�ο���ֵ
		TTORATstpPriceType	IOPV;
	};
	
	/// ��ѯ��Ӧ��
	struct CTORATstpQryRspInfoField
	{
		///������ʶ
		TTORATstpEndFlagType	EndFlag;
	
		///�������
		TTORATstpErrorIDType	ErrorID;
	
		///������Ϣ
		TTORATstpErrorMsgType	ErrorMsg;
	};
	
	/// �̺�����֪ͨ
	struct CTORATstpPHMarketDataField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///�ɽ���
		TTORATstpLongVolumeType	Volume;
	
		///�ɽ����
		TTORATstpMoneyType	Turnover;
	
		///�����̼�
		TTORATstpPriceType	ClosePrice;
	
		///��ͣ��
		TTORATstpPriceType	UpperLimitPrice;
	
		///��ͣ��
		TTORATstpPriceType	LowerLimitPrice;
	
		///�����걨����
		TTORATstpLongVolumeType	BidVolume;
	
		///�����걨����
		TTORATstpLongVolumeType	AskVolume;
	
		///����ʱ��
		TTORATstpTimeType	UpdateTime;
	
		///���º���
		TTORATstpMillisecType	UpdateMillisec;
	
		///�����Ʒʵʱ״̬
		TTORATstpMDSecurityStatType	MDSecurityStat;
	
		///��ʾ����
		TTORATstpHWLevelType	HWLevel;
	};
	
	/// ��ѯ�ض��������
	struct CTORATstpInquirySpecialMarketDataField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	};
	
	/// �ر�����֪ͨ
	struct CTORATstpSpecialMarketDataField
	{
		///������
		TTORATstpDateType	TradingDay;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///�ƶ�ƽ����
		TTORATstpPriceType	MovingAvgPrice;
	
		///��������
		TTORATstpVolumeType	MovingAvgPriceSamplingNum;
	
		///����޸�ʱ��
		TTORATstpTimeType	UpdateTime;
	
		///����޸ĺ���
		TTORATstpMillisecType	UpdateMillisec;
	};
	
	/// ��������
	struct CTORATstpSimplifyMarketDataField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///֤ȯ����
		TTORATstpSecurityNameType	SecurityName;
	
		///�����̼�
		TTORATstpPriceType	PreClosePrice;
	
		///���¼�
		TTORATstpPriceType	LastPrice;
	
		///��1��
		TTORATstpPriceType	BidPrice1;
	
		///��1��
		TTORATstpPriceType	AskPrice1;
	
		///��߼�
		TTORATstpPriceType	HighestPrice;
	
		///��ͼ�
		TTORATstpPriceType	LowestPrice;
	
		///��ͣ��
		TTORATstpPriceType	UpperLimitPrice;
	
		///��ͣ��
		TTORATstpPriceType	LowerLimitPrice;
	
		///�����̼�
		TTORATstpPriceType	ClosePrice;
	
		///������
		TTORATstpPriceType	SettlementPrice;
	
		///����ʱ��
		TTORATstpTimeType	UpdateTime;
	};
	
	/// ��Լ״̬
	struct CTORATstpSecurityStatusField
	{
		///����������
		TTORATstpExchangeIDType	ExchangeID;
	
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///�Ƿ�ͣ��
		TTORATstpBoolType	IsSuspend;
	
		///�Ƿ񲨶����ж�
		TTORATstpBoolType	IsBreak;
	
		///�Ƿ���ͣ��
		TTORATstpBoolType	IsLongSuspend;
	
		///�Ƿ��۶�
		TTORATstpBoolType	IsCircuitBreak;
	
		///�Ƿ����������
		TTORATstpBoolType	IsSupportMarginBuy;
	
		///�Ƿ����ȯ����
		TTORATstpBoolType	IsSupportShortSell;
	
		///�Ƿ���깺
		TTORATstpBoolType	IsSupportPur;
	
		///�Ƿ�����
		TTORATstpBoolType	IsSupportRed;
	
		///�Ƿ�ɲ��
		TTORATstpBoolType	IsSupportSplit;
	
		///�Ƿ�ɺϲ�
		TTORATstpBoolType	IsSupportMerge;
	
		///�Ƿ����Ѻ���
		TTORATstpBoolType	IsSupportPleadgeIn;
	
		///�Ƿ����Ѻ����
		TTORATstpBoolType	IsSupportPleadgeOut;
	
		///�Ƿ��������
		TTORATstpBoolType	IsSupportRoundLotBuy;
	
		///�Ƿ��������
		TTORATstpBoolType	IsSupportRoundLotSell;
	
		///�Ƿ�������
		TTORATstpBoolType	IsSupportOddLotBuy;
	
		///�Ƿ�������
		TTORATstpBoolType	IsSupportOddLotSell;
	
		///�Ƿ����Ȩ
		TTORATstpBoolType	IsSupportExercise;
	
		///�Ƿ��������뿪��
		TTORATstpBoolType	IsLimitBuy;
	
		///�Ƿ�������������
		TTORATstpBoolType	IsLimitSell;
	
		///�Ƿ����Ʊ��ҿ���
		TTORATstpBoolType	IsLimitCover;
	
		///�Ƿ����������̱���
		TTORATstpBoolType	IsLimitMarketMaker;
	};
	
	/// �г�״̬
	struct CTORATstpMarketStatusField
	{
		///�г�����
		TTORATstpMarketIDType	MarketID;
	
		///�г�״̬
		TTORATstpMarketStatusType	MarketStatus;
	};
	
	/// ���ͨ�����г�����״̬��Ϣ
	struct CTORATstpImcParamsField
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
	
	/// �ϳɿ���
	struct CTORATstpRapidMarketDataField
	{
		///֤ȯ����
		TTORATstpSecurityIDType	SecurityID;
	
		///����������
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
	
		///��ͣ���(ֻ������������Ч)
		TTORATstpPriceType	UpperLimitPrice;
	
		///��ͣ���(ֻ������������Ч)
		TTORATstpPriceType	LowerLimitPrice;
	
		///�����̼�(ֻ���Ϻ�������Ч)
		TTORATstpPriceType	ClosePrice;
	
		///�����Ʒʵʱ״̬
		TTORATstpMDSecurityStatType	MDSecurityStat;
	
		///����ʵʱ�ο���ֵ
		TTORATstpPriceType	IOPV;
	
		///����
		TTORATstpLongVolumeType	InnerSell;
	
		///����
		TTORATstpLongVolumeType	OuterBuy;
	
		///����ʣ�����һ
		TTORATstpVolumeType	BidCount1;
	
		///����ʣ�����һ
		TTORATstpVolumeType	AskCount1;
	
		///����ʣ�������
		TTORATstpVolumeType	AskCount2;
	
		///����ʣ�������
		TTORATstpVolumeType	AskCount3;
	
		///����ʣ�������
		TTORATstpVolumeType	BidCount2;
	
		///����ʣ�������
		TTORATstpVolumeType	BidCount3;
	
		///����ʣ�������
		TTORATstpVolumeType	AskCount4;
	
		///����ʣ�������
		TTORATstpVolumeType	AskCount5;
	
		///����ʣ�������
		TTORATstpVolumeType	BidCount4;
	
		///����ʣ�������
		TTORATstpVolumeType	BidCount5;
	
		///����ʣ�������
		TTORATstpVolumeType	AskCount6;
	
		///����ʣ�������
		TTORATstpVolumeType	AskCount7;
	
		///����ʣ�������
		TTORATstpVolumeType	BidCount6;
	
		///����ʣ�������
		TTORATstpVolumeType	BidCount7;
	
		///����ʣ�������
		TTORATstpVolumeType	AskCount8;
	
		///����ʣ�������
		TTORATstpVolumeType	AskCount9;
	
		///����ʣ�������
		TTORATstpVolumeType	BidCount8;
	
		///����ʣ�������
		TTORATstpVolumeType	BidCount9;
	
		///����ʣ�����ʮ
		TTORATstpVolumeType	BidCount10;
	
		///����ʣ�����ʮ
		TTORATstpVolumeType	AskCount10;
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
#endif // TORATSTPXMDAPISTRUCT_H__