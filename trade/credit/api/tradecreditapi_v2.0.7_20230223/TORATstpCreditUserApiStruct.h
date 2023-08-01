/////////////////////////////////////////////////////////////////////////
///@company 上海泰琰信息科技有限公司
///@file TORATstpCreditUserApiStruct.h
///@brief 定义了客户端接口使用的业务数据结构
///@history 
/////////////////////////////////////////////////////////////////////////
#ifndef TORATSTPCREDITUSERAPISTRUCT_H__
#define TORATSTPCREDITUSERAPISTRUCT_H__

#include "TORATstpCreditUserApiDataType.h"

namespace TORACREDITAPI
{
	/// 登录请求
	struct CTORATstpReqUserLoginField
	{
		///登录账户
		TTORATstpLogInAccountType	LogInAccount;
	
		///登录账户类型
		TTORATstpLogInAccountTypeType	LogInAccountType;
	
		///经纪公司部门代码（以资金账号方式登录时必填）
		TTORATstpDepartmentIDType	DepartmentID;
	
		///认证方式(指纹或钥匙串认证时必填)
		TTORATstpAuthModeType	AuthMode;
	
		///密码(密码认证时必填)
		TTORATstpPasswordType	Password;
	
		///用户端产品信息
		TTORATstpUserProductInfoType	UserProductInfo;
	
		///接口端产品信息
		TTORATstpInterfaceProductInfoType	InterfaceProductInfo;
	
		///终端采集信息
		TTORATstpTerminalInfoType	TerminalInfo;
	
		///内网IP地址
		TTORATstpIPAddressType	InnerIPAddress;
	
		///外网IP地址
		TTORATstpIPAddressType	OuterIPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	
		///接口语言
		TTORATstpLangType	Lang;
	
		///终端动态秘钥
		TTORATstpPasswordType	DynamicPassword;
	
		///设备标识(指纹认证时必填)
		TTORATstpDeviceIDType	DeviceID;
	
		///认证序列号(指纹或钥匙串认证时必填)
		TTORATstpCertSerialType	CertSerial;
	
		///设备类别(指纹或钥匙串认证时必填)
		TTORATstpDeviceTypeType	DeviceType;
	};

	/// 登录响应
	struct CTORATstpRspUserLoginField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///登录账户
		TTORATstpLogInAccountType	LogInAccount;
	
		///登录账户类型
		TTORATstpLogInAccountTypeType	LogInAccountType;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///最大报单引用
		TTORATstpOrderRefType	MaxOrderRef;
	
		///私有流长度
		TTORATstpVolumeType	PrivateFlowCount;
	
		///公有流长度
		TTORATstpVolumeType	PublicFlowCount;
	
		///登录时间
		TTORATstpTimeType	LoginTime;
	
		///交易系统名称
		TTORATstpSystemNameType	SystemName;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///用户代码
		TTORATstpUserIDType	UserID;
	
		///用户名称
		TTORATstpUserNameType	UserName;
	
		///用户类型
		TTORATstpUserTypeType	UserType;
	
		///报单流控
		TTORATstpCommFluxType	OrderInsertCommFlux;
	
		///撤单流控
		TTORATstpCommFluxType	OrderActionCommFlux;
	
		///密码到期日期
		TTORATstpDateType	PasswordExpiryDate;
	
		///是否需要改密
		TTORATstpBoolType	NeedUpdatePassword;
	
		///认证序列号
		TTORATstpCertSerialType	CertSerial;
	
		///内网IP地址
		TTORATstpIPAddressType	InnerIPAddress;
	
