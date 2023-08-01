/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpLev2MdApi.h
///@brief �����˿ͻ��˽ӿ�
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(_TORA_TSTPLEV2MDAPI_H)
#define _TORA_TSTPLEV2MDAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TORATstpLev2ApiStruct.h"


#ifdef MD_API_EXPORT
#ifdef WINDOWS
#define LEV2MD_API_DLL_EXPORT __declspec(dllexport)
#else
#define LEV2MD_API_DLL_EXPORT __attribute__ ((visibility("default")))
#endif
#else
#define LEV2MD_API_DLL_EXPORT 
#endif

namespace TORALEV2API
{
	class CTORATstpLev2MdSpi
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

		///����Ӧ��
		virtual void OnRspError(CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��¼������Ӧ
		virtual void OnRspUserLogin(CTORATstpRspUserLoginField *pRspUserLogin, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�ǳ�������Ӧ
		virtual void OnRspUserLogout(CTORATstpUserLogoutField *pUserLogout, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��������Ӧ��(�Ϻ���ծȯ�ࡢ���ڷ�ծȯ�ࡢ���ڿ�תծ)
		virtual void OnRspSubMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ����������Ӧ��(�Ϻ���ծȯ�ࡢ���ڷ�ծȯ�ࡢ���ڿ�תծ)
		virtual void OnRspUnSubMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///����ָ������Ӧ��
		virtual void OnRspSubIndex(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ������ָ������Ӧ��
		virtual void OnRspUnSubIndex(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///������ʳɽ�Ӧ��(���ڷ�ծȯ�ࡢ���ڿ�תծ)
		virtual void OnRspSubTransaction(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ��������ʳɽ�Ӧ��(���ڷ�ծȯ�ࡢ���ڿ�תծ)
		virtual void OnRspUnSubTransaction(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�������ί��Ӧ��(���ڷ�ծȯ�ࡢ���ڿ�תծ)
		virtual void OnRspSubOrderDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ���������ί��Ӧ��(���ڷ�ծȯ�ࡢ���ڿ�תծ)
		virtual void OnRspUnSubOrderDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����̺󶨼�����Ӧ��
		virtual void OnRspSubPHMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ�������̺󶨼�����Ӧ��
		virtual void OnRspUnSubPHMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����̺󶨼���ʳɽ�Ӧ��
		virtual void OnRspSubPHTransaction(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ���̺󶨼۶�����ʳɽ�Ӧ��
		virtual void OnRspUnSubPHTransaction(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��������ش��ɽ�Ӧ��
		virtual void OnRspSubResendTransaction(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ����������ش��ɽ�Ӧ��
		virtual void OnRspUnSubResendTransaction(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��������ش�ί��Ӧ��
		virtual void OnRspSubResendOrderDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ����������ش�ί��Ӧ��
		virtual void OnRspUnSubResendOrderDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����Ϻ�XTSծȯ����Ӧ��
		virtual void OnRspSubXTSMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ�������Ϻ�XTSծȯ����Ӧ��
		virtual void OnRspUnSubXTSMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����Ϻ�XTSծȯ�������Ӧ��
		virtual void OnRspSubXTSTick(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ�������Ϻ�XTSծȯ�������Ӧ��
		virtual void OnRspUnSubXTSTick(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///�����Ϻ�NGTS��ծȯ�������Ӧ��
		virtual void OnRspSubNGTSTick(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ�������Ϻ�NGTS��ծȯ�������Ӧ��
		virtual void OnRspUnSubNGTSTick(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��������ծȯ����������תծ)����Ӧ��
		virtual void OnRspSubBondMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ����������ծȯ����������תծ)����Ӧ��
		virtual void OnRspUnSubBondMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��������ծȯ����������תծ)��ʳɽ�Ӧ��
		virtual void OnRspSubBondTransaction(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ����������ծȯ����������תծ)��ʳɽ�Ӧ��
		virtual void OnRspUnSubBondTransaction(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��������ծȯ����������תծ)���ί��Ӧ��
		virtual void OnRspSubBondOrderDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ����������ծȯ����������תծ)���ί��Ӧ��
		virtual void OnRspUnSubBondOrderDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///����֪ͨ(�Ϻ���ծȯ�ࡢ���ڷ�ծȯ�ࡢ���ڿ�תծ)
		virtual void OnRtnMarketData(CTORATstpLev2MarketDataField *pMarketData, const int FirstLevelBuyNum, const int FirstLevelBuyOrderVolumes[], const int FirstLevelSellNum, const int FirstLevelSellOrderVolumes[]) {};

		//ָ������֪ͨ
		virtual void OnRtnIndex(CTORATstpLev2IndexField *pIndex) {};

		//��ʳɽ�֪ͨ(���ڷ�ծȯ�ࡢ���ڿ�תծ)
		virtual void OnRtnTransaction(CTORATstpLev2TransactionField *pTransaction) {};

		//���ί��֪ͨ(���ڷ�ծȯ�ࡢ���ڿ�תծ)
		virtual void OnRtnOrderDetail(CTORATstpLev2OrderDetailField *pOrderDetail) {};

		///�̺󶨼�����֪ͨ
		virtual void OnRtnPHMarketData(CTORATstpLev2PHMarketDataField *pPHMarketData, const int FirstLevelBuyNum, const int FirstLevelBuyOrderVolumes[], const int FirstLevelSellNum, const int FirstLevelSellOrderVolumes[]) {};

		//�̺󶨼���ʳɽ�֪ͨ
		virtual void OnRtnPHTransaction(CTORATstpLev2PHTransactionField *pTransaction) {};

		//����ش��ɽ�֪ͨ
		virtual void OnRtnResendTransaction(CTORATstpLev2ResendTransactionField *pTransaction) {};

		//����ش�ί��֪ͨ
		virtual void OnRtnResendOrderDetail(CTORATstpLev2ResendOrderDetailField *pOrderDetail) {};

		///�Ϻ�XTSծȯ����֪ͨ
		virtual void OnRtnXTSMarketData(CTORATstpLev2XTSMarketDataField *pMarketData, const int FirstLevelBuyNum, const int FirstLevelBuyOrderVolumes[], const int FirstLevelSellNum, const int FirstLevelSellOrderVolumes[]) {};

		///�Ϻ�XTSծȯ�������֪ͨ
		virtual void OnRtnXTSTick(CTORATstpLev2XTSTickField *pTick) {};

		///�Ϻ�NGTS��ծȯ�������֪ͨ
		virtual void OnRtnNGTSTick(CTORATstpLev2NGTSTickField *pTick) {};

		///����ծȯ����������תծ)����֪ͨ
		virtual void OnRtnBondMarketData(CTORATstpLev2BondMarketDataField *pMarketData, const int FirstLevelBuyNum, const int FirstLevelBuyOrderVolumes[], const int FirstLevelSellNum, const int FirstLevelSellOrderVolumes[]) {};

		//����ծȯ����������תծ)��ʳɽ�֪ͨ
		virtual void OnRtnBondTransaction(CTORATstpLev2BondTransactionField *pTransaction) {};

		//����ծȯ����������תծ)���ί��֪ͨ
		virtual void OnRtnBondOrderDetail(CTORATstpLev2BondOrderDetailField *pOrderDetail) {};
	};

	class LEV2MD_API_DLL_EXPORT CTORATstpLev2MdApi
	{
	public:
		///����MdApi
		///@return ��������MdApi
		static CTORATstpLev2MdApi *CreateTstpLev2MdApi(const TTORATstpMDSubModeType &eMDSubMode = TORA_TSTP_MST_TCP, bool bCachedMode = false);

		///��ȡAPI�汾��
		///@return �汾��
		static const char* GetApiVersion();

		///ɾ���ӿڶ�����
		///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
		virtual void Release() = 0;

		///��ʼ��
		///@param cpuCores��API�ڲ��̰߳�˲�����Ĭ�ϲ��������
		//                  "0"��ʾAPI�ڲ��̰߳󶨵���0��������
		//					"0,5,18"��ʾAPI�ڲ��̰߳󶨵���0,��5����18�ź�������                 
		///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
		virtual void Init(const char * cpuCores="") = 0;

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
		///@remark RegisterFront/RegisterMulticast��RegisterNameServer��ѡһ
		virtual void RegisterNameServer(char *pszNsAddress) = 0;

		///ע���鲥��ַ
		///@param pszMulticastAddress:�鲥�����ַ,��:"udp://224.3.9.110:34567"��
		///@param pszInterfaceIP:����������ַ,��:"127.0.0.1",��NULL��������ѯ���Ա����������������鲥�顣
		///@param pszSourceIp:�鲥���ݰ�Դ��ַ,��:"127.0.0.1",��NULL��ʾ��У�����ݰ�Դ��
		///@param pInterfaceName:����������,��enp101s0f1,efvi����ʱ������
		///@param rxqCapacity:���ն��д�С,rxqCapacity<=0 ��ȡĬ��ֵ����512��1024��2048��4096),efvi����ʱ������
		///@param bEFVI:EFVI����ģʽ����(linux)
		///@remark ��ʹ��UDP�鲥��ʽ����ʱ����
		virtual void RegisterMulticast(char *pszMulticastAddress, char *pszInterfaceIP, char *pszSourceIp, const char * pInterfaceName="", int rxqCapacity=0,bool bEFVI=false) = 0;


		///ע��ص��ӿ�
		///@param pSpi �����Իص��ӿ����ʵ��
		virtual void RegisterSpi(CTORATstpLev2MdSpi *pSpi) = 0;

		///��init��������֮ǰ���ã�������ǰ����������Ҫ���ĵ�������𼯺ϡ���ĳЩ����¿�����������Ч��
		///@param mkSubTypes: ������𼯺ϣ�ÿһ���ַ�����TTORATstpMKSubType���͡���"TO"��ʾ������
		///����SubscribeTransaction��SubscribeOrderDetail���ľ�����뼶�����ʳɽ������ί�С�
		///���������ô˺�����������Ҫ���ĵ�������𣬺���Ҳ��Ҫ���ö�Ӧ��Subcriber***�����������鶩��
		virtual void DeclareMKSubTypes(const TTORATstpMKSubTypesType & mkSubTypes) =0;

		///�������顣���Ϻ���ծȯ�ࡢ���ڷ�ծȯ�ࡢ���ڿ�תծ��
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeMarketData(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶����顣���Ϻ���ծȯ�ࡢ���ڷ�ծȯ�ࡢ���ڿ�תծ��
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeMarketData(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///����ָ�����顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeIndex(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶�ָ�����顣
		///@param ppInstrumentID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeIndex(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///������ʳɽ��������ڷ�ծȯ�ࡢ���ڿ�תծ��
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeTransaction(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶���ʳɽ��������ڷ�ծȯ�ࡢ���ڿ�תծ��
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeTransaction(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�������ί�С������ڷ�ծȯ�ࡢ���ڿ�תծ��
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeOrderDetail(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶����ί�С������ڷ�ծȯ�ࡢ���ڿ�תծ��
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeOrderDetail(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�����̺󶨼����顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribePHMarketData(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶��̺󶨼����顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribePHMarketData(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�����̺󶨼���ʳɽ���
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribePHTransaction(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶��̺󶨼���ʳɽ���
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribePHTransaction(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///��������ش��ɽ���
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeResendTransaction(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶�����ش��ɽ���
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeResendTransaction(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///��������ش�ί�С�
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeResendOrderDetail(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶�����ش�ί�С�
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeResendOrderDetail(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�����Ϻ�XTSծȯ���顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeXTSMarketData(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶��Ϻ�XTSծȯ���顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeXTSMarketData(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�����Ϻ�XTSծȯ������顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeXTSTick(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶��Ϻ�XTSծȯ������顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeXTSTick(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�����Ϻ�NGTS�Ϻ���ծȯ��������顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeNGTSTick(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶��Ϻ�NGTS�Ϻ���ծȯ�ࡢ������顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeNGTSTick(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///��������ծȯ(��������תծ)��������
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeBondMarketData(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶�����ծȯ(��������תծ)��������
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeBondMarketData(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///��������ծȯ(��������תծ)��ʳɽ�
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeBondTransaction(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶�����ծȯ(��������תծ)��ʳɽ�
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeBondTransaction(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///��������ծȯ(��������תծ)���ί��
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeBondOrderDetail(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�˶�����ծȯ(��������תծ)���ί��
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeBondOrderDetail(char *ppSecurityID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

		///�û���¼����
		virtual int ReqUserLogin(CTORATstpReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;

		///�ǳ�����
		virtual int ReqUserLogout(CTORATstpUserLogoutField *pUserLogout, int nRequestID) = 0;
	protected:
		~CTORATstpLev2MdApi(){};
	};
}
#endif
