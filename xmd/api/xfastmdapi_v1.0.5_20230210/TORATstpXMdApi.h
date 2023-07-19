/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpXMdApi.h
///@brief �����˿ͻ��˽ӿ�
///@history 
/////////////////////////////////////////////////////////////////////////

#ifndef TORATSTPXMDAPI_H__
#define TORATSTPXMDAPI_H__

#include "TORATstpXMdApiStruct.h"


#ifdef XMD_API_EXPORT
	#ifdef WINDOWS
		#define XMD_API_DLL_EXPORT __declspec(dllexport)
	#else
		#define XMD_API_DLL_EXPORT __attribute__ ((visibility("default")))
	#endif
#else
	#define XMD_API_DLL_EXPORT
#endif


namespace TORALEV1API
{
	class CTORATstpXMdSpi
	{
	public:
		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		virtual void OnFrontConnected(){};

		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		///        -3 �����ѶϿ�
		///        -4 �����ʧ��
		///        -5 ����дʧ��
		///        -6 ����������
		///        -7 ����Ŵ���
		///        -8 �������������
		///        -9 ����ı���
		virtual void OnFrontDisconnected(int nReason){};

		///��ȡ������ϢӦ��
		virtual void OnRspGetConnectionInfo(CTORATstpConnectionInfoField *pConnectionInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};

		///��¼Ӧ��
		virtual void OnRspUserLogin(CTORATstpRspUserLoginField *pRspUserLoginField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};

		///�ǳ�Ӧ��
		virtual void OnRspUserLogout(CTORATstpUserLogoutField *pUserLogoutField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) {};

