/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpUserApiDataType.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ����������
///@history 
/////////////////////////////////////////////////////////////////////////
#ifndef TORATSTPUSERAPIDATATYPE_H__
#define TORATSTPUSERAPIDATATYPE_H__


#include <limits.h>
#include <float.h>

namespace TORASTOCKAPI
{
	///�����ֵ
	const int INT_NULL_VAL = INT_MAX;
	const double FLOAT_NULL_VAL = DBL_MAX;
	const char CHAR_NULL_VAL = 0;
	const short WORD_NULL_VAL = SHRT_MAX;
#ifdef WINDOWS
	const __int64 LONG_NULL_VAL = _I64_MAX;
#else
	const long long LONG_NULL_VAL = LLONG_MAX;
#endif
	
	///���������ÿպ��п�
	inline void set_null(int &v)
	{
		v = INT_NULL_VAL;
	}
	inline bool is_null(const int &v)
	{
		return v == INT_NULL_VAL;
	}
	
	///�����������ÿպ��п�
	inline void set_null(double &v)
	{
		v = FLOAT_NULL_VAL;
	}
	inline bool is_null(const double &v)
	{
		return v == FLOAT_NULL_VAL;
	}
	
	///�ַ��������ÿպ��п�
	inline void set_null(char &v)
	{
		v = CHAR_NULL_VAL;
	}
	inline bool is_null(const char &v)
	{
		return v == CHAR_NULL_VAL;
	}
	
	///�����������ÿպ��п�
	inline void set_null(short &v)
	{
		v = WORD_NULL_VAL;
	}
	inline bool is_null(const short &v)
	{
		return v == WORD_NULL_VAL;
	}
	
	///�����������ÿպ��п�
	#ifdef WINDOWS
	inline void set_null(__int64 &v)
	#else
	inline void set_null(long long &v)
	#endif
	{
		v = LONG_NULL_VAL;
	}
	#ifdef WINDOWS
	inline bool is_null(const __int64 &v)
	#else
	inline bool is_null(const long long &v)
	#endif
	{
		return v == LONG_NULL_VAL;
	}
	
	///�ַ����������ÿպ��п�
	inline void set_null(char *v)
	{
		v[0] = '\0';
	}
	inline bool is_null(const char *v)
	{
		const char *p=v;
		while (*p)
		{
			if (*p!=' ')
			{
				return false;
			}
			p++;
		}
		return true;
	}
	
