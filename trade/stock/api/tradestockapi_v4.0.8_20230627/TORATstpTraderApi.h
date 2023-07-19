/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpTraderApi.h
///@brief �����˿ͻ��˽ӿ�
///@history 
/////////////////////////////////////////////////////////////////////////
#ifndef TORATSTPTRADERAPI_H__
#define TORATSTPTRADERAPI_H__

#include "TORATstpUserApiStruct.h"

#ifdef TRADER_API_EXPORT
#ifdef WINDOWS
#define TRADER_API_DLL_EXPORT __declspec(dllexport)
#else
#define TRADER_API_DLL_EXPORT __attribute__ ((visibility("default")))
#endif
#else
#define TRADER_API_DLL_EXPORT 
#endif

namespace TORASTOCKAPI
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
		///		  -15 �����ʧ��
		///		  -16 ����дʧ��
		virtual void OnFrontDisconnected(int nReason){};
		
		///����Ӧ��
		virtual void OnRspError(CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {};
		
		///��ȡ������ϢӦ��
		virtual void OnRspGetConnectionInfo(CTORATstpConnectionInfoField *pConnectionInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///��¼��Ӧ
		virtual void OnRspUserLogin(CTORATstpRspUserLoginField *pRspUserLoginField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///�ǳ���Ӧ
		virtual void OnRspUserLogout(CTORATstpUserLogoutField *pUserLogoutField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///�޸�������Ӧ
		virtual void OnRspUserPasswordUpdate(CTORATstpUserPasswordUpdateField *pUserPasswordUpdateField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///¼���豸������Ӧ
		virtual void OnRspInputDeviceSerial(CTORATstpRspInputDeviceSerialField *pRspInputDeviceSerialField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///����¼����Ӧ
		virtual void OnRspOrderInsert(CTORATstpInputOrderField *pInputOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///�����ر�
		virtual void OnRtnOrder(CTORATstpOrderField *pOrderField) {};
		
		///��������ر�
		virtual void OnErrRtnOrderInsert(CTORATstpInputOrderField *pInputOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///�ɽ��ر�
		virtual void OnRtnTrade(CTORATstpTradeField *pTradeField) {};
		
		///������Ӧ
		virtual void OnRspOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///��������ر�
		virtual void OnErrRtnOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///������¼����Ӧ
		virtual void OnRspCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///�������ر�
		virtual void OnRtnCondOrder(CTORATstpConditionOrderField *pConditionOrderField) {};
		
		///������¼�����ر�
		virtual void OnErrRtnCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///������������Ӧ
		virtual void OnRspCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///��������������ر�
		virtual void OnErrRtnCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///Э�齻�ױ���¼����Ӧ
		virtual void OnRspNegoOrderInsert(CTORATstpInputNegoOrderField *pInputNegoOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///Э�齻�ױ����ر�
		virtual void OnRtnNegoOrder(CTORATstpNegoOrderField *pNegoOrderField) {};
		
		///Э�齻�ױ�������ر�
		virtual void OnErrRtnNegoOrderInsert(CTORATstpInputNegoOrderField *pInputNegoOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///Э�齻�׳ɽ��ر�
		virtual void OnRtnNegoTrade(CTORATstpNegoTradeField *pNegoTradeField) {};
		
		///Э�齻�ױ�������¼����Ӧ
		virtual void OnRspNegoOrderAction(CTORATstpInputNegoOrderActionField *pInputNegoOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///Э�齻�ױ�����������ر�
		virtual void OnErrRtnNegoOrderAction(CTORATstpInputNegoOrderActionField *pInputNegoOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///����¼����Ӧ����չ��
		virtual void OnRspOrderInsertEx(CTORATstpInputOrderExField *pInputOrderExField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///����������Ӧ����չ��
		virtual void OnRspOrderActionEx(CTORATstpInputOrderActionExField *pInputOrderActionExField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///�г�״̬�ر�
		virtual void OnRtnMarketStatus(CTORATstpMarketStatusField *pMarketStatusField) {};
		
		///�ʽ�ת����Ӧ
		virtual void OnRspTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///�ʽ�ת�ƴ���ر�
		virtual void OnErrRtnTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///�ʽ�ת�ƻر�
		virtual void OnRtnTransferFund(CTORATstpTransferFundField *pTransferFundField) {};
		
		///��λת����Ӧ
		virtual void OnRspTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///��λת�ƴ���ر�
		virtual void OnErrRtnTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///��λת�ƻر�
		virtual void OnRtnTransferPosition(CTORATstpTransferPositionField *pTransferPositionField) {};
		
		///��Χϵͳ��λת�ƻر�
		virtual void OnRtnPeripheryTransferPosition(CTORATstpPeripheryTransferPositionField *pPeripheryTransferPositionField) {};
		
		///��Χϵͳ�ʽ�ת�ƻر�
		virtual void OnRtnPeripheryTransferFund(CTORATstpPeripheryTransferFundField *pPeripheryTransferFundField) {};
		
		///��ѯ���н���ϵͳ�ʽ���Ӧ
		virtual void OnRspInquiryJZFund(CTORATstpRspInquiryJZFundField *pRspInquiryJZFundField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///��ѯ�����˻������Ӧ
		virtual void OnRspInquiryBankAccountFund(CTORATstpRspInquiryBankAccountFundField *pRspInquiryBankAccountFundField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///����֪ͨ�ر�
		virtual void OnRtnTradingNotice(CTORATstpTradingNoticeField *pTradingNoticeField) {};
		
		///��ѯ��󱨵�����Ӧ
		virtual void OnRspInquiryMaxOrderVolume(CTORATstpRspInquiryMaxOrderVolumeField *pRspInquiryMaxOrderVolumeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///���׳ɽ����жȲ�ѯ��Ӧ
		virtual void OnRspInquiryTradeConcentration(CTORATstpInquiryTradeConcentrationField *pInquiryTradeConcentrationField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///�����޸Ŀ��ֳɱ���Ӧ
		virtual void OnRspModifyOpenPosCost(CTORATstpReqModifyOpenPosCostField *pReqModifyOpenPosCostField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///¼��ڵ��ʽ������Ϣ��Ӧ
		virtual void OnRspInputNodeFundAssignment(CTORATstpInputNodeFundAssignmentField *pInputNodeFundAssignmentField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///��ѯ�ڵ��ʽ���������Ӧ
		virtual void OnRspInquiryNodeFundAssignment(CTORATstpRspInquiryNodeFundAssignmentField *pRspInquiryNodeFundAssignmentField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};
		
		///��ѯ��������Ӧ
		virtual void OnRspQryExchange(CTORATstpExchangeField *pExchangeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ֤ȯ��Ϣ��Ӧ
		virtual void OnRspQrySecurity(CTORATstpSecurityField *pSecurityField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�¹���Ϣ��Ӧ
		virtual void OnRspQryIPOInfo(CTORATstpIPOInfoField *pIPOInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�û���Ӧ
		virtual void OnRspQryUser(CTORATstpUserField *pUserField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯͶ������Ӧ
		virtual void OnRspQryInvestor(CTORATstpInvestorField *pInvestorField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�ɶ��˻���Ӧ
		virtual void OnRspQryShareholderAccount(CTORATstpShareholderAccountField *pShareholderAccountField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�����ծ��Ϣ��Ӧ
		virtual void OnRspQryRationalInfo(CTORATstpRationalInfoField *pRationalInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ������Ӧ
		virtual void OnRspQryOrder(CTORATstpOrderField *pOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ��������
		virtual void OnRspQryOrderAction(CTORATstpOrderActionField *pOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�ɽ���Ӧ
		virtual void OnRspQryTrade(CTORATstpTradeField *pTradeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�ʽ��˻���Ӧ
		virtual void OnRspQryTradingAccount(CTORATstpTradingAccountField *pTradingAccountField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯͶ���ֲ߳���Ӧ
		virtual void OnRspQryPosition(CTORATstpPositionField *pPositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�������׷�����Ӧ
		virtual void OnRspQryTradingFee(CTORATstpTradingFeeField *pTradingFeeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯӶ�������Ӧ
		virtual void OnRspQryInvestorTradingFee(CTORATstpInvestorTradingFeeField *pInvestorTradingFeeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�¹��깺�����Ӧ
		virtual void OnRspQryIPOQuota(CTORATstpIPOQuotaField *pIPOQuotaField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ������ϸ�ʽ���Ӧ
		virtual void OnRspQryOrderFundDetail(CTORATstpOrderFundDetailField *pOrderFundDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�ʽ�ת����ˮ��Ӧ
		virtual void OnRspQryFundTransferDetail(CTORATstpFundTransferDetailField *pFundTransferDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�ֲ�ת����ˮ��Ӧ
		virtual void OnRspQryPositionTransferDetail(CTORATstpPositionTransferDetailField *pPositionTransferDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ��Χϵͳ��λ������ˮ��Ӧ
		virtual void OnRspQryPeripheryPositionTransferDetail(CTORATstpPeripheryPositionTransferDetailField *pPeripheryPositionTransferDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ��Χϵͳ�ʽ������ˮ��Ӧ
		virtual void OnRspQryPeripheryFundTransferDetail(CTORATstpPeripheryFundTransferDetailField *pPeripheryFundTransferDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯծȯת����Ϣ��Ӧ
		virtual void OnRspQryBondConversionInfo(CTORATstpBondConversionInfoField *pBondConversionInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯծȯ������Ϣ��Ӧ
		virtual void OnRspQryBondPutbackInfo(CTORATstpBondPutbackInfoField *pBondPutbackInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯͶ�������������Ʋ�����Ӧ
		virtual void OnRspQryInvestorCondOrderLimitParam(CTORATstpInvestorCondOrderLimitParamField *pInvestorCondOrderLimitParamField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ��������Ӧ
		virtual void OnRspQryConditionOrder(CTORATstpConditionOrderField *pConditionOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ������������Ӧ
		virtual void OnRspQryCondOrderAction(CTORATstpCondOrderActionField *pCondOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ����֪ͨ��Ӧ
		virtual void OnRspQryTradingNotice(CTORATstpTradingNoticeField *pTradingNoticeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�¹��깺��Ž����Ӧ
		virtual void OnRspQryIPONumberResult(CTORATstpIPONumberResultField *pIPONumberResultField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�¹��깺��ǩ�����Ӧ
		virtual void OnRspQryIPOMatchNumberResult(CTORATstpIPOMatchNumberResultField *pIPOMatchNumberResultField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ����Э����Ӧ
		virtual void OnRspQryShareholderSpecPrivilege(CTORATstpShareholderSpecPrivilegeField *pShareholderSpecPrivilegeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ�г���Ӧ
		virtual void OnRspQryMarket(CTORATstpMarketField *pMarketField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯETF�嵥��Ϣ��Ӧ
		virtual void OnRspQryETFFile(CTORATstpETFFileField *pETFFileField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯETF�ɷ�֤ȯ��Ϣ��Ӧ
		virtual void OnRspQryETFBasket(CTORATstpETFBasketField *pETFBasketField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯͶ�����޲���Ϣ��Ӧ
		virtual void OnRspQryInvestorPositionLimit(CTORATstpInvestorPositionLimitField *pInvestorPositionLimitField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ���ͨ�����г�����״̬��Ϣ��Ӧ
		virtual void OnRspQrySZSEImcParams(CTORATstpSZSEImcParamsField *pSZSEImcParamsField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ���ͨ�����г�����������Ϣ��Ӧ
		virtual void OnRspQrySZSEImcExchangeRate(CTORATstpSZSEImcExchangeRateField *pSZSEImcExchangeRateField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ���ͨ��С�۲���Ϣ��Ӧ
		virtual void OnRspQrySZSEHKPriceTickInfo(CTORATstpSZSEHKPriceTickInfoField *pSZSEHKPriceTickInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯLOF������Ϣ��Ӧ
		virtual void OnRspQryLofFundInfo(CTORATstpLofFundInfoField *pLofFundInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯͶ������Ѻ�ֲ���Ӧ
		virtual void OnRspQryPledgePosition(CTORATstpPledgePositionField *pPledgePositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ֤ȯ��Ѻ��Ϣ��Ӧ
		virtual void OnRspQryPledgeInfo(CTORATstpPledgeInfoField *pPledgeInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯϵͳ�ڵ���Ϣ��Ӧ
		virtual void OnRspQrySystemNodeInfo(CTORATstpSystemNodeInfoField *pSystemNodeInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯ��׼ȯ�����Ӧ
		virtual void OnRspQryStandardBondPosition(CTORATstpStandardBondPositionField *pStandardBondPositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯδ����ծȯ��Ѻ�ع�ί����Ӧ
		virtual void OnRspQryPrematurityRepoOrder(CTORATstpPrematurityRepoOrderField *pPrematurityRepoOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯЭ�齻�ױ�����Ӧ
		virtual void OnRspQryNegoOrder(CTORATstpNegoOrderField *pNegoOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯЭ�齻�׳�����Ӧ
		virtual void OnRspQryNegoOrderAction(CTORATstpNegoOrderActionField *pNegoOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯЭ�齻�׳ɽ���Ӧ
		virtual void OnRspQryNegoTrade(CTORATstpNegoTradeField *pNegoTradeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
		
		///��ѯЭ�齻�ײ�����Ӧ
		virtual void OnRspQryNegotiationParam(CTORATstpNegotiationParamField *pNegotiationParamField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {}; 
			
	};
	
	class TRADER_API_DLL_EXPORT CTORATstpTraderApi
	{
	public:
		///����TraderApi
		///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
		///@param bEncrpyt ���������Ƿ���ܴ��䣬Ĭ�ϲ�����
		///@param eTradeCommMode ����ͨѶģʽ��Ĭ��ʹ��TCPģʽ
		///@param pszInterfaceAddr UDPЭ��������ַ����TCPDIRECT������ַ
		///@param bUsingOrderEx �Ƿ�ʹ�ñ�����չ���ܣ�Ĭ�ϲ�ʹ��
		///@return ��������TraderApi
		static CTORATstpTraderApi *CreateTstpTraderApi(const char *pszFlowPath = "", bool bEncrypt = false, TTORATstpTradeCommModeType eTradeCommMode = TORA_TSTP_TCM_TCP, const char *pszInterfaceAddr = "", bool bUsingOrderEx = false);
		
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
		///@remark RegisterNameServer��RegisterFront��ѡ��һ��
		virtual void RegisterNameServer(char *pszNsAddress) = 0;
		
		///ע�����ַ������û���Ϣ
		///@param pFensUserInfoField���û���Ϣ��
		virtual void RegisterFensUserInfo(CTORATstpFensUserInfoField *pFensUserInfoField) = 0;
	
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
		
		///Э�齻�ױ���¼������
		virtual int ReqNegoOrderInsert(CTORATstpInputNegoOrderField *pInputNegoOrderField, int nRequestID) = 0;
		
		///Э�齻�ױ�������¼������
		virtual int ReqNegoOrderAction(CTORATstpInputNegoOrderActionField *pInputNegoOrderActionField, int nRequestID) = 0;
		
		///����¼��������չ��
		virtual int ReqOrderInsertEx(CTORATstpInputOrderExField *pInputOrderExField, int nRequestID) = 0;
		
		///��������������չ��
		virtual int ReqOrderActionEx(CTORATstpInputOrderActionExField *pInputOrderActionExField, int nRequestID) = 0;
		
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
		
		///��ѯ���׳ɽ����ж�����
		virtual int ReqInquiryTradeConcentration(CTORATstpInquiryTradeConcentrationField *pInquiryTradeConcentrationField, int nRequestID) = 0;
		
		///�����޸Ŀ��ֳɱ�����
		virtual int ReqModifyOpenPosCost(CTORATstpReqModifyOpenPosCostField *pReqModifyOpenPosCostField, int nRequestID) = 0;
		
		///¼��ڵ��ʽ������Ϣ����
		virtual int ReqInputNodeFundAssignment(CTORATstpInputNodeFundAssignmentField *pInputNodeFundAssignmentField, int nRequestID) = 0;
		
		///��ѯ�ڵ��ʽ�����������
		virtual int ReqInquiryNodeFundAssignment(CTORATstpReqInquiryNodeFundAssignmentField *pReqInquiryNodeFundAssignmentField, int nRequestID) = 0;
		
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
		
		///��ѯ�г�����
		virtual int ReqQryMarket(CTORATstpQryMarketField *pQryMarketField, int nRequestID) = 0;
		
		///��ѯETF�嵥��Ϣ����
		virtual int ReqQryETFFile(CTORATstpQryETFFileField *pQryETFFileField, int nRequestID) = 0;
		
		///��ѯETF�ɷ�֤ȯ��Ϣ����
		virtual int ReqQryETFBasket(CTORATstpQryETFBasketField *pQryETFBasketField, int nRequestID) = 0;
		
		///��ѯͶ�����޲���Ϣ����
		virtual int ReqQryInvestorPositionLimit(CTORATstpQryInvestorPositionLimitField *pQryInvestorPositionLimitField, int nRequestID) = 0;
		
		///��ѯ���ͨ�����г�����״̬��Ϣ����
		virtual int ReqQrySZSEImcParams(CTORATstpQrySZSEImcParamsField *pQrySZSEImcParamsField, int nRequestID) = 0;
		
		///��ѯ���ͨ�����г�����������Ϣ����
		virtual int ReqQrySZSEImcExchangeRate(CTORATstpQrySZSEImcExchangeRateField *pQrySZSEImcExchangeRateField, int nRequestID) = 0;
		
		///��ѯ���ͨ��С�۲���Ϣ����
		virtual int ReqQrySZSEHKPriceTickInfo(CTORATstpQrySZSEHKPriceTickInfoField *pQrySZSEHKPriceTickInfoField, int nRequestID) = 0;
		
		///��ѯLOF������Ϣ����
		virtual int ReqQryLofFundInfo(CTORATstpQryLofFundInfoField *pQryLofFundInfoField, int nRequestID) = 0;
		
		///��ѯͶ������Ѻ�ֲ�����
		virtual int ReqQryPledgePosition(CTORATstpQryPledgePositionField *pQryPledgePositionField, int nRequestID) = 0;
		
		///��ѯ֤ȯ��Ѻ��Ϣ����
		virtual int ReqQryPledgeInfo(CTORATstpQryPledgeInfoField *pQryPledgeInfoField, int nRequestID) = 0;
		
		///��ѯϵͳ�ڵ���Ϣ����
		virtual int ReqQrySystemNodeInfo(CTORATstpQrySystemNodeInfoField *pQrySystemNodeInfoField, int nRequestID) = 0;
		
		///��ѯ��׼ȯ�������
		virtual int ReqQryStandardBondPosition(CTORATstpQryStandardBondPositionField *pQryStandardBondPositionField, int nRequestID) = 0;
		
		///��ѯδ����ծȯ��Ѻ�ع�ί������
		virtual int ReqQryPrematurityRepoOrder(CTORATstpQryPrematurityRepoOrderField *pQryPrematurityRepoOrderField, int nRequestID) = 0;
		
		///��ѯЭ�齻�ױ�������
		virtual int ReqQryNegoOrder(CTORATstpQryNegoOrderField *pQryNegoOrderField, int nRequestID) = 0;
		
		///��ѯЭ�齻�׳�������
		virtual int ReqQryNegoOrderAction(CTORATstpQryNegoOrderActionField *pQryNegoOrderActionField, int nRequestID) = 0;
		
		///��ѯЭ�齻�׳ɽ�����
		virtual int ReqQryNegoTrade(CTORATstpQryNegoTradeField *pQryNegoTradeField, int nRequestID) = 0;
		
		///��ѯЭ�齻�ײ�������
		virtual int ReqQryNegotiationParam(CTORATstpQryNegotiationParamField *pQryNegotiationParamField, int nRequestID) = 0;
		
		
	protected:
		~CTORATstpTraderApi(){};
	};
}
#endif // TORATSTPTRADERAPI_H__