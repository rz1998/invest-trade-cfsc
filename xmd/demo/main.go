package main

import (
	"fmt"
	"github.com/axgle/mahonia"
	"github.com/rz1998/invest-trade-cfsc/xmd"
	"github.com/zeromicro/go-zero/core/logx"
	"reflect"
	"strings"
	"sync/atomic"
)

// 交易系统错误通知
func isErrorRspInfo(pRspInfo xmd.CTORATstpRspInfoField) bool {
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

type SpiMD struct {
	api   xmd.CTORATstpXMdApi
	count atomic.Int32
}

func (spi *SpiMD) OnFrontConnected() {
	logx.Info("OnFrontConnected succeed")
	spi.count = atomic.Int32{}
	reqUserLogin := xmd.NewCTORATstpReqUserLoginField()
	ret := spi.api.ReqUserLogin(reqUserLogin, int(spi.count.Add(1)))
	if ret != 0 {
		logx.Errorf("%s failed %d", "OnFrontConnected", ret)
	}
}
func (spi *SpiMD) OnFrontDisconnected(arg2 int) {
	logx.Infof("%s %d", "OnFrontDisconnected", arg2)

}
func (spi *SpiMD) OnRspGetConnectionInfo(arg2 xmd.CTORATstpConnectionInfoField, arg3 xmd.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspGetConnectionInfo", stringStruct(arg2), stringStruct(arg3), arg4)

}
func (spi *SpiMD) OnRspUserLogin(arg2 xmd.CTORATstpRspUserLoginField, arg3 xmd.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspUserLogin", stringStruct(arg2), stringStruct(arg3), arg4)
	if arg3.GetErrorID() == 0 {
		logx.Infof("%s success", "OnRspUserLogin")
		ret := spi.api.SubscribeMarketData([]string{"600030"}, xmd.GetTORA_TSTP_EXD_SSE())
		if ret != 0 {
			logx.Errorf("%s failed %d", "OnRspUserLogin", ret)
		}
	}
}
func (spi *SpiMD) OnRspUserLogout(arg2 xmd.CTORATstpUserLogoutField, arg3 xmd.CTORATstpRspInfoField, arg4 int) {
	logx.Infof("%s    %s    %s    %d", "OnRspUserLogout", stringStruct(arg2), stringStruct(arg3), arg4)
}
func (spi *SpiMD) OnRspSubMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspSubPHMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubPHMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubPHMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubPHMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspSubSpecialMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubSpecialMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubSpecialMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubSpecialMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspSubSimplifyMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubSimplifyMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubSimplifyMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubSimplifyMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspSubSecurityStatus(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubSecurityStatus", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubSecurityStatus(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubSecurityStatus", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspSubMarketStatus(arg2 xmd.CTORATstpSpecificMarketField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubMarketStatus", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubMarketStatus(arg2 xmd.CTORATstpSpecificMarketField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubMarketStatus", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspSubImcParams(arg2 xmd.CTORATstpSpecificMarketField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubImcParams", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubImcParams(arg2 xmd.CTORATstpSpecificMarketField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubImcParams", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspInquiryMarketDataMirror(arg2 xmd.CTORATstpMarketDataField, arg3 xmd.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspInquiryMarketDataMirror", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiMD) OnRspInquiryPHMarketDataMirror(arg2 xmd.CTORATstpPHMarketDataField, arg3 xmd.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspInquiryPHMarketDataMirror", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiMD) OnRspInquirySpecialMarketDataMirror(arg2 xmd.CTORATstpSpecialMarketDataField, arg3 xmd.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspInquirySpecialMarketDataMirror", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiMD) OnRspSubSPMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubSPMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubSPMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubSPMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspSubSPSimplifyMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubSPSimplifyMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubSPSimplifyMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubSPSimplifyMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspSubSPSecurityStatus(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubSPSecurityStatus", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubSPSecurityStatus(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubSPSecurityStatus", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspSubSPMarketStatus(arg2 xmd.CTORATstpSpecificMarketField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubSPMarketStatus", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubSPMarketStatus(arg2 xmd.CTORATstpSpecificMarketField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubSPMarketStatus", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspInquirySPMarketDataMirror(arg2 xmd.CTORATstpMarketDataField, arg3 xmd.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspInquirySPMarketDataMirror", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiMD) OnRtnMarketData(arg2 xmd.CTORATstpMarketDataField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnPHMarketData(arg2 xmd.CTORATstpPHMarketDataField) {
	logx.Infof("%s    %s", "OnRtnPHMarketData", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnSpecialMarketData(arg2 xmd.CTORATstpSpecialMarketDataField) {
	logx.Infof("%s    %s", "OnRtnSpecialMarketData", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnSimplifyMarketData(arg2 xmd.CTORATstpSimplifyMarketDataField) {
	logx.Infof("%s    %s", "OnRtnSimplifyMarketData", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnSecurityStatus(arg2 xmd.CTORATstpSecurityStatusField) {
	logx.Infof("%s    %s", "OnRtnSecurityStatus", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnMarketStatus(arg2 xmd.CTORATstpMarketStatusField) {
	logx.Infof("%s    %s", "OnRtnMarketStatus", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnImcParams(arg2 xmd.CTORATstpImcParamsField) {
	logx.Infof("%s    %s", "OnRtnImcParams", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnSPMarketData(arg2 xmd.CTORATstpMarketDataField) {
	logx.Infof("%s    %s", "OnRtnSPMarketData", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnSPSimplifyMarketData(arg2 xmd.CTORATstpSimplifyMarketDataField) {
	logx.Infof("%s    %s", "OnRtnSPSimplifyMarketData", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnSPSecurityStatus(arg2 xmd.CTORATstpSecurityStatusField) {
	logx.Infof("%s    %s", "OnRtnSPSecurityStatus", stringStruct(arg2))

}
func (spi *SpiMD) OnRtnSPMarketStatus(arg2 xmd.CTORATstpMarketStatusField) {
	logx.Infof("%s    %s", "OnRtnSPMarketStatus", stringStruct(arg2))

}
func (spi *SpiMD) OnRspSubRapidMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspSubRapidMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRspUnSubRapidMarketData(arg2 xmd.CTORATstpSpecificSecurityField, arg3 xmd.CTORATstpRspInfoField) {
	logx.Infof("%s    %s    %s", "OnRspUnSubRapidMarketData", stringStruct(arg2), stringStruct(arg3))

}
func (spi *SpiMD) OnRtnRapidMarketData(arg2 xmd.CTORATstpRapidMarketDataField) {
	logx.Infof("%s    %s", "OnRtnRapidMarketData", stringStruct(arg2))

}

func main() {
	api := xmd.CTORATstpXMdApiCreateTstpXMdApi()
	spi := &SpiMD{api: api}
	api.RegisterSpi(xmd.NewDirectorCTORATstpXMdSpi(spi))
	api.RegisterFront("tcp://210.14.72.21:4402")
	api.Init()
	select {}
}
