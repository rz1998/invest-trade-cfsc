package main

import (
	"flag"
	"fmt"
	"github.com/axgle/mahonia"
	"github.com/rz1998/invest-trade-cfsc/trade/stock"
	"github.com/rz1998/invest-trade-cfsc/trade/stock/demo/internal/config"
	"github.com/zeromicro/go-zero/core/conf"
	"github.com/zeromicro/go-zero/core/logx"
	"reflect"
	"strings"
	"sync/atomic"
)

// 交易系统错误通知
func isErrorRspInfo(pRspInfo stock.CTORATstpRspInfoField) bool {
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

type SpiTradeStock struct {
	confStock config.ConfStock
	api       stock.CTORATstpTraderApi
	count     atomic.Int32
}

func (spi *SpiTradeStock) OnFrontConnected() {
	logx.Info("OnFrontConnected succeed")
	spi.count = atomic.Int32{}
	reqUserLogin := stock.NewCTORATstpReqUserLoginField()
	reqUserLogin.SetLogInAccount(spi.confStock.UserID)
	reqUserLogin.SetLogInAccountType(stock.GetTORA_TSTP_LACT_UserID())
	reqUserLogin.SetPassword(spi.confStock.Password)
	reqUserLogin.SetUserProductInfo("demoGO")
	ret := spi.api.ReqUserLogin(reqUserLogin, int(spi.count.Add(1)))
	if ret != 0 {
		logx.Errorf("%s %d", "OnFrontConnected", ret)
	}
}
func (spi *SpiTradeStock) OnFrontDisconnected(arg2 int) {
	logx.Infof("%s %d", "OnFrontDisconnected", arg2)

}
func (spi *SpiTradeStock) OnRspError(arg2 stock.CTORATstpRspInfoField, arg3 int, arg4 bool) {
	logx.Infof("%s    %s    %d    %t", "OnRspError", stringStruct(arg2), arg3, arg4)

}
func (spi *SpiTradeStock) OnRspGetConnectionInfo(arg2 stock.CTORATstpConnectionInfoField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspGetConnectionInfo", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspUserLogin(arg2 stock.CTORATstpRspUserLoginField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspUserLogin", stringStruct(arg2), stringStruct(arg3), arg4)
	if arg3.GetErrorID() == 0 {
		logx.Info("login success")

		var ret int

		// 查询合约信息
		logx.Info("qry security")
		qrySecurity := stock.NewCTORATstpQrySecurityField()

		qrySecurity.SetExchangeID(stock.GetTORA_TSTP_EXD_SSE())
		qrySecurity.SetSecurityID("600000")

		ret = spi.api.ReqQrySecurity(qrySecurity, int(spi.count.Add(1)))
		if ret != 0 {
			logx.Errorf("%s failed %d", "ReqQrySecurity", ret)
		}

		// 查询投资者信息
		logx.Info("qry investor")
		qryInvestor := stock.NewCTORATstpQryInvestorField()

		qryInvestor.SetInvestorID(spi.confStock.InvestorID)

		ret = spi.api.ReqQryInvestor(qryInvestor, int(spi.count.Add(1)))
		if ret != 0 {
			logx.Errorf("%s failed %d", "ReqQryInvestor", ret)
		}

		// 查询股东账号
		logx.Info("qry shareHolder")
		qryShareholderAccount := stock.NewCTORATstpQryShareholderAccountField()

		//qryShareholderAccount.SetExchangeID(traderapi.getTORA_TSTP_EXD_SSE())
		qryShareholderAccount.SetInvestorID(spi.confStock.InvestorID)

		ret = spi.api.ReqQryShareholderAccount(qryShareholderAccount, int(spi.count.Add(1)))
		if ret != 0 {
			logx.Errorf("%s failed %d", "ReqQryShareholderAccount", ret)
		}

		// 查询持仓
		logx.Info("qry Position")
		qryPosition := stock.NewCTORATstpQryPositionField()

		qryPosition.SetInvestorID(spi.confStock.InvestorID)
		//qryPosition.SetSecurityID("600000")

		ret = spi.api.ReqQryPosition(qryPosition, int(spi.count.Add(1)))
		if ret != 0 {
			logx.Errorf("%s failed %d", "ReqQryPosition", ret)
		}

		// 查询报单
		logx.Info("qry Order")
		qryOrder := stock.NewCTORATstpQryOrderField()

		//qryOrder.SetSecurityID("600000")
		//qryOrder.SetInsertTimeStart("09:35:00")
		//qryOrder.SetInsertTimeEnd("10:30:00")

		ret = spi.api.ReqQryOrder(qryOrder, int(spi.count.Add(1)))
		if ret != 0 {
			logx.Errorf("%s failed %d", "ReqQryOrder", ret)
		}

		// 请求报单
		inputOrder := stock.NewCTORATstpInputOrderField()

		inputOrder.SetExchangeID(stock.GetTORA_TSTP_EXD_SSE())
		inputOrder.SetSecurityID("600000")
		inputOrder.SetShareholderID(spi.confStock.SSEShareholderID)
		inputOrder.SetDirection(stock.GetTORA_TSTP_D_Buy())
		inputOrder.SetVolumeTotalOriginal(100)
		inputOrder.SetLimitPrice(7.1)
		inputOrder.SetOrderPriceType(stock.GetTORA_TSTP_OPT_LimitPrice())
		inputOrder.SetTimeCondition(stock.GetTORA_TSTP_TC_GFD())
		inputOrder.SetVolumeCondition(stock.GetTORA_TSTP_VC_AV())

		ret = spi.api.ReqOrderInsert(inputOrder, int(spi.count.Add(1)))
		if ret != 0 {
			logx.Errorf("%s failed %d", "ReqOrderInsert", ret)
		}

		// 请求撤单
		inputOrderAction := stock.NewCTORATstpInputOrderActionField()

		inputOrderAction.SetExchangeID(stock.GetTORA_TSTP_EXD_SSE())
		inputOrderAction.SetActionFlag(stock.GetTORA_TSTP_AF_Delete())
		inputOrderAction.SetOrderSysID("110018100000124")

		ret = spi.api.ReqOrderAction(inputOrderAction, int(spi.count.Add(1)))
		if ret != 0 {
			logx.Errorf("%s failed %d", "ReqOrderAction", ret)
		}
	}
}
func (spi *SpiTradeStock) OnRspUserLogout(arg2 stock.CTORATstpUserLogoutField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspUserLogout", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspUserPasswordUpdate(arg2 stock.CTORATstpUserPasswordUpdateField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspUserPasswordUpdate", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspInputDeviceSerial(arg2 stock.CTORATstpRspInputDeviceSerialField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspInputDeviceSerial", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspOrderInsert(arg2 stock.CTORATstpInputOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspOrderInsert", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRtnOrder(arg2 stock.CTORATstpOrderField) {
	logx.Infof("%s    %s", "OnRtnOrder", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnErrRtnOrderInsert(arg2 stock.CTORATstpInputOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnErrRtnOrderInsert", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRtnTrade(arg2 stock.CTORATstpTradeField) {
	logx.Infof("%s    %s", "OnRtnTrade", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnRspOrderAction(arg2 stock.CTORATstpInputOrderActionField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspOrderAction", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnErrRtnOrderAction(arg2 stock.CTORATstpInputOrderActionField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnErrRtnOrderAction", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspCondOrderInsert(arg2 stock.CTORATstpInputCondOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspCondOrderInsert", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRtnCondOrder(arg2 stock.CTORATstpConditionOrderField) {
	logx.Infof("%s    %s", "OnRtnCondOrder", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnErrRtnCondOrderInsert(arg2 stock.CTORATstpInputCondOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnErrRtnCondOrderInsert", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspCondOrderAction(arg2 stock.CTORATstpInputCondOrderActionField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspCondOrderAction", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnErrRtnCondOrderAction(arg2 stock.CTORATstpInputCondOrderActionField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnErrRtnCondOrderAction", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspNegoOrderInsert(arg2 stock.CTORATstpInputNegoOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspNegoOrderInsert", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRtnNegoOrder(arg2 stock.CTORATstpNegoOrderField) {
	logx.Infof("%s    %s", "OnRtnNegoOrder", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnErrRtnNegoOrderInsert(arg2 stock.CTORATstpInputNegoOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnErrRtnNegoOrderInsert", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRtnNegoTrade(arg2 stock.CTORATstpNegoTradeField) {
	logx.Infof("%s    %s", "OnRtnNegoTrade", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnRspNegoOrderAction(arg2 stock.CTORATstpInputNegoOrderActionField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspNegoOrderAction", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnErrRtnNegoOrderAction(arg2 stock.CTORATstpInputNegoOrderActionField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnErrRtnNegoOrderAction", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspOrderInsertEx(arg2 stock.CTORATstpInputOrderExField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspOrderInsertEx", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspOrderActionEx(arg2 stock.CTORATstpInputOrderActionExField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspOrderActionEx", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRtnMarketStatus(arg2 stock.CTORATstpMarketStatusField) {
	logx.Infof("%s    %s", "OnRtnMarketStatus", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnRspTransferFund(arg2 stock.CTORATstpInputTransferFundField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspTransferFund", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnErrRtnTransferFund(arg2 stock.CTORATstpInputTransferFundField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnErrRtnTransferFund", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRtnTransferFund(arg2 stock.CTORATstpTransferFundField) {
	logx.Infof("%s    %s", "OnRtnTransferFund", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnRspTransferPosition(arg2 stock.CTORATstpInputTransferPositionField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspTransferPosition", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnErrRtnTransferPosition(arg2 stock.CTORATstpInputTransferPositionField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnErrRtnTransferPosition", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRtnTransferPosition(arg2 stock.CTORATstpTransferPositionField) {
	logx.Infof("%s    %s", "OnRtnTransferPosition", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnRtnPeripheryTransferPosition(arg2 stock.CTORATstpPeripheryTransferPositionField) {
	logx.Infof("%s    %s", "OnRtnPeripheryTransferPosition", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnRtnPeripheryTransferFund(arg2 stock.CTORATstpPeripheryTransferFundField) {
	logx.Infof("%s    %s", "OnRtnPeripheryTransferFund", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnRspInquiryJZFund(arg2 stock.CTORATstpRspInquiryJZFundField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspInquiryJZFund", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspInquiryBankAccountFund(arg2 stock.CTORATstpRspInquiryBankAccountFundField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspInquiryBankAccountFund", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRtnTradingNotice(arg2 stock.CTORATstpTradingNoticeField) {
	logx.Infof("%s    %s", "OnRtnTradingNotice", stringStruct(arg2))

}
func (spi *SpiTradeStock) OnRspInquiryMaxOrderVolume(arg2 stock.CTORATstpRspInquiryMaxOrderVolumeField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspInquiryMaxOrderVolume", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspInquiryTradeConcentration(arg2 stock.CTORATstpInquiryTradeConcentrationField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspInquiryTradeConcentration", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspModifyOpenPosCost(arg2 stock.CTORATstpReqModifyOpenPosCostField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspModifyOpenPosCost", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspInputNodeFundAssignment(arg2 stock.CTORATstpInputNodeFundAssignmentField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspInputNodeFundAssignment", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspInquiryNodeFundAssignment(arg2 stock.CTORATstpRspInquiryNodeFundAssignmentField, arg3 stock.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspInquiryNodeFundAssignment", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiTradeStock) OnRspQryExchange(arg2 stock.CTORATstpExchangeField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryExchange", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQrySecurity(arg2 stock.CTORATstpSecurityField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQrySecurity", stringStruct(arg2), stringStruct(arg3), arg4, arg5)
}
func (spi *SpiTradeStock) OnRspQryIPOInfo(arg2 stock.CTORATstpIPOInfoField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryIPOInfo", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryUser(arg2 stock.CTORATstpUserField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryUser", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryInvestor(arg2 stock.CTORATstpInvestorField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryInvestor", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryShareholderAccount(arg2 stock.CTORATstpShareholderAccountField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryShareholderAccount", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryRationalInfo(arg2 stock.CTORATstpRationalInfoField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryRationalInfo", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryOrder(arg2 stock.CTORATstpOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryOrder", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryOrderAction(arg2 stock.CTORATstpOrderActionField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryOrderAction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryTrade(arg2 stock.CTORATstpTradeField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryTrade", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryTradingAccount(arg2 stock.CTORATstpTradingAccountField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryTradingAccount", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryPosition(arg2 stock.CTORATstpPositionField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryPosition", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryTradingFee(arg2 stock.CTORATstpTradingFeeField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryTradingFee", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryInvestorTradingFee(arg2 stock.CTORATstpInvestorTradingFeeField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryInvestorTradingFee", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryIPOQuota(arg2 stock.CTORATstpIPOQuotaField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryIPOQuota", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryOrderFundDetail(arg2 stock.CTORATstpOrderFundDetailField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryOrderFundDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryFundTransferDetail(arg2 stock.CTORATstpFundTransferDetailField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryFundTransferDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryPositionTransferDetail(arg2 stock.CTORATstpPositionTransferDetailField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryPositionTransferDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryPeripheryPositionTransferDetail(arg2 stock.CTORATstpPeripheryPositionTransferDetailField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryPeripheryPositionTransferDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryPeripheryFundTransferDetail(arg2 stock.CTORATstpPeripheryFundTransferDetailField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryPeripheryFundTransferDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryBondConversionInfo(arg2 stock.CTORATstpBondConversionInfoField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryBondConversionInfo", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryBondPutbackInfo(arg2 stock.CTORATstpBondPutbackInfoField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryBondPutbackInfo", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryInvestorCondOrderLimitParam(arg2 stock.CTORATstpInvestorCondOrderLimitParamField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryInvestorCondOrderLimitParam", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryConditionOrder(arg2 stock.CTORATstpConditionOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryConditionOrder", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryCondOrderAction(arg2 stock.CTORATstpCondOrderActionField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryCondOrderAction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryTradingNotice(arg2 stock.CTORATstpTradingNoticeField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryTradingNotice", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryIPONumberResult(arg2 stock.CTORATstpIPONumberResultField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryIPONumberResult", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryIPOMatchNumberResult(arg2 stock.CTORATstpIPOMatchNumberResultField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryIPOMatchNumberResult", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryShareholderSpecPrivilege(arg2 stock.CTORATstpShareholderSpecPrivilegeField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryShareholderSpecPrivilege", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryMarket(arg2 stock.CTORATstpMarketField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryMarket", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryETFFile(arg2 stock.CTORATstpETFFileField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryETFFile", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryETFBasket(arg2 stock.CTORATstpETFBasketField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryETFBasket", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryInvestorPositionLimit(arg2 stock.CTORATstpInvestorPositionLimitField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryInvestorPositionLimit", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQrySZSEImcParams(arg2 stock.CTORATstpSZSEImcParamsField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQrySZSEImcParams", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQrySZSEImcExchangeRate(arg2 stock.CTORATstpSZSEImcExchangeRateField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQrySZSEImcExchangeRate", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQrySZSEHKPriceTickInfo(arg2 stock.CTORATstpSZSEHKPriceTickInfoField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQrySZSEHKPriceTickInfo", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryLofFundInfo(arg2 stock.CTORATstpLofFundInfoField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryLofFundInfo", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryPledgePosition(arg2 stock.CTORATstpPledgePositionField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryPledgePosition", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryPledgeInfo(arg2 stock.CTORATstpPledgeInfoField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryPledgeInfo", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQrySystemNodeInfo(arg2 stock.CTORATstpSystemNodeInfoField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQrySystemNodeInfo", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryStandardBondPosition(arg2 stock.CTORATstpStandardBondPositionField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryStandardBondPosition", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryPrematurityRepoOrder(arg2 stock.CTORATstpPrematurityRepoOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryPrematurityRepoOrder", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryNegoOrder(arg2 stock.CTORATstpNegoOrderField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryNegoOrder", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryNegoOrderAction(arg2 stock.CTORATstpNegoOrderActionField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryNegoOrderAction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryNegoTrade(arg2 stock.CTORATstpNegoTradeField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryNegoTrade", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiTradeStock) OnRspQryNegotiationParam(arg2 stock.CTORATstpNegotiationParamField, arg3 stock.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspQryNegotiationParam", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}

func main() {
	// 加载配置文件
	configFile := flag.String("f", "demo/etc/stock.yaml", "the config file")
	flag.Parse()

	var c config.ConfStock
	conf.MustLoad(*configFile, &c, conf.UseEnv())
	// 调用交易接口
	api := stock.CTORATstpTraderApiCreateTstpTraderApi()
	api.RegisterSpi(stock.NewDirectorCTORATstpTraderSpi(&SpiTradeStock{
		api:       api,
		confStock: c,
	}))

	// 注册仿真交易
	//fensUserInfo := stock.NewCTORATstpFensUserInfoField()
	//fensUserInfo.SetFensUserID("00379736")
	//fensUserInfo.SetFensEnvID("stock")
	//fensUserInfo.SetFensNodeID("24a")
	//tradeBasic.RegisterFensUserInfo(fensUserInfo)
	//tradeBasic.RegisterNameServer("tcp://210.14.72.21:42370")

	api.RegisterFront(c.UrlFrontTrade)
	// 启动交易接口
	api.SubscribePrivateTopic(stock.TORA_TERT_RESTART)
	api.SubscribePublicTopic(stock.TORA_TERT_RESTART)

	api.Init()
	select {}
}
