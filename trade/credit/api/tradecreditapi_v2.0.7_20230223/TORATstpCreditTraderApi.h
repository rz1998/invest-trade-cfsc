/////////////////////////////////////////////////////////////////////////
///@company 上海泰琰信息科技有限公司
///@file TORATstpCreditTraderApi.h
///@brief 定义了客户端接口
///@history 
/////////////////////////////////////////////////////////////////////////
#ifndef TORATSTPCREDITTRADERAPI_H__
#define TORATSTPCREDITTRADERAPI_H__

#include "TORATstpCreditUserApiStruct.h"

#ifdef CREDIT_TRADER_API_EXPORT
#ifdef WINDOWS
#define CREDIT_TRADER_API_DLL_EXPORT __declspec(dllexport)
#else
#define CREDIT_TRADER_API_DLL_EXPORT __attribute__ ((visibility("default")))
#endif
#else
#define CREDIT_TRADER_API_DLL_EXPORT 
#endif

namespace TORACREDITAPI
{
	class CTORATstpTraderSpi
	{
	public:
		///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		virtual void OnFrontConnected(){};
		
		///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		///@param nReason 错误原因
		///        -3 连接已断开
		///        -4 网络读失败
		///        -5 网络写失败
		///        -6 订阅流错误
		///        -7 流序号错误
		///        -8 错误的心跳报文
		///        -9 错误的报文
		virtual void OnFrontDisconnected(int nReason){};
			