		///��������Ӧ��
		virtual void OnRspSubMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶�����Ӧ��
		virtual void OnRspUnSubMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�����̺�����Ӧ��
		virtual void OnRspSubPHMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶��̺�����Ӧ��
		virtual void OnRspUnSubPHMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�����ض�����Ӧ��
		virtual void OnRspSubSpecialMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶��ض�����Ӧ��
		virtual void OnRspUnSubSpecialMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///���ļ�������Ӧ�𣨽�TCPģʽ�¿��ã�
		virtual void OnRspSubSimplifyMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶���������Ӧ�𣨽�TCPģʽ�¿��ã�
		virtual void OnRspUnSubSimplifyMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///���ĺ�Լ״̬Ӧ��
		virtual void OnRspSubSecurityStatus(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶���Լ״̬Ӧ��
		virtual void OnRspUnSubSecurityStatus(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�����г�״̬Ӧ��
		virtual void OnRspSubMarketStatus(CTORATstpSpecificMarketField *pSpecificMarketField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶��г�״̬Ӧ��
		virtual void OnRspUnSubMarketStatus(CTORATstpSpecificMarketField *pSpecificMarketField, CTORATstpRspInfoField *pRspInfoField) {};

		///���Ĺ����г�����״̬Ӧ��
		virtual void OnRspSubImcParams(CTORATstpSpecificMarketField *pSpecificMarketField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶������г�����״̬Ӧ��
		virtual void OnRspUnSubImcParams(CTORATstpSpecificMarketField *pSpecificMarketField, CTORATstpRspInfoField *pRspInfoField) {};

		///��ѯ�������Ӧ�𣨽�TCPģʽ�¿��ã�
		virtual void OnRspInquiryMarketDataMirror(CTORATstpMarketDataField *pMarketDataField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {};

		///��ѯ�̺��������Ӧ�𣨽�TCPģʽ�¿��ã�
		virtual void OnRspInquiryPHMarketDataMirror(CTORATstpPHMarketDataField *pPHMarketDataField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {};

		///��ѯ�ض��������Ӧ�𣨽�TCPģʽ�¿��ã�
		virtual void OnRspInquirySpecialMarketDataMirror(CTORATstpSpecialMarketDataField *pMarketDataField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {};

		///������Ȩ����Ӧ��
		virtual void OnRspSubSPMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶���Ȩ����Ӧ��
		virtual void OnRspUnSubSPMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///������Ȩ��������Ӧ�𣨽�TCPģʽ�¿��ã�
		virtual void OnRspSubSPSimplifyMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶���Ȩ��������Ӧ�𣨽�TCPģʽ�¿��ã�
		virtual void OnRspUnSubSPSimplifyMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///������Ȩ��Լ״̬Ӧ��
		virtual void OnRspSubSPSecurityStatus(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶���Ȩ��Լ״̬Ӧ��
		virtual void OnRspUnSubSPSecurityStatus(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///������Ȩ�г�״̬Ӧ��
		virtual void OnRspSubSPMarketStatus(CTORATstpSpecificMarketField *pSpecificMarketField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶���Ȩ�г�״̬Ӧ��
		virtual void OnRspUnSubSPMarketStatus(CTORATstpSpecificMarketField *pSpecificMarketField, CTORATstpRspInfoField *pRspInfoField) {};

		///��ѯ��Ȩ�������Ӧ�𣨽�TCPģʽ�¿��ã�
		virtual void OnRspInquirySPMarketDataMirror(CTORATstpMarketDataField *pMarketDataField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) {};

		///����֪ͨ
		virtual void OnRtnMarketData(CTORATstpMarketDataField *pMarketDataField) {};

		///�̺�����֪ͨ
		virtual void OnRtnPHMarketData(CTORATstpPHMarketDataField *pPHMarketDataField) {};

		///�ض�����֪ͨ
		virtual void OnRtnSpecialMarketData(CTORATstpSpecialMarketDataField *pSpecialMarketDataField) {};

		///��������֪ͨ����TCPģʽ�¿��ã�
		virtual void OnRtnSimplifyMarketData(CTORATstpSimplifyMarketDataField *pSimplifyMarketDataField) {};

		///��Լ״̬
		virtual void OnRtnSecurityStatus(CTORATstpSecurityStatusField *pSecurityStatusField) {};

		///�г�״̬
		virtual void OnRtnMarketStatus(CTORATstpMarketStatusField *pMarketStatusField) {};

		///�����г�����״̬
		virtual void OnRtnImcParams(CTORATstpImcParamsField *pImcParamsField) {};

		///��Ȩ����֪ͨ
		virtual void OnRtnSPMarketData(CTORATstpMarketDataField *pMarketDataField) {};

		///��Ȩ��������֪ͨ����TCPģʽ�¿��ã�
		virtual void OnRtnSPSimplifyMarketData(CTORATstpSimplifyMarketDataField *pSimplifyMarketDataField) {};

		///��Ȩ��Լ״̬֪ͨ
		virtual void OnRtnSPSecurityStatus(CTORATstpSecurityStatusField *pSecurityStatusField) {};

		///��Ȩ�г�״̬֪ͨ
		virtual void OnRtnSPMarketStatus(CTORATstpMarketStatusField *pMarketStatusField) {};


		///���ĺϳɿ���Ӧ����������
		virtual void OnRspSubRapidMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�˶��ϳɿ���Ӧ����������
		virtual void OnRspUnSubRapidMarketData(CTORATstpSpecificSecurityField *pSpecificSecurityField, CTORATstpRspInfoField *pRspInfoField) {};

		///�ϳɿ���֪ͨ����������
		virtual void OnRtnRapidMarketData(CTORATstpRapidMarketDataField *pRapidMarketDataField) {};
	};

	class XMD_API_DLL_EXPORT CTORATstpXMdApi
	{
	public:
		///����XMdApi
		///@return ��������XMdApi
		///@param eMDSubMode:���鶩��ģʽ��Ŀǰ֧��TCP��UDP�鲥���ַ�ʽ
		///@param eDeriveMDSubMode:��������ϳɿ������鶩��ģʽ��Ŀǰ֧��TCP��UDP�鲥���ַ�ʽ
		static CTORATstpXMdApi *CreateTstpXMdApi(const TTORATstpMDSubModeType &eMDSubMode = TORA_TSTP_MST_TCP, const TTORATstpMDSubModeType &eDeriveMDSubMode = TORA_TSTP_MST_TCP);

		///��ȡAPI�汾��
		///@return �汾��
		static const char* GetApiVersion();

		///ɾ���ӿڶ�����
		///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
		virtual void Release() = 0;

		///��ʼ�����л���
		///@param cpuCores��API�ڲ��̰߳�˲����������鲥����ģʽ����Ч��
		///@remark Ĭ�ϲ�������У�֧������3���ˣ����ȼ�����Ϊ���ص��̡߳��ϳɿ�������I/O�̡߳���ͨ��������I/O�̡߳�
		///@remark ����"0"��ʾAPI�ص��̰߳󶨵���0�������У�"0,5,17"��ʾ����3���߳����ΰ��ڵ�0�ˡ���5�ˡ���17�������С�
		///@remark ���ڴ󲿷ֲ���Ҫͬʱʹ����ͨ����ͺϳɿ��յ��û���˵�����а�˵ı�Ҫ����2���˼������������磺
		///@remark "0,5"��ʾAPI�ص��̡߳��ϳɿ�������I/O�̷ֱ߳�󶨵���0�ˡ���5�������У���δע�������������5�˰���ͨ��������I/O�̡߳�				
		virtual void Init(const char * cpuCores = "") = 0;

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

		///ע�����ַ������û���Ϣ
		///@param pFensUserInfoField���û���Ϣ��
		virtual void RegisterFensUserInfo(CTORATstpFensUserInfoField *pFensUserInfoField) = 0;
	
		///ע���鲥��ַ
		///@param pszMulticastAddress:�鲥�����ַ,��:"udp://224.3.9.110:34567"��
		///@param pszInterfaceIP:����������ַ,��:"127.0.0.1",��NULL��������ѯ���Ա����������������鲥�顣
		///@param pszSourceIp:�鲥���ݰ�Դ��ַ,��:"127.0.0.1",��NULL��ʾ��У�����ݰ�Դ��
		///@remark ����ʹ��UDP�鲥��ʽ����ʱ��Ч
		virtual void RegisterMulticast(char *pszMulticastAddress, char *pszInterfaceIP, char *pszSourceIp) = 0;

		///ע��������������������ַ
		///@param pszNsAddress��������������������ַ��
		///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:15001���� 
		///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����15001������������˿ںš�
		virtual void RegisterDeriveServer(char *pszDeriveAddress) = 0;

		///ע����������������鲥��ַ
		///@param pszMulticastAddress:�鲥�����ַ,��:"udp://224.3.9.110:34567"��
		///@param pszInterfaceIP:����������ַ,��:"127.0.0.1",��NULL��������ѯ���Ա����������������鲥�顣
		///@param pszSourceIp:�鲥���ݰ�Դ��ַ,��:"127.0.0.1",��NULL��ʾ��У�����ݰ�Դ��
		///@remark ����ʹ��UDP�鲥��ʽ����ʱ��Ч
		virtual void RegisterDeriveMulticast(char * pszMulticastAddress, char * pszInterfaceIP, char * pszSourceIp) = 0;

		///ע��ص��ӿ�
		virtual void RegisterSpi(CTORATstpXMdSpi *pSpi) = 0;

		///��ȡ������Ϣ
		virtual int ReqGetConnectionInfo(int nRequestID) = 0;

		///�û���¼����
		virtual int ReqUserLogin(CTORATstpReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;

		///�ǳ�����
		virtual int ReqUserLogout(CTORATstpUserLogoutField *pUserLogoutField, int nRequestID) = 0;

		///��������
		virtual int SubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�˶�����
		virtual int UnSubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�����̺�����
		virtual int SubscribePHMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�˶��̺�����
		virtual int UnSubscribePHMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�����ض�����
		virtual int SubscribeSpecialMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�˶��ض�����
		virtual int UnSubscribeSpecialMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///���ļ������飨��TCPģʽ�¿��ã�
		virtual int SubscribeSimplifyMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�˶��������飨��TCPģʽ�¿��ã�
		virtual int UnSubscribeSimplifyMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///���ĺ�Լ״̬
		virtual int SubscribeSecurityStatus(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�˶���Լ״̬
		virtual int UnSubscribeSecurityStatus(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�����г�״̬
		virtual int SubscribeMarketStatus(TTORATstpMarketIDType MarketID) = 0;

		///�˶��г�״̬
		virtual int UnSubscribeMarketStatus(TTORATstpMarketIDType MarketID) = 0;

		///���Ĺ����г�����״̬
		virtual int SubscribeImcParams(TTORATstpMarketIDType MarketID) = 0;

		///�˶������г�����״̬
		virtual int UnSubscribeImcParams(TTORATstpMarketIDType MarketID) = 0;

		///��ѯ������գ���TCPģʽ�¿��ã�
		virtual int ReqInquiryMarketDataMirror(CTORATstpInquiryMarketDataField *pInquiryMarketDataField, int nRequestID) = 0;

		///��ѯ�̺�������գ���TCPģʽ�¿��ã�
		virtual int ReqInquiryPHMarketDataMirror(CTORATstpInquiryMarketDataField *pInquiryMarketDataField, int nRequestID) = 0;

		///��ѯ�ض�������գ���TCPģʽ�¿��ã�
		virtual int ReqInquirySpecialMarketDataMirror(CTORATstpInquirySpecialMarketDataField *pInquirySpecialMarketDataField, int nRequestID) = 0;

		///������Ȩ����
		virtual int SubscribeSPMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�˶���Ȩ����
		virtual int UnSubscribeSPMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///������Ȩ�������飨��TCPģʽ�¿��ã�
		virtual int SubscribeSPSimplifyMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�˶���Ȩ�������飨��TCPģʽ�¿��ã�
		virtual int UnSubscribeSPSimplifyMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///������Ȩ��Լ״̬
		virtual int SubscribeSPSecurityStatus(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�˶���Ȩ��Լ״̬
		virtual int UnSubscribeSPSecurityStatus(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///������Ȩ�г�״̬
		virtual int SubscribeSPMarketStatus(TTORATstpMarketIDType MarketID) = 0;

		///�˶���Ȩ�г�״̬
		virtual int UnSubscribeSPMarketStatus(TTORATstpMarketIDType MarketID) = 0;

		///��ѯ��Ȩ������գ���TCPģʽ�¿��ã�
		virtual int ReqInquirySPMarketDataMirror(CTORATstpInquiryMarketDataField *pInquiryMarketDataField, int nRequestID) = 0;


		///���ĺϳɿ��գ���������
		virtual int SubscribeRapidMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

		///�˶��ϳɿ��գ���������
		virtual int UnSubscribeRapidMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchangeID) = 0;

	protected:
		~CTORATstpXMdApi(){};
	};
}

#endif // TORATSTPXMDAPI_H__