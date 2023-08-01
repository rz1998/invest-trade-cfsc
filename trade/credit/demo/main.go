package main

import (
	"fmt"
	"github.com/axgle/mahonia"
	credit "github.com/rz1998/invest-trade-cfsc/trade/credit"
	"github.com/zeromicro/go-zero/core/logx"
	"reflect"
	"strings"
	"sync/atomic"
)

// 交易系统错误通知
func isErrorRspInfo(pRspInfo credit.CTORATstpRspInfoField) bool {
	rspInfo := fmt.Sprintf("%v", pRspInfo)
	// 容错处理 pRspInfo ，部分响应函数中，pRspInfo 为 0
	if rspInfo == "0" {
		return false
	} else {
		// 如果ErrorID != 0, 说明收到了错误的响应
		bResult := (pRspInfo.GetErrorID() != 0)
		return bResult
	}
}

// 打印c对象的各个变量
func stringStruct(arg interface{}) string {
	if fmt.Sprintf("%v", arg) == "0" {
		return ""
	}
	typeArg := reflect.TypeOf(arg)
	sb := strings.Builder{}
	sb.WriteString(fmt.Sprintf("%s ", typeArg.Name()))
	desDecoder := mahonia.NewDecoder("gbk")
	val := []reflect.Value{reflect.ValueOf(arg)}
	for i := 0; i < typeArg.NumMethod(); i++ {
		method := typeArg.Method(i)
		if method.Name[:3] == "Get" {
			rtn := method.Func.Call(val)[0]
			if len(fmt.Sprintf("%v", rtn)) > 0 {
				if rtn.Type().Name() == "string" {
					_, resBytes, _ := desDecoder.Translate([]byte(rtn.String()), true)
					sb.WriteString(fmt.Sprintf("%s:%s,", method.Name[3:], resBytes))
				} else {
					sb.WriteString(fmt.Sprintf("%s:%v,", method.Name[3:], rtn))
				}
			}
		}
	}
	return sb.String()
}

type SpiCredit struct {
	api   credit.CTORATstpTraderApi
	count *atomic.Int32
}

