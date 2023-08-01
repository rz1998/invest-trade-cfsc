/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpCreditTraderApi.h
///@brief �����˿ͻ��˽ӿ�
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
		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		virtual void OnFrontConnected(){};
		
		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		///@param nReason ����ԭ��
		///        -3 �����ѶϿ�
		///        -4 �����ʧ��
		///        -5 ����дʧ��
		///        -6 ����������
		///        -7 ����Ŵ���
		///        -8 �������������
		///        -9 ����ı���
		virtual void OnFrontDisconnected(int nReason){};
			
		///����Ӧ��
		virtual void OnRspError(CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
		
		///��ȡ������ϢӦ��
		virtual void OnRspGetConnectionInfo(CTORATstpConnectionInfoField *pConnectionInfoField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
			
		///��¼��Ӧ	
		virtual void OnRspUserLogin(CTORATstpRspUserLoginField *pRspUserLoginField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///�ǳ���Ӧ	
		virtual void OnRspUserLogout(CTORATstpUserLogoutField *pUserLogoutField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///�޸�������Ӧ	
		virtual void OnRspUserPasswordUpdate(CTORATstpUserPasswordUpdateField *pUserPasswordUpdateField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///¼���豸������Ӧ	
		virtual void OnRspInputDeviceSerial(CTORATstpRspInputDeviceSerialField *pRspInputDeviceSerialField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///����¼����Ӧ	
		virtual void OnRspOrderInsert(CTORATstpInputOrderField *pInputOrderField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///�����ر�
		virtual void OnRtnOrder(CTORATstpOrderField *pOrder) {};
			
		///��������ر�
		virtual void OnErrRtnOrderInsert(CTORATstpInputOrderField *pInputOrder, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///�ɽ��ر�
		virtual void OnRtnTrade(CTORATstpTradeField *pTrade) {};
			
		///������Ӧ	
		virtual void OnRspOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///��������ر�
		virtual void OnErrRtnOrderAction(CTORATstpInputOrderActionField *pInputOrderAction, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///������¼����Ӧ	
		virtual void OnRspCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///�������ر�
		virtual void OnRtnCondOrder(CTORATstpConditionOrderField *pConditionOrder) {};
			
		///������¼�����ر�
		virtual void OnErrRtnCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrder, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///������������Ӧ	
		virtual void OnRspCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///��������������ر�
		virtual void OnErrRtnCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderAction, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///�г�״̬�ر�
		virtual void OnRtnMarketStatus(CTORATstpMarketStatusField *pMarketStatus) {};
			
		///�ʽ�ת����Ӧ	
		virtual void OnRspTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///�ʽ�ת�ƴ���ر�
		virtual void OnErrRtnTransferFund(CTORATstpInputTransferFundField *pInputTransferFund, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///�ʽ�ת�ƻر�
		virtual void OnRtnTransferFund(CTORATstpTransferFundField *pTransferFund) {};
			
		///��λת����Ӧ	
		virtual void OnRspTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///��λת�ƴ���ر�
		virtual void OnErrRtnTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPosition, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///��λת�ƻر�
		virtual void OnRtnTransferPosition(CTORATstpTransferPositionField *pTransferPosition) {};
			
		///��Χϵͳ��λת�ƻر�
		virtual void OnRtnPeripheryTransferPosition(CTORATstpPeripheryTransferPositionField *pPeripheryTransferPosition) {};
			
		///��Χϵͳ�ʽ�ת�ƻر�
		virtual void OnRtnPeripheryTransferFund(CTORATstpPeripheryTransferFundField *pPeripheryTransferFund) {};
			
		///��ѯ���н���ϵͳ�ʽ���Ӧ	
		virtual void OnRspInquiryJZFund(CTORATstpRspInquiryJZFundField *pRspInquiryJZFundField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///��ѯ�����˻������Ӧ	
		virtual void OnRspInquiryBankAccountFund(CTORATstpRspInquiryBankAccountFundField *pRspInquiryBankAccountFundField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///����֪ͨ�ر�
		virtual void OnRtnTradingNotice(CTORATstpTradingNoticeField *pTradingNotice) {};
			
		///��ѯ��󱨵�����Ӧ	
		virtual void OnRspInquiryMaxOrderVolume(CTORATstpRspInquiryMaxOrderVolumeField *pRspInquiryMaxOrderVolumeField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///��ѯ�ֻ�ϵͳ�ֻ��ֲ���Ӧ
		virtual void OnRspInquiryStockPosition(CTORATstpRspInquiryStockPositionField *pRspInquiryStockPositionField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///���û�ת������Ӧ	
		virtual void OnRspCreditTransfer(CTORATstpInputCreditTransferField *pInputCreditTransferField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///���û�ת֪ͨ
		virtual void OnRtnCreditTransfer(CTORATstpCreditTransferField *pCreditTransfer) {};
			
		///���û�ת����ر�
		virtual void OnErrRtnCreditTransfer(CTORATstpInputCreditTransferField *pInputCreditTransfer, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///���û�ת����������Ӧ	
		virtual void OnRspCancelCreditTransfer(CTORATstpInputCancelCreditTransferField *pInputCancelCreditTransferField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///���û�ת��������ر�
		virtual void OnErrRtnCancelCreditTransfer(CTORATstpInputCancelCreditTransferField *pInputCancelCreditTransfer, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///չ����Ӧ	
		virtual void OnRspDebtExtend(CTORATstpInputDebtExtendField *pInputDebtExtendField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///չ��֪ͨ
		virtual void OnRtnDebtExtend(CTORATstpDebtExtendField *pDebtExtend) {};
			
		///չ�ڴ���ر�
		virtual void OnErrRtnDebtExtend(CTORATstpInputDebtExtendField *pInputDebtExtend, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///չ�ڳ���������Ӧ	
		virtual void OnRspCancelDebtExtend(CTORATstpInputCancelDebtExtendField *pInputCancelDebtExtendField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///չ�ڳ�������ر�
		virtual void OnErrRtnCancelDebtExtend(CTORATstpInputCancelDebtExtendField *pInputCancelDebtExtend, CTORATstpRspInfoField *pRspInfo,int nRequestID) {};
				
		///�޸��ײ�����Ӧ��	
		virtual void OnRspChangePlanType(CTORATstpRspChangePlanTypeField *pRspChangePlanTypeField, CTORATstpRspInfoField *pRspInfo, int nRequestID) {};
				
		///��ѯ��������Ӧ
		virtual void OnRspQryExchange(CTORATstpExchangeField *pExchange, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ֤ȯ��Ϣ��Ӧ
		virtual void OnRspQrySecurity(CTORATstpSecurityField *pSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�¹���Ϣ��Ӧ
		virtual void OnRspQryIPOInfo(CTORATstpIPOInfoField *pIPOInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�û���Ӧ
		virtual void OnRspQryUser(CTORATstpUserField *pUser, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ������Ӧ
		virtual void OnRspQryInvestor(CTORATstpInvestorField *pInvestor, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�ɶ��˻���Ӧ
		virtual void OnRspQryShareholderAccount(CTORATstpShareholderAccountField *pShareholderAccount, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�����ծ��Ϣ��Ӧ
		virtual void OnRspQryRationalInfo(CTORATstpRationalInfoField *pRationalInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ������Ӧ
		virtual void OnRspQryOrder(CTORATstpOrderField *pOrder, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��������
		virtual void OnRspQryOrderAction(CTORATstpOrderActionField *pOrderAction, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�ɽ���Ӧ
		virtual void OnRspQryTrade(CTORATstpTradeField *pTrade, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�ʽ��˻���Ӧ
		virtual void OnRspQryTradingAccount(CTORATstpTradingAccountField *pTradingAccount, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ���ֲ߳���Ӧ
		virtual void OnRspQryPosition(CTORATstpPositionField *pPosition, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�������׷�����Ӧ
		virtual void OnRspQryTradingFee(CTORATstpTradingFeeField *pTradingFee, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯӶ�������Ӧ
		virtual void OnRspQryInvestorTradingFee(CTORATstpInvestorTradingFeeField *pInvestorTradingFee, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�¹��깺�����Ӧ
		virtual void OnRspQryIPOQuota(CTORATstpIPOQuotaField *pIPOQuota, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ������ϸ�ʽ���Ӧ
		virtual void OnRspQryOrderFundDetail(CTORATstpOrderFundDetailField *pOrderFundDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�ʽ�ת����ˮ��Ӧ
		virtual void OnRspQryFundTransferDetail(CTORATstpFundTransferDetailField *pFundTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�ֲ�ת����ˮ��Ӧ
		virtual void OnRspQryPositionTransferDetail(CTORATstpPositionTransferDetailField *pPositionTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��Χϵͳ��λ������ˮ��Ӧ
		virtual void OnRspQryPeripheryPositionTransferDetail(CTORATstpPeripheryPositionTransferDetailField *pPeripheryPositionTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��Χϵͳ�ʽ������ˮ��Ӧ
		virtual void OnRspQryPeripheryFundTransferDetail(CTORATstpPeripheryFundTransferDetailField *pPeripheryFundTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯծȯת����Ϣ��Ӧ
		virtual void OnRspQryBondConversionInfo(CTORATstpBondConversionInfoField *pBondConversionInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯծȯ������Ϣ��Ӧ
		virtual void OnRspQryBondPutbackInfo(CTORATstpBondPutbackInfoField *pBondPutbackInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ�������������Ʋ�����Ӧ
		virtual void OnRspQryInvestorCondOrderLimitParam(CTORATstpInvestorCondOrderLimitParamField *pInvestorCondOrderLimitParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��������Ӧ
		virtual void OnRspQryConditionOrder(CTORATstpConditionOrderField *pConditionOrder, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ������������Ӧ
		virtual void OnRspQryCondOrderAction(CTORATstpCondOrderActionField *pCondOrderAction, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ����֪ͨ��Ӧ
		virtual void OnRspQryTradingNotice(CTORATstpTradingNoticeField *pTradingNotice, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�¹��깺��Ž����Ӧ
		virtual void OnRspQryIPONumberResult(CTORATstpIPONumberResultField *pIPONumberResult, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�¹��깺��ǩ�����Ӧ
		virtual void OnRspQryIPOMatchNumberResult(CTORATstpIPOMatchNumberResultField *pIPOMatchNumberResult, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ����Э����Ӧ
		virtual void OnRspQryShareholderSpecPrivilege(CTORATstpShareholderSpecPrivilegeField *pShareholderSpecPrivilege, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ����ת��
		virtual void OnRspQryCreditTransfer(CTORATstpCreditTransferField *pCreditTransfer, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�������û�ת
		virtual void OnRspQryCancelCreditTransfer(CTORATstpCancelCreditTransferField *pCancelCreditTransfer, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��ȯ�ֲ�
		virtual void OnRspQrySurplusPosition(CTORATstpSurplusPositionField *pSurplusPosition, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ���ý���Ϣ���ۿ�ȯ��Ϣ
		virtual void OnRspQryCreditDiscountCouponInfo(CTORATstpCreditDiscountCouponInfoField *pCreditDiscountCouponInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ����Ϣ���ۿ�ȯ
		virtual void OnRspQryInvestorCreditDiscountCoupon(CTORATstpInvestorCreditDiscountCouponField *pInvestorCreditDiscountCoupon, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ������֤ȯ����
		virtual void OnRspQryWhiteListSecurityCtrl(CTORATstpWhiteListSecurityCtrlField *pWhiteListSecurityCtrl, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ����������Ϣ
		virtual void OnRspQryCreditRatingInfo(CTORATstpCreditRatingInfoField *pCreditRatingInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ����������ȯ��Ϣ
		virtual void OnRspQryInvestorCreditInfo(CTORATstpInvestorCreditInfoField *pInvestorCreditInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ֤ȯ���ʼ۸�
		virtual void OnRspQrySecurityFairPrice(CTORATstpSecurityFairPriceField *pSecurityFairPrice, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ���ߵ���������ز���
		virtual void OnRspQryInvestorCollateralRiskParam(CTORATstpInvestorCollateralRiskParamField *pInvestorCollateralRiskParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ��������
		virtual void OnRspQryInvestorCreditInterestRate(CTORATstpInvestorCreditInterestRateField *pInvestorCreditInterestRate, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ�����Ż�����
		virtual void OnRspQryInvestorCreditBenefitInterestRate(CTORATstpInvestorCreditBenefitInterestRateField *pInvestorCreditBenefitInterestRate, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ���ø�ծ
		virtual void OnRspQryCreditDebt(CTORATstpCreditDebtField *pCreditDebt, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�����ʽ�ͷ��
		virtual void OnRspQryCreditFundQuota(CTORATstpCreditFundQuotaField *pCreditFundQuota, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��ȯ֤ȯͷ��
		virtual void OnRspQryCreditPositionQuota(CTORATstpCreditPositionQuotaField *pCreditPositionQuota, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��ծ����
		virtual void OnRspQryCreditRepayment(CTORATstpCreditRepaymentField *pCreditRepayment, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��֤����
		virtual void OnRspQryInvestorCreditMarginRate(CTORATstpInvestorCreditMarginRateField *pInvestorCreditMarginRate, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ���ߵ���Ʒ������
		virtual void OnRspQryInvestorCollateralConversionRate(CTORATstpInvestorCollateralConversionRateField *pInvestorCollateralConversionRate, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�˻�֤ȯ���׺�����
		virtual void OnRspQryShareholderSecurityBlackList(CTORATstpShareholderSecurityBlackListField *pShareholderSecurityBlackList, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��˾�ʸ�֤ȯ
		virtual void OnRspQryBrokerCreditSecurity(CTORATstpBrokerCreditSecurityField *pBrokerCreditSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ��ծչ����Ӧ
		virtual void OnRspQryDebtExtend(CTORATstpDebtExtendField *pDebtExtend, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ������ծչ����Ӧ
		virtual void OnRspQryCancelDebtExtend(CTORATstpCancelDebtExtendField *pCancelDebtExtend, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ֤ȯ�����ʲ�����
		virtual void OnRspQrySecurityCirculateAssetParam(CTORATstpSecurityCirculateAssetParamField *pSecurityCirculateAssetParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ֤ȯ�����ʲ���Ϣ
		virtual void OnRspQrySecurityCirculateAssetInfo(CTORATstpSecurityCirculateAssetInfoField *pSecurityCirculateAssetInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ����ʵʱ������ȯ��Ϣ��Ӧ
		virtual void OnRspQryInvestorRealTimeCreditInfo(CTORATstpInvestorRealTimeCreditInfoField *pInvestorRealTimeCreditInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯͶ���߷��ҵ���ģ���жȲ�����
		virtual void OnRspQryInvestorBusinessScaleConcentrationParam(CTORATstpInvestorBusinessScaleConcentrationParamField *pInvestorBusinessScaleConcentrationParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
		///��ѯ�����ײ���Ϣ
		virtual void OnRspQryCreditPlanInfo(CTORATstpCreditPlanInfoField *pCreditPlanInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
				
	};

	class CREDIT_TRADER_API_DLL_EXPORT CTORATstpTraderApi
	{
	public:
		///����TraderApi
		///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
		///@param bEncrpyt ���������Ƿ���ܴ��䣬Ĭ�ϲ�����
		///@return ��������TraderApi
		static CTORATstpTraderApi *CreateTstpTraderApi(const char *pszFlowPath = "", bool bEncrypt = false);
		
		///��ȡAPI�汾��
		///@return �汾��
		static const char* GetApiVersion();
		
		///ɾ���ӿڶ�����
		///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
		virtual void Release() = 0;
		
		///��ʼ��
		///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
		virtual void Init() = 0;
		
		///�ȴ��ӿ��߳̽�������
		///@return �߳��˳�����
		virtual int Join() = 0;
		
		///ע��ǰ�û������ַ
		///@param pszFrontAddress��ǰ�û������ַ��
		///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
		///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
		virtual void RegisterFront(char *pszFrontAddress) = 0;

		///ע�����ַ����������ַ
		///@param pszNsAddress�����ַ����������ַ��
		///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
		///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
		///@remark RegisterNameServer������RegisterFront
		virtual void RegisterNameServer(char *pszNsAddress) = 0;


		///ע��ص��ӿ�
		///@param pSpi �����Իص��ӿ����ʵ��
		virtual void RegisterSpi(CTORATstpTraderSpi *pSpi) = 0;
		
		///����˽����
		///@param nResumeType ˽�����ش���ʽ  
		///        TORA_TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        TORA_TERT_RESUME:���ϴ��յ�������
		///        TORA_TERT_QUICK:ֻ���͵�¼��˽����������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
		virtual void SubscribePrivateTopic(TORA_TE_RESUME_TYPE nResumeType) = 0;
		
		///���Ĺ�����
		///@param nResumeType �������ش���ʽ  
		///        TORA_TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        TORA_TERT_RESUME:���ϴ��յ�������
		///        TORA_TERT_QUICK:ֻ���͵�¼�󹫹���������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
		virtual void SubscribePublicTopic(TORA_TE_RESUME_TYPE nResumeType) = 0;
		
		///��ȡ������Ϣ
		virtual int ReqGetConnectionInfo(int nRequestID) = 0;
		
		///��¼����	
		virtual int ReqUserLogin(CTORATstpReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
		
		///�ǳ�����	
		virtual int ReqUserLogout(CTORATstpUserLogoutField *pUserLogoutField, int nRequestID) = 0;
		
		///�޸���������	
		virtual int ReqUserPasswordUpdate(CTORATstpUserPasswordUpdateField *pUserPasswordUpdateField, int nRequestID) = 0;
		
		///¼���豸��������	
		virtual int ReqInputDeviceSerial(CTORATstpReqInputDeviceSerialField *pReqInputDeviceSerialField, int nRequestID) = 0;
		
		///����¼������	
		virtual int ReqOrderInsert(CTORATstpInputOrderField *pInputOrderField, int nRequestID) = 0;
		
		///��������	
		virtual int ReqOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, int nRequestID) = 0;
		
		///������¼������	
		virtual int ReqCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, int nRequestID) = 0;
		
		///��������������	
		virtual int ReqCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, int nRequestID) = 0;
		
		///�ʽ�ת������	
		virtual int ReqTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, int nRequestID) = 0;
		
		///��λת������	
		virtual int ReqTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, int nRequestID) = 0;
		
		///��ѯ���н���ϵͳ�ʽ�����	
		virtual int ReqInquiryJZFund(CTORATstpReqInquiryJZFundField *pReqInquiryJZFundField, int nRequestID) = 0;
		
		///��ѯ�����˻��������	
		virtual int ReqInquiryBankAccountFund(CTORATstpReqInquiryBankAccountFundField *pReqInquiryBankAccountFundField, int nRequestID) = 0;
		
		///��ѯ��󱨵�������	
		virtual int ReqInquiryMaxOrderVolume(CTORATstpReqInquiryMaxOrderVolumeField *pReqInquiryMaxOrderVolumeField, int nRequestID) = 0;
		
		///��ѯ�ֻ�ϵͳ�ֻ��ֲ�����	
		virtual int ReqInquiryStockPosition(CTORATstpReqInquiryStockPositionField *pReqInquiryStockPositionField, int nRequestID) = 0;
		
		///���û�ת����	
		virtual int ReqCreditTransfer(CTORATstpInputCreditTransferField *pInputCreditTransferField, int nRequestID) = 0;
		
		///���û�ת��������	
		virtual int ReqCancelCreditTransfer(CTORATstpInputCancelCreditTransferField *pInputCancelCreditTransferField, int nRequestID) = 0;
		
		///չ������	
		virtual int ReqDebtExtend(CTORATstpInputDebtExtendField *pInputDebtExtendField, int nRequestID) = 0;
		
		///չ�ڳ�������	
		virtual int ReqCancelDebtExtend(CTORATstpInputCancelDebtExtendField *pInputCancelDebtExtendField, int nRequestID) = 0;
		
		///�޸��ײ���������	
		virtual int ReqChangePlanType(CTORATstpReqChangePlanTypeField *pReqChangePlanTypeField, int nRequestID) = 0;
		
		///��ѯ����������	
		virtual int ReqQryExchange(CTORATstpQryExchangeField *pQryExchangeField, int nRequestID) = 0;
		
		///��ѯ֤ȯ��Ϣ����	
		virtual int ReqQrySecurity(CTORATstpQrySecurityField *pQrySecurityField, int nRequestID) = 0;
		
		///��ѯ�¹���Ϣ����	
		virtual int ReqQryIPOInfo(CTORATstpQryIPOInfoField *pQryIPOInfoField, int nRequestID) = 0;
		
		///��ѯ�û�����	
		virtual int ReqQryUser(CTORATstpQryUserField *pQryUserField, int nRequestID) = 0;
		
		///��ѯͶ��������	
		virtual int ReqQryInvestor(CTORATstpQryInvestorField *pQryInvestorField, int nRequestID) = 0;
		
		///��ѯ�ɶ��˻�����	
		virtual int ReqQryShareholderAccount(CTORATstpQryShareholderAccountField *pQryShareholderAccountField, int nRequestID) = 0;
		
		///��ѯ�����ծ��Ϣ����	
		virtual int ReqQryRationalInfo(CTORATstpQryRationalInfoField *pQryRationalInfoField, int nRequestID) = 0;
		
		///��ѯ��������	
		virtual int ReqQryOrder(CTORATstpQryOrderField *pQryOrderField, int nRequestID) = 0;
		
		///��ѯ��������	
		virtual int ReqQryOrderAction(CTORATstpQryOrderActionField *pQryOrderActionField, int nRequestID) = 0;
		
		///��ѯ�ɽ�����	
		virtual int ReqQryTrade(CTORATstpQryTradeField *pQryTradeField, int nRequestID) = 0;
		
		///��ѯ�ʽ��˻�����	
		virtual int ReqQryTradingAccount(CTORATstpQryTradingAccountField *pQryTradingAccountField, int nRequestID) = 0;
		
		///��ѯͶ���ֲ߳�����	
		virtual int ReqQryPosition(CTORATstpQryPositionField *pQryPositionField, int nRequestID) = 0;
		
		///��ѯ�������׷�������	
		virtual int ReqQryTradingFee(CTORATstpQryTradingFeeField *pQryTradingFeeField, int nRequestID) = 0;
		
		///��ѯӶ���������	
		virtual int ReqQryInvestorTradingFee(CTORATstpQryInvestorTradingFeeField *pQryInvestorTradingFeeField, int nRequestID) = 0;
		
		///��ѯ�¹��깺�������	
		virtual int ReqQryIPOQuota(CTORATstpQryIPOQuotaField *pQryIPOQuotaField, int nRequestID) = 0;
		
		///��ѯ������ϸ�ʽ�����	
		virtual int ReqQryOrderFundDetail(CTORATstpQryOrderFundDetailField *pQryOrderFundDetailField, int nRequestID) = 0;
		
		///��ѯ�ʽ�ת����ˮ����	
		virtual int ReqQryFundTransferDetail(CTORATstpQryFundTransferDetailField *pQryFundTransferDetailField, int nRequestID) = 0;
		
		///��ѯ�ֲ�ת����ˮ����	
		virtual int ReqQryPositionTransferDetail(CTORATstpQryPositionTransferDetailField *pQryPositionTransferDetailField, int nRequestID) = 0;
		
		///��ѯ��Χϵͳ��λ������ˮ����	
		virtual int ReqQryPeripheryPositionTransferDetail(CTORATstpQryPeripheryPositionTransferDetailField *pQryPeripheryPositionTransferDetailField, int nRequestID) = 0;
		
		///��ѯ��Χϵͳ�ʽ������ˮ����	
		virtual int ReqQryPeripheryFundTransferDetail(CTORATstpQryPeripheryFundTransferDetailField *pQryPeripheryFundTransferDetailField, int nRequestID) = 0;
		
		///��ѯծȯת����Ϣ����	
		virtual int ReqQryBondConversionInfo(CTORATstpQryBondConversionInfoField *pQryBondConversionInfoField, int nRequestID) = 0;
		
		///��ѯծȯ������Ϣ����	
		virtual int ReqQryBondPutbackInfo(CTORATstpQryBondPutbackInfoField *pQryBondPutbackInfoField, int nRequestID) = 0;
		
		///��ѯͶ�������������Ʋ�������	
		virtual int ReqQryInvestorCondOrderLimitParam(CTORATstpQryInvestorCondOrderLimitParamField *pQryInvestorCondOrderLimitParamField, int nRequestID) = 0;
		
		///��ѯ����������	
		virtual int ReqQryConditionOrder(CTORATstpQryConditionOrderField *pQryConditionOrderField, int nRequestID) = 0;
		
		///��ѯ��������������	
		virtual int ReqQryCondOrderAction(CTORATstpQryCondOrderActionField *pQryCondOrderActionField, int nRequestID) = 0;
		
		///��ѯ����֪ͨ����	
		virtual int ReqQryTradingNotice(CTORATstpQryTradingNoticeField *pQryTradingNoticeField, int nRequestID) = 0;
		
		///��ѯ�¹��깺��Ž������	
		virtual int ReqQryIPONumberResult(CTORATstpQryIPONumberResultField *pQryIPONumberResultField, int nRequestID) = 0;
		
		///��ѯ�¹��깺��ǩ�������	
		virtual int ReqQryIPOMatchNumberResult(CTORATstpQryIPOMatchNumberResultField *pQryIPOMatchNumberResultField, int nRequestID) = 0;
		
		///��ѯ����Э������	
		virtual int ReqQryShareholderSpecPrivilege(CTORATstpQryShareholderSpecPrivilegeField *pQryShareholderSpecPrivilegeField, int nRequestID) = 0;
		
		///��ѯ����ת��	
		virtual int ReqQryCreditTransfer(CTORATstpQryCreditTransferField *pQryCreditTransferField, int nRequestID) = 0;
		
		///��ѯ�������û�ת	
		virtual int ReqQryCancelCreditTransfer(CTORATstpQryCancelCreditTransferField *pQryCancelCreditTransferField, int nRequestID) = 0;
		
		///��ѯ��ȯ�ֲ�	
		virtual int ReqQrySurplusPosition(CTORATstpQrySurplusPositionField *pQrySurplusPositionField, int nRequestID) = 0;
		
		///��ѯ���ý���Ϣ���ۿ�ȯ��Ϣ	
		virtual int ReqQryCreditDiscountCouponInfo(CTORATstpQryCreditDiscountCouponInfoField *pQryCreditDiscountCouponInfoField, int nRequestID) = 0;
		
		///��ѯͶ����Ϣ���ۿ�ȯ	
		virtual int ReqQryInvestorCreditDiscountCoupon(CTORATstpQryInvestorCreditDiscountCouponField *pQryInvestorCreditDiscountCouponField, int nRequestID) = 0;
		
		///��ѯ������֤ȯ����	
		virtual int ReqQryWhiteListSecurityCtrl(CTORATstpQryWhiteListSecurityCtrlField *pQryWhiteListSecurityCtrlField, int nRequestID) = 0;
		
		///��ѯ����������Ϣ	
		virtual int ReqQryCreditRatingInfo(CTORATstpQryCreditRatingInfoField *pQryCreditRatingInfoField, int nRequestID) = 0;
		
		///��ѯͶ����������ȯ��Ϣ	
		virtual int ReqQryInvestorCreditInfo(CTORATstpQryInvestorCreditInfoField *pQryInvestorCreditInfoField, int nRequestID) = 0;
		
		///��ѯ֤ȯ���ʼ۸�	
		virtual int ReqQrySecurityFairPrice(CTORATstpQrySecurityFairPriceField *pQrySecurityFairPriceField, int nRequestID) = 0;
		
		///��ѯͶ���ߵ���������ز���	
		virtual int ReqQryInvestorCollateralRiskParam(CTORATstpQryInvestorCollateralRiskParamField *pQryInvestorCollateralRiskParamField, int nRequestID) = 0;
		
		///��ѯͶ��������	
		virtual int ReqQryInvestorCreditInterestRate(CTORATstpQryInvestorCreditInterestRateField *pQryInvestorCreditInterestRateField, int nRequestID) = 0;
		
		///��ѯͶ�����Ż�����	
		virtual int ReqQryInvestorCreditBenefitInterestRate(CTORATstpQryInvestorCreditBenefitInterestRateField *pQryInvestorCreditBenefitInterestRateField, int nRequestID) = 0;
		
		///��ѯ���ø�ծ	
		virtual int ReqQryCreditDebt(CTORATstpQryCreditDebtField *pQryCreditDebtField, int nRequestID) = 0;
		
		///��ѯ�����ʽ�ͷ��	
		virtual int ReqQryCreditFundQuota(CTORATstpQryCreditFundQuotaField *pQryCreditFundQuotaField, int nRequestID) = 0;
		
		///��ѯ��ȯ֤ȯͷ��	
		virtual int ReqQryCreditPositionQuota(CTORATstpQryCreditPositionQuotaField *pQryCreditPositionQuotaField, int nRequestID) = 0;
		
		///��ѯ��ծ����	
		virtual int ReqQryCreditRepayment(CTORATstpQryCreditRepaymentField *pQryCreditRepaymentField, int nRequestID) = 0;
		
		///��ѯ��֤����	
		virtual int ReqQryInvestorCreditMarginRate(CTORATstpQryInvestorCreditMarginRateField *pQryInvestorCreditMarginRateField, int nRequestID) = 0;
		
		///��ѯͶ���ߵ���Ʒ������	
		virtual int ReqQryInvestorCollateralConversionRate(CTORATstpQryInvestorCollateralConversionRateField *pQryInvestorCollateralConversionRateField, int nRequestID) = 0;
		
		///��ѯ�˻�֤ȯ���׺�����	
		virtual int ReqQryShareholderSecurityBlackList(CTORATstpQryShareholderSecurityBlackListField *pQryShareholderSecurityBlackListField, int nRequestID) = 0;
		
		///��ѯ��˾�ʸ�֤ȯ	
		virtual int ReqQryBrokerCreditSecurity(CTORATstpQryBrokerCreditSecurityField *pQryBrokerCreditSecurityField, int nRequestID) = 0;
		
		///��ѯ��ծչ��	
		virtual int ReqQryDebtExtend(CTORATstpQryDebtExtendField *pQryDebtExtendField, int nRequestID) = 0;
		
		///��ѯ������ծչ��	
		virtual int ReqQryCancelDebtExtend(CTORATstpQryCancelDebtExtendField *pQryCancelDebtExtendField, int nRequestID) = 0;
		
		///��ѯ֤ȯ�����ʲ�����	
		virtual int ReqQrySecurityCirculateAssetParam(CTORATstpQrySecurityCirculateAssetParamField *pQrySecurityCirculateAssetParamField, int nRequestID) = 0;
		
		///��ѯ֤ȯ�����ʲ���Ϣ	
		virtual int ReqQrySecurityCirculateAssetInfo(CTORATstpQrySecurityCirculateAssetInfoField *pQrySecurityCirculateAssetInfoField, int nRequestID) = 0;
		
		///��ѯͶ����ʵʱ������ȯ��Ϣ����	
		virtual int ReqQryInvestorRealTimeCreditInfo(CTORATstpQryInvestorRealTimeCreditInfoField *pQryInvestorRealTimeCreditInfoField, int nRequestID) = 0;
		
		///��ѯͶ���߷��ҵ���ģ���жȲ�����	
		virtual int ReqQryInvestorBusinessScaleConcentrationParam(CTORATstpQryInvestorBusinessScaleConcentrationParamField *pQryInvestorBusinessScaleConcentrationParamField, int nRequestID) = 0;
		
		///��ѯ�����ײ���Ϣ	
		virtual int ReqQryCreditPlanInfo(CTORATstpQryCreditPlanInfoField *pQryCreditPlanInfoField, int nRequestID) = 0;
		
		
	protected:
		~CTORATstpTraderApi(){};
	};
}

#endif // TORATSTPCREDITTRADERAPI_H__