	enum TORA_TE_RESUME_TYPE
	{
		TORA_TERT_RESTART = 0,
		TORA_TERT_RESUME,
		TORA_TERT_QUICK
	};
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpRequestIDType��һ������������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpRequestIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpLogInAccountType��һ����¼�˻�����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpLogInAccountType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpLogInAccountTypeType��һ����¼�˻���������
	/////////////////////////////////////////////////////////////////////////
	///�û�����
	const char TORA_TSTP_LACT_UserID = '0';
	///�ʽ��˺�
	const char TORA_TSTP_LACT_AccountID = '1';
	///�Ϻ�A��
	const char TORA_TSTP_LACT_SHAStock = '2';
	///����A��
	const char TORA_TSTP_LACT_SZAStock = '3';
	///�Ϻ�B��
	const char TORA_TSTP_LACT_SHBStock = '4';
	///����B��
	const char TORA_TSTP_LACT_SZBStock = '5';
	///����A
	const char TORA_TSTP_LACT_ThreeNewBoardA = '6';
	///����B
	const char TORA_TSTP_LACT_ThreeNewBoardB = '7';
	///�۹�
	const char TORA_TSTP_LACT_HKStock = '8';
	///ͳһ�û�����
	const char TORA_TSTP_LACT_UnifiedUserID = '9';
	///����A��
	const char TORA_TSTP_LACT_BJAStock = 'a';
	typedef char TTORATstpLogInAccountTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpDepartmentIDType��һ�����Ŵ�������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpDepartmentIDType[11];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpAuthModeType��һ����֤��ʽ����
	/////////////////////////////////////////////////////////////////////////
	///����
	const char TORA_TSTP_AM_Password = '0';
	///ָ��
	const char TORA_TSTP_AM_FingerPrint = '1';
	///Կ�״�
	const char TORA_TSTP_AM_CertInfo = '2';
	typedef char TTORATstpAuthModeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpPasswordType��һ����������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpPasswordType[41];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpUserProductInfoType��һ���û��˲�Ʒ��Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpUserProductInfoType[11];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpInterfaceProductInfoType��һ���ӿڶ˲�Ʒ��Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpInterfaceProductInfoType[33];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTerminalInfoType��һ���ն���Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpTerminalInfoType[256];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpIPAddressType��һ��IP��ַ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpIPAddressType[16];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpMacAddressType��һ��Mac��ַ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpMacAddressType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpLangType��һ����������
	/////////////////////////////////////////////////////////////////////////
	///��������
	const char TORA_TSTP_LGT_ZHCN = '0';
	///�������
	const char TORA_TSTP_LGT_ZHHK = '1';
	///Ӣ������
	const char TORA_TSTP_LGT_ENUS = '2';
	typedef char TTORATstpLangType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpDeviceIDType��һ���豸��ʶ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpDeviceIDType[129];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCertSerialType��һ����֤��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpCertSerialType[129];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpDeviceTypeType��һ���豸�������
	/////////////////////////////////////////////////////////////////////////
	///PC��
	const char TORA_TSTP_DVT_PC = '0';
	///�ƶ���
	const char TORA_TSTP_DVT_Mobile = '1';
	typedef char TTORATstpDeviceTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpNodeIDType��һ���ڵ�������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpNodeIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpFrontIDType��һ��ǰ�ñ������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpFrontIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpSessionIDType��һ���Ự�������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpSessionIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOrderRefType��һ��������������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpOrderRefType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpVolumeType��һ����������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpVolumeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTimeType��һ��ʱ������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpTimeType[9];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpSystemNameType��һ��ϵͳ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpSystemNameType[41];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpDateType��һ����������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpDateType[9];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpUserIDType��һ�������û���������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpUserIDType[16];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpUserNameType��һ���û���������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpUserNameType[81];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpUserTypeType��һ���û���������
	/////////////////////////////////////////////////////////////////////////
	///���͹�˾�û�
	const char TORA_TSTP_UTYPE_BrokerUser = '0';
	///�����û�
	const char TORA_TSTP_UTYPE_SuperUser = '1';
	///Ͷ�����û�
	const char TORA_TSTP_UTYPE_Investor = '2';
	typedef char TTORATstpUserTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCommFluxType��һ��ͨѶ��������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpCommFluxType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpBoolType��һ������������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpBoolType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpErrorIDType��һ�������������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpErrorIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpErrorMsgType��һ��������Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpErrorMsgType[81];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpExchangeIDType��һ����������������
	/////////////////////////////////////////////////////////////////////////
	///ͨ��(�ڲ�ʹ��)
	const char TORA_TSTP_EXD_COMM = '0';
	///�Ϻ�������
	const char TORA_TSTP_EXD_SSE = '1';
	///���ڽ�����
	const char TORA_TSTP_EXD_SZSE = '2';
	///��۽�����
	const char TORA_TSTP_EXD_HK = '3';
	///����֤ȯ������
	const char TORA_TSTP_EXD_BSE = '4';
	typedef char TTORATstpExchangeIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpInvestorIDType��һ��Ͷ���ߴ�������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpInvestorIDType[16];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpBusinessUnitIDType��һ��Ͷ�ʵ�Ԫ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpBusinessUnitIDType[16];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpShareholderIDType��һ���ɶ��˻���������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpShareholderIDType[11];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpSecurityIDType��һ��֤ȯ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpSecurityIDType[31];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpDirectionType��һ��������������
	/////////////////////////////////////////////////////////////////////////
	///����
	const char TORA_TSTP_D_Buy = '0';
	///����
	const char TORA_TSTP_D_Sell = '1';
	///ETF�깺
	const char TORA_TSTP_D_ETFPur = '2';
	///ETF���
	const char TORA_TSTP_D_ETFRed = '3';
	///�¹��깺
	const char TORA_TSTP_D_IPO = '4';
	///���ع�
	const char TORA_TSTP_D_Repurchase = '5';
	///��ع�
	const char TORA_TSTP_D_ReverseRepur = '6';
	///����ʽ�����깺
	const char TORA_TSTP_D_OeFundPur = '8';
	///����ʽ�������
	const char TORA_TSTP_D_OeFundRed = '9';
	///����Ʒ����
	const char TORA_TSTP_D_CollateralIn = 'a';
	///����Ʒ����
	const char TORA_TSTP_D_CollateralOut = 'b';
	///��Ѻ���
	const char TORA_TSTP_D_PledgeIn = 'd';
	///��Ѻ����
	const char TORA_TSTP_D_PledgeOut = 'e';
	///�����ծ
	const char TORA_TSTP_D_Rationed = 'f';
	///������
	const char TORA_TSTP_D_Split = 'g';
	///����ϲ�
	const char TORA_TSTP_D_Merge = 'h';
	///��������
	const char TORA_TSTP_D_CreditBuy = 'i';
	///��ȯ����
	const char TORA_TSTP_D_CreditSell = 'j';
	///��ȯ����
	const char TORA_TSTP_D_SellRepay = 'k';
	///��ȯ��ȯ
	const char TORA_TSTP_D_BuyRepay = 'l';
	///��ȯ��ת
	const char TORA_TSTP_D_RepayTransfer = 'm';
	///��ȯ��ת
	const char TORA_TSTP_D_SurplusTransfer = 'n';
	///Դȯ��ת
	const char TORA_TSTP_D_SourceTransfer = 'o';
	///ծȯת��
	const char TORA_TSTP_D_BondConvertStock = 't';
	///ծȯ����
	const char TORA_TSTP_D_BondPutback = 'u';
	///ETFʵ���깺
	const char TORA_TSTP_D_ETFOtPur = 'v';
	///ETFʵ�����
	const char TORA_TSTP_D_ETFOtRed = 'w';
	///���۳���
	const char TORA_TSTP_D_PutbackRelieve = 'x';
	///��������
	const char TORA_TSTP_D_IOIBuy = 'A';
	///��������
	const char TORA_TSTP_D_IOISell = 'B';
	///�ɽ�ȷ������
	const char TORA_TSTP_D_TCRBuy = 'C';
	///�ɽ�ȷ������
	const char TORA_TSTP_D_TCRSell = 'D';
	typedef char TTORATstpDirectionType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpPriceType��һ���۸�����
	/////////////////////////////////////////////////////////////////////////
	typedef double TTORATstpPriceType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOrderPriceTypeType��һ�������۸���������
	/////////////////////////////////////////////////////////////////////////
	///�����
	const char TORA_TSTP_OPT_AnyPrice = '1';
	///�޼�
	const char TORA_TSTP_OPT_LimitPrice = '2';
	///���ż�
	const char TORA_TSTP_OPT_BestPrice = '3';
	///�̺󶨼�
	const char TORA_TSTP_OPT_FixPrice = '4';
	///�嵵��
	const char TORA_TSTP_OPT_FiveLevelPrice = '5';
	///��������
	const char TORA_TSTP_OPT_HomeBestPrice = '6';
	typedef char TTORATstpOrderPriceTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTimeConditionType��һ����Ч����������
	/////////////////////////////////////////////////////////////////////////
	///������ɣ�������
	const char TORA_TSTP_TC_IOC = '1';
	///������Ч
	const char TORA_TSTP_TC_GFS = '2';
	///������Ч
	const char TORA_TSTP_TC_GFD = '3';
	///ָ������ǰ��Ч
	const char TORA_TSTP_TC_GTD = '4';
	///����ǰ��Ч
	const char TORA_TSTP_TC_GTC = '5';
	///���Ͼ�����Ч
	const char TORA_TSTP_TC_GFA = '6';
	typedef char TTORATstpTimeConditionType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpVolumeConditionType��һ���ɽ�����������
	/////////////////////////////////////////////////////////////////////////
	///�κ�����
	const char TORA_TSTP_VC_AV = '1';
	///��С����
	const char TORA_TSTP_VC_MV = '2';
	///ȫ������
	const char TORA_TSTP_VC_CV = '3';
	typedef char TTORATstpVolumeConditionType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOperwayType��һ��ί�з�ʽ����
	/////////////////////////////////////////////////////////////////////////
	///��
	const char TORA_TSTP_OPERW_Non = ' ';
	///�绰ί��
	const char TORA_TSTP_OPERW_Telephone = '0';
	///��̨ί��
	const char TORA_TSTP_OPERW_OTC = '1';
	///�ƶ��ͻ���ί��
	const char TORA_TSTP_OPERW_MobileClient = '2';
	///PC�ͻ���ί��
	const char TORA_TSTP_OPERW_PCClient = '3';
	///TYί��
	const char TORA_TSTP_OPERW_TY = '4';
	///ͨ��ί��
	const char TORA_TSTP_OPERW_Channel = '5';
	typedef char TTORATstpOperwayType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpLotTypeType��һ���۹ɶ���������������
	/////////////////////////////////////////////////////////////////////////
	///��ɶ���
	const char TORA_TSTP_LT_OddLot = '0';
	///���ֶ���
	const char TORA_TSTP_LT_RoundLot = '1';
	typedef char TTORATstpLotTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOrderSysIDType��һ��ϵͳ�����������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpOrderSysIDType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCondCheckType��һ��ί�������������
	/////////////////////////////////////////////////////////////////////////
	///�����κμ��
	const char TORA_TSTP_CCT_None = '0';
	///�Գɽ����
	const char TORA_TSTP_CCT_SelfDeal = '1';
	typedef char TTORATstpCondCheckType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpForceCloseReasonType��һ��ǿƽԭ������
	/////////////////////////////////////////////////////////////////////////
	///��ǿƽ
	const char TORA_TSTP_FCC_NotForceClose = '0';
	///�ʽ���
	const char TORA_TSTP_FCC_MoneyNotEnough = '1';
	///��λ����
	const char TORA_TSTP_FCC_PositionOverFull = '2';
	///����
	const char TORA_TSTP_FCC_Other = '3';
	typedef char TTORATstpForceCloseReasonType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCreditDebtIDType��һ�����ø�ծ�������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpCreditDebtIDType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCreditQuotaTypeType��һ������ͷ����������
	/////////////////////////////////////////////////////////////////////////
	///��ͨ
	const char TORA_TSTP_CQT_Normal = '0';
	///ר��
	const char TORA_TSTP_CQT_Special = '1';
	typedef char TTORATstpCreditQuotaTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpIntSerialType��һ��������ˮ������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpIntSerialType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpStrInfoType��һ���ַ���������Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpStrInfoType[33];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpIntInfoType��һ�����θ�����Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpIntInfoType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOrderLocalIDType��һ�����ر����������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpOrderLocalIDType[13];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOrderStatusType��һ������״̬����
	/////////////////////////////////////////////////////////////////////////
	///Ԥ��
	const char TORA_TSTP_OST_Cached = '0';
	///δ֪
	const char TORA_TSTP_OST_Unknown = '1';
	///�������ѽ���
	const char TORA_TSTP_OST_Accepted = '2';
	///���ֳɽ�
	const char TORA_TSTP_OST_PartTraded = '3';
	///ȫ���ɽ�
	const char TORA_TSTP_OST_AllTraded = '4';
	///���ɲ���
	const char TORA_TSTP_OST_PartTradeCanceled = '5';
	///ȫ������
	const char TORA_TSTP_OST_AllCanceled = '6';
	///�������Ѿܾ�
	const char TORA_TSTP_OST_Rejected = '7';
	///�������׺���
	const char TORA_TSTP_OST_SendTradeEngine = '#';
	typedef char TTORATstpOrderStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOrderSubmitStatusType��һ�������ύ״̬����
	/////////////////////////////////////////////////////////////////////////
	///δ�ύ
	const char TORA_TSTP_OSS_InsertUnSubmit = '0';
	///���ύ
	const char TORA_TSTP_OSS_InsertSubmitted = '1';
	///����δ�ύ
	const char TORA_TSTP_OSS_CancelUnSubmit = '2';
	///�������ύ
	const char TORA_TSTP_OSS_CancelSubmitted = '3';
	///�����ѱ��ܾ�
	const char TORA_TSTP_OSS_CancelRejected = '4';
	///������ɾ��
	const char TORA_TSTP_OSS_CancelDeleted = '5';
	typedef char TTORATstpOrderSubmitStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpAccountIDType��һ���ʽ��ʺ�����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpAccountIDType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCurrencyIDType��һ����������
	/////////////////////////////////////////////////////////////////////////
	///�����
	const char TORA_TSTP_CID_CNY = '1';
	///�۱�
	const char TORA_TSTP_CID_HKD = '2';
	///��Ԫ
	const char TORA_TSTP_CID_USD = '3';
	typedef char TTORATstpCurrencyIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpPbuIDType��һ�����׵�Ԫ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpPbuIDType[11];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpMoneyType��һ���ʽ�����
	/////////////////////////////////////////////////////////////////////////
	typedef double TTORATstpMoneyType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOrderTypeType��һ��������������
	/////////////////////////////////////////////////////////////////////////
	///����
	const char TORA_TSTP_ORDT_Normal = '0';
	///��������
	const char TORA_TSTP_ORDT_DeriveFromQuote = '1';
	///�������
	const char TORA_TSTP_ORDT_DeriveFromCombination = '2';
	///��ϱ���
	const char TORA_TSTP_ORDT_Combination = '3';
	///������
	const char TORA_TSTP_ORDT_ConditionalOrder = '4';
	///������
	const char TORA_TSTP_ORDT_Swap = '5';
	///Ԥ��
	const char TORA_TSTP_ORDT_Cache = '6';
	///ҹ��ί��
	const char TORA_TSTP_ORDT_Night = '7';
	///ͨ��ί��
	const char TORA_TSTP_ORDT_Board = '8';
	typedef char TTORATstpOrderTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpQuotaIDType��һ����ȱ������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpQuotaIDType[17];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpFloatInfoType��һ�������͸�����Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef double TTORATstpFloatInfoType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTradeIDType��һ���ɽ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpTradeIDType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpActionFlagType��һ��������־����
	/////////////////////////////////////////////////////////////////////////
	///ɾ��
	const char TORA_TSTP_AF_Delete = '0';
	///�޸�
	const char TORA_TSTP_AF_Modify = '3';
	///ǿ��ɾ��
	const char TORA_TSTP_AF_ForceDelete = '4';
	typedef char TTORATstpActionFlagType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCondOrderIDType��һ�����������������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpCondOrderIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTriggerOrderVolumeTypeType��һ��������׼������������
	/////////////////////////////////////////////////////////////////////////
	///�Զ�������
	const char TORA_TSTP_TOVT_CustomVol = '1';
	///�������
	const char TORA_TSTP_TOVT_RelativeVol = '2';
	typedef char TTORATstpTriggerOrderVolumeTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTriggerOrderPriceTypeType��һ��������׼�۸���������
	/////////////////////////////////////////////////////////////////////////
	///�Զ���۸�
	const char TORA_TSTP_TOPT_CustomPrice = '1';
	///���¼�
	const char TORA_TSTP_TOPT_LastPrice = '2';
	///��һ��
	const char TORA_TSTP_TOPT_AskPrice1 = '3';
	///��һ��
	const char TORA_TSTP_TOPT_BidPrice1 = '4';
	///��ؼ�
	const char TORA_TSTP_TOPT_Relative = '5';
	typedef char TTORATstpTriggerOrderPriceTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpContingentConditionType��һ��������������
	/////////////////////////////////////////////////////////////////////////
	///�ɽ�����
	const char TORA_TSTP_CC_TradeTouch = '0';
	///��������
	const char TORA_TSTP_CC_CancelTouch = '1';
	///ʱ�䴥��
	const char TORA_TSTP_CC_TimeTouch = '2';
	///����ʱ�δ���
	const char TORA_TSTP_CC_SegmentTouch = '3';
	///���¼۴��ڵ���������
	const char TORA_TSTP_CC_LastPriceGreaterThanStopPrice = '4';
	///���¼�С�ڵ���������
	const char TORA_TSTP_CC_LastPriceLesserThanStopPrice = '5';
	///��һ�۴��ڵ���������
	const char TORA_TSTP_CC_AskPriceGreaterEqualStopPrice = '6';
	///��һ��С�ڵ���������
	const char TORA_TSTP_CC_AskPriceLesserEqualStopPrice = '7';
	///��һ�۴��ڵ���������
	const char TORA_TSTP_CC_BidPriceGreaterEqualStopPrice = '8';
	///��һ��С�ڵ���������
	const char TORA_TSTP_CC_BidPriceLesserEqualStopPrice = '9';
	typedef char TTORATstpContingentConditionType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpVolumeMultipleType��һ����Լ������������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpVolumeMultipleType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpRelativeCondParamType��һ�����������������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpRelativeCondParamType[31];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCondOrderStatusType��һ��������״̬����
	/////////////////////////////////////////////////////////////////////////
	///��ʼ
	const char TORA_TSTP_COST_Initial = '#';
	///δ����
	const char TORA_TSTP_COST_NotTouched = '0';
	///�Ѵ���
	const char TORA_TSTP_COST_Touched = '1';
	///�ѽ���
	const char TORA_TSTP_COST_Finished = '2';
	///�ѳ���
	const char TORA_TSTP_COST_Cancel = '3';
	///����ʧ��
	const char TORA_TSTP_COST_Failed = '4';
	typedef char TTORATstpCondOrderStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpNegoContractorType��һ����ϵ������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpNegoContractorType[17];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpNegoContractorInfoType��һ����ϵ��ʽ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpNegoContractorInfoType[65];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpNegoConfirmIDType��һ��Լ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpNegoConfirmIDType[17];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpMarketIDType��һ���г���������
	/////////////////////////////////////////////////////////////////////////
	///ͨ��(�ڲ�ʹ��)
	const char TORA_TSTP_MKD_COMMON = '0';
	///�Ϻ�A��
	const char TORA_TSTP_MKD_SHA = '1';
	///����A��
	const char TORA_TSTP_MKD_SZA = '2';
	///�Ϻ�B��
	const char TORA_TSTP_MKD_SHB = '3';
	///����B��
	const char TORA_TSTP_MKD_SZB = '4';
	///��������A��
	const char TORA_TSTP_MKD_SZThreeA = '5';
	///��������B��
	const char TORA_TSTP_MKD_SZThreeB = '6';
	///�����г�
	const char TORA_TSTP_MKD_Foreign = '7';
	///���ڸ۹�ͨ�г�
	const char TORA_TSTP_MKD_SZHK = '8';
	///�Ϻ��۹�ͨ�г�
	const char TORA_TSTP_MKD_SHHK = '9';
	///��������
	const char TORA_TSTP_MKD_BJMain = 'a';
	typedef char TTORATstpMarketIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpMarketStatusType��һ���г�״̬����
	/////////////////////////////////////////////////////////////////////////
	///δ֪
	const char TORA_TSTP_MST_UnKnown = '#';
	///����ǰ
	const char TORA_TSTP_MST_BeforeTrading = '0';
	///��������
	const char TORA_TSTP_MST_Continous = '1';
	///����
	const char TORA_TSTP_MST_Closed = '2';
	///���̼��Ͼ���
	const char TORA_TSTP_MST_OpenCallAuction = '3';
	///(�۹�ͨ)δ����
	const char TORA_TSTP_MST_SZSEHKUnopened = 'a';
	///(�۹�ͨ)���̼��Ͼ�������������
	const char TORA_TSTP_MST_SZSEHKOpenCallAuctionInput = 'b';
	///(�۹�ͨ)���̼��Ͼ��۶���ǰ
	const char TORA_TSTP_MST_SZSEHKOpenCallAuctionBeforeMatch = 'c';
	///(�۹�ͨ)���̼��Ͼ��۶���
	const char TORA_TSTP_MST_SZSEHKOpenCallAuctionMatch = 'd';
	///(�۹�ͨ)��ͣ
	const char TORA_TSTP_MST_SZSEHKHalt = 'e';
	///(�۹�ͨ)��������
	const char TORA_TSTP_MST_SZSEHKContinous = 'f';
	///(�۹�ͨ)Exchange Intervention
	const char TORA_TSTP_MST_SZSEHKExchangeIntervention = 'g';
	///(�۹�ͨ)���̼��Ͼ��۲ο��۶���
	const char TORA_TSTP_MST_SZSEHKCloseCallAuctionReferencePrice = 'h';
	///(�۹�ͨ)���̼��Ͼ�������������
	const char TORA_TSTP_MST_SZSEHKCloseCallAuctionInput = 'i';
	///(�۹�ͨ)���̼��Ͼ��۲���ȡ��
	const char TORA_TSTP_MST_SZSEHKCloseCallAuctionCannotCancel = 'j';
	///(�۹�ͨ)���̼��Ͼ��۶���
	const char TORA_TSTP_MST_SZSEHKCloseCallAuctionMatch = 'k';
	///(�۹�ͨ)���̼��Ͼ����������
	const char TORA_TSTP_MST_SZSEHKCloseCallAuctionRandomClosed = 'l';
	///(�۹�ͨ)ȡ��������
	const char TORA_TSTP_MST_SZSEHKCancel = 'm';
	///(�۹�ͨ)����
	const char TORA_TSTP_MST_SZSEHKClosed = 'n';
	///(�۹�ͨ)ȫ������
	const char TORA_TSTP_MST_SZSEHKWholeClosed = 'o';
	typedef char TTORATstpMarketStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTransferDirectionType��һ��ת�Ʒ�������
	/////////////////////////////////////////////////////////////////////////
	///����
	const char TORA_TSTP_TRNSD_In = '0';
	///���
	const char TORA_TSTP_TRNSD_Out = '1';
	///���н��׵���
	const char TORA_TSTP_TRNSD_MoveIn = '2';
	///���н��׵���
	const char TORA_TSTP_TRNSD_MoveOut = '3';
	///����
	const char TORA_TSTP_TRNSD_Freeze = '4';
	///�ⶳ
	const char TORA_TSTP_TRNSD_UnFreeze = '5';
	///֤ȯת����
	const char TORA_TSTP_TRNSD_StockToBank = '6';
	///����ת֤ȯ
	const char TORA_TSTP_TRNSD_BankToStock = '7';
	///�ⲿ�ڵ�ת��
	const char TORA_TSTP_TRNSD_NodeMoveIn = 'c';
	///�ⲿ�ڵ�ת��
	const char TORA_TSTP_TRNSD_NodeMoveOut = 'd';
	///ֱ�ӻ���
	const char TORA_TSTP_TRNSD_CashRepay = 'f';
	///ֱ�ӻ�Ϣ(�ڲ�ʹ��)
	const char TORA_TSTP_TRNSD_CashRepayInterestFee = 'g';
	typedef char TTORATstpTransferDirectionType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpBankIDType��һ�����д�������
	/////////////////////////////////////////////////////////////////////////
	///�й���������
	const char TORA_TSTP_BKID_CCB = '1';
	///�й�ũҵ����
	const char TORA_TSTP_BKID_ABC = '2';
	///�й���������
	const char TORA_TSTP_BKID_ICBC = '3';
	///�й�����
	const char TORA_TSTP_BKID_BOC = '4';
	///�й���������
	const char TORA_TSTP_BKID_CMB = '5';
	///�й���ͨ����
	const char TORA_TSTP_BKID_BC = '6';
	///�ֶ���չ����
	const char TORA_TSTP_BKID_SPDB = '7';
	///��ҵ����
	const char TORA_TSTP_BKID_CIB = '8';
	///�й��������
	const char TORA_TSTP_BKID_CEB = '9';
	///�㶫��չ����
	const char TORA_TSTP_BKID_GDB = 'a';
	///�Ͼ�����
	const char TORA_TSTP_BKID_NJCB = 'b';
	///�Ϻ�����
	const char TORA_TSTP_BKID_SHCB = 'c';
	///��������
	const char TORA_TSTP_BKID_CITICB = 'd';
	///��������
	const char TORA_TSTP_BKID_HXB = 'e';
	///��������
	const char TORA_TSTP_BKID_CMBC = 'f';
	///ƽ������
	const char TORA_TSTP_BKID_PACB = 'g';
	///��������
	const char TORA_TSTP_BKID_NBCB = 'h';
	///��������
	const char TORA_TSTP_BKID_BOB = 'i';
	///�ʴ�����
	const char TORA_TSTP_BKID_PSBC = 'j';
	typedef char TTORATstpBankIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTransferStatusType��һ��ת��״̬����
	/////////////////////////////////////////////////////////////////////////
	///ת�����ڴ���
	const char TORA_TSTP_TRANST_TranferHandling = '0';
	///ת�Ƴɹ�
	const char TORA_TSTP_TRANST_TransferSuccess = '1';
	///ת��ʧ��
	const char TORA_TSTP_TRANST_TransferFail = '2';
	///�������ڴ���
	const char TORA_TSTP_TRANST_RepealHandling = '3';
	///�����ɹ�
	const char TORA_TSTP_TRANST_RepealSuccess = '4';
	///����ʧ��
	const char TORA_TSTP_TRANST_RepealFail = '5';
	///�ⲿϵͳ�ѽ���
	const char TORA_TSTP_TRANST_ExternalAccepted = '6';
	///�������׺���
	const char TORA_TSTP_TRANST_SendTradeEngine = '#';
	typedef char TTORATstpTransferStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpBankAccountIDType��һ��ǩԼ�����˺�����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpBankAccountIDType[31];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTransferPositionTypeType��һ��ת�Ƴֲ���������
	/////////////////////////////////////////////////////////////////////////
	///�����
	const char TORA_TSTP_TPT_ALL = '0';
	///���
	const char TORA_TSTP_TPT_History = '1';
	///��������
	const char TORA_TSTP_TPT_TodayBS = '2';
	///�������
	const char TORA_TSTP_TPT_TodayPR = '3';
	///���ֺϲ���
	const char TORA_TSTP_TPT_TodaySM = '4';
	typedef char TTORATstpTransferPositionTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTransferReasonType��һ����Χϵͳ��λ����ԭ������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpTransferReasonType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpContentType��һ����Ϣ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpContentType[501];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpRatioType��һ����������
	/////////////////////////////////////////////////////////////////////////
	typedef double TTORATstpRatioType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpNameType��һ����������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpNameType[61];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpDataSyncStatusType��һ������ͬ��״̬����
	/////////////////////////////////////////////////////////////////////////
	///δͬ��
	const char TORA_TSTP_DS_Asynchronous = '1';
	///ͬ����
	const char TORA_TSTP_DS_Synchronizing = '2';
	///��ͬ��
	const char TORA_TSTP_DS_Synchronized = '3';
	///ȫ��ͬ�����
	const char TORA_TSTP_DS_AllSynchronized = '4';
	///Ԥͬ�����
	const char TORA_TSTP_DS_PreSync = '5';
	typedef char TTORATstpDataSyncStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpProductIDType��һ��֤ȯƷ�ִ�������
	/////////////////////////////////////////////////////////////////////////
	///ͨ��(�ڲ�ʹ��)
	const char TORA_TSTP_PID_COMMON = '0';
	///�Ϻ���Ʊ
	const char TORA_TSTP_PID_SHStock = '1';
	///�Ϻ�����
	const char TORA_TSTP_PID_SHFund = '3';
	///�Ϻ�ծȯ
	const char TORA_TSTP_PID_SHBond = '4';
	///�Ϻ���׼ȯ
	const char TORA_TSTP_PID_SHStandard = '5';
	///�Ϻ���Ѻʽ�ع�
	const char TORA_TSTP_PID_SHRepurchase = '6';
	///���ڹ�Ʊ
	const char TORA_TSTP_PID_SZStock = '7';
	///���ڻ���
	const char TORA_TSTP_PID_SZFund = '9';
	///����ծȯ
	const char TORA_TSTP_PID_SZBond = 'a';
	///���ڱ�׼ȯ
	const char TORA_TSTP_PID_SZStandard = 'b';
	///������Ѻʽ�ع�
	const char TORA_TSTP_PID_SZRepurchase = 'c';
	///���ͨ�۹�����
	const char TORA_TSTP_PID_SZSEHKMain = 'd';
	///���ͨ�۹ɴ�ҵ��
	const char TORA_TSTP_PID_SZSEHKGEM = 'e';
	///���ͨ�۹����佻��֤ȯ
	const char TORA_TSTP_PID_SZSEHKETS = 'f';
	///���ͨ�۹�NasdaqAMX�г�
	const char TORA_TSTP_PID_SZSEHKNasdaqAMX = 'g';
	///�Ϻ��ƴ���
	const char TORA_TSTP_PID_SHKC = 'i';
	///������Ʊ
	const char TORA_TSTP_PID_BJStock = 'j';
	typedef char TTORATstpProductIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpSecurityNameType��һ��֤ȯ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpSecurityNameType[81];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpSecurityTypeType��һ��֤ȯ�������
	/////////////////////////////////////////////////////////////////////////
	///ͨ��(�ڲ�ʹ��)
	const char TORA_TSTP_STP_COMMON = '0';
	///�Ϻ�A��
	const char TORA_TSTP_STP_SHAShares = 'a';
	///�Ϻ����г���ƱETF
	const char TORA_TSTP_STP_SHSingleMarketStockETF = 'b';
	///�Ϻ����г�ʵ��ծȯETF
	const char TORA_TSTP_STP_SHSingleMarketBondETF = 'c';
	///�Ϻ��ƽ�ETF
	const char TORA_TSTP_STP_SHGoldETF = 'd';
	///�Ϻ�����ETF
	const char TORA_TSTP_STP_SHTradableMonetaryFund = 'e';
	///�Ϻ���ծ�ط�ծ
	const char TORA_TSTP_STP_SHBondNation = 'f';
	///�Ϻ���ҵծ
	const char TORA_TSTP_STP_SHBondCorporation = 'g';
	///�Ϻ���˾ծ
	const char TORA_TSTP_STP_SHBondCompany = 'h';
	///�Ϻ���תծ
	const char TORA_TSTP_STP_SHBondConversion = 'i';
	///�Ϻ�����ծ
	const char TORA_TSTP_STP_SHBondSeparation = 'j';
	///�Ϻ���׼ȯ
	const char TORA_TSTP_STP_SHStandard = 'o';
	///�Ϻ���Ѻʽ�ع�
	const char TORA_TSTP_STP_SHRepo = 'p';
	///�Ϻ����ʽ����
	const char TORA_TSTP_STP_SHCEFund = 'q';
	///�Ϻ�����ʽ����
	const char TORA_TSTP_STP_SHOEFund = 'r';
	///�Ϻ����г�ETF
	const char TORA_TSTP_STP_SHCrossMarketStockETF = 's';
	///�Ϻ��羳ETF
	const char TORA_TSTP_STP_SHCrossBorderETF = 't';
	///�Ϻ��ּ�ĸ����
	const char TORA_TSTP_STP_SHMontherStructFund = 'u';
	///�Ϻ��ּ��ӻ���
	const char TORA_TSTP_STP_SHSubStructFund = 'v';
	///�Ϻ�ʵʱ������һ���
	const char TORA_TSTP_STP_SHRealTimeMonetaryFund = 'w';
	///�Ϻ��ɽ���ծ
	const char TORA_TSTP_STP_SHExchangeableBond = 'x';
	///�Ϻ���׼LOF����
	const char TORA_TSTP_STP_SHLOF = 'A';
	///��������A��
	const char TORA_TSTP_STP_SZMainAShares = 'B';
	///������С��ҵ��
	const char TORA_TSTP_STP_SZSME = 'C';
	///���ڹ�ծ���ط�ծ
	const char TORA_TSTP_STP_SZBondNation = 'D';
	///������ҵծ
	const char TORA_TSTP_STP_SZBondCorporation = 'E';
	///���ڹ�˾ծ
	const char TORA_TSTP_STP_SZBondCompany = 'F';
	///���ڿ�תծ
	const char TORA_TSTP_STP_SZBondConversion = 'G';
	///���ڷ���ծ
	const char TORA_TSTP_STP_SZBondSeparation = 'H';
	///���ڴ�ҵ��(ע����)
	const char TORA_TSTP_STP_SZGEMReg = 'I';
	///���ڴ�ҵ���תծ(ע����)
	const char TORA_TSTP_STP_SZGEMBondConversionReg = 'J';
	///���ڿ羳ETF
	const char TORA_TSTP_STP_SZCrossBorderETF = 'K';
	///���ڻƽ�ETF
	const char TORA_TSTP_STP_SZGoldETF = 'L';
	///�����ֽ�ծȯETF
	const char TORA_TSTP_STP_SZCashBondETF = 'M';
	///���ڵ��г���ƱETF
	const char TORA_TSTP_STP_SZSingleMarketStockETF = 'N';
	///���ڵ��г�ʵ��ծȯETF
	const char TORA_TSTP_STP_SZSingleMarketBondETF = 'O';
	///���ڻ���ETF
	const char TORA_TSTP_STP_SZMonetaryFundETF = 'P';
	///���ڴ�ҵ��
	const char TORA_TSTP_STP_SZGEM = 'Q';
	///���ڴ�ҵ��ɽ���ծ
	const char TORA_TSTP_STP_SZGEMExchangeableBond = 'R';
	///���ڴ�ҵ��ɽ���ծ(ע����)
	const char TORA_TSTP_STP_SZGEMExchangeableBondReg = 'S';
	///���ڱ�׼ȯ
	const char TORA_TSTP_STP_SZStandard = 'T';
	///������Ѻʽ�ع�
	const char TORA_TSTP_STP_SZRepo = 'U';
	///���ڷ��ʽ����
	const char TORA_TSTP_STP_SZCEFund = 'V';
	///���ڿ���ʽ����
	const char TORA_TSTP_STP_SZOEFund = 'W';
	///���ڿ羳����ʽ����
	const char TORA_TSTP_STP_SZCrossBorderOEFund = 'X';
	///���ڿ��г���ƱETF
	const char TORA_TSTP_STP_SZCrossMarketStockETF = 'Y';
	///���ڱ�׼LOF����
	const char TORA_TSTP_STP_SZLOF = 'Z';
	///���ڿ羳LOF����
	const char TORA_TSTP_STP_SZCrossBorderLOF = '1';
	///���ڴ�ͳ�ּ�ĸ����
	const char TORA_TSTP_STP_SZMontherStructFund = '2';
	///���ڴ�ͳ�ּ��ӻ���
	const char TORA_TSTP_STP_SZSubStructFund = '3';
	///���ڿ羳�ּ�ĸ����
	const char TORA_TSTP_STP_SZMontherCrossBorderStructFund = '4';
	///���ڿ羳�ּ��ӻ���
	const char TORA_TSTP_STP_SZSubCrossBorderStructFund = '5';
	///���ڿɽ���ծ
	const char TORA_TSTP_STP_SZExchangeableBond = '6';
	///���ڴ�ҵ���תծ
	const char TORA_TSTP_STP_SZGEMBondConversion = '7';
	///���ͨ�۹�ծȯ
	const char TORA_TSTP_STP_SZSEHKBond = '8';
	///���ͨ�۹�һ����Ȩ֤
	const char TORA_TSTP_STP_SZSEHKBasketWarrant = '9';
	///���ͨ�۹ɹɱ�
	const char TORA_TSTP_STP_SZSEHKEquity = 'y';
	///���ͨ�۹�����
	const char TORA_TSTP_STP_SZSEHKTrust = 'z';
	///���ͨ�۹�Ȩ֤
	const char TORA_TSTP_STP_SZSEHKWarrant = '#';
	///�Ϻ�����ƾ֤
	const char TORA_TSTP_STP_SHCDR = '+';
	///�Ϻ��ƴ����Ʊ
	const char TORA_TSTP_STP_SHKC = '*';
	///�ƴ����Ʒ�����к�ǰ5�������գ�
	const char TORA_TSTP_STP_SHKC1 = '^';
	///�Ϻ��ƴ������ƾ֤
	const char TORA_TSTP_STP_SHKCCDR = '-';
	///�������塢��С�崴����ҵ��Ʊ�����ƾ֤
	const char TORA_TSTP_STP_SZCDR = 'k';
	///���ڴ�ҵ�崴����ҵ��Ʊ�����ƾ֤
	const char TORA_TSTP_STP_SZGEMCDR = 'l';
	///���ڴ�ҵ�崴����ҵ��Ʊ�����ƾ֤(ע����)
	const char TORA_TSTP_STP_SZGEMCDRReg = 'm';
	///������Ʒ�ڻ�ETF
	const char TORA_TSTP_STP_SZCommFuturesETF = 'n';
	///���ڻ�����ʩ����
	const char TORA_TSTP_STP_SZInfrastructureFund = '=';
	///�Ϻ��ƴ���ETF
	const char TORA_TSTP_STP_SHKCETF = '@';
	///�Ϻ��ƴ���LOF
	const char TORA_TSTP_STP_SHKCLOF = '%';
	///�Ϻ��ƴ����תծ
	const char TORA_TSTP_STP_SHKCBondConversion = '$';
	///�Ϻ������תծ
	const char TORA_TSTP_STP_SHOrientedConversionBond = '<';
	///���ڶ����תծ
	const char TORA_TSTP_STP_SZOrientedConversionBond = '>';
	///�Ϻ�������ʩ����
	const char TORA_TSTP_STP_SHInfrastructureFund = '~';
	///������Ʊ
	const char TORA_TSTP_STP_BJStock = '[';
	///�Ϻ��ƴ���ɽ���ծ
	const char TORA_TSTP_STP_SHKCExchangeableBond = ']';
	typedef char TTORATstpSecurityTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOrderUnitType��һ���걨��λ����
	/////////////////////////////////////////////////////////////////////////
	///��
	const char TORA_TSTP_OUT_Shou = '0';
	///��
	const char TORA_TSTP_OUT_Gu = '1';
	///��
	const char TORA_TSTP_OUT_Fen = '2';
	///��
	const char TORA_TSTP_OUT_Zhang = '3';
	typedef char TTORATstpOrderUnitType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTradingUnitType��һ�����׵�λ����
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpTradingUnitType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpPriceTickType��һ����С�䶯��λ����
	/////////////////////////////////////////////////////////////////////////
	typedef double TTORATstpPriceTickType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpParValueType��һ����ֵ����
	/////////////////////////////////////////////////////////////////////////
	typedef double TTORATstpParValueType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpSecurityStatusType��һ��֤ȯ״̬����
	/////////////////////////////////////////////////////////////////////////
	#ifdef WINDOWS
	typedef __int64 TTORATstpSecurityStatusType;
	#else
	typedef long long int TTORATstpSecurityStatusType;
	#endif
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpInterestType��һ����Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef double TTORATstpInterestType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpLargeVolumeType��һ�������������
	/////////////////////////////////////////////////////////////////////////
	typedef double TTORATstpLargeVolumeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpIssueModeType��һ�����з�ʽ����
	/////////////////////////////////////////////////////////////////////////
	///��ֵ���۷�ʽ
	const char TORA_TSTP_IMO_ValueLimit = '0';
	///�������۷�ʽ
	const char TORA_TSTP_IMO_AddIssue = '1';
	///�����깺��ʽ
	const char TORA_TSTP_IMO_Credit = '2';
	///���۷���(������)
	const char TORA_TSTP_IMO_Fixed = '3';
	///���۷���(������)
	const char TORA_TSTP_IMO_Auction = '4';
	typedef char TTORATstpIssueModeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpLoginLimitType��һ����¼��������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpLoginLimitType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpLoginStatusType��һ����¼״̬����
	/////////////////////////////////////////////////////////////////////////
	///����
	const char TORA_TSTP_USTS_Enabled = '1';
	///����
	const char TORA_TSTP_USTS_Disabled = '2';
	///����
	const char TORA_TSTP_USTS_Locked = '4';
	typedef char TTORATstpLoginStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpInvestorTypeType��һ��Ͷ������������
	/////////////////////////////////////////////////////////////////////////
	///����
	const char TORA_TSTP_CT_Person = '0';
	///����
	const char TORA_TSTP_CT_Company = '1';
	///��Ӫ
	const char TORA_TSTP_CT_SelfOperate = '5';
	///����
	const char TORA_TSTP_CT_Test = '#';
	typedef char TTORATstpInvestorTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpInvestorNameType��һ��Ͷ������������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpInvestorNameType[81];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpIdCardTypeType��һ��֤����������
	/////////////////////////////////////////////////////////////////////////
	///��֯��������
	const char TORA_TSTP_ICT_EID = '0';
	///�й��������֤
	const char TORA_TSTP_ICT_IDCard = '1';
	///����֤
	const char TORA_TSTP_ICT_OfficerIDCard = '2';
	///����֤
	const char TORA_TSTP_ICT_PoliceIDCard = '3';
	///ʿ��֤
	const char TORA_TSTP_ICT_SoldierIDCard = '4';
	///���ڲ�
	const char TORA_TSTP_ICT_HouseholdRegister = '5';
	///����
	const char TORA_TSTP_ICT_Passport = '6';
	///̨��֤
	const char TORA_TSTP_ICT_TaiwanCompatriotIDCard = '7';
	///����֤
	const char TORA_TSTP_ICT_HomeComingCard = '8';
	///Ӫҵִ�պ�
	const char TORA_TSTP_ICT_LicenseNo = '9';
	///˰��ǼǺ�/������˰ID
	const char TORA_TSTP_ICT_TaxNo = 'A';
	///�۰ľ��������ڵ�ͨ��֤
	const char TORA_TSTP_ICT_HMMainlandTravelPermit = 'B';
	///̨�����������½ͨ��֤
	const char TORA_TSTP_ICT_TwMainlandTravelPermit = 'C';
	///����
	const char TORA_TSTP_ICT_DrivingLicense = 'D';
	///�����籣ID
	const char TORA_TSTP_ICT_SocialID = 'F';
	///�������֤
	const char TORA_TSTP_ICT_LocalID = 'G';
	///��ҵ�Ǽ�֤
	const char TORA_TSTP_ICT_BusinessRegistration = 'H';
	///�۰������Ծ������֤
	const char TORA_TSTP_ICT_HKMCIDCard = 'I';
	///���п������֤
	const char TORA_TSTP_ICT_AccountsPermits = 'J';
	///����֤��
	const char TORA_TSTP_ICT_OtherCard = 'x';
	typedef char TTORATstpIdCardTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpIdCardNoType��һ��֤���������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpIdCardNoType[51];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTradingStatusType��һ������״̬����
	/////////////////////////////////////////////////////////////////////////
	///����
	const char TORA_TSTP_TS_Normal = '1';
	///����ǿƽ
	const char TORA_TSTP_TS_ForceClosing = '2';
	///�쳣
	const char TORA_TSTP_TS_Exception = '3';
	typedef char TTORATstpTradingStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOperwaysType��һ��ί�з�ʽ�ϼ�����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpOperwaysType[41];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpMobileType��һ���ֻ�����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpMobileType[41];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTelephoneType��һ����ϵ�绰����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpTelephoneType[41];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpEmailType��һ��Email����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpEmailType[61];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpFaxType��һ����������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpFaxType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpAddressType��һ��ͨѶ��ַ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpAddressType[101];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpZipCodeType��һ��������������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpZipCodeType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpProfInvestorTypeType��һ��רҵͶ�����������
	/////////////////////////////////////////////////////////////////////////
	///��רҵͶ����
	const char TORA_TSTP_PIT_Normal = '0';
	///רҵͶ����
	const char TORA_TSTP_PIT_Professional = '1';
	typedef char TTORATstpProfInvestorTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpPlanTypeType��һ���ײ���������
	/////////////////////////////////////////////////////////////////////////
	///��׼�ײ�
	const char TORA_TSTP_PLTP_Standard = '0';
	///�����ײ�
	const char TORA_TSTP_PLTP_Smart = '1';
	///Ԥ��1
	const char TORA_TSTP_PLTP_Reserve1 = '2';
	///Ԥ��2
	const char TORA_TSTP_PLTP_Reserve2 = '3';
	///δ�������ͣ��ڲ�ʹ�ã�
	const char TORA_TSTP_PLTP_Undefined = '4';
	typedef char TTORATstpPlanTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpRemarkType��һ����ע����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpRemarkType[513];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpShareholderIDTypeType��һ���ɶ��˻���������
	/////////////////////////////////////////////////////////////////////////
	///Ͷ��
	const char TORA_TSTP_SIDT_Speculation = '1';
	///����
	const char TORA_TSTP_SIDT_Arbitrage = '2';
	///�ױ�
	const char TORA_TSTP_SIDT_Hedge = '3';
	///��ͨ
	const char TORA_TSTP_SIDT_Normal = 'a';
	///����
	const char TORA_TSTP_SIDT_Credit = 'b';
	///����Ʒ
	const char TORA_TSTP_SIDT_Derivatives = 'c';
	typedef char TTORATstpShareholderIDTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCancelOrderStatusType��һ������״̬����
	/////////////////////////////////////////////////////////////////////////
	///Ԥ��
	const char TORA_TSTP_CORDS_Cached = '0';
	///���ύ
	const char TORA_TSTP_CORDS_Submitted = '1';
	///�ɹ�
	const char TORA_TSTP_CORDS_Success = '2';
	///�ܾ�
	const char TORA_TSTP_CORDS_Rejected = '3';
	typedef char TTORATstpCancelOrderStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCancelOrderTypeType��һ��������������
	/////////////////////////////////////////////////////////////////////////
	///��ͨ����
	const char TORA_TSTP_CORDT_Normal = '0';
	///ǿ�Ƴ���
	const char TORA_TSTP_CORDT_Force = '1';
	///Ԥ�񳷵�
	const char TORA_TSTP_CORDT_Cache = '2';
	///ͨ������
	const char TORA_TSTP_CORDT_Board = '3';
	typedef char TTORATstpCancelOrderTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpAccountTypeType��һ���ʽ��˻���������
	/////////////////////////////////////////////////////////////////////////
	///��ͨ
	const char TORA_TSTP_FAT_Normal = '1';
	///����
	const char TORA_TSTP_FAT_Credit = '2';
	///����Ʒ
	const char TORA_TSTP_FAT_Derivatives = '3';
	typedef char TTORATstpAccountTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpBizClassType��һ��ҵ���������
	/////////////////////////////////////////////////////////////////////////
	///����
	const char TORA_TSTP_BC_Buy = '0';
	///����
	const char TORA_TSTP_BC_Sell = '1';
	///ETF�깺
	const char TORA_TSTP_BC_ETFPur = '2';
	///ETF���
	const char TORA_TSTP_BC_ETFRed = '3';
	///�¹��깺
	const char TORA_TSTP_BC_SubscribingShares = '4';
	///���ع�
	const char TORA_TSTP_BC_Repurchase = '5';
	///��ع�
	const char TORA_TSTP_BC_ReverseRepur = '6';
	///����ʽ�����깺
	const char TORA_TSTP_BC_OeFundPur = '8';
	///����ʽ�������
	const char TORA_TSTP_BC_OeFundRed = '9';
	///����Ʒ����
	const char TORA_TSTP_BC_CollateralIn = 'a';
	///����Ʒ����
	const char TORA_TSTP_BC_CollateralOut = 'b';
	///��Ѻ���
	const char TORA_TSTP_BC_PledgeIn = 'd';
	///��Ѻ����
	const char TORA_TSTP_BC_PledgeOut = 'e';
	///�����ծ
	const char TORA_TSTP_BC_Rationed = 'f';
	///����ʽ������
	const char TORA_TSTP_BC_Split = 'g';
	///����ʽ����ϲ�
	const char TORA_TSTP_BC_Merge = 'h';
	///��������
	const char TORA_TSTP_BC_CreditBuy = 'i';
	///��ȯ����
	const char TORA_TSTP_BC_CreditSell = 'j';
	///��ȯ����
	const char TORA_TSTP_BC_SellRepay = 'k';
	///��ȯ��ȯ
	const char TORA_TSTP_BC_BuyRepay = 'l';
	///��ȯ��ת
	const char TORA_TSTP_BC_RepayTransfer = 'm';
	///��ȯ��ת
	const char TORA_TSTP_BC_SurplusTransfer = 'n';
	///Դȯ��ת
	const char TORA_TSTP_BC_SourceTransfer = 'o';
	///��ȯǿƽ����(�ڲ�ʹ��)
	const char TORA_TSTP_BC_ForceSellRepay = 'p';
	///��ȯǿƽ��ȯ(�ڲ�ʹ��)
	const char TORA_TSTP_BC_ForceBuyRepay = 'q';
	///��ծչ��(�ڲ�ʹ��)
	const char TORA_TSTP_BC_DebtExtend = 'r';
	///ת�й�
	const char TORA_TSTP_BC_CustodyTransfer = 's';
	///ծȯת��
	const char TORA_TSTP_BC_BondConvertStock = 't';
	///ծȯ����
	const char TORA_TSTP_BC_BondPutback = 'u';
	///ETFʵ���깺
	const char TORA_TSTP_BC_ETFOtPur = 'v';
	///ETFʵ�����
	const char TORA_TSTP_BC_ETFOtRed = 'w';
	///���۳���
	const char TORA_TSTP_BC_PutbackRelieve = 'x';
	typedef char TTORATstpBizClassType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpBrokerageTypeType��һ��Ӷ����������
	/////////////////////////////////////////////////////////////////////////
	///ëӶ��
	const char TORA_TSTP_BT_Gross = '0';
	///��Ӷ��
	const char TORA_TSTP_BT_Net = '1';
	typedef char TTORATstpBrokerageTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpLongVolumeType��һ��LongVolume����
	/////////////////////////////////////////////////////////////////////////
	#ifdef WINDOWS
	typedef __int64 TTORATstpLongVolumeType;
	#else
	typedef long long int TTORATstpLongVolumeType;
	#endif
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpOperateSourceType��һ��������Դ����
	/////////////////////////////////////////////////////////////////////////
	///ʵʱ�ϳ�
	const char TORA_TSTP_OPRTSRC_DBCommand = '0';
	///API����
	const char TORA_TSTP_OPRTSRC_SyncAPI = '1';
	///�Զ�����
	const char TORA_TSTP_OPRTSRC_AutoTrigger = '2';
	///API�����ϳ�
	const char TORA_TSTP_OPRTSRC_EmergencyAPI = '3';
	typedef char TTORATstpOperateSourceType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpExternalSerialType��һ���ⲿ��ˮ������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpExternalSerialType[65];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpBizRefType��һ��ҵ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpBizRefType[21];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpIPONumberIDType��һ���¹��깺��ɺ�����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpIPONumberIDType[31];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpSpecPrivilegeTypeType��һ������Ȩ���������
	/////////////////////////////////////////////////////////////////////////
	///��ҵ��
	const char TORA_TSTP_SPLT_GEM = '0';
	///���վ�ʾ��
	const char TORA_TSTP_SPLT_RiskWarning = '1';
	///���������
	const char TORA_TSTP_SPLT_Delisting = '2';
	///�۹�ͨ
	const char TORA_TSTP_SPLT_SZSEHK = '3';
	///�ƴ���
	const char TORA_TSTP_SPLT_SHKC = '4';
	///��ҵ��ע����
	const char TORA_TSTP_SPLT_GEMRegistration = '5';
	///�ּ�����
	const char TORA_TSTP_SPLT_StructFund = '6';
	///��תծ
	const char TORA_TSTP_SPLT_ConvertBond = '7';
	///������ʩ����
	const char TORA_TSTP_SPLT_InfrastructureFund = '8';
	///�����תծ
	const char TORA_TSTP_SPLT_OrientedConvertBond = '9';
	///��������Ʊ
	const char TORA_TSTP_SPLT_BJStock = 'a';
	///���彻��
	const char TORA_TSTP_SPLT_Main = 'b';
	///����������תծ
	const char TORA_TSTP_SPLT_DelConvertBond = 'c';
	typedef char TTORATstpSpecPrivilegeTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpCreRedTypeType��һ��������������
	/////////////////////////////////////////////////////////////////////////
	///��ͨ����
	const char TORA_TSTP_CRT_IS = '0';
	///ʵ������
	const char TORA_TSTP_CRT_OS = '1';
	typedef char TTORATstpCreRedTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpETFCurrenceReplaceStatusType��һ��ETF�ֽ������־����
	/////////////////////////////////////////////////////////////////////////
	///��ֹ�ֽ����
	const char TORA_TSTP_ETFCTSTAT_Forbidden = '0';
	///�����ֽ����
	const char TORA_TSTP_ETFCTSTAT_Allow = '1';
	///�����ֽ����
	const char TORA_TSTP_ETFCTSTAT_Force = '2';
	///�����˲��ֽ����
	const char TORA_TSTP_ETFCTSTAT_CBAllow = '3';
	///���б����ֽ����
	const char TORA_TSTP_ETFCTSTAT_CBForce = '4';
	typedef char TTORATstpETFCurrenceReplaceStatusType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpUUPICType��һ��ͨ��ͳһ����ʶ��������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpUUPICType[16];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpPriceTickIDType��һ���۲�Ʒ������
	/////////////////////////////////////////////////////////////////////////
	///�ɱ�֤ȯ
	const char TORA_TSTP_PTID_Stock = '0';
	///ծ��֤ȯ
	const char TORA_TSTP_PTID_Bond = '1';
	///��Ʊ��Ȩ
	const char TORA_TSTP_PTID_Option = '2';
	///��������
	const char TORA_TSTP_PTID_Fund = '3';
	typedef char TTORATstpPriceTickIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpPriceTickGroupIDType��һ���۲��������
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpPriceTickGroupIDType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpPriceTickTypeType��һ���۲��������
	/////////////////////////////////////////////////////////////////////////
	///�۸�������
	const char TORA_TSTP_PPT_LimitPrice = '0';
	///�۲���
	const char TORA_TSTP_PPT_PriceTick = '1';
	typedef char TTORATstpPriceTickTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpFundTypeType��һ��������������
	/////////////////////////////////////////////////////////////////////////
	///��׼LOF
	const char TORA_TSTP_FUT_Normal = '0';
	///�ּ�ĸ����
	const char TORA_TSTP_FUT_Mother = '1';
	///�ּ��ӻ���
	const char TORA_TSTP_FUT_Sub = '2';
	typedef char TTORATstpFundTypeType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpNodeInfoType��һ���ڵ���Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpNodeInfoType[33];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpFensVerType��һ���汾������
	/////////////////////////////////////////////////////////////////////////
	typedef short TTORATstpFensVerType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpFensEnvIDType��һ�������������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpFensEnvIDType[13];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpFensNodeIDType��һ���ڵ�������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpFensNodeIDType[11];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpFensUserIDType��һ���û���������
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpFensUserIDType[16];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpClientInfoType��һ���ն���Ϣ����
	/////////////////////////////////////////////////////////////////////////
	typedef char TTORATstpClientInfoType[65];
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpPortType��һ���˿ں�����
	/////////////////////////////////////////////////////////////////////////
	typedef int TTORATstpPortType;
	
	/////////////////////////////////////////////////////////////////////////
	/// TTORATstpTradeCommModeType��һ������ͨѶģʽ����
	/////////////////////////////////////////////////////////////////////////
	///TCPģʽ
	const char TORA_TSTP_TCM_TCP = '0';
	///UDPģʽ
	const char TORA_TSTP_TCM_UDP = '1';
	///PROXYģʽ
	const char TORA_TSTP_TCM_PROXY = '2';
	///sf����tcpdirectģʽ-TCP
	const char TORA_TSTP_TCM_TCPDIRECT = '3';
	typedef char TTORATstpTradeCommModeType;
	
}
#endif // TORATSTPUSERAPIDATATYPE_H__