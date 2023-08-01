package main

import (
	"flag"
	"fmt"
	"github.com/axgle/mahonia"
	"github.com/rz1998/invest-trade-cfsc/lv2md"
	"github.com/rz1998/invest-trade-cfsc/lv2md/demo/internal/config"
	"github.com/zeromicro/go-zero/core/conf"
	"github.com/zeromicro/go-zero/core/logx"
	"reflect"
	"strings"
	"sync/atomic"
)

// 交易系统错误通知
func isErrorRspInfo(pRspInfo lv2md.CTORATstpRspInfoField) bool {
	rspInfo := fmt.Sprintf("%v", pRspInfo)
	// 容错处理 pRspInfo ，部分响应函数中，pRspInfo 为 0
	if rspInfo == "0" {
		return false
	} else {
		// 如果ErrorID != 0, 说明收到了错误的响应
		bResult := pRspInfo.GetErrorID() != 0
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

type SpiLv2MD struct {
	conf  config.ConfLv2MD
	api   lv2md.CTORATstpLev2MdApi
	count *atomic.Int32
}

func (spi *SpiLv2MD) OnFrontConnected() {
	logx.Infof("%s success", "OnFrontConnected")
	spi.count = &atomic.Int32{}
	reqUserLogin := lv2md.NewCTORATstpReqUserLoginField()
	ret := spi.api.ReqUserLogin(reqUserLogin, int(spi.count.Add(1)))
	if ret != 0 {
		logx.Errorf("%s failed %d", "OnFrontConnected", ret)
	}
}
func (spi *SpiLv2MD) OnFrontDisconnected(arg2 int) {
	logx.Infof("%s    %d", "OnFrontDisconnected", arg2)

}
func (spi *SpiLv2MD) OnRspError(arg2 lv2md.CTORATstpRspInfoField, arg3 int, arg4 bool) {
	logx.Infof("%s    %s    %d    %t", "OnRspError", stringStruct(arg2), arg4, arg4)

}
func (spi *SpiLv2MD) OnRspUserLogin(arg2 lv2md.CTORATstpRspUserLoginField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUserLogin", stringStruct(arg2), stringStruct(arg3), arg4, arg5)
	if isErrorRspInfo(arg3) {
		return
	}
	if arg3.GetErrorID() == 0 {
		logx.Infof("%s login succedd", "OnRspUserLogin")

		g_SubMarketData := true
		g_SubTransaction := true
		g_SubOrderDetail := true
		g_SubXTSTick := true
		g_SubXTSMarketData := true
		g_SubNGTSTick := true
		g_SubBondMarketData := true
		g_SubBondTransaction := true
		g_SubBondOrderDetail := true

		SH_Securities := []string{"51****", "600***", "00000000"}
		SH_XTS_Securities := []string{"018003", "113565", "00000000"}

		SZ_Securities := []string{"000001", "128***", "00000000"}
		SZ_Bond_Securities := []string{"100303", "109***", "112617", "00000000"}

		if g_SubMarketData {
			spi.api.SubscribeMarketData(SH_Securities, lv2md.GetTORA_TSTP_EXD_SSE())

			spi.api.SubscribeMarketData(SZ_Securities, lv2md.GetTORA_TSTP_EXD_SZSE())
		}

		if g_SubTransaction {
			spi.api.SubscribeTransaction(SH_Securities, lv2md.GetTORA_TSTP_EXD_SSE())
			spi.api.SubscribeTransaction(SZ_Securities, lv2md.GetTORA_TSTP_EXD_SZSE())
		}

		if g_SubOrderDetail {
			spi.api.SubscribeOrderDetail(SH_Securities, lv2md.GetTORA_TSTP_EXD_SSE())
			spi.api.SubscribeOrderDetail(SZ_Securities, lv2md.GetTORA_TSTP_EXD_SZSE())
		}

		if g_SubXTSTick {
			spi.api.SubscribeXTSTick(SH_XTS_Securities, lv2md.GetTORA_TSTP_EXD_SSE())
		}

		if g_SubXTSMarketData {
			spi.api.SubscribeXTSMarketData(SH_XTS_Securities, lv2md.GetTORA_TSTP_EXD_SSE())
		}

		if g_SubBondMarketData {
			spi.api.SubscribeBondMarketData(SZ_Bond_Securities, lv2md.GetTORA_TSTP_EXD_SZSE())
		}

		if g_SubBondTransaction {
			spi.api.SubscribeBondTransaction(SZ_Bond_Securities, lv2md.GetTORA_TSTP_EXD_SZSE())
		}

		if g_SubBondOrderDetail {
			spi.api.SubscribeBondOrderDetail(SZ_Bond_Securities, lv2md.GetTORA_TSTP_EXD_SZSE())
		}

		//4.0.5版本支持接口
		if g_SubNGTSTick {
			spi.api.SubscribeNGTSTick(SH_Securities, lv2md.GetTORA_TSTP_EXD_SSE())
		}
	} else {
		logx.Infof("login fail, error_id[%d] error_msg[%s]!!!\n", arg3.GetErrorID(), arg3.GetErrorMsg())
	}
}
func (spi *SpiLv2MD) OnRspUserLogout(arg2 lv2md.CTORATstpUserLogoutField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUserLogout", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubMarketData(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubMarketData", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubMarketData(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubMarketData", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubIndex(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubIndex", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubIndex(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubIndex", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubTransaction(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubTransaction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubTransaction(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubTransaction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubOrderDetail(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubOrderDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubOrderDetail(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubOrderDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubPHMarketData(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubPHMarketData", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubPHMarketData(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubPHMarketData", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubPHTransaction(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubPHTransaction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubPHTransaction(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubPHTransaction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubResendTransaction(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubResendTransaction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubResendTransaction(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubResendTransaction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubResendOrderDetail(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubResendOrderDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubResendOrderDetail(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubResendOrderDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubXTSMarketData(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubXTSMarketData", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubXTSMarketData(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubXTSMarketData", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubXTSTick(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubXTSTick", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubXTSTick(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubXTSTick", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubNGTSTick(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubNGTSTick", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubNGTSTick(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubNGTSTick", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubBondMarketData(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubBondMarketData", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubBondMarketData(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubBondMarketData", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubBondTransaction(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubBondTransaction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubBondTransaction(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubBondTransaction", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspSubBondOrderDetail(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspSubBondOrderDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRspUnSubBondOrderDetail(arg2 lv2md.CTORATstpSpecificSecurityField, arg3 lv2md.CTORATstpRspInfoField, arg4 int, arg5 bool) {
	logx.Infof("%s    %s    %s    %d    %t", "OnRspUnSubBondOrderDetail", stringStruct(arg2), stringStruct(arg3), arg4, arg5)

}
func (spi *SpiLv2MD) OnRtnMarketData(arg2 lv2md.CTORATstpLev2MarketDataField, arg3 int, arg4 *int, arg5 int, arg6 *int) {
	logx.Infof("%s    %s    %d    %d    %d    %d", "OnRtnMarketData", stringStruct(arg2), arg3, arg4, arg5, arg6)

}
func (spi *SpiLv2MD) OnRtnIndex(arg2 lv2md.CTORATstpLev2IndexField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiLv2MD) OnRtnTransaction(arg2 lv2md.CTORATstpLev2TransactionField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiLv2MD) OnRtnOrderDetail(arg2 lv2md.CTORATstpLev2OrderDetailField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiLv2MD) OnRtnPHMarketData(arg2 lv2md.CTORATstpLev2PHMarketDataField, arg3 int, arg4 *int, arg5 int, arg6 *int) {
	logx.Infof("%s    %s    %d    %d    %d    %d", "OnRtnMarketData", stringStruct(arg2), arg3, arg4, arg5, arg6)

}
func (spi *SpiLv2MD) OnRtnPHTransaction(arg2 lv2md.CTORATstpLev2PHTransactionField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiLv2MD) OnRtnResendTransaction(arg2 lv2md.CTORATstpLev2ResendTransactionField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiLv2MD) OnRtnResendOrderDetail(arg2 lv2md.CTORATstpLev2ResendOrderDetailField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiLv2MD) OnRtnXTSMarketData(arg2 lv2md.CTORATstpLev2XTSMarketDataField, arg3 int, arg4 *int, arg5 int, arg6 *int) {
	logx.Infof("%s    %s    %d    %d    %d    %d", "OnRtnMarketData", stringStruct(arg2), arg3, arg4, arg5, arg6)

}
func (spi *SpiLv2MD) OnRtnXTSTick(arg2 lv2md.CTORATstpLev2XTSTickField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiLv2MD) OnRtnNGTSTick(arg2 lv2md.CTORATstpLev2NGTSTickField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiLv2MD) OnRtnBondMarketData(arg2 lv2md.CTORATstpLev2BondMarketDataField, arg3 int, arg4 *int, arg5 int, arg6 *int) {
	logx.Infof("%s    %s    %d    %d    %d    %d", "OnRtnMarketData", stringStruct(arg2), arg3, arg4, arg5, arg6)

}
func (spi *SpiLv2MD) OnRtnBondTransaction(arg2 lv2md.CTORATstpLev2BondTransactionField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}
func (spi *SpiLv2MD) OnRtnBondOrderDetail(arg2 lv2md.CTORATstpLev2BondOrderDetailField) {
	logx.Infof("%s    %s", "OnRtnMarketData", stringStruct(arg2))

}

func main() {
	// 加载配置文件
	configFile := flag.String("f", "demo/etc/lv2md.yaml", "the config file")
	flag.Parse()

	var c config.ConfLv2MD
	conf.MustLoad(*configFile, &c, conf.UseEnv())
	// 调用行情接口
	logx.Infof("版本号: %s", lv2md.CTORATstpLev2MdApiGetApiVersion())
	api := lv2md.CTORATstpLev2MdApiCreateTstpLev2MdApi()
	api.RegisterSpi(lv2md.NewDirectorCTORATstpLev2MdSpi(&SpiLv2MD{
		conf: c,
		api:  api,
	}))
	api.RegisterFront("tcp://210.14.72.17:6900")
	api.RegisterFront("tcp://210.14.72.17:16900")
	api.Init()
	//// 订阅设置
	//if c.TypeSub != lv2md.GetTORA_TSTP_MST_MCAST() {
	//	tradeBasic.RegisterFront(c.UrlFront)
	//} else {
	//	for _, url := range c.UrlMulticast {
	//		tradeBasic.RegisterMulticast(url, c.IpInterface, c.IpSource, c.NameInterface, c.Capacity, c.EFVI)
	//	}
	//}
	//// 绑定核设置
	//if len(c.CpuCores) > 0 {
	//	tradeBasic.Init(c.CpuCores)
	//} else {
	//	tradeBasic.Init()
	//}
	select {}
}