		///外网IP地址
		TTORATstpIPAddressType	OuterIPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	};

	/// 响应信息
	struct CTORATstpRspInfoField
	{
		///错误代码
		TTORATstpErrorIDType	ErrorID;
	
		///错误信息
		TTORATstpErrorMsgType	ErrorMsg;
	};

	/// 用户登出
	struct CTORATstpUserLogoutField
	{
		///用户代码
		TTORATstpUserIDType	UserID;
	};

	/// 修改用户密码
	struct CTORATstpUserPasswordUpdateField
	{
		///用户代码
		TTORATstpUserIDType	UserID;
	
		///旧密码
		TTORATstpPasswordType	OldPassword;
	
		///新密码
		TTORATstpPasswordType	NewPassword;
	};

	/// 请求录入设备序列
	struct CTORATstpReqInputDeviceSerialField
	{
		///用户代码
		TTORATstpUserIDType	UserID;
	
		///设备标识
		TTORATstpDeviceIDType	DeviceID;
	
		///设备序列号
		TTORATstpCertSerialType	CertSerial;
	
		///设备类别
		TTORATstpDeviceTypeType	DeviceType;
	};

	/// 请求录入设备序列响应
	struct CTORATstpRspInputDeviceSerialField
	{
		///用户代码
		TTORATstpUserIDType	UserID;
	};

	/// 输入报单
	struct CTORATstpInputOrderField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///买卖方向
		TTORATstpDirectionType	Direction;
	
		///价格
		TTORATstpPriceType	LimitPrice;
	
		///数量
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///报单价格条件
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///有效期类型
		TTORATstpTimeConditionType	TimeCondition;
	
		///成交量类型
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///报单引用
		TTORATstpOrderRefType	OrderRef;
	
		///港股通订单数量类型
		TTORATstpLotTypeType	LotType;
	
		///系统报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///条件检查
		TTORATstpCondCheckType	CondCheck;
	
		///有效日期
		TTORATstpDateType	GTDate;
	
		///强平原因
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///指定偿还的信用负债编号（该字段置空表示不指定偿还）
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///头寸类型
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///费息折扣券编号（0表示不使用折扣券）
		TTORATstpIntSerialType	DiscountCouponID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 报单
	struct CTORATstpOrderField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///买卖方向
		TTORATstpDirectionType	Direction;
	
		///报单价格条件
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///有效期类型
		TTORATstpTimeConditionType	TimeCondition;
	
		///成交量类型
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///价格
		TTORATstpPriceType	LimitPrice;
	
		///数量
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///港股通订单数量类型
		TTORATstpLotTypeType	LotType;
	
		///有效日期
		TTORATstpDateType	GTDate;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///条件检查
		TTORATstpCondCheckType	CondCheck;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	
		///请求编号
		TTORATstpRequestIDType	RequestID;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///报单引用
		TTORATstpOrderRefType	OrderRef;
	
		///本地报单编号
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///系统报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///报单状态
		TTORATstpOrderStatusType	OrderStatus;
	
		///报单提交状态
		TTORATstpOrderSubmitStatusType	OrderSubmitStatus;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	
		///已成交数量
		TTORATstpVolumeType	VolumeTraded;
	
		///已撤销数量
		TTORATstpVolumeType	VolumeCanceled;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///申报用户
		TTORATstpUserIDType	InsertUser;
	
		///申报日期
		TTORATstpDateType	InsertDate;
	
		///申报时间
		TTORATstpTimeType	InsertTime;
	
		///交易所接收时间
		TTORATstpTimeType	AcceptTime;
	
		///撤销用户
		TTORATstpUserIDType	CancelUser;
	
		///撤销时间
		TTORATstpTimeType	CancelTime;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///交易单元代码
		TTORATstpPbuIDType	PbuID;
	
		///成交金额
		TTORATstpMoneyType	Turnover;
	
		///报单类型
		TTORATstpOrderTypeType	OrderType;
	
		///用户端产品信息
		TTORATstpUserProductInfoType	UserProductInfo;
	
		///强平原因
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///信用头寸编号
		TTORATstpQuotaIDType	CreditQuotaID;
	
		///头寸类型
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	
		///回报附加浮点型数据信息
		TTORATstpFloatInfoType	RtnFloatInfo;
	
		///回报附加整型数据
		TTORATstpIntInfoType	RtnIntInfo;
	
		///扩展报单状态
		TTORATstpExtendOrderStatusType	ExtendOrderStatus;
	};

	/// 用户标识
	struct CTORATstpUserRefField
	{
		///用户代码
		TTORATstpUserIDType	UserID;
	};

	/// 成交
	struct CTORATstpTradeField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///成交编号
		TTORATstpTradeIDType	TradeID;
	
		///买卖方向
		TTORATstpDirectionType	Direction;
	
		///系统报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///本地报单编号
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///成交价格
		TTORATstpPriceType	Price;
	
		///成交数量
		TTORATstpVolumeType	Volume;
	
		///成交日期
		TTORATstpDateType	TradeDate;
	
		///成交时间
		TTORATstpTimeType	TradeTime;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///交易单元代码
		TTORATstpPbuIDType	PbuID;
	
		///报单引用
		TTORATstpOrderRefType	OrderRef;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	};

	/// 输入撤单操作
	struct CTORATstpInputOrderActionField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///被撤报单前置编号
		TTORATstpFrontIDType	FrontID;
	
		///被撤报单会话编号
		TTORATstpSessionIDType	SessionID;
	
		///被撤报单引用
		TTORATstpOrderRefType	OrderRef;
	
		///被撤报单系统编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///操作标志
		TTORATstpActionFlagType	ActionFlag;
	
		///报单操作引用
		TTORATstpOrderRefType	OrderActionRef;
	
		///系统撤单编号
		TTORATstpOrderSysIDType	CancelOrderSysID;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 条件单录入域
	struct CTORATstpInputCondOrderField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///买卖方向
		TTORATstpDirectionType	Direction;
	
		///价格类型
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///有效期类型
		TTORATstpTimeConditionType	TimeCondition;
	
		///成交量类型
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///报单价格
		TTORATstpPriceType	LimitPrice;
	
		///报单数量
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///港股通订单数量类型
		TTORATstpLotTypeType	LotType;
	
		///条件检查
		TTORATstpCondCheckType	CondCheck;
	
		///有效日期
		TTORATstpDateType	GTDate;
	
		///强平原因
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///指定偿还的信用负债编号（该字段置空表示不指定偿还）
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///头寸类型
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///费息折扣券编号（0表示不使用折扣券）
		TTORATstpIntSerialType	DiscountCouponID;
	
		///条件报单引用
		TTORATstpOrderRefType	CondOrderRef;
	
		///条件报单编号
		TTORATstpCondOrderIDType	CondOrderID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	
		///触发基准数量类型
		TTORATstpTriggerOrderVolumeTypeType	TriggerOrderVolumeType;
	
		///触发基准价类型
		TTORATstpTriggerOrderPriceTypeType	TriggerOrderPriceType;
	
		///条件单触发条件
		TTORATstpContingentConditionType	ContingentCondition;
	
		///条件价
		TTORATstpPriceType	ConditionPrice;
	
		///价格浮动tick数
		TTORATstpVolumeType	PriceTicks;
	
		///数量浮动倍数
		TTORATstpVolumeMultipleType	VolumeMultiple;
	
		///相关前置编号
		TTORATstpFrontIDType	RelativeFrontID;
	
		///相关会话编号
		TTORATstpSessionIDType	RelativeSessionID;
	
		///相关条件参数
		TTORATstpRelativeCondParamType	RelativeParam;
	
		///附加条件单触发条件
		TTORATstpContingentConditionType	AppendContingentCondition;
	
		///附加条件价
		TTORATstpPriceType	AppendConditionPrice;
	
		///附加相关前置编号
		TTORATstpFrontIDType	AppendRelativeFrontID;
	
		///附加相关会话编号
		TTORATstpSessionIDType	AppendRelativeSessionID;
	
		///附加相关条件参数
		TTORATstpRelativeCondParamType	AppendRelativeParam;
	};

	/// 条件单域
	struct CTORATstpConditionOrderField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///买卖方向
		TTORATstpDirectionType	Direction;
	
		///价格类型
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///有效期类型
		TTORATstpTimeConditionType	TimeCondition;
	
		///成交量类型
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///报单价格
		TTORATstpPriceType	LimitPrice;
	
		///报单数量
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///港股通订单数量类型
		TTORATstpLotTypeType	LotType;
	
		///条件检查
		TTORATstpCondCheckType	CondCheck;
	
		///有效日期
		TTORATstpDateType	GTDate;
	
		///强平原因
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///指定偿还的信用负债编号（该字段置空表示不指定偿还）
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///头寸类型
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///费息折扣券编号（0表示不使用折扣券）
		TTORATstpIntSerialType	DiscountCouponID;
	
		///条件报单引用
		TTORATstpOrderRefType	CondOrderRef;
	
		///报单编号
		TTORATstpCondOrderIDType	CondOrderID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	
		///触发基准数量类型
		TTORATstpTriggerOrderVolumeTypeType	TriggerOrderVolumeType;
	
		///触发基准价类型
		TTORATstpTriggerOrderPriceTypeType	TriggerOrderPriceType;
	
		///条件单触发条件
		TTORATstpContingentConditionType	ContingentCondition;
	
		///条件价
		TTORATstpPriceType	ConditionPrice;
	
		///价格浮动tick数
		TTORATstpVolumeType	PriceTicks;
	
		///数量浮动倍数
		TTORATstpVolumeMultipleType	VolumeMultiple;
	
		///相关前置编号
		TTORATstpFrontIDType	RelativeFrontID;
	
		///相关会话编号
		TTORATstpSessionIDType	RelativeSessionID;
	
		///相关条件参数
		TTORATstpRelativeCondParamType	RelativeParam;
	
		///附加条件单触发条件
		TTORATstpContingentConditionType	AppendContingentCondition;
	
		///附加条件价
		TTORATstpPriceType	AppendConditionPrice;
	
		///附加相关前置编号
		TTORATstpFrontIDType	AppendRelativeFrontID;
	
		///附加相关会话编号
		TTORATstpSessionIDType	AppendRelativeSessionID;
	
		///附加相关条件参数
		TTORATstpRelativeCondParamType	AppendRelativeParam;
	
		///请求编号
		TTORATstpRequestIDType	RequestID;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///条件单状态
		TTORATstpCondOrderStatusType	CondOrderStatus;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	
		///申报用户
		TTORATstpUserIDType	InsertUser;
	
		///申报日期
		TTORATstpDateType	InsertDate;
	
		///申报时间
		TTORATstpTimeType	InsertTime;
	
		///触发日期
		TTORATstpDateType	ActiveDate;
	
		///触发时间
		TTORATstpTimeType	ActiveTime;
	
		///撤销用户
		TTORATstpUserIDType	CancelUser;
	
		///撤销时间
		TTORATstpTimeType	CancelTime;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///用户端产品信息
		TTORATstpUserProductInfoType	UserProductInfo;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	};

	/// 条件单操作录入
	struct CTORATstpInputCondOrderActionField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///被撤条件单前置编号
		TTORATstpFrontIDType	FrontID;
	
		///被撤条件单会话编号
		TTORATstpSessionIDType	SessionID;
	
		///被撤条件单引用
		TTORATstpOrderRefType	CondOrderRef;
	
		///被撤条件单编号
		TTORATstpCondOrderIDType	CondOrderID;
	
		///操作标志
		TTORATstpActionFlagType	ActionFlag;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///条件单操作引用
		TTORATstpOrderRefType	CondOrderActionRef;
	
		///条件单撤单编号
		TTORATstpCondOrderIDType	CancelCondOrderID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 市场状态
	struct CTORATstpMarketStatusField
	{
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///市场状态
		TTORATstpMarketStatusType	MarketStatus;
	};

	/// 资金转移
	struct CTORATstpInputTransferFundField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///申请流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///转移方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///转移金额
		TTORATstpMoneyType	Amount;
	
		///银行代码(银证转账时必填)
		TTORATstpBankIDType	BankID;
	
		///资金密码(证券转银行时必填)
		TTORATstpPasswordType	AccountPassword;
	
		///银行密码(银行转证券时必填)
		TTORATstpPasswordType	BankPassword;
	
		///外部节点号(节点间资金调拨时必填)
		TTORATstpNodeIDType	ExternalNodeID;
	
		///指定偿还的信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///强平原因
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///实际偿还金额(返回)
		TTORATstpMoneyType	RealAmount;
	};

	/// 资金转移回报
	struct CTORATstpTransferFundField
	{
		///转移流水号
		TTORATstpIntSerialType	FundSerial;
	
		///申请流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///转移方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///转移金额
		TTORATstpMoneyType	Amount;
	
		///转移状态
		TTORATstpTransferStatusType	TransferStatus;
	
		///操作人员
		TTORATstpUserIDType	OperatorID;
	
		///操作日期
		TTORATstpDateType	OperateDate;
	
		///操作时间
		TTORATstpTimeType	OperateTime;
	
		///签约银行账户
		TTORATstpBankAccountIDType	BankAccountID;
	
		///银行代码
		TTORATstpBankIDType	BankID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///外部节点号
		TTORATstpNodeIDType	ExternalNodeID;
	
		///强平原因
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	};

	/// 仓位转移
	struct CTORATstpInputTransferPositionField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///申请流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///转移方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///数量
		TTORATstpVolumeType	Volume;
	
		///转移持仓类型
		TTORATstpTransferPositionTypeType	TransferPositionType;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///外部节点编号(外部系统转仓时必填)
		TTORATstpNodeIDType	ExternalNodeID;
	};

	/// 仓位转移回报
	struct CTORATstpTransferPositionField
	{
		///仓位转移流水号
		TTORATstpIntSerialType	PositionSerial;
	
		///申请流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///转移方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///转移持仓类型
		TTORATstpTransferPositionTypeType	TransferPositionType;
	
		///昨日持仓数量
		TTORATstpVolumeType	HistoryVolume;
	
		///今日买卖持仓数量
		TTORATstpVolumeType	TodayBSVolume;
	
		///今日申赎持仓数量
		TTORATstpVolumeType	TodayPRVolume;
	
		///今日拆分合并持仓数量
		TTORATstpVolumeType	TodaySMVolume;
	
		///转移状态
		TTORATstpTransferStatusType	TransferStatus;
	
		///操作人员
		TTORATstpUserIDType	OperatorID;
	
		///操作日期
		TTORATstpDateType	OperateDate;
	
		///操作时间
		TTORATstpTimeType	OperateTime;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	
		///外部节点编号
		TTORATstpNodeIDType	ExternalNodeID;
	};

	/// 外围系统仓位转移回报
	struct CTORATstpPeripheryTransferPositionField
	{
		///仓位调拨流水号
		TTORATstpIntSerialType	PositionSerial;
	
		///仓位调拨请求流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///仓位调拨方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///今日买卖仓位转入转出数量
		TTORATstpVolumeType	TodayBSPos;
	
		///今日申赎仓位转入数量
		TTORATstpVolumeType	TodayPRPos;
	
		///昨日仓位转入数量
		TTORATstpVolumeType	HistoryPos;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///仓位调拨原因
		TTORATstpTransferReasonType	TransferReason;
	
		///转移状态
		TTORATstpTransferStatusType	TransferStatus;
	
		///操作日期
		TTORATstpDateType	OperateDate;
	
		///操作时间
		TTORATstpTimeType	OperateTime;
	
		///冲正日期
		TTORATstpDateType	RepealDate;
	
		///冲正时间
		TTORATstpTimeType	RepealTime;
	
		///冲正原因
		TTORATstpTransferReasonType	RepealReason;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	
		///今日拆分合并仓位转入数量
		TTORATstpVolumeType	TodaySMPos;
	};

	/// 外围系统资金转移回报
	struct CTORATstpPeripheryTransferFundField
	{
		///资金调拨流水号
		TTORATstpIntSerialType	FundSerial;
	
		///资金调拨请求流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///资金调拨方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///转移金额
		TTORATstpMoneyType	Amount;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///资金调拨原因
		TTORATstpTransferReasonType	TransferReason;
	
		///转移状态
		TTORATstpTransferStatusType	TransferStatus;
	
		///操作日期
		TTORATstpDateType	OperateDate;
	
		///操作时间
		TTORATstpTimeType	OperateTime;
	
		///冲正日期
		TTORATstpDateType	RepealDate;
	
		///冲正时间
		TTORATstpTimeType	RepealTime;
	
		///冲正原因
		TTORATstpTransferReasonType	RepealReason;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	};

	/// 查询集中交易系统资金请求
	struct CTORATstpReqInquiryJZFundField
	{
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// 查询集中交易系统资金响应
	struct CTORATstpRspInquiryJZFundField
	{
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///可用金额
		TTORATstpMoneyType	UsefulMoney;
	
		///可取额度
		TTORATstpMoneyType	FetchLimit;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// 查询银行账户余额请求
	struct CTORATstpReqInquiryBankAccountFundField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///银行代码
		TTORATstpBankIDType	BankID;
	
		///银行密码
		TTORATstpPasswordType	BankPassword;
	};

	/// 查询银行账户余额响应
	struct CTORATstpRspInquiryBankAccountFundField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///银行代码
		TTORATstpBankIDType	BankID;
	
		///签约银行账户
		TTORATstpBankAccountIDType	BankAccountID;
	
		///账户余额
		TTORATstpMoneyType	Balance;
	};

	/// 交易通知
	struct CTORATstpTradingNoticeField
	{
		///通知流水号
		TTORATstpIntSerialType	NoticeSerial;
	
		///通知日期
		TTORATstpDateType	InsertDate;
	
		///通知时间
		TTORATstpTimeType	InsertTime;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///通知消息内容
		TTORATstpContentType	Content;
	
		///操作员
		TTORATstpUserIDType	OperatorID;
	};

	/// 查询最大报单量请求
	struct CTORATstpReqInquiryMaxOrderVolumeField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///买卖方向
		TTORATstpDirectionType	Direction;
	
		///报单价格条件
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///有效期类型
		TTORATstpTimeConditionType	TimeCondition;
	
		///成交量类型
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///价格
		TTORATstpPriceType	LimitPrice;
	
		///港股通订单数量类型
		TTORATstpLotTypeType	LotType;
	
		///最大委托手数
		TTORATstpVolumeType	MaxVolume;
	
		///指定偿还的信用负债编号（该字段置空表示不指定偿还）
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///头寸类型
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	};

	/// 查询最大报单量响应
	struct CTORATstpRspInquiryMaxOrderVolumeField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///买卖方向
		TTORATstpDirectionType	Direction;
	
		///报单价格条件
		TTORATstpOrderPriceTypeType	OrderPriceType;
	
		///有效期类型
		TTORATstpTimeConditionType	TimeCondition;
	
		///成交量类型
		TTORATstpVolumeConditionType	VolumeCondition;
	
		///价格
		TTORATstpPriceType	LimitPrice;
	
		///港股通订单数量类型
		TTORATstpLotTypeType	LotType;
	
		///最大委托手数
		TTORATstpVolumeType	MaxVolume;
	
		///指定偿还的信用负债编号（该字段置空表示不指定偿还）
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///头寸类型
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	};

	/// 查询现货持仓请求
	struct CTORATstpReqInquiryStockPositionField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///交易所下的交易市场
		TTORATstpMarketIDType	MarketID;
	
		///交易账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///交易日期
		TTORATstpDateType	TradingDay;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///现货证券代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 查询现货持仓响应
	struct CTORATstpRspInquiryStockPositionField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///交易账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///交易日期
		TTORATstpDateType	TradingDay;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///昨日持仓（包含昨日持仓冻结数量）
		TTORATstpVolumeType	HistoryPos;
	
		///昨日持仓冻结
		TTORATstpVolumeType	HistoryPosFrozen;
	
		///今日买卖持仓（包含今日买卖持仓冻结数量）
		TTORATstpVolumeType	TodayBSPos;
	
		///今日买卖持仓冻结
		TTORATstpVolumeType	TodayBSPosFrozen;
	
		///今日申赎持仓（包含今日申赎持仓冻结数量）
		TTORATstpVolumeType	TodayPRPos;
	
		///今日申赎持仓冻结
		TTORATstpVolumeType	TodayPRPosFrozen;
	
		///今日拆分合并持仓（包含今日拆分合并持仓冻结数量）
		TTORATstpVolumeType	TodaySMPos;
	
		///今日拆分合并持仓冻结
		TTORATstpVolumeType	TodaySMPosFrozen;
	
		///昨日持仓成本价
		TTORATstpMoneyType	HistoryPosCost;
	
		///总持仓成本
		TTORATstpMoneyType	TotalPosCost;
	
		///融资仓位
		TTORATstpVolumeType	MarginBuyPos;
	
		///融券仓位（包含今日融券仓位）
		TTORATstpVolumeType	ShortSellPos;
	
		///今日融券仓位
		TTORATstpVolumeType	TodayShortSellPos;
	
		///上次余额(盘中不变)
		TTORATstpVolumeType	PrePosition;
	
		///股份可用
		TTORATstpVolumeType	AvailablePosition;
	
		///股份余额
		TTORATstpVolumeType	CurrentPosition;
	};

	/// 信用划转输入请求
	struct CTORATstpInputCreditTransferField
	{
		///合约在系统中的编号
		TTORATstpSecurityIDType	SecurityID;
	
		///投资者说明的对报单的唯一引用
		TTORATstpOrderRefType	OrderRef;
	
		///信用转移方向
		TTORATstpDirectionType	Direction;
	
		///划转数量
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///一个交易所的编号
		TTORATstpExchangeIDType	ExchangeID;
	
		///股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///信用划转编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///还券划转指定偿还信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	
		///强平原因
		TTORATstpForceCloseReasonType	ForceCloseReason;
	};

	/// 信用划转
	struct CTORATstpCreditTransferField
	{
		///交易日
		TTORATstpDateType	TradingDay;
	
		///交易单元代码
		TTORATstpPbuIDType	PbuID;
	
		///本地报单编号
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///全系统的唯一报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///报单引用
		TTORATstpOrderRefType	OrderRef;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///报单类别
		TTORATstpDirectionType	Direction;
	
		///报单申报数量
		TTORATstpVolumeType	VolumeTotalOriginal;
	
		///撤单数量
		TTORATstpVolumeType	VolumeCanceled;
	
		///信用转移状态
		TTORATstpCreditTransferStatusType	CreditTransferStatus;
	
		///报单操作状态
		TTORATstpOrderSubmitStatusType	OrderSubmitStatus;
	
		///状态信息
		TTORATstpStatusMsgType	StatusMsg;
	
		///系统错误代码
		TTORATstpErrorIDType	ErrorID;
	
		///交易所为营业部分配的代码
		TTORATstpBranchIDType	BranchID;
	
		///报单申报用户
		TTORATstpUserIDType	InsertUser;
	
		///申报日期
		TTORATstpDateType	InsertDate;
	
		///申报时间
		TTORATstpTimeType	InsertTime;
	
		///申报时间(毫秒)
		TTORATstpMillisecType	InsertMillisec;
	
		///交易所接收时间
		TTORATstpTimeType	AcceptTime;
	
		///撤销时间
		TTORATstpTimeType	CancelTime;
	
		///撤销申报用户
		TTORATstpUserIDType	CancelUser;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	
		///请求编号
		TTORATstpRequestIDType	RequestID;
	
		///记录序号(仅上证报盘使用)
		TTORATstpSequenceNoType	RecordNumber;
	
		///持仓转移流水号
		TTORATstpIntSerialType	PositionSerial;
	
		///还券划转指定偿还信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///资金账户
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///现货持仓转移流水号
		TTORATstpIntSerialType	StockPositionSerial;
	
		///投资者类型
		TTORATstpInvestorTypeType	InvestorType;
	
		///交易所流水号(仅深圳登记结算报盘使用)
		TTORATstpSerialNoType	SerialNumber;
	
		///强平原因
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///交易报盘编号
		TTORATstpTraderOfferIDType	TraderOfferID;
	};

	/// 撤销信用划转
	struct CTORATstpInputCancelCreditTransferField
	{
		///投资者说明的对报单操作的唯一引用
		TTORATstpOrderRefType	OrderActionRef;
	
		///投资者说明的对报单的唯一引用
		TTORATstpOrderRefType	OrderRef;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///一个交易所的编号
		TTORATstpExchangeIDType	ExchangeID;
	
		///报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///委托操作标志
		TTORATstpActionFlagType	ActionFlag;
	
		///全系统的唯一报单编号
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 负债展期输入
	struct CTORATstpInputDebtExtendField
	{
		///申请流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///合约代码
		TTORATstpSecurityIDType	SecurityID;
	
		///负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 负债展期信息
	struct CTORATstpDebtExtendField
	{
		///展期流水号
		TTORATstpIntSerialType	ExtendSerial;
	
		///申请流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///原负债到期日
		TTORATstpDateType	OldExpireDate;
	
		///新负债到期日
		TTORATstpDateType	NewExpireDate;
	
		///展期状态
		TTORATstpExtendStatusType	ExtendStatus;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	
		///手续费
		TTORATstpMoneyType	Commisition;
	
		///自动偿还利息
		TTORATstpMoneyType	AutoRepayInterest;
	
		///自动偿还资金流水号
		TTORATstpIntSerialType	FundSerial;
	
		///偿还流水号
		TTORATstpCreditRepayIDType	CreditRepayID;
	
		///操作人员
		TTORATstpUserIDType	OperatorID;
	
		///操作日期
		TTORATstpDateType	OperateDate;
	
		///操作时间
		TTORATstpTimeType	OperateTime;
	
		///最后修改时间
		TTORATstpTimeType	ActiveTime;
	
		///登录IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///登录Mac地址
		TTORATstpMacAddressType	MacAddress;
	
		///用户请求编号
		TTORATstpRequestIDType	RequestID;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 撤销负债展期输入
	struct CTORATstpInputCancelDebtExtendField
	{
		///申请撤单引用
		TTORATstpIntSerialType	ApplySerial;
	
		///要撤销的展期流水号
		TTORATstpIntSerialType	ExtendSerial;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///负债展期撤单编号
		TTORATstpIntSerialType	CancelExtendSerial;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 修改套餐类型请求
	struct CTORATstpReqChangePlanTypeField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///套餐类型
		TTORATstpPlanTypeType	PlanType;
	};

	/// 修改套餐类型响应
	struct CTORATstpRspChangePlanTypeField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///套餐类型
		TTORATstpPlanTypeType	PlanType;
	};

	/// 查询交易所
	struct CTORATstpQryExchangeField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	};

	/// 交易所
	struct CTORATstpExchangeField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///交易所名称
		TTORATstpNameType	ExchangeName;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///数据同步状态
		TTORATstpDataSyncStatusType	DataSyncStatus;
	};

	/// 查询证券信息
	struct CTORATstpQrySecurityField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///产品代码
		TTORATstpProductIDType	ProductID;
	};

	/// 证券信息
	struct CTORATstpSecurityField
	{
		///交易日
		TTORATstpDateType	TradingDay;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///证券名称
		TTORATstpSecurityNameType	SecurityName;
	
		///证券名称(短)
		TTORATstpSecurityNameType	ShortSecurityName;
	
		///基础证券代码
		TTORATstpSecurityIDType	UnderlyingSecurityID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///产品代码
		TTORATstpProductIDType	ProductID;
	
		///证券类别
		TTORATstpSecurityTypeType	SecurityType;
	
		///申报单位
		TTORATstpOrderUnitType	OrderUnit;
	
		///限价买入交易单位
		TTORATstpTradingUnitType	LimitBuyTradingUnit;
	
		///限价单买最大下单量
		TTORATstpVolumeType	MaxLimitOrderBuyVolume;
	
		///限价单买最小下单量
		TTORATstpVolumeType	MinLimitOrderBuyVolume;
	
		///限价卖出交易单位
		TTORATstpTradingUnitType	LimitSellTradingUnit;
	
		///限价单卖最大下单量
		TTORATstpVolumeType	MaxLimitOrderSellVolume;
	
		///限价单卖最小下单量
		TTORATstpVolumeType	MinLimitOrderSellVolume;
	
		///市价买入交易单位
		TTORATstpTradingUnitType	MarketBuyTradingUnit;
	
		///市价单买最大下单量
		TTORATstpVolumeType	MaxMarketOrderBuyVolume;
	
		///市价单买最小下单量
		TTORATstpVolumeType	MinMarketOrderBuyVolume;
	
		///市价卖出交易单位
		TTORATstpTradingUnitType	MarketSellTradingUnit;
	
		///市价单卖最大下单量
		TTORATstpVolumeType	MaxMarketOrderSellVolume;
	
		///市价单卖最小下单量
		TTORATstpVolumeType	MinMarketOrderSellVolume;
	
		///盘后定价买入交易单位
		TTORATstpTradingUnitType	FixPriceBuyTradingUnit;
	
		///盘后定价买最大下单量
		TTORATstpVolumeType	MaxFixPriceOrderBuyVolume;
	
		///盘后定价买最小下单量
		TTORATstpVolumeType	MinFixPriceOrderBuyVolume;
	
		///盘后定价卖出交易单位
		TTORATstpTradingUnitType	FixPriceSellTradingUnit;
	
		///盘后定价卖最大下单量
		TTORATstpVolumeType	MaxFixPriceOrderSellVolume;
	
		///盘后定价卖最小下单量
		TTORATstpVolumeType	MinFixPriceOrderSellVolume;
	
		///数量乘数
		TTORATstpVolumeMultipleType	VolumeMultiple;
	
		///最小变动价位
		TTORATstpPriceTickType	PriceTick;
	
		///上市日
		TTORATstpDateType	OpenDate;
	
		///面值
		TTORATstpParValueType	ParValue;
	
		///证券状态
		TTORATstpSecurityStatusType	SecurityStatus;
	
		///债券应计利息
		TTORATstpInterestType	BondInterest;
	
		///折算率
		TTORATstpRatioType	ConversionRate;
	
		///总股本
		TTORATstpLargeVolumeType	TotalEquity;
	
		///流通股本
		TTORATstpLargeVolumeType	CirculationEquity;
	
		///是否限制涨跌停板价
		TTORATstpBoolType	bPriceLimit;
	
		///昨收盘价
		TTORATstpPriceType	PreClosePrice;
	
		///涨停板价
		TTORATstpPriceType	UpperLimitPrice;
	
		///跌停板价
		TTORATstpPriceType	LowerLimitPrice;
	};

	/// 查询新股信息
	struct CTORATstpQryIPOInfoField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///申购代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 新股信息
	struct CTORATstpIPOInfoField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///申购代码
		TTORATstpSecurityIDType	SecurityID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///产品代码
		TTORATstpProductIDType	ProductID;
	
		///证券类别代码
		TTORATstpSecurityTypeType	SecurityType;
	
		///发行价格
		TTORATstpPriceType	Price;
	
		///币种代码
		TTORATstpCurrencyIDType	CurrencyID;
	
		///申购证券名称
		TTORATstpSecurityNameType	SecurityName;
	
		///新股证券代码
		TTORATstpSecurityIDType	UnderlyingSecurityID;
	
		///新股证券名称
		TTORATstpSecurityNameType	UnderlyingSecurityName;
	
		///网上申购最小数量
		TTORATstpVolumeType	MinVolume;
	
		///网上申购最大数量
		TTORATstpVolumeType	MaxVolume;
	
		///网上申购单位数量
		TTORATstpVolumeType	VolumeUnit;
	
		///发行方式
		TTORATstpIssueModeType	IssueMode;
	
		///交易日
		TTORATstpDateType	TradingDay;
	};

	/// 查询用户
	struct CTORATstpQryUserField
	{
		///用户代码
		TTORATstpUserIDType	UserID;
	
		///用户类型
		TTORATstpUserTypeType	UserType;
	};

	/// 用户
	struct CTORATstpUserField
	{
		///用户代码
		TTORATstpUserIDType	UserID;
	
		///用户名称
		TTORATstpUserNameType	UserName;
	
		///用户类型
		TTORATstpUserTypeType	UserType;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///登录限制数
		TTORATstpLoginLimitType	LoginLimit;
	
		///登录状态
		TTORATstpLoginStatusType	LoginStatus;
	
		///开户日期
		TTORATstpDateType	OpenDate;
	
		///销户日期
		TTORATstpDateType	CloseDate;
	
		///报单流控
		TTORATstpCommFluxType	OrderInsertCommFlux;
	
		///撤单流控
		TTORATstpCommFluxType	OrderActionCommFlux;
	};

	/// 查询投资者
	struct CTORATstpQryInvestorField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	};

	/// 投资者
	struct CTORATstpInvestorField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资者类型
		TTORATstpInvestorTypeType	InvestorType;
	
		///投资者名称
		TTORATstpInvestorNameType	InvestorName;
	
		///证件类型
		TTORATstpIdCardTypeType	IdCardType;
	
		///证件号码
		TTORATstpIdCardNoType	IdCardNo;
	
		///开户日期
		TTORATstpDateType	OpenDate;
	
		///销户日期
		TTORATstpDateType	CloseDate;
	
		///交易状态
		TTORATstpTradingStatusType	TradingStatus;
	
		///委托方式
		TTORATstpOperwaysType	Operways;
	
		///手机
		TTORATstpMobileType	Mobile;
	
		///联系电话
		TTORATstpTelephoneType	Telephone;
	
		///电子邮件
		TTORATstpEmailType	Email;
	
		///传真
		TTORATstpFaxType	Fax;
	
		///通讯地址
		TTORATstpAddressType	Address;
	
		///邮政编码
		TTORATstpZipCodeType	ZipCode;
	
		///专业投资者类别
		TTORATstpProfInvestorTypeType	ProfInvestorType;
	
		///套餐类型
		TTORATstpPlanTypeType	PlanType;
	
		///是否允许投资者自切套餐
		TTORATstpBoolType	AllowSelfSwitchPlan;
	
		///备注
		TTORATstpRemarkType	Remark;
	};

	/// 查询交易股东账户
	struct CTORATstpQryShareholderAccountField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///股东账户账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///股东账户类型
		TTORATstpShareholderIDTypeType	ShareholderIDType;
	};

	/// 交易股东账户
	struct CTORATstpShareholderAccountField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///客户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///股东账户类型
		TTORATstpShareholderIDTypeType	ShareholderIDType;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///普通买卖白名单控制标志
		TTORATstpBoolType	BSWhiteListCtl;
	
		///主账户标识
		TTORATstpBoolType	MainFlag;
	};

	/// 查询配股配债信息
	struct CTORATstpQryRationalInfoField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///配股配债代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 配股配债信息
	struct CTORATstpRationalInfoField
	{
		///交易日
		TTORATstpDateType	TradingDay;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///申购代码
		TTORATstpSecurityIDType	SecurityID;
	
		///配股配债价格
		TTORATstpPriceType	Price;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///证券品种代码
		TTORATstpProductIDType	ProductID;
	
		///证券类别代码
		TTORATstpSecurityTypeType	SecurityType;
	
		///配股名称
		TTORATstpSecurityNameType	SecurityName;
	
		///基础证券代码
		TTORATstpSecurityIDType	UnderlyingSecurityID;
	
		///基础证券名称
		TTORATstpSecurityNameType	UnderlyingSecurityName;
	
		///配股配债最小数量
		TTORATstpVolumeType	MinVolume;
	
		///配股配债最大数量
		TTORATstpVolumeType	MaxVolume;
	
		///配股配债单位数量
		TTORATstpVolumeType	VolumeUnit;
	};

	/// 查询报单
	struct CTORATstpQryOrderField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///系统报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Time
		TTORATstpTimeType	InsertTimeEnd;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	
		///是否可撤
		TTORATstpBoolType	IsCancel;
	};

	/// 查询撤单
	struct CTORATstpQryOrderActionField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///本地报单编号
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///本地撤单编号
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 撤单
	struct CTORATstpOrderActionField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///被撤报单前置编号
		TTORATstpFrontIDType	FrontID;
	
		///被撤报单会话编号
		TTORATstpSessionIDType	SessionID;
	
		///被撤报单引用
		TTORATstpOrderRefType	OrderRef;
	
		///被撤报单系统编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///操作标志
		TTORATstpActionFlagType	ActionFlag;
	
		///本地撤单编号
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	
		///一级机构代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///被撤报单本地编号
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///操作用户
		TTORATstpUserIDType	ActionUser;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///操作日期
		TTORATstpDateType	ActionDate;
	
		///操作时间
		TTORATstpTimeType	ActionTime;
	
		///撤单状态
		TTORATstpCancelOrderStatusType	CancelOrderStatus;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	
		///请求编号
		TTORATstpRequestIDType	RequestID;
	
		///撤单前置编号
		TTORATstpFrontIDType	ActionFrontID;
	
		///撤单会话编号
		TTORATstpSessionIDType	ActionSessionID;
	
		///撤单引用
		TTORATstpOrderRefType	OrderActionRef;
	
		///本地撤单系统编号
		TTORATstpOrderSysIDType	CancelOrderSysID;
	
		///撤单类型
		TTORATstpCancelOrderTypeType	CancelOrderType;
	
		///交易单元代码
		TTORATstpPbuIDType	PbuID;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	};

	/// 查询成交
	struct CTORATstpQryTradeField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///成交编号
		TTORATstpTradeIDType	TradeID;
	
		///Time
		TTORATstpTimeType	TradeTimeStart;
	
		///Time
		TTORATstpTimeType	TradeTimeEnd;
	};

	/// 查询资金账户
	struct CTORATstpQryTradingAccountField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///资金账户类型
		TTORATstpAccountTypeType	AccountType;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// 资金账户
	struct CTORATstpTradingAccountField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种代码
		TTORATstpCurrencyIDType	CurrencyID;
	
		///上日结存
		TTORATstpMoneyType	PreDeposit;
	
		///可用资金
		TTORATstpMoneyType	UsefulMoney;
	
		///可取资金
		TTORATstpMoneyType	FetchLimit;
	
		///上日未交收金额(港股通专用字段)
		TTORATstpMoneyType	PreUnDeliveredMoney;
	
		///可用未交收金额(港股通专用字段)
		TTORATstpMoneyType	UnDeliveredMoney;
	
		///当日入金金额
		TTORATstpMoneyType	Deposit;
	
		///当日出金金额
		TTORATstpMoneyType	Withdraw;
	
		///冻结的资金(港股通该字段不包括未交收部分冻结资金)
		TTORATstpMoneyType	FrozenCash;
	
		///冻结未交收金额(港股通专用)
		TTORATstpMoneyType	UnDeliveredFrozenCash;
	
		///冻结的手续费(港股通该字段不包括未交收部分冻结手续费)
		TTORATstpMoneyType	FrozenCommission;
	
		///冻结未交收手续费(港股通专用)
		TTORATstpMoneyType	UnDeliveredFrozenCommission;
	
		///手续费(港股通该字段不包括未交收部分手续费)
		TTORATstpMoneyType	Commission;
	
		///占用未交收手续费(港股通专用)
		TTORATstpMoneyType	UnDeliveredCommission;
	
		///资金账户类型
		TTORATstpAccountTypeType	AccountType;
	
		///资金账户所属投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///银行代码
		TTORATstpBankIDType	BankID;
	
		///银行账户
		TTORATstpBankAccountIDType	BankAccountID;
	
		///权利金收入
		TTORATstpMoneyType	RoyaltyIn;
	
		///权利金支出
		TTORATstpMoneyType	RoyaltyOut;
	
		///融券卖出剩余金额
		TTORATstpMoneyType	CreditSellAmount;
	
		///废弃字段
		TTORATstpMoneyType	CreditSellUseAmount;
	
		///虚拟资产
		TTORATstpMoneyType	VirtualAssets;
	
		///融券卖出金额冻结(用于偿还融资负债或买特殊品种的未成交冻结金额)
		TTORATstpMoneyType	CreditSellFrozenAmount;
	
		///购买货币基金等品种占用融券卖出金额部分
		TTORATstpMoneyType	CreditSellOccupyAmount;
	
		///当日买入货币基金等品种占用融券卖出金额部分
		TTORATstpMoneyType	CreditSellTodayOccupyAmount;
	
		///当日卖出货币基金等品种释放融券卖出金额部分
		TTORATstpMoneyType	CreditSellTodayReleaseAmount;
	};

	/// 查询投资者持仓
	struct CTORATstpQryPositionField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	};

	/// 投资者持仓
	struct CTORATstpPositionField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///证券名称
		TTORATstpSecurityNameType	SecurityName;
	
		///昨仓
		TTORATstpVolumeType	HistoryPos;
	
		///昨仓冻结
		TTORATstpVolumeType	HistoryPosFrozen;
	
		///今买卖仓
		TTORATstpVolumeType	TodayBSPos;
	
		///今买卖仓冻结
		TTORATstpVolumeType	TodayBSPosFrozen;
	
		///今日申赎持仓
		TTORATstpVolumeType	TodayPRPos;
	
		///今日申赎持仓冻结
		TTORATstpVolumeType	TodayPRPosFrozen;
	
		///今拆分合并持仓
		TTORATstpVolumeType	TodaySMPos;
	
		///今拆分合并持仓冻结
		TTORATstpVolumeType	TodaySMPosFrozen;
	
		///昨仓成本价
		TTORATstpPriceType	HistoryPosPrice;
	
		///持仓成本
		TTORATstpMoneyType	TotalPosCost;
	
		///上次余额(盘中不变)
		TTORATstpVolumeType	PrePosition;
	
		///股份可用
		TTORATstpVolumeType	AvailablePosition;
	
		///股份余额
		TTORATstpVolumeType	CurrentPosition;
	
		///开仓成本
		TTORATstpMoneyType	OpenPosCost;
	
		///融资仓位
		TTORATstpVolumeType	CreditBuyPos;
	
		///融券仓位
		TTORATstpVolumeType	CreditSellPos;
	
		///今日融券仓位
		TTORATstpVolumeType	TodayCreditSellPos;
	
		///划出仓位
		TTORATstpVolumeType	CollateralOutPos;
	
		///还券未成交数量
		TTORATstpVolumeType	RepayUntradeVolume;
	
		///直接还券未成交数量
		TTORATstpVolumeType	RepayTransferUntradeVolume;
	
		///担保品买入未成交金额
		TTORATstpMoneyType	CollateralBuyUntradeAmount;
	
		///担保品买入未成交数量
		TTORATstpVolumeType	CollateralBuyUntradeVolume;
	
		///融资买入金额(包含交易费用)
		TTORATstpMoneyType	CreditBuyAmount;
	
		///融资买入未成交金额(包含交易费用)
		TTORATstpMoneyType	CreditBuyUntradeAmount;
	
		///融资冻结保证金
		TTORATstpMoneyType	CreditBuyFrozenMargin;
	
		///融资买入利息
		TTORATstpMoneyType	CreditBuyInterestFee;
	
		///融资买入未成交数量
		TTORATstpVolumeType	CreditBuyUntradeVolume;
	
		///融券卖出金额(以成交价计算)
		TTORATstpMoneyType	CreditSellAmount;
	
		///融券卖出未成交金额
		TTORATstpMoneyType	CreditSellUntradeAmount;
	
		///融券冻结保证金
		TTORATstpMoneyType	CreditSellFrozenMargin;
	
		///融券卖出息费
		TTORATstpMoneyType	CreditSellInterestFee;
	
		///融券卖出未成交数量
		TTORATstpVolumeType	CreditSellUntradeVolume;
	
		///划入待收仓
		TTORATstpVolumeType	CollateralInPos;
	
		///融资流动冻结保证金
		TTORATstpMoneyType	CreditBuyFrozenCirculateMargin;
	
		///融券流动冻结保证金
		TTORATstpMoneyType	CreditSellFrozenCirculateMargin;
	
		///累计平仓盈亏
		TTORATstpMoneyType	CloseProfit;
	
		///当日累计开仓数量
		TTORATstpVolumeType	TodayTotalOpenVolume;
	
		///配股数量
		TTORATstpVolumeType	RationVolume;
	
		///配股金额
		TTORATstpMoneyType	RationAmount;
	
		///当日累计买入金额
		TTORATstpMoneyType	TodayTotalBuyAmount;
	
		///当日累计卖出金额
		TTORATstpMoneyType	TodayTotalSellAmount;
	};

	/// 查询基础交易费率
	struct CTORATstpQryTradingFeeField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	};

	/// 基础交易费率
	struct CTORATstpTradingFeeField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///产品代码
		TTORATstpProductIDType	ProductID;
	
		///证券类别代码
		TTORATstpSecurityTypeType	SecurityType;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///业务类别
		TTORATstpBizClassType	BizClass;
	
		///印花税(港股印花税)按金额收取比例
		TTORATstpRatioType	StampTaxRatioByAmt;
	
		///印花税(港股印花税)按面值收取比例
		TTORATstpRatioType	StampTaxRatioByPar;
	
		///印花税(港股印花税,单位港币)按笔收取金额
		TTORATstpMoneyType	StampTaxFeePerOrder;
	
		///印花税(港股印花税,单位港币)按数量收取金额
		TTORATstpMoneyType	StampTaxFeeByVolume;
	
		///印花税(港股印花税,单位港币)最低收取金额
		TTORATstpMoneyType	StampTaxFeeMin;
	
		///印花税(港股印花税,单位港币)最高收取金额
		TTORATstpMoneyType	StampTaxFeeMax;
	
		///过户费(港股证券组合费)按金额收取比例
		TTORATstpRatioType	TransferRatioByAmt;
	
		///过户费(港股证券组合费)按面值收取比例
		TTORATstpRatioType	TransferRatioByPar;
	
		///过户费(港股证券组合费,单位港币)按笔收取金额
		TTORATstpMoneyType	TransferFeePerOrder;
	
		///过户费(港股证券组合费,单位港币)按数量收取金额
		TTORATstpMoneyType	TransferFeeByVolume;
	
		///过户费(港股证券组合费,单位港币)最低收取金额
		TTORATstpMoneyType	TransferFeeMin;
	
		///过户费(港股证券组合费,单位港币)最高收取金额
		TTORATstpMoneyType	TransferFeeMax;
	
		///经手费(港股交易费)按金额收取比例
		TTORATstpRatioType	HandlingRatioByAmt;
	
		///经手费(港股交易费)按面值收取比例
		TTORATstpRatioType	HandlingRatioByPar;
	
		///经手费(港股交易费,单位港币)按笔收取金额
		TTORATstpMoneyType	HandlingFeePerOrder;
	
		///经手费(港股交易费,单位港币)按数量收取金额
		TTORATstpMoneyType	HandlingFeeByVolume;
	
		///经手费(港股交易费,单位港币)最低收取金额
		TTORATstpMoneyType	HandlingFeeMin;
	
		///经手费(港股交易费,单位港币)最高收取金额
		TTORATstpMoneyType	HandlingFeeMax;
	
		///证管费(港股交易征费)按金额收取比例
		TTORATstpRatioType	RegulateRatioByAmt;
	
		///证管费(港股交易征费)按面值收取比例
		TTORATstpRatioType	RegulateRatioByPar;
	
		///证管费(港股交易征费,单位港币)按笔收取金额
		TTORATstpMoneyType	RegulateFeePerOrder;
	
		///证管费(港股交易征费,单位港币)按数量收取金额
		TTORATstpMoneyType	RegulateFeeByVolume;
	
		///证管费(港股交易征费,单位港币)最低收取金额
		TTORATstpMoneyType	RegulateFeeMin;
	
		///证管费(港股交易征费,单位港币)最高收取金额
		TTORATstpMoneyType	RegulateFeeMax;
	
		///结算费(港股股份交收费)按金额收取比例
		TTORATstpRatioType	SettlementRatioByAmt;
	
		///结算费(港股股份交收费)按面值收取比例
		TTORATstpRatioType	SettlementRatioByPar;
	
		///结算费(港股股份交收费,单位港币)按笔收取金额
		TTORATstpMoneyType	SettlementFeePerOrder;
	
		///结算费(港股股份交收费,单位港币)按数量收取金额
		TTORATstpMoneyType	SettlementFeeByVolume;
	
		///结算费(港股股份交收费,单位港币)最低收取金额
		TTORATstpMoneyType	SettlementFeeMin;
	
		///结算费(港股股份交收费,单位港币)最高收取金额
		TTORATstpMoneyType	SettlementFeeMax;
	};

	/// 查询佣金费率
	struct CTORATstpQryInvestorTradingFeeField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// 佣金费率
	struct CTORATstpInvestorTradingFeeField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///产品代码
		TTORATstpProductIDType	ProductID;
	
		///证券类别代码
		TTORATstpSecurityTypeType	SecurityType;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///业务类别
		TTORATstpBizClassType	BizClass;
	
		///佣金类型
		TTORATstpBrokerageTypeType	BrokerageType;
	
		///佣金按金额收取比例
		TTORATstpRatioType	RatioByAmt;
	
		///佣金按面值收取比例
		TTORATstpRatioType	RatioByPar;
	
		///佣金按笔收取金额
		TTORATstpMoneyType	FeePerOrder;
	
		///佣金最低收取金额
		TTORATstpMoneyType	FeeMin;
	
		///佣金最高收取金额
		TTORATstpMoneyType	FeeMax;
	
		///佣金按数量收取金额
		TTORATstpMoneyType	FeeByVolume;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///报单类型
		TTORATstpOrderTypeType	OrderType;
	};

	/// 查询新股申购额度
	struct CTORATstpQryIPOQuotaField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	};

	/// 新股申购额度
	struct CTORATstpIPOQuotaField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///客户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///可申购额度
		TTORATstpLongVolumeType	MaxVolume;
	
		///科创板可申购额度
		TTORATstpLongVolumeType	KCMaxVolume;
	};

	/// 查询报单明细资金
	struct CTORATstpQryOrderFundDetailField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///系统报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	};

	/// 报单明细资金
	struct CTORATstpOrderFundDetailField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///系统报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///交易所交易单元代码
		TTORATstpPbuIDType	PbuID;
	
		///本地报单编号
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///报单金额
		TTORATstpMoneyType	OrderAmount;
	
		///成交金额
		TTORATstpMoneyType	Turnover;
	
		///印花税
		TTORATstpMoneyType	StampTaxFee;
	
		///经手费
		TTORATstpMoneyType	HandlingFee;
	
		///过户费
		TTORATstpMoneyType	TransferFee;
	
		///证管费
		TTORATstpMoneyType	RegulateFee;
	
		///结算费
		TTORATstpMoneyType	SettlementFee;
	
		///佣金
		TTORATstpMoneyType	BrokerageFee;
	
		///总费用
		TTORATstpMoneyType	TotalFee;
	
		///报单初始冻结金额
		TTORATstpMoneyType	OrderCashFrozen;
	
		///预估冻结现金
		TTORATstpMoneyType	EstimateCashFrozen;
	
		///初始冻结费用合计
		TTORATstpMoneyType	TotalFeeFrozen;
	
		///初始冻结总费用
		TTORATstpMoneyType	TotalFrozen;
	
		///保证金
		TTORATstpMoneyType	Margin;
	
		///偿还金额
		TTORATstpMoneyType	RepayAmount;
	
		///偿还数量
		TTORATstpVolumeType	RepayVolume;
	
		///初始冻结保证金
		TTORATstpMoneyType	MarginFrozen;
	
		///初始冻结流动保证金
		TTORATstpMoneyType	CirculateMarginFrozen;
	};

	/// 查询资金转移流水
	struct CTORATstpQryFundTransferDetailField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///转移方向
		TTORATstpTransferDirectionType	TransferDirection;
	};

	/// 资金转移流水
	struct CTORATstpFundTransferDetailField
	{
		///转账流水号
		TTORATstpIntSerialType	FundSerial;
	
		///申请流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///转移方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///出入金金额
		TTORATstpMoneyType	Amount;
	
		///转移状态
		TTORATstpTransferStatusType	TransferStatus;
	
		///操作来源
		TTORATstpOperateSourceType	OperateSource;
	
		///操作人员
		TTORATstpUserIDType	OperatorID;
	
		///操作日期
		TTORATstpDateType	OperateDate;
	
		///操作时间
		TTORATstpTimeType	OperateTime;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///银行代码
		TTORATstpBankIDType	BankID;
	
		///签约银行账户
		TTORATstpBankAccountIDType	BankAccountID;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///外部流水号
		TTORATstpExternalSerialType	ExternalSerial;
	
		///外部系统节点号
		TTORATstpNodeIDType	ExternalNodeID;
	
		///强平原因
		TTORATstpForceCloseReasonType	ForceCloseReason;
	
		///(直接还款用)指定偿还时的负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	};

	/// 查询持仓转移流水
	struct CTORATstpQryPositionTransferDetailField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///转移方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};

	/// 持仓转移流水
	struct CTORATstpPositionTransferDetailField
	{
		///流水号
		TTORATstpIntSerialType	PositionSerial;
	
		///申请流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///交易账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易日期
		TTORATstpDateType	TradingDay;
	
		///转移方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///转移持仓类型
		TTORATstpTransferPositionTypeType	TransferPositionType;
	
		///转移状态
		TTORATstpTransferStatusType	TransferStatus;
	
		///昨日仓位数量
		TTORATstpVolumeType	HistoryVolume;
	
		///今日买卖仓位数量
		TTORATstpVolumeType	TodayBSVolume;
	
		///今日申赎仓位数量
		TTORATstpVolumeType	TodayPRVolume;
	
		///今日拆分合并仓位数量
		TTORATstpVolumeType	TodaySMVolume;
	
		///操作人员
		TTORATstpUserIDType	OperatorID;
	
		///操作日期
		TTORATstpDateType	OperateDate;
	
		///操作时间
		TTORATstpTimeType	OperateTime;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	
		///外部节点编号
		TTORATstpNodeIDType	ExternalNodeID;
	};

	/// 查询外围系统仓位调拨流水
	struct CTORATstpQryPeripheryPositionTransferDetailField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///仓位调拨方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};

	/// 外围系统仓位调拨流水
	struct CTORATstpPeripheryPositionTransferDetailField
	{
		///仓位调拨系统流水号
		TTORATstpIntSerialType	PositionSerial;
	
		///仓位调拨请求流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///仓位调拨方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///现货系统投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///现货系统投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///现货系统交易账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///今日买卖仓位转入转出数量
		TTORATstpVolumeType	TodayBSPos;
	
		///今日申赎仓位转入数量
		TTORATstpVolumeType	TodayPRPos;
	
		///今日拆分合并仓位转入数量
		TTORATstpVolumeType	TodaySMPos;
	
		///昨日仓位转入数量
		TTORATstpVolumeType	HistoryPos;
	
		///交易日期
		TTORATstpDateType	TradingDay;
	
		///仓位调拨原因
		TTORATstpTransferReasonType	TransferReason;
	
		///转移状态
		TTORATstpTransferStatusType	TransferStatus;
	
		///操作日期
		TTORATstpDateType	OperateDate;
	
		///操作时间
		TTORATstpTimeType	OperateTime;
	
		///冲正日期
		TTORATstpDateType	RepealDate;
	
		///冲正时间
		TTORATstpTimeType	RepealTime;
	
		///冲正原因
		TTORATstpTransferReasonType	RepealReason;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	};

	/// 查询外围系统资金转移流水
	struct CTORATstpQryPeripheryFundTransferDetailField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///资金调拨方向
		TTORATstpTransferDirectionType	TransferDirection;
	};

	/// 外围系统资金转移流水
	struct CTORATstpPeripheryFundTransferDetailField
	{
		///转账流水号
		TTORATstpIntSerialType	FundSerial;
	
		///申请流水号
		TTORATstpIntSerialType	ApplySerial;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///资金账户代码
		TTORATstpAccountIDType	AccountID;
	
		///币种
		TTORATstpCurrencyIDType	CurrencyID;
	
		///转移方向
		TTORATstpTransferDirectionType	TransferDirection;
	
		///出入金金额
		TTORATstpMoneyType	Amount;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///转移状态
		TTORATstpTransferStatusType	TransferStatus;
	
		///资金调拨原因
		TTORATstpTransferReasonType	TransferReason;
	
		///操作日期
		TTORATstpDateType	OperateDate;
	
		///操作时间
		TTORATstpTimeType	OperateTime;
	
		///冲正日期
		TTORATstpDateType	RepealDate;
	
		///冲正时间
		TTORATstpTimeType	RepealTime;
	
		///冲正原因
		TTORATstpTransferReasonType	RepealReason;
	
		///状态信息
		TTORATstpErrorMsgType	StatusMsg;
	};

	/// 查询债券转股信息
	struct CTORATstpQryBondConversionInfoField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 债券转股信息
	struct CTORATstpBondConversionInfoField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///转股申报代码
		TTORATstpSecurityIDType	ConvertOrderID;
	
		///转股价格
		TTORATstpPriceType	ConvertPrice;
	
		///每次可以转股最小交易单位
		TTORATstpTradingUnitType	ConvertVolUnit;
	
		///证券可以转股的最大数量
		TTORATstpVolumeType	ConvertVolMax;
	
		///证券可以转股的最小数量
		TTORATstpVolumeType	ConvertVolMin;
	
		///转股开始日期
		TTORATstpDateType	BeginDate;
	
		///转股截至日期
		TTORATstpDateType	EndDate;
	
		///转股名称
		TTORATstpSecurityNameType	ConvertName;
	};

	/// 查询债券回售信息
	struct CTORATstpQryBondPutbackInfoField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 债券回售信息
	struct CTORATstpBondPutbackInfoField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///回售申报代码
		TTORATstpSecurityIDType	PutbackOrderID;
	
		///回售名称
		TTORATstpSecurityNameType	PutbackName;
	
		///回售价格
		TTORATstpPriceType	PutbackPrice;
	
		///每次可以回售最小交易单位
		TTORATstpTradingUnitType	PutbackVolUnit;
	
		///债券可以回售的最大数量
		TTORATstpVolumeType	PutbackVolMax;
	
		///债券可以回售的最小数量
		TTORATstpVolumeType	PutbackVolMin;
	
		///回售开始日期
		TTORATstpDateType	PutbackBeginDate;
	
		///回售结束日期
		TTORATstpDateType	PutbackEndDate;
	
		///回售撤销开始日期
		TTORATstpDateType	RelieveBeginDate;
	
		///回售撤销结束日期
		TTORATstpDateType	RelieveEndDate;
	};

	/// 查询投资者条件单限制参数
	struct CTORATstpQryInvestorCondOrderLimitParamField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	};

	/// 投资者条件单限制参数
	struct CTORATstpInvestorCondOrderLimitParamField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///最大条件单数
		TTORATstpVolumeType	MaxCondOrderLimitCnt;
	
		///当前条件单数
		TTORATstpVolumeType	CurrCondOrderCnt;
	};

	/// 查询条件单
	struct CTORATstpQryConditionOrderField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///报单编号
		TTORATstpCondOrderIDType	CondOrderID;
	
		///Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Time
		TTORATstpTimeType	InsertTimeEnd;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 查询条件单撤单
	struct CTORATstpQryCondOrderActionField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///被撤条件单编号
		TTORATstpCondOrderIDType	CondOrderID;
	
		///条件单撤单编号
		TTORATstpCondOrderIDType	CancelCondOrderID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 条件单撤单
	struct CTORATstpCondOrderActionField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///被撤条件单前置编号
		TTORATstpFrontIDType	FrontID;
	
		///被撤条件单会话编号
		TTORATstpSessionIDType	SessionID;
	
		///被撤条件单引用
		TTORATstpOrderRefType	CondOrderRef;
	
		///被撤条件单编号
		TTORATstpCondOrderIDType	CondOrderID;
	
		///操作标志
		TTORATstpActionFlagType	ActionFlag;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///条件单操作引用
		TTORATstpOrderRefType	CondOrderActionRef;
	
		///条件单撤单编号
		TTORATstpCondOrderIDType	CancelCondOrderID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	
		///请求编号
		TTORATstpRequestIDType	RequestID;
	
		///撤单前置编号
		TTORATstpFrontIDType	ActionFrontID;
	
		///撤单会话编号
		TTORATstpSessionIDType	ActionSessionID;
	
		///一级机构代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///操作用户
		TTORATstpUserIDType	ActionUser;
	
		///操作日期
		TTORATstpDateType	ActionDate;
	
		///操作时间
		TTORATstpTimeType	ActionTime;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	};

	/// 查询交易通知
	struct CTORATstpQryTradingNoticeField
	{
		///投资者代码
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

	/// 查询新股申购配号结果
	struct CTORATstpQryIPONumberResultField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///申购代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///股东代码
		TTORATstpShareholderIDType	ShareholderID;
	};

	/// 新股申购配号结果
	struct CTORATstpIPONumberResultField
	{
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///日期
		TTORATstpDateType	Day;
	
		///申购证券名称
		TTORATstpSecurityNameType	SecurityName;
	
		///证券类别代码
		TTORATstpSecurityTypeType	SecurityType;
	
		///起始配号
		TTORATstpIPONumberIDType	BeginNumberID;
	
		///配号数量
		TTORATstpVolumeType	Volume;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	};

	/// 查询新股申购中签结果
	struct CTORATstpQryIPOMatchNumberResultField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///申购代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///中签配号
		TTORATstpIPONumberIDType	MatchNumberID;
	};

	/// 新股申购中签结果
	struct CTORATstpIPOMatchNumberResultField
	{
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///中签配号
		TTORATstpIPONumberIDType	MatchNumberID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///日期
		TTORATstpDateType	Day;
	
		///申购证券名称
		TTORATstpSecurityNameType	SecurityName;
	
		///证券类别代码
		TTORATstpSecurityTypeType	SecurityType;
	
		///此中签号拥有的证券数量
		TTORATstpVolumeType	Volume;
	
		///申购价格
		TTORATstpPriceType	Price;
	
		///申购金额
		TTORATstpMoneyType	Amout;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	};

	/// 查询交易协议
	struct CTORATstpQryShareholderSpecPrivilegeField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///特殊权限类别
		TTORATstpSpecPrivilegeTypeType	SpecPrivilegeType;
	
		///买卖方向
		TTORATstpDirectionType	Direction;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	};

	/// 交易协议
	struct CTORATstpShareholderSpecPrivilegeField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///交易账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///特殊权限类别
		TTORATstpSpecPrivilegeTypeType	SpecPrivilegeType;
	
		///报单类别
		TTORATstpDirectionType	Direction;
	
		///是否禁止
		TTORATstpBoolType	bForbidden;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	};

	/// 查询信用转移
	struct CTORATstpQryCreditTransferField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///全系统的唯一报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Time
		TTORATstpTimeType	InsertTimeEnd;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 查询撤销信用转移
	struct CTORATstpQryCancelCreditTransferField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///交易单元代码
		TTORATstpPbuIDType	PbuID;
	
		///全系统的唯一报单编号
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///该撤单对应被撤报单的本地报单编号
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 撤销信用转移
	struct CTORATstpCancelCreditTransferField
	{
		///交易日
		TTORATstpDateType	TradingDay;
	
		///操作本地编号
		TTORATstpOrderLocalIDType	CancelOrderLocalID;
	
		///撤单前置编号
		TTORATstpFrontIDType	ActionFrontID;
	
		///撤单会话编号
		TTORATstpSessionIDType	ActionSessionID;
	
		///撤单引用
		TTORATstpOrderRefType	OrderActionRef;
	
		///操作标志
		TTORATstpActionFlagType	ActionFlag;
	
		///本地被撤报单编号
		TTORATstpOrderLocalIDType	OrderLocalID;
	
		///报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///前置编号
		TTORATstpFrontIDType	FrontID;
	
		///会话编号
		TTORATstpSessionIDType	SessionID;
	
		///报单引用
		TTORATstpOrderRefType	OrderRef;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///撤单状态
		TTORATstpCancelOrderStatusType	CancelOrderStatus;
	
		///撤单数量
		TTORATstpVolumeType	VolumeCanceled;
	
		///状态信息
		TTORATstpStatusMsgType	StatusMsg;
	
		///系统错误代码
		TTORATstpErrorIDType	ErrorID;
	
		///交易所营业部编码
		TTORATstpBranchIDType	BranchID;
	
		///交易所交易单元代码
		TTORATstpPbuIDType	PbuID;
	
		///报单申报用户
		TTORATstpUserIDType	InsertUser;
	
		///操作日期
		TTORATstpDateType	InsertDate;
	
		///操作时间
		TTORATstpTimeType	InsertTime;
	
		///申报时间(毫秒)
		TTORATstpMillisecType	InsertMillisec;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	
		///请求编号
		TTORATstpRequestIDType	RequestID;
	
		///短字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 查询投资者余券持仓
	struct CTORATstpQrySurplusPositionField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///交易所下的交易市场
		TTORATstpMarketIDType	MarketID;
	
		///交易账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	};

	/// 投资者余券持仓
	struct CTORATstpSurplusPositionField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///客户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///昨日持仓
		TTORATstpVolumeType	Volume;
	
		///已划转数量
		TTORATstpVolumeType	ReturnVolume;
	};

	/// 信用交易息费折扣券信息
	struct CTORATstpQryCreditDiscountCouponInfoField
	{
		///折扣券编号
		TTORATstpIntSerialType	DiscountCouponID;
	};

	/// 交易息费折扣券信息
	struct CTORATstpCreditDiscountCouponInfoField
	{
		///折扣券编号
		TTORATstpIntSerialType	DiscountCouponID;
	
		///折扣券名称
		TTORATstpNameType	DiscountName;
	
		///折扣系数
		TTORATstpRatioType	Factor;
	
		///开始日期
		TTORATstpDateType	StartDate;
	
		///结束日期
		TTORATstpDateType	EndDate;
	};

	/// 投资者息费折扣券
	struct CTORATstpQryInvestorCreditDiscountCouponField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///折扣券编号
		TTORATstpIntSerialType	DiscountCouponID;
	};

	/// 者息费折扣券
	struct CTORATstpInvestorCreditDiscountCouponField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///折扣券编号
		TTORATstpIntSerialType	DiscountCouponID;
	
		///可用数量
		TTORATstpVolumeType	Volume;
	};

	/// 查询白名单证券控制
	struct CTORATstpQryWhiteListSecurityCtrlField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///合约代码
		TTORATstpSecurityIDType	SecurityID;
	
		///报单类别
		TTORATstpDirectionType	Direction;
	};

	/// 白名单证券控制
	struct CTORATstpWhiteListSecurityCtrlField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///报单类别
		TTORATstpDirectionType	Direction;
	};

	/// 信用评级信息
	struct CTORATstpQryCreditRatingInfoField
	{
		///投资者信用评级
		TTORATstpCreditRatingType	CreditRating;
	};

	/// 评级信息
	struct CTORATstpCreditRatingInfoField
	{
		///投资者信用评级
		TTORATstpCreditRatingType	CreditRating;
	
		///担保授信系数
		TTORATstpMoneyType	CollateralCreditRatio;
	
		///融资利率
		TTORATstpRatioType	CreditBuyInterestRate;
	
		///融券费率
		TTORATstpRatioType	CreditSellFeeRate;
	
		///额度融资利率
		TTORATstpRatioType	QuotaCreditBuyInterestRate;
	
		///额度融资占用费率
		TTORATstpRatioType	QuotaCreditBuyOccupyRate;
	};

	/// 查询投资者融资融券信息
	struct CTORATstpQryInvestorCreditInfoField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	};

	/// 投资者融资融券信息
	struct CTORATstpInvestorCreditInfoField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者信用评级
		TTORATstpCreditRatingType	CreditRating;
	
		///普通资金头寸编号
		TTORATstpQuotaIDType	NormalFundQuotaID;
	
		///普通持仓头寸编号
		TTORATstpQuotaIDType	NormalPositionQuotaID;
	
		///专项资金头寸编号
		TTORATstpQuotaIDType	SpecialFundQuotaID;
	
		///专项持仓头寸编号
		TTORATstpQuotaIDType	SpecialPositionQuotaID;
	
		///融资额度上限
		TTORATstpMoneyType	CreditBuyLimitAmount;
	
		///融券额度上限
		TTORATstpMoneyType	CreditSellLimitAmount;
	
		///融资买入金额
		TTORATstpMoneyType	CreditBuyAmount;
	
		///融资买入未成交金额
		TTORATstpMoneyType	CreditBuyUntradeAmount;
	
		///融资冻结保证金
		TTORATstpMoneyType	CreditBuyFrozenMargin;
	
		///融资买入利息
		TTORATstpMoneyType	CreditBuyInterestFee;
	
		///融券卖出金额
		TTORATstpMoneyType	CreditSellAmount;
	
		///融券卖出未成交金额
		TTORATstpMoneyType	CreditSellUntradeAmount;
	
		///融券冻结保证金
		TTORATstpMoneyType	CreditSellFrozenMargin;
	
		///融券卖出费用
		TTORATstpMoneyType	CreditSellInterestFee;
	
		///融资流动冻结保证金
		TTORATstpMoneyType	CreditBuyFrozenCirculateMargin;
	
		///融券流动冻结保证金
		TTORATstpMoneyType	CreditSellFrozenCirculateMargin;
	};

	/// 查询证券公允价格
	struct CTORATstpQrySecurityFairPriceField
	{
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	};

	/// 证券公允价格
	struct CTORATstpSecurityFairPriceField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///公允价格
		TTORATstpPriceType	FairPrice;
	};

	/// 查询投资者担保比例风控参数
	struct CTORATstpQryInvestorCollateralRiskParamField
	{
		///投资者代码（00000000代表所有投资者）
		TTORATstpInvestorIDType	InvestorID;
	
		///经纪公司部门代码（00000000代表所有营业部）
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// 投资者担保比例风控参数
	struct CTORATstpInvestorCollateralRiskParamField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///提取线
		TTORATstpRatioType	WithdrawLine;
	
		///强制平仓线
		TTORATstpRatioType	ForceCloseLine;
	
		///平仓到位比例
		TTORATstpRatioType	ForceCloseTargetLine;
	
		///追保比例
		TTORATstpRatioType	AddMarginLine;
	
		///追保到位比例
		TTORATstpRatioType	AddMarginTargetLine;
	
		///预警比例
		TTORATstpRatioType	WarningLine;
	
		///关注担保比例
		TTORATstpRatioType	ConcernLine;
	
		///自动强制平仓线
		TTORATstpRatioType	AutoForceCloseLine;
	
		///是否自动强平
		TTORATstpBoolType	bAutoForceClose;
	};

	/// 查询投资者利率
	struct CTORATstpQryInvestorCreditInterestRateField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///经纪公司部门代码（00000000代表所有营业部）
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// 投资者利率
	struct CTORATstpInvestorCreditInterestRateField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///融资利率
		TTORATstpRatioType	InterestRate;
	
		///融券费率
		TTORATstpRatioType	FeeRate;
	
		///专项融资利率
		TTORATstpRatioType	SpecialInterestRate;
	
		///专项融券利率
		TTORATstpRatioType	SpecialFeeRate;
	};

	/// 查询投资者优惠利率
	struct CTORATstpQryInvestorCreditBenefitInterestRateField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///经纪公司部门代码（00000000代表所有营业部）
		TTORATstpDepartmentIDType	DepartmentID;
	};

	/// 投资者优惠利率
	struct CTORATstpInvestorCreditBenefitInterestRateField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///优惠融资利率
		TTORATstpRatioType	BenefitInterestRate;
	
		///利率优惠天数
		TTORATstpRecordCntType	BenefitDays;
	};

	/// 查询信用负债
	struct CTORATstpQryCreditDebtField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///信用负债类型
		TTORATstpCreditDebtTypeType	CreditDebtType;
	
		///信用合约状态
		TTORATstpCreditDebtStatusType	CreditDebtStatus;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 信用负债
	struct CTORATstpCreditDebtField
	{
		///信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///信用负债类型
		TTORATstpCreditDebtTypeType	CreditDebtType;
	
		///信用合约状态
		TTORATstpCreditDebtStatusType	CreditDebtStatus;
	
		///头寸类型
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///开仓日期
		TTORATstpDateType	OpenDate;
	
		///开仓时间
		TTORATstpTimeType	OpenTime;
	
		///到期日
		TTORATstpDateType	ExpireDate;
	
		///数量
		TTORATstpVolumeType	Volume;
	
		///金额
		TTORATstpMoneyType	Amount;
	
		///未偿还数量
		TTORATstpVolumeType	UnpaidVolume;
	
		///未偿还金额
		TTORATstpMoneyType	UnpaidAmount;
	
		///未偿还交易费用（融资）
		TTORATstpMoneyType	UnpaidTradingFee;
	
		///未偿还息费（融资利息、融券费用）
		TTORATstpMoneyType	UnpaidInterestFee;
	
		///还券未成交数量
		TTORATstpVolumeType	RepayUntradeVolume;
	
		///已展期次数
		TTORATstpExtendNumType	ExtendNum;
	
		///日初利率
		TTORATstpRatioType	PreInterestRate;
	
		///利率
		TTORATstpRatioType	InterestRate;
	
		///费息折扣券编号
		TTORATstpIntSerialType	DiscountCouponID;
	};

	/// 查询融资资金头寸
	struct CTORATstpQryCreditFundQuotaField
	{
		///融资头寸编号
		TTORATstpQuotaIDType	FundQuotaID;
	};

	/// 融资资金头寸
	struct CTORATstpCreditFundQuotaField
	{
		///融资头寸编号
		TTORATstpQuotaIDType	FundQuotaID;
	
		///头寸类型
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///总可融金额（账户余额）
		TTORATstpMoneyType	TotalAmount;
	
		///已融出金额
		TTORATstpMoneyType	ConsumeAmount;
	
		///当日冻结金额
		TTORATstpMoneyType	FrozenAmount;
	};

	/// 查询融券证券头寸
	struct CTORATstpQryCreditPositionQuotaField
	{
		///融券头寸编号
		TTORATstpQuotaIDType	PositionQuotaID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 融券证券头寸
	struct CTORATstpCreditPositionQuotaField
	{
		///融券头寸编号
		TTORATstpQuotaIDType	PositionQuotaID;
	
		///头寸类型
		TTORATstpCreditQuotaTypeType	CreditQuotaType;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///总可融数量
		TTORATstpVolumeType	TotalVolume;
	
		///已融出数量
		TTORATstpVolumeType	ConsumeVolume;
	
		///当日冻结数量
		TTORATstpVolumeType	FrozenVolume;
	
		///到期日期
		TTORATstpDateType	ExpireDate;
	};

	/// 查询融资融券偿还明细
	struct CTORATstpQryCreditRepaymentField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///偿还流水号
		TTORATstpCreditRepayIDType	CreditRepayID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///系统报单编号(直接还款时对应资金转移序号)
		TTORATstpOrderSysIDType	OrderSysID;
	};

	/// 融资融券偿还明细
	struct CTORATstpCreditRepaymentField
	{
		///偿还流水号
		TTORATstpCreditRepayIDType	CreditRepayID;
	
		///信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///系统报单编号
		TTORATstpOrderSysIDType	OrderSysID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///偿还金额
		TTORATstpMoneyType	RepaidAmount;
	
		///偿还数量
		TTORATstpVolumeType	RepaidVolume;
	
		///偿还交易费用
		TTORATstpMoneyType	RepaidTradingFee;
	
		///偿还息费
		TTORATstpMoneyType	RepaidInterestFee;
	
		///偿还类别
		TTORATstpRepayDirectionType	RepayDirection;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 查询投资者信用保证金比例
	struct CTORATstpQryInvestorCreditMarginRateField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 投资者信用保证金比例
	struct CTORATstpInvestorCreditMarginRateField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///产品代码
		TTORATstpProductIDType	ProductID;
	
		///证券类别代码
		TTORATstpSecurityTypeType	SecurityType;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///融资买入保证金率
		TTORATstpRatioType	CreditBuyRate;
	
		///融券卖出保证金率
		TTORATstpRatioType	CreditSellRate;
	};

	/// 查询投资者担保品折算率
	struct CTORATstpQryInvestorCollateralConversionRateField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 投资者担保品折算率
	struct CTORATstpInvestorCollateralConversionRateField
	{
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///产品代码
		TTORATstpProductIDType	ProductID;
	
		///证券类别代码
		TTORATstpSecurityTypeType	SecurityType;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///折算率
		TTORATstpRatioType	ConversionRate;
	};

	/// 查询账户证券交易黑名单
	struct CTORATstpQryShareholderSecurityBlackListField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///报单类别
		TTORATstpDirectionType	Direction;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	};

	/// 账户证券交易黑名单
	struct CTORATstpShareholderSecurityBlackListField
	{
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///交易账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///报单类别
		TTORATstpDirectionType	Direction;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	};

	/// 查询公司资格证券
	struct CTORATstpQryBrokerCreditSecurityField
	{
		///合约代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	};

	/// 公司资格证券
	struct CTORATstpBrokerCreditSecurityField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///是否是担保品证券
		TTORATstpBoolType	bCollateral;
	
		///是否是融券标的
		TTORATstpBoolType	bCreditSell;
	
		///是否是融资标的
		TTORATstpBoolType	bCreditBuy;
	
		///公司折算率
		TTORATstpRatioType	ConversionRate;
	
		///公司融资买入保证金率
		TTORATstpRatioType	CreditBuyRate;
	
		///公司融券卖出保证金率
		TTORATstpRatioType	CreditSellRate;
	
		///证券信用交易状态
		TTORATstpSecurityCreditStatusType	SecurityCreditStatus;
	
		///是否白名单融券标的证券
		TTORATstpBoolType	IsWhiteList;
	
		///最大展期次数(0表示不支持展期)
		TTORATstpExtendNumType	MaxExtendNum;
	};

	/// 查询负债展期
	struct CTORATstpQryDebtExtendField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///展期流水号
		TTORATstpIntSerialType	ExtendSerial;
	
		///Time
		TTORATstpTimeType	InsertTimeStart;
	
		///Time
		TTORATstpTimeType	InsertTimeEnd;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 查询撤销负债展期
	struct CTORATstpQryCancelDebtExtendField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///负债展期撤单编号
		TTORATstpIntSerialType	CancelExtendSerial;
	
		///被撤展期编号
		TTORATstpIntSerialType	ExtendSerial;
	
		///字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 撤销负债展期
	struct CTORATstpCancelDebtExtendField
	{
		///交易日
		TTORATstpDateType	TradingDay;
	
		///负债展期撤单编号
		TTORATstpIntSerialType	CancelExtendSerial;
	
		///撤单前置编号
		TTORATstpFrontIDType	CancelFrontID;
	
		///撤单会话编号
		TTORATstpSessionIDType	CancelSessionID;
	
		///撤单引用
		TTORATstpIntSerialType	ApplySerial;
	
		///被撤展期编号
		TTORATstpIntSerialType	ExtendSerial;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///股东账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///信用负债编号
		TTORATstpCreditDebtIDType	CreditDebtID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///撤单状态
		TTORATstpCancelOrderStatusType	CancelOrderStatus;
	
		///报单申报用户
		TTORATstpUserIDType	InsertUser;
	
		///操作日期
		TTORATstpDateType	InsertDate;
	
		///操作时间
		TTORATstpTimeType	InsertTime;
	
		///申报时间(毫秒)
		TTORATstpMillisecType	InsertMillisec;
	
		///IP地址
		TTORATstpIPAddressType	IPAddress;
	
		///Mac地址
		TTORATstpMacAddressType	MacAddress;
	
		///请求编号
		TTORATstpRequestIDType	RequestID;
	
		///委托方式
		TTORATstpOperwayType	Operway;
	
		///短字符串附加信息
		TTORATstpStrInfoType	SInfo;
	
		///整形附加信息
		TTORATstpIntInfoType	IInfo;
	};

	/// 查询证券流动资产参数
	struct CTORATstpQrySecurityCirculateAssetParamField
	{
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券品种代码
		TTORATstpProductIDType	ProductID;
	
		///风控规模指标证券类别
		TTORATstpRiskScaleIndicatorSecurityTypeType	SecurityType;
	};

	/// 证券流动资产参数
	struct CTORATstpSecurityCirculateAssetParamField
	{
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券品种代码
		TTORATstpProductIDType	ProductID;
	
		///风控规模指标证券类别
		TTORATstpRiskScaleIndicatorSecurityTypeType	SecurityType;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///流动系数（当日可卖仓位折算率）
		TTORATstpRatioType	CirculateRate;
	
		///非流动系数（当日不可卖仓位折算率）
		TTORATstpRatioType	NonCirculateRate;
	
		///融资流动保证金率
		TTORATstpRatioType	CreditBuyMarginRate;
	
		///融券流动保证金率
		TTORATstpRatioType	CreditSellMarginRate;
	};

	/// 查询投资者证券流动资产信息
	struct CTORATstpQrySecurityCirculateAssetInfoField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///交易账户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///投资者套餐类型
		TTORATstpPlanTypeType	PlanType;
	};

	/// 投资者证券流动资产信息
	struct CTORATstpSecurityCirculateAssetInfoField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///投资单元代码
		TTORATstpBusinessUnitIDType	BusinessUnitID;
	
		///市场代码
		TTORATstpMarketIDType	MarketID;
	
		///客户代码
		TTORATstpShareholderIDType	ShareholderID;
	
		///交易日
		TTORATstpDateType	TradingDay;
	
		///交易所代码
		TTORATstpExchangeIDType	ExchangeID;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///合约名称
		TTORATstpSecurityNameType	SecurityName;
	
		///流动持仓数量
		TTORATstpVolumeType	CirculatePos;
	
		///流动持仓市值
		TTORATstpMoneyType	CirculateMarketValue;
	
		///流动资产
		TTORATstpMoneyType	CirculateAsset;
	
		///流动系数
		TTORATstpMoneyType	CirculateRate;
	
		///非流动持仓数量
		TTORATstpVolumeType	NonCirculatePos;
	
		///非流动持仓市值
		TTORATstpMoneyType	NonCirculateMarketValue;
	
		///非流动资产
		TTORATstpMoneyType	NonCirculateAsset;
	
		///非流动系数
		TTORATstpMoneyType	NonCirculateRate;
	
		///计算价格
		TTORATstpPriceType	LastPrice;
	
		///投资者套餐类型
		TTORATstpPlanTypeType	PlanType;
	
		///更新时间
		TTORATstpTimeType	UpdateTime;
	};

	/// 查询投资者实时融资融券信息
	struct CTORATstpQryInvestorRealTimeCreditInfoField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	};

	/// 投资者实时融资融券信息
	struct CTORATstpInvestorRealTimeCreditInfoField
	{
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///经纪公司部门代码
		TTORATstpDepartmentIDType	DepartmentID;
	
		///维持担保比例
		TTORATstpRatioType	CollateralRatio;
	
		///可用保证金
		TTORATstpMoneyType	UsefulMargin;
	
		///上日结存
		TTORATstpMoneyType	PreDeposit;
	
		///可用金额
		TTORATstpMoneyType	UsefulMoney;
	
		///入金金额
		TTORATstpMoneyType	Deposit;
	
		///出金金额
		TTORATstpMoneyType	Withdraw;
	
		///证券市值
		TTORATstpMoneyType	StockMarketValue;
	
		///冲抵保证金证券市值
		TTORATstpMoneyType	CollateralValue;
	
		///融资负债(包含交易费用)
		TTORATstpMoneyType	CreditBuyDebt;
	
		///融资未成交负债
		TTORATstpMoneyType	CreditBuyUntradeDebt;
	
		///融资未成交冻结保证金
		TTORATstpMoneyType	CreditBuyFrozenMargin;
	
		///融资盈亏
		TTORATstpMoneyType	CreditBuyProfit;
	
		///融券卖出金额（按还券数量折算后）
		TTORATstpMoneyType	CreditSellMoney;
	
		///融券卖出负债（融券市值）
		TTORATstpMoneyType	CreditSellDebt;
	
		///融券卖出未成交负债
		TTORATstpMoneyType	CreditSellUntradeDebt;
	
		///融券冻结保证金
		TTORATstpMoneyType	CreditSellFrozenMargin;
	
		///融券盈亏
		TTORATstpMoneyType	CreditSellProfit;
	
		///利息/费用
		TTORATstpMoneyType	InterestFee;
	
		///总资产
		TTORATstpMoneyType	TotalAsset;
	
		///总负债
		TTORATstpMoneyType	TotalDebt;
	
		///净资产
		TTORATstpMoneyType	NetAsset;
	
		///融资占用保证金
		TTORATstpMoneyType	CreditBuyMargin;
	
		///融券占用保证金
		TTORATstpMoneyType	CreditSellMargin;
	
		///折算后融资盈亏
		TTORATstpMoneyType	CreditConvertBuyProfit;
	
		///折算后融券盈亏
		TTORATstpMoneyType	CreditConvertSellProfit;
	
		///预计维持担保比例(包括担保划入待交收)
		TTORATstpRatioType	PredictCollateralRatio;
	
		///流动总资产
		TTORATstpMoneyType	TotalCirculateAsset;
	
		///剩余流动总资产
		TTORATstpMoneyType	RemainCirculateAsset;
	
		///融资流动占用保证金
		TTORATstpMoneyType	CreditBuyCirculateMargin;
	
		///融资流动冻结保证金
		TTORATstpMoneyType	CreditBuyFrozenCirculateMargin;
	
		///融券流动占用保证金
		TTORATstpMoneyType	CreditSellCirculateMargin;
	
		///融券流动冻结保证金
		TTORATstpMoneyType	CreditSellFrozenCirculateMargin;
	
		///更新时间
		TTORATstpTimeType	UpdateTime;
	};

	/// 查询投资者风控业务规模集中度参数
	struct CTORATstpQryInvestorBusinessScaleConcentrationParamField
	{
		///客户号
		TTORATstpInvestorIDType	InvestorID;
	
		///投资者风控规模指标
		TTORATstpInvestorRiskScaleIndicatorType	InvestorRiskScaleIndicator;
	
		///风控规模指标证券类别
		TTORATstpRiskScaleIndicatorSecurityTypeType	SecurityType;
	
		///合约代码
		TTORATstpSecurityIDType	SecurityID;
	};

	/// 投资者风控业务规模集中度参数
	struct CTORATstpInvestorBusinessScaleConcentrationParamField
	{
		///风控规模指标
		TTORATstpInvestorRiskScaleIndicatorType	InvestorRiskScaleIndicator;
	
		///投资者代码
		TTORATstpInvestorIDType	InvestorID;
	
		///风控规模指标证券类别
		TTORATstpRiskScaleIndicatorSecurityTypeType	SecurityType;
	
		///证券代码
		TTORATstpSecurityIDType	SecurityID;
	
		///参考值上限
		TTORATstpMoneyType	ReferenceUpperLimit;
	
		///参考值下限
		TTORATstpMoneyType	ReferenceLowerLimit;
	
		///阈值
		TTORATstpMoneyType	Value;
	
		///是否有效
		TTORATstpCharBoolType	IsValid;
	
		///参考值类型
		TTORATstpReferenceTypeType	ReferenceType;
	
		///最低资产控制,0表示不控制
		TTORATstpMoneyType	LowestAsset;
	};

	/// 查询信用套餐信息
	struct CTORATstpQryCreditPlanInfoField
	{
		///套餐类型
		TTORATstpPlanTypeType	PlanType;
	};

	/// 信用套餐信息
	struct CTORATstpCreditPlanInfoField
	{
		///套餐类型
		TTORATstpPlanTypeType	PlanType;
	
		///套餐说明
		TTORATstpLongRemarkType	PlanRemark;
	};

	/// fens用户信息
	struct CTORATstpFensUserInfoField
	{
		///登录账户
		TTORATstpLogInAccountType	LogInAccount;
	
		///登录账户类型
		TTORATstpLogInAccountTypeType	LogInAccountType;
	};

	/// 连接信息
	struct CTORATstpConnectionInfoField
	{
		///内网IP地址
		TTORATstpIPAddressType	InnerIPAddress;
	
		///内网端口号
		TTORATstpPortType	InnerPort;
	
		///外网IP地址
		TTORATstpIPAddressType	OuterIPAddress;
	
		///外网端口号
		TTORATstpPortType	OuterPort;
	
		///MAC地址
		TTORATstpMacAddressType	MacAddress;
	};

}
#endif // TORATSTPCREDITUSERAPISTRUCT_H__