func (spi *SpiCredit) OnFrontConnected() {
	logx.Infof("%s succedd", "OnFrontConnected")
	spi.count = &atomic.Int32{}
	reqUserLogin := credit.NewCTORATstpReqUserLoginField()
	reqUserLogin.SetLogInAccountType(credit.GetTORA_TSTP_LACT_UserID())
	reqUserLogin.SetLogInAccount("")
	reqUserLogin.SetPassword("")
	reqUserLogin.SetUserProductInfo("demogo")
	ret := spi.api.ReqUserLogin(reqUserLogin, int(spi.count.Add(1)))
	if ret != 0 {
		logx.Errorf("%s failed %d", "OnFrontConnected", ret)
	}
}
func (spi *SpiCredit) OnFrontDisconnected(arg2 int) {
	logx.Infof("%s %d", "OnFrontDisconnected", arg2)

}
func (spi *SpiCredit) OnRspError(arg2 credit.CTORATstpRspInfoField, arg3 int, arg4 bool) {
	logx.Infof("%s %s %d %t", "OnRspError", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspGetConnectionInfo(arg2 credit.CTORATstpConnectionInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspGetConnectionInfo", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspUserLogin(arg2 credit.CTORATstpRspUserLoginField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspUserLogin", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspUserLogout(arg2 credit.CTORATstpUserLogoutField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspUserLogout", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspUserPasswordUpdate(arg2 credit.CTORATstpUserPasswordUpdateField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspUserPasswordUpdate", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspInputDeviceSerial(arg2 credit.CTORATstpRspInputDeviceSerialField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspInputDeviceSerial", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspOrderInsert(arg2 credit.CTORATstpInputOrderField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspOrderInsert", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRtnOrder(arg2 credit.CTORATstpOrderField) {
	logx.Infof("%s %s", "OnRtnOrder", stringStruct(arg2))

}
func (spi *SpiCredit) OnErrRtnOrderInsert(arg2 credit.CTORATstpInputOrderField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnOrderInsert", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRtnTrade(arg2 credit.CTORATstpTradeField) {
	logx.Infof("%s %s", "OnRtnTrade", stringStruct(arg2))

}
func (spi *SpiCredit) OnRspOrderAction(arg2 credit.CTORATstpInputOrderActionField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspOrderAction", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnErrRtnOrderAction(arg2 credit.CTORATstpInputOrderActionField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnOrderAction", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspCondOrderInsert(arg2 credit.CTORATstpInputCondOrderField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspCondOrderInsert", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRtnCondOrder(arg2 credit.CTORATstpConditionOrderField) {
	logx.Infof("%s %s", "OnRtnCondOrder", stringStruct(arg2))

}
func (spi *SpiCredit) OnErrRtnCondOrderInsert(arg2 credit.CTORATstpInputCondOrderField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnCondOrderInsert", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspCondOrderAction(arg2 credit.CTORATstpInputCondOrderActionField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspCondOrderAction", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnErrRtnCondOrderAction(arg2 credit.CTORATstpInputCondOrderActionField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnCondOrderAction", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRtnMarketStatus(arg2 credit.CTORATstpMarketStatusField) {
	logx.Infof("%s %s", "OnRtnMarketStatus", stringStruct(arg2))

}
func (spi *SpiCredit) OnRspTransferFund(arg2 credit.CTORATstpInputTransferFundField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspTransferFund", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnErrRtnTransferFund(arg2 credit.CTORATstpInputTransferFundField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnTransferFund", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRtnTransferFund(arg2 credit.CTORATstpTransferFundField) {
	logx.Infof("%s %s", "OnRtnTransferFund", stringStruct(arg2))

}
func (spi *SpiCredit) OnRspTransferPosition(arg2 credit.CTORATstpInputTransferPositionField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspTransferPosition", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnErrRtnTransferPosition(arg2 credit.CTORATstpInputTransferPositionField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnTransferPosition", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRtnTransferPosition(arg2 credit.CTORATstpTransferPositionField) {
	logx.Infof("%s %s", "OnRtnTransferPosition", stringStruct(arg2))

}
func (spi *SpiCredit) OnRtnPeripheryTransferPosition(arg2 credit.CTORATstpPeripheryTransferPositionField) {
	logx.Infof("%s %s", "OnRtnPeripheryTransferPosition", stringStruct(arg2))

}
func (spi *SpiCredit) OnRtnPeripheryTransferFund(arg2 credit.CTORATstpPeripheryTransferFundField) {
	logx.Infof("%s %s", "OnRtnPeripheryTransferFund", stringStruct(arg2))

}
func (spi *SpiCredit) OnRspInquiryJZFund(arg2 credit.CTORATstpRspInquiryJZFundField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspInquiryJZFund", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspInquiryBankAccountFund(arg2 credit.CTORATstpRspInquiryBankAccountFundField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspInquiryBankAccountFund", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRtnTradingNotice(arg2 credit.CTORATstpTradingNoticeField) {
	logx.Infof("%s %s", "OnRtnTradingNotice", stringStruct(arg2))

}
func (spi *SpiCredit) OnRspInquiryMaxOrderVolume(arg2 credit.CTORATstpRspInquiryMaxOrderVolumeField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspInquiryMaxOrderVolume", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspInquiryStockPosition(arg2 credit.CTORATstpRspInquiryStockPositionField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspInquiryStockPosition", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspCreditTransfer(arg2 credit.CTORATstpInputCreditTransferField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspCreditTransfer", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRtnCreditTransfer(arg2 credit.CTORATstpCreditTransferField) {
	logx.Infof("%s %s", "OnRtnCreditTransfer", stringStruct(arg2))

}
func (spi *SpiCredit) OnErrRtnCreditTransfer(arg2 credit.CTORATstpInputCreditTransferField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnCreditTransfer", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspCancelCreditTransfer(arg2 credit.CTORATstpInputCancelCreditTransferField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspCancelCreditTransfer", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnErrRtnCancelCreditTransfer(arg2 credit.CTORATstpInputCancelCreditTransferField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnCancelCreditTransfer", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspDebtExtend(arg2 credit.CTORATstpInputDebtExtendField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspDebtExtend", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRtnDebtExtend(arg2 credit.CTORATstpDebtExtendField) {
	logx.Infof("%s %s", "OnRtnDebtExtend", stringStruct(arg2))

}
func (spi *SpiCredit) OnErrRtnDebtExtend(arg2 credit.CTORATstpInputDebtExtendField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnDebtExtend", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspCancelDebtExtend(arg2 credit.CTORATstpInputCancelDebtExtendField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspCancelDebtExtend", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnErrRtnCancelDebtExtend(arg2 credit.CTORATstpInputCancelDebtExtendField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnErrRtnCancelDebtExtend", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspChangePlanType(arg2 credit.CTORATstpRspChangePlanTypeField, arg3 credit.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s %s %d", "OnRspChangePlanType", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiCredit) OnRspQryExchange(arg2 credit.CTORATstpExchangeField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryExchange", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQrySecurity(arg2 credit.CTORATstpSecurityField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQrySecurity", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryIPOInfo(arg2 credit.CTORATstpIPOInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryIPOInfo", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryUser(arg2 credit.CTORATstpUserField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryUser", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestor(arg2 credit.CTORATstpInvestorField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestor", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryShareholderAccount(arg2 credit.CTORATstpShareholderAccountField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryShareholderAccount", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryRationalInfo(arg2 credit.CTORATstpRationalInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryRationalInfo", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryOrder(arg2 credit.CTORATstpOrderField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryOrder", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryOrderAction(arg2 credit.CTORATstpOrderActionField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryOrderAction", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryTrade(arg2 credit.CTORATstpTradeField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryTrade", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryTradingAccount(arg2 credit.CTORATstpTradingAccountField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryTradingAccount", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryPosition(arg2 credit.CTORATstpPositionField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryPosition", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryTradingFee(arg2 credit.CTORATstpTradingFeeField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryTradingFee", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorTradingFee(arg2 credit.CTORATstpInvestorTradingFeeField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorTradingFee", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryIPOQuota(arg2 credit.CTORATstpIPOQuotaField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryIPOQuota", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryOrderFundDetail(arg2 credit.CTORATstpOrderFundDetailField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryOrderFundDetail", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryFundTransferDetail(arg2 credit.CTORATstpFundTransferDetailField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryFundTransferDetail", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryPositionTransferDetail(arg2 credit.CTORATstpPositionTransferDetailField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryPositionTransferDetail", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryPeripheryPositionTransferDetail(arg2 credit.CTORATstpPeripheryPositionTransferDetailField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryPeripheryPositionTransferDetail", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryPeripheryFundTransferDetail(arg2 credit.CTORATstpPeripheryFundTransferDetailField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryPeripheryFundTransferDetail", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryBondConversionInfo(arg2 credit.CTORATstpBondConversionInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryBondConversionInfo", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryBondPutbackInfo(arg2 credit.CTORATstpBondPutbackInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryBondPutbackInfo", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorCondOrderLimitParam(arg2 credit.CTORATstpInvestorCondOrderLimitParamField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorCondOrderLimitParam", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryConditionOrder(arg2 credit.CTORATstpConditionOrderField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryConditionOrder", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCondOrderAction(arg2 credit.CTORATstpCondOrderActionField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCondOrderAction", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryTradingNotice(arg2 credit.CTORATstpTradingNoticeField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryTradingNotice", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryIPONumberResult(arg2 credit.CTORATstpIPONumberResultField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryIPONumberResult", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryIPOMatchNumberResult(arg2 credit.CTORATstpIPOMatchNumberResultField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryIPOMatchNumberResult", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryShareholderSpecPrivilege(arg2 credit.CTORATstpShareholderSpecPrivilegeField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryShareholderSpecPrivilege", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCreditTransfer(arg2 credit.CTORATstpCreditTransferField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCreditTransfer", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCancelCreditTransfer(arg2 credit.CTORATstpCancelCreditTransferField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCancelCreditTransfer", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQrySurplusPosition(arg2 credit.CTORATstpSurplusPositionField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQrySurplusPosition", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCreditDiscountCouponInfo(arg2 credit.CTORATstpCreditDiscountCouponInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCreditDiscountCouponInfo", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorCreditDiscountCoupon(arg2 credit.CTORATstpInvestorCreditDiscountCouponField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorCreditDiscountCoupon", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryWhiteListSecurityCtrl(arg2 credit.CTORATstpWhiteListSecurityCtrlField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryWhiteListSecurityCtrl", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCreditRatingInfo(arg2 credit.CTORATstpCreditRatingInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCreditRatingInfo", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorCreditInfo(arg2 credit.CTORATstpInvestorCreditInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorCreditInfo", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQrySecurityFairPrice(arg2 credit.CTORATstpSecurityFairPriceField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQrySecurityFairPrice", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorCollateralRiskParam(arg2 credit.CTORATstpInvestorCollateralRiskParamField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorCollateralRiskParam", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorCreditInterestRate(arg2 credit.CTORATstpInvestorCreditInterestRateField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorCreditInterestRate", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorCreditBenefitInterestRate(arg2 credit.CTORATstpInvestorCreditBenefitInterestRateField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorCreditBenefitInterestRate", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCreditDebt(arg2 credit.CTORATstpCreditDebtField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCreditDebt", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCreditFundQuota(arg2 credit.CTORATstpCreditFundQuotaField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCreditFundQuota", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCreditPositionQuota(arg2 credit.CTORATstpCreditPositionQuotaField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCreditPositionQuota", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCreditRepayment(arg2 credit.CTORATstpCreditRepaymentField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCreditRepayment", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorCreditMarginRate(arg2 credit.CTORATstpInvestorCreditMarginRateField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorCreditMarginRate", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorCollateralConversionRate(arg2 credit.CTORATstpInvestorCollateralConversionRateField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorCollateralConversionRate", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryShareholderSecurityBlackList(arg2 credit.CTORATstpShareholderSecurityBlackListField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryShareholderSecurityBlackList", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryBrokerCreditSecurity(arg2 credit.CTORATstpBrokerCreditSecurityField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryBrokerCreditSecurity", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryDebtExtend(arg2 credit.CTORATstpDebtExtendField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryDebtExtend", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCancelDebtExtend(arg2 credit.CTORATstpCancelDebtExtendField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCancelDebtExtend", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQrySecurityCirculateAssetParam(arg2 credit.CTORATstpSecurityCirculateAssetParamField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQrySecurityCirculateAssetParam", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQrySecurityCirculateAssetInfo(arg2 credit.CTORATstpSecurityCirculateAssetInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQrySecurityCirculateAssetInfo", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorRealTimeCreditInfo(arg2 credit.CTORATstpInvestorRealTimeCreditInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorRealTimeCreditInfo", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryInvestorBusinessScaleConcentrationParam(arg2 credit.CTORATstpInvestorBusinessScaleConcentrationParamField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryInvestorBusinessScaleConcentrationParam", stringStruct(arg2), arg3, arg4, arg5)

}
func (spi *SpiCredit) OnRspQryCreditPlanInfo(arg2 credit.CTORATstpCreditPlanInfoField, arg3 credit.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s %s %d %t", "OnRspQryCreditPlanInfo", stringStruct(arg2), arg3, arg4, arg5)

}

func main() {
	api := credit.CTORATstpTraderApiCreateTstpTraderApi()
	logx.Infof("CreditTraderApi Version [%s]", credit.CTORATstpTraderApiGetApiVersion())
	api.SubscribePrivateTopic(credit.TORA_TERT_QUICK)
	api.RegisterSpi(credit.NewDirectorCTORATstpTraderSpi(&SpiCredit{
		api: api,
	}))
	api.RegisterFront("tcp://210.14.72.23:4400")
	api.Init()
	select {}
}