		///错误应答
		virtual void OnRspError(CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
		
		///获取连接信息应答
		virtual void OnRspGetConnectionInfo(CTORATstpConnectionInfoField *pConnectionInfoField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
			
		///登录响应	
		virtual void OnRspUserLogin(CTORATstpRspUserLoginField *pRspUserLoginField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///登出响应	
		virtual void OnRspUserLogout(CTORATstpUserLogoutField *pUserLogoutField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///修改密码响应	
		virtual void OnRspUserPasswordUpdate(CTORATstpUserPasswordUpdateField *pUserPasswordUpdateField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///录入设备序列响应	
		virtual void OnRspInputDeviceSerial(CTORATstpRspInputDeviceSerialField *pRspInputDeviceSerialField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///报单录入响应	
		virtual void OnRspOrderInsert(CTORATstpInputOrderField *pInputOrderField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///报单回报
		virtual void OnRtnOrder(CTORATstpOrderField *pOrder) {};
			
		///报单错误回报
		virtual void OnErrRtnOrderInsert(CTORATstpInputOrderField *pInputOrder, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///成交回报
		virtual void OnRtnTrade(CTORATstpTradeField *pTrade) {};
			
		///撤单响应	
		virtual void OnRspOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///撤单错误回报
		virtual void OnErrRtnOrderAction(CTORATstpInputOrderActionField *pInputOrderAction, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///条件单录入响应	
		virtual void OnRspCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///条件单回报
		virtual void OnRtnCondOrder(CTORATstpConditionOrderField *pConditionOrder) {};
			
		///条件单录入错误回报
		virtual void OnErrRtnCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrder, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///条件单撤单响应	
		virtual void OnRspCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///条件单撤单错误回报
		virtual void OnErrRtnCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderAction, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///市场状态回报
		virtual void OnRtnMarketStatus(CTORATstpMarketStatusField *pMarketStatus) {};
			
		///资金转移响应	
		virtual void OnRspTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///资金转移错误回报
		virtual void OnErrRtnTransferFund(CTORATstpInputTransferFundField *pInputTransferFund, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///资金转移回报
		virtual void OnRtnTransferFund(CTORATstpTransferFundField *pTransferFund) {};
			
		///仓位转移响应	
		virtual void OnRspTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///仓位转移错误回报
		virtual void OnErrRtnTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPosition, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///仓位转移回报
		virtual void OnRtnTransferPosition(CTORATstpTransferPositionField *pTransferPosition) {};
			
		///外围系统仓位转移回报
		virtual void OnRtnPeripheryTransferPosition(CTORATstpPeripheryTransferPositionField *pPeripheryTransferPosition) {};
			
		///外围系统资金转移回报
		virtual void OnRtnPeripheryTransferFund(CTORATstpPeripheryTransferFundField *pPeripheryTransferFund) {};
			
		///查询集中交易系统资金响应	
		virtual void OnRspInquiryJZFund(CTORATstpRspInquiryJZFundField *pRspInquiryJZFundField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///查询银行账户余额响应	
		virtual void OnRspInquiryBankAccountFund(CTORATstpRspInquiryBankAccountFundField *pRspInquiryBankAccountFundField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///交易通知回报
		virtual void OnRtnTradingNotice(CTORATstpTradingNoticeField *pTradingNotice) {};
			
		///查询最大报单量响应	
		virtual void OnRspInquiryMaxOrderVolume(CTORATstpRspInquiryMaxOrderVolumeField *pRspInquiryMaxOrderVolumeField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///查询现货系统现货持仓响应
		virtual void OnRspInquiryStockPosition(CTORATstpRspInquiryStockPositionField *pRspInquiryStockPositionField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///信用划转请求响应	
		virtual void OnRspCreditTransfer(CTORATstpInputCreditTransferField *pInputCreditTransferField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///信用划转通知
		virtual void OnRtnCreditTransfer(CTORATstpCreditTransferField *pCreditTransfer) {};
			
		///信用划转错误回报
		virtual void OnErrRtnCreditTransfer(CTORATstpInputCreditTransferField *pInputCreditTransfer, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///信用划转撤单请求响应	
		virtual void OnRspCancelCreditTransfer(CTORATstpInputCancelCreditTransferField *pInputCancelCreditTransferField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///信用划转撤单错误回报
		virtual void OnErrRtnCancelCreditTransfer(CTORATstpInputCancelCreditTransferField *pInputCancelCreditTransfer, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///展期响应	
		virtual void OnRspDebtExtend(CTORATstpInputDebtExtendField *pInputDebtExtendField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///展期通知
		virtual void OnRtnDebtExtend(CTORATstpDebtExtendField *pDebtExtend) {};
			
		///展期错误回报
		virtual void OnErrRtnDebtExtend(CTORATstpInputDebtExtendField *pInputDebtExtend, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///展期撤销请求响应	
		virtual void OnRspCancelDebtExtend(CTORATstpInputCancelDebtExtendField *pInputCancelDebtExtendField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///展期撤销错误回报
		virtual void OnErrRtnCancelDebtExtend(CTORATstpInputCancelDebtExtendField *pInputCancelDebtExtend, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///修改套餐类型应答	
		virtual void OnRspChangePlanType(CTORATstpRspChangePlanTypeField *pRspChangePlanTypeField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///查询交易所响应
		virtual void OnRspQryExchange(CTORATstpExchangeField *pExchange, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询证券信息响应
		virtual void OnRspQrySecurity(CTORATstpSecurityField *pSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询新股信息响应
		virtual void OnRspQryIPOInfo(CTORATstpIPOInfoField *pIPOInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询用户响应
		virtual void OnRspQryUser(CTORATstpUserField *pUser, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者响应
		virtual void OnRspQryInvestor(CTORATstpInvestorField *pInvestor, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询股东账户响应
		virtual void OnRspQryShareholderAccount(CTORATstpShareholderAccountField *pShareholderAccount, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询配股配债信息响应
		virtual void OnRspQryRationalInfo(CTORATstpRationalInfoField *pRationalInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询报单响应
		virtual void OnRspQryOrder(CTORATstpOrderField *pOrder, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询撤单请求
		virtual void OnRspQryOrderAction(CTORATstpOrderActionField *pOrderAction, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询成交响应
		virtual void OnRspQryTrade(CTORATstpTradeField *pTrade, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询资金账户响应
		virtual void OnRspQryTradingAccount(CTORATstpTradingAccountField *pTradingAccount, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者持仓响应
		virtual void OnRspQryPosition(CTORATstpPositionField *pPosition, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询基础交易费用响应
		virtual void OnRspQryTradingFee(CTORATstpTradingFeeField *pTradingFee, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询佣金费率响应
		virtual void OnRspQryInvestorTradingFee(CTORATstpInvestorTradingFeeField *pInvestorTradingFee, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询新股申购额度响应
		virtual void OnRspQryIPOQuota(CTORATstpIPOQuotaField *pIPOQuota, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询报单明细资金响应
		virtual void OnRspQryOrderFundDetail(CTORATstpOrderFundDetailField *pOrderFundDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询资金转移流水响应
		virtual void OnRspQryFundTransferDetail(CTORATstpFundTransferDetailField *pFundTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询持仓转移流水响应
		virtual void OnRspQryPositionTransferDetail(CTORATstpPositionTransferDetailField *pPositionTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询外围系统仓位调拨流水响应
		virtual void OnRspQryPeripheryPositionTransferDetail(CTORATstpPeripheryPositionTransferDetailField *pPeripheryPositionTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询外围系统资金调拨流水响应
		virtual void OnRspQryPeripheryFundTransferDetail(CTORATstpPeripheryFundTransferDetailField *pPeripheryFundTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询债券转股信息响应
		virtual void OnRspQryBondConversionInfo(CTORATstpBondConversionInfoField *pBondConversionInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询债券回售信息响应
		virtual void OnRspQryBondPutbackInfo(CTORATstpBondPutbackInfoField *pBondPutbackInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者条件单限制参数响应
		virtual void OnRspQryInvestorCondOrderLimitParam(CTORATstpInvestorCondOrderLimitParamField *pInvestorCondOrderLimitParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询条件单响应
		virtual void OnRspQryConditionOrder(CTORATstpConditionOrderField *pConditionOrder, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询条件单撤单响应
		virtual void OnRspQryCondOrderAction(CTORATstpCondOrderActionField *pCondOrderAction, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询交易通知响应
		virtual void OnRspQryTradingNotice(CTORATstpTradingNoticeField *pTradingNotice, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询新股申购配号结果响应
		virtual void OnRspQryIPONumberResult(CTORATstpIPONumberResultField *pIPONumberResult, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询新股申购中签结果响应
		virtual void OnRspQryIPOMatchNumberResult(CTORATstpIPOMatchNumberResultField *pIPOMatchNumberResult, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询交易协议响应
		virtual void OnRspQryShareholderSpecPrivilege(CTORATstpShareholderSpecPrivilegeField *pShareholderSpecPrivilege, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询信用转移
		virtual void OnRspQryCreditTransfer(CTORATstpCreditTransferField *pCreditTransfer, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询撤销信用划转
		virtual void OnRspQryCancelCreditTransfer(CTORATstpCancelCreditTransferField *pCancelCreditTransfer, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询余券持仓
		virtual void OnRspQrySurplusPosition(CTORATstpSurplusPositionField *pSurplusPosition, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询信用交易息费折扣券信息
		virtual void OnRspQryCreditDiscountCouponInfo(CTORATstpCreditDiscountCouponInfoField *pCreditDiscountCouponInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者息费折扣券
		virtual void OnRspQryInvestorCreditDiscountCoupon(CTORATstpInvestorCreditDiscountCouponField *pInvestorCreditDiscountCoupon, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询白名单证券控制
		virtual void OnRspQryWhiteListSecurityCtrl(CTORATstpWhiteListSecurityCtrlField *pWhiteListSecurityCtrl, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询信用评级信息
		virtual void OnRspQryCreditRatingInfo(CTORATstpCreditRatingInfoField *pCreditRatingInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者融资融券信息
		virtual void OnRspQryInvestorCreditInfo(CTORATstpInvestorCreditInfoField *pInvestorCreditInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询证券公允价格
		virtual void OnRspQrySecurityFairPrice(CTORATstpSecurityFairPriceField *pSecurityFairPrice, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者担保比例风控参数
		virtual void OnRspQryInvestorCollateralRiskParam(CTORATstpInvestorCollateralRiskParamField *pInvestorCollateralRiskParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者利率
		virtual void OnRspQryInvestorCreditInterestRate(CTORATstpInvestorCreditInterestRateField *pInvestorCreditInterestRate, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者优惠利率
		virtual void OnRspQryInvestorCreditBenefitInterestRate(CTORATstpInvestorCreditBenefitInterestRateField *pInvestorCreditBenefitInterestRate, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询信用负债
		virtual void OnRspQryCreditDebt(CTORATstpCreditDebtField *pCreditDebt, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询融资资金头寸
		virtual void OnRspQryCreditFundQuota(CTORATstpCreditFundQuotaField *pCreditFundQuota, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询融券证券头寸
		virtual void OnRspQryCreditPositionQuota(CTORATstpCreditPositionQuotaField *pCreditPositionQuota, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询负债偿还
		virtual void OnRspQryCreditRepayment(CTORATstpCreditRepaymentField *pCreditRepayment, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询保证金率
		virtual void OnRspQryInvestorCreditMarginRate(CTORATstpInvestorCreditMarginRateField *pInvestorCreditMarginRate, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者担保品折算率
		virtual void OnRspQryInvestorCollateralConversionRate(CTORATstpInvestorCollateralConversionRateField *pInvestorCollateralConversionRate, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询账户证券交易黑名单
		virtual void OnRspQryShareholderSecurityBlackList(CTORATstpShareholderSecurityBlackListField *pShareholderSecurityBlackList, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询公司资格证券
		virtual void OnRspQryBrokerCreditSecurity(CTORATstpBrokerCreditSecurityField *pBrokerCreditSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询负债展期响应
		virtual void OnRspQryDebtExtend(CTORATstpDebtExtendField *pDebtExtend, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询撤销负债展期响应
		virtual void OnRspQryCancelDebtExtend(CTORATstpCancelDebtExtendField *pCancelDebtExtend, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询证券流动资产参数
		virtual void OnRspQrySecurityCirculateAssetParam(CTORATstpSecurityCirculateAssetParamField *pSecurityCirculateAssetParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询证券流动资产信息
		virtual void OnRspQrySecurityCirculateAssetInfo(CTORATstpSecurityCirculateAssetInfoField *pSecurityCirculateAssetInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者实时融资融券信息响应
		virtual void OnRspQryInvestorRealTimeCreditInfo(CTORATstpInvestorRealTimeCreditInfoField *pInvestorRealTimeCreditInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询投资者风控业务规模集中度参数表
		virtual void OnRspQryInvestorBusinessScaleConcentrationParam(CTORATstpInvestorBusinessScaleConcentrationParamField *pInvestorBusinessScaleConcentrationParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///查询两融套餐信息
		virtual void OnRspQryCreditPlanInfo(CTORATstpCreditPlanInfoField *pCreditPlanInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
	};

	class CREDIT_TRADER_API_DLL_EXPORT CTORATstpTraderApi
	{
	public:
		///创建TraderApi
		///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
		///@param bEncrpyt 网络数据是否加密传输，默认不加密
		///@return 创建出的TraderApi
		static CTORATstpTraderApi *CreateTstpTraderApi(const char *pszFlowPath = "", bool bEncrypt = false);
		
		///获取API版本号
		///@return 版本号
		static const char* GetApiVersion();
		
		///删除接口对象本身
		///@remark 不再使用本接口对象时,调用该函数删除接口对象
		virtual void Release() = 0;
		
		///初始化
		///@remark 初始化运行环境,只有调用后,接口才开始工作
		virtual void Init() = 0;
		
		///等待接口线程结束运行
		///@return 线程退出代码
		virtual int Join() = 0;
		
		///注册前置机网络地址
		///@param pszFrontAddress：前置机网络地址。
		///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
		///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
		virtual void RegisterFront(char *pszFrontAddress) = 0;

		///注册名字服务器网络地址
		///@param pszNsAddress：名字服务器网络地址。
		///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。 
		///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
		///@remark RegisterNameServer优先于RegisterFront
		virtual void RegisterNameServer(char *pszNsAddress) = 0;


		///注册回调接口
		///@param pSpi 派生自回调接口类的实例
		virtual void RegisterSpi(CTORATstpTraderSpi *pSpi) = 0;
		
		///订阅私有流
		///@param nResumeType 私有流重传方式  
		///        TORA_TERT_RESTART:从本交易日开始重传
		///        TORA_TERT_RESUME:从上次收到的续传
		///        TORA_TERT_QUICK:只传送登录后私有流的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
		virtual void SubscribePrivateTopic(TORA_TE_RESUME_TYPE nResumeType) = 0;
		
		///订阅公共流
		///@param nResumeType 公共流重传方式  
		///        TORA_TERT_RESTART:从本交易日开始重传
		///        TORA_TERT_RESUME:从上次收到的续传
		///        TORA_TERT_QUICK:只传送登录后公共流的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
		virtual void SubscribePublicTopic(TORA_TE_RESUME_TYPE nResumeType) = 0;
		
		///获取连接信息
		virtual int ReqGetConnectionInfo(int nRequestID) = 0;
		
		///登录请求	
		virtual int ReqUserLogin(CTORATstpReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
		
		///登出请求	
		virtual int ReqUserLogout(CTORATstpUserLogoutField *pUserLogoutField, int nRequestID) = 0;
		
		///修改密码请求	
		virtual int ReqUserPasswordUpdate(CTORATstpUserPasswordUpdateField *pUserPasswordUpdateField, int nRequestID) = 0;
		
		///录入设备序列请求	
		virtual int ReqInputDeviceSerial(CTORATstpReqInputDeviceSerialField *pReqInputDeviceSerialField, int nRequestID) = 0;
		
		///报单录入请求	
		virtual int ReqOrderInsert(CTORATstpInputOrderField *pInputOrderField, int nRequestID) = 0;
		
		///撤单请求	
		virtual int ReqOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, int nRequestID) = 0;
		
		///条件单录入请求	
		virtual int ReqCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, int nRequestID) = 0;
		
		///条件单撤单请求	
		virtual int ReqCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, int nRequestID) = 0;
		
		///资金转移请求	
		virtual int ReqTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, int nRequestID) = 0;
		
		///仓位转移请求	
		virtual int ReqTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, int nRequestID) = 0;
		
		///查询集中交易系统资金请求	
		virtual int ReqInquiryJZFund(CTORATstpReqInquiryJZFundField *pReqInquiryJZFundField, int nRequestID) = 0;
		
		///查询银行账户余额请求	
		virtual int ReqInquiryBankAccountFund(CTORATstpReqInquiryBankAccountFundField *pReqInquiryBankAccountFundField, int nRequestID) = 0;
		
		///查询最大报单量请求	
		virtual int ReqInquiryMaxOrderVolume(CTORATstpReqInquiryMaxOrderVolumeField *pReqInquiryMaxOrderVolumeField, int nRequestID) = 0;
		
		///查询现货系统现货持仓请求	
		virtual int ReqInquiryStockPosition(CTORATstpReqInquiryStockPositionField *pReqInquiryStockPositionField, int nRequestID) = 0;
		
		///信用划转请求	
		virtual int ReqCreditTransfer(CTORATstpInputCreditTransferField *pInputCreditTransferField, int nRequestID) = 0;
		
		///信用划转撤单请求	
		virtual int ReqCancelCreditTransfer(CTORATstpInputCancelCreditTransferField *pInputCancelCreditTransferField, int nRequestID) = 0;
		
		///展期请求	
		virtual int ReqDebtExtend(CTORATstpInputDebtExtendField *pInputDebtExtendField, int nRequestID) = 0;
		
		///展期撤销请求	
		virtual int ReqCancelDebtExtend(CTORATstpInputCancelDebtExtendField *pInputCancelDebtExtendField, int nRequestID) = 0;
		
		///修改套餐类型请求	
		virtual int ReqChangePlanType(CTORATstpReqChangePlanTypeField *pReqChangePlanTypeField, int nRequestID) = 0;
		
		///查询交易所请求	
		virtual int ReqQryExchange(CTORATstpQryExchangeField *pQryExchangeField, int nRequestID) = 0;
		
		///查询证券信息请求	
		virtual int ReqQrySecurity(CTORATstpQrySecurityField *pQrySecurityField, int nRequestID) = 0;
		
		///查询新股信息请求	
		virtual int ReqQryIPOInfo(CTORATstpQryIPOInfoField *pQryIPOInfoField, int nRequestID) = 0;
		
		///查询用户请求	
		virtual int ReqQryUser(CTORATstpQryUserField *pQryUserField, int nRequestID) = 0;
		
		///查询投资者请求	
		virtual int ReqQryInvestor(CTORATstpQryInvestorField *pQryInvestorField, int nRequestID) = 0;
		
		///查询股东账户请求	
		virtual int ReqQryShareholderAccount(CTORATstpQryShareholderAccountField *pQryShareholderAccountField, int nRequestID) = 0;
		
		///查询配股配债信息请求	
		virtual int ReqQryRationalInfo(CTORATstpQryRationalInfoField *pQryRationalInfoField, int nRequestID) = 0;
		
		///查询报单请求	
		virtual int ReqQryOrder(CTORATstpQryOrderField *pQryOrderField, int nRequestID) = 0;
		
		///查询撤单请求	
		virtual int ReqQryOrderAction(CTORATstpQryOrderActionField *pQryOrderActionField, int nRequestID) = 0;
		
		///查询成交请求	
		virtual int ReqQryTrade(CTORATstpQryTradeField *pQryTradeField, int nRequestID) = 0;
		
		///查询资金账户请求	
		virtual int ReqQryTradingAccount(CTORATstpQryTradingAccountField *pQryTradingAccountField, int nRequestID) = 0;
		
		///查询投资者持仓请求	
		virtual int ReqQryPosition(CTORATstpQryPositionField *pQryPositionField, int nRequestID) = 0;
		
		///查询基础交易费用请求	
		virtual int ReqQryTradingFee(CTORATstpQryTradingFeeField *pQryTradingFeeField, int nRequestID) = 0;
		
		///查询佣金费率请求	
		virtual int ReqQryInvestorTradingFee(CTORATstpQryInvestorTradingFeeField *pQryInvestorTradingFeeField, int nRequestID) = 0;
		
		///查询新股申购额度请求	
		virtual int ReqQryIPOQuota(CTORATstpQryIPOQuotaField *pQryIPOQuotaField, int nRequestID) = 0;
		
		///查询报单明细资金请求	
		virtual int ReqQryOrderFundDetail(CTORATstpQryOrderFundDetailField *pQryOrderFundDetailField, int nRequestID) = 0;
		
		///查询资金转移流水请求	
		virtual int ReqQryFundTransferDetail(CTORATstpQryFundTransferDetailField *pQryFundTransferDetailField, int nRequestID) = 0;
		
		///查询持仓转移流水请求	
		virtual int ReqQryPositionTransferDetail(CTORATstpQryPositionTransferDetailField *pQryPositionTransferDetailField, int nRequestID) = 0;
		
		///查询外围系统仓位调拨流水请求	
		virtual int ReqQryPeripheryPositionTransferDetail(CTORATstpQryPeripheryPositionTransferDetailField *pQryPeripheryPositionTransferDetailField, int nRequestID) = 0;
		
		///查询外围系统资金调拨流水请求	
		virtual int ReqQryPeripheryFundTransferDetail(CTORATstpQryPeripheryFundTransferDetailField *pQryPeripheryFundTransferDetailField, int nRequestID) = 0;
		
		///查询债券转股信息请求	
		virtual int ReqQryBondConversionInfo(CTORATstpQryBondConversionInfoField *pQryBondConversionInfoField, int nRequestID) = 0;
		
		///查询债券回售信息请求	
		virtual int ReqQryBondPutbackInfo(CTORATstpQryBondPutbackInfoField *pQryBondPutbackInfoField, int nRequestID) = 0;
		
		///查询投资者条件单限制参数请求	
		virtual int ReqQryInvestorCondOrderLimitParam(CTORATstpQryInvestorCondOrderLimitParamField *pQryInvestorCondOrderLimitParamField, int nRequestID) = 0;
		
		///查询条件单请求	
		virtual int ReqQryConditionOrder(CTORATstpQryConditionOrderField *pQryConditionOrderField, int nRequestID) = 0;
		
		///查询条件单撤单请求	
		virtual int ReqQryCondOrderAction(CTORATstpQryCondOrderActionField *pQryCondOrderActionField, int nRequestID) = 0;
		
		///查询交易通知请求	
		virtual int ReqQryTradingNotice(CTORATstpQryTradingNoticeField *pQryTradingNoticeField, int nRequestID) = 0;
		
		///查询新股申购配号结果请求	
		virtual int ReqQryIPONumberResult(CTORATstpQryIPONumberResultField *pQryIPONumberResultField, int nRequestID) = 0;
		
		///查询新股申购中签结果请求	
		virtual int ReqQryIPOMatchNumberResult(CTORATstpQryIPOMatchNumberResultField *pQryIPOMatchNumberResultField, int nRequestID) = 0;
		
		///查询交易协议请求	
		virtual int ReqQryShareholderSpecPrivilege(CTORATstpQryShareholderSpecPrivilegeField *pQryShareholderSpecPrivilegeField, int nRequestID) = 0;
		
		///查询信用转移	
		virtual int ReqQryCreditTransfer(CTORATstpQryCreditTransferField *pQryCreditTransferField, int nRequestID) = 0;
		
		///查询撤销信用划转	
		virtual int ReqQryCancelCreditTransfer(CTORATstpQryCancelCreditTransferField *pQryCancelCreditTransferField, int nRequestID) = 0;
		
		///查询余券持仓	
		virtual int ReqQrySurplusPosition(CTORATstpQrySurplusPositionField *pQrySurplusPositionField, int nRequestID) = 0;
		
		///查询信用交易息费折扣券信息	
		virtual int ReqQryCreditDiscountCouponInfo(CTORATstpQryCreditDiscountCouponInfoField *pQryCreditDiscountCouponInfoField, int nRequestID) = 0;
		
		///查询投资者息费折扣券	
		virtual int ReqQryInvestorCreditDiscountCoupon(CTORATstpQryInvestorCreditDiscountCouponField *pQryInvestorCreditDiscountCouponField, int nRequestID) = 0;
		
		///查询白名单证券控制	
		virtual int ReqQryWhiteListSecurityCtrl(CTORATstpQryWhiteListSecurityCtrlField *pQryWhiteListSecurityCtrlField, int nRequestID) = 0;
		
		///查询信用评级信息	
		virtual int ReqQryCreditRatingInfo(CTORATstpQryCreditRatingInfoField *pQryCreditRatingInfoField, int nRequestID) = 0;
		
		///查询投资者融资融券信息	
		virtual int ReqQryInvestorCreditInfo(CTORATstpQryInvestorCreditInfoField *pQryInvestorCreditInfoField, int nRequestID) = 0;
		
		///查询证券公允价格	
		virtual int ReqQrySecurityFairPrice(CTORATstpQrySecurityFairPriceField *pQrySecurityFairPriceField, int nRequestID) = 0;
		
		///查询投资者担保比例风控参数	
		virtual int ReqQryInvestorCollateralRiskParam(CTORATstpQryInvestorCollateralRiskParamField *pQryInvestorCollateralRiskParamField, int nRequestID) = 0;
		
		///查询投资者利率	
		virtual int ReqQryInvestorCreditInterestRate(CTORATstpQryInvestorCreditInterestRateField *pQryInvestorCreditInterestRateField, int nRequestID) = 0;
		
		///查询投资者优惠利率	
		virtual int ReqQryInvestorCreditBenefitInterestRate(CTORATstpQryInvestorCreditBenefitInterestRateField *pQryInvestorCreditBenefitInterestRateField, int nRequestID) = 0;
		
		///查询信用负债	
		virtual int ReqQryCreditDebt(CTORATstpQryCreditDebtField *pQryCreditDebtField, int nRequestID) = 0;
		
		///查询融资资金头寸	
		virtual int ReqQryCreditFundQuota(CTORATstpQryCreditFundQuotaField *pQryCreditFundQuotaField, int nRequestID) = 0;
		
		///查询融券证券头寸	
		virtual int ReqQryCreditPositionQuota(CTORATstpQryCreditPositionQuotaField *pQryCreditPositionQuotaField, int nRequestID) = 0;
		
		///查询负债偿还	
		virtual int ReqQryCreditRepayment(CTORATstpQryCreditRepaymentField *pQryCreditRepaymentField, int nRequestID) = 0;
		
		///查询保证金率	
		virtual int ReqQryInvestorCreditMarginRate(CTORATstpQryInvestorCreditMarginRateField *pQryInvestorCreditMarginRateField, int nRequestID) = 0;
		
		///查询投资者担保品折算率	
		virtual int ReqQryInvestorCollateralConversionRate(CTORATstpQryInvestorCollateralConversionRateField *pQryInvestorCollateralConversionRateField, int nRequestID) = 0;
		
		///查询账户证券交易黑名单	
		virtual int ReqQryShareholderSecurityBlackList(CTORATstpQryShareholderSecurityBlackListField *pQryShareholderSecurityBlackListField, int nRequestID) = 0;
		
		///查询公司资格证券	
		virtual int ReqQryBrokerCreditSecurity(CTORATstpQryBrokerCreditSecurityField *pQryBrokerCreditSecurityField, int nRequestID) = 0;
		
		///查询负债展期	
		virtual int ReqQryDebtExtend(CTORATstpQryDebtExtendField *pQryDebtExtendField, int nRequestID) = 0;
		
		///查询撤销负债展期	
		virtual int ReqQryCancelDebtExtend(CTORATstpQryCancelDebtExtendField *pQryCancelDebtExtendField, int nRequestID) = 0;
		
		///查询证券流动资产参数	
		virtual int ReqQrySecurityCirculateAssetParam(CTORATstpQrySecurityCirculateAssetParamField *pQrySecurityCirculateAssetParamField, int nRequestID) = 0;
		
		///查询证券流动资产信息	
		virtual int ReqQrySecurityCirculateAssetInfo(CTORATstpQrySecurityCirculateAssetInfoField *pQrySecurityCirculateAssetInfoField, int nRequestID) = 0;
		
		///查询投资者实时融资融券信息请求	
		virtual int ReqQryInvestorRealTimeCreditInfo(CTORATstpQryInvestorRealTimeCreditInfoField *pQryInvestorRealTimeCreditInfoField, int nRequestID) = 0;
		
		///查询投资者风控业务规模集中度参数表	
		virtual int ReqQryInvestorBusinessScaleConcentrationParam(CTORATstpQryInvestorBusinessScaleConcentrationParamField *pQryInvestorBusinessScaleConcentrationParamField, int nRequestID) = 0;
		
		///查询两融套餐信息	
		virtual int ReqQryCreditPlanInfo(CTORATstpQryCreditPlanInfoField *pQryCreditPlanInfoField, int nRequestID) = 0;
		
		
	protected:
		~CTORATstpTraderApi(){};
	};
}

#endif // TORATSTPCREDITTRADERAPI_H__