package stock

/*
#cgo linux LDFLAGS: -fPIC -L${SRCDIR}/api/tradestockapi_v4.0.8_20230627 -Wl,-rpath,${SRCDIR}/api/tradestockapi_v4.0.8_20230627 -lfasttraderapi -lstdc++ -lm -ldl
#cgo linux CPPFLAGS: -fPIC -I${SRCDIR}/api/tradestockapi_v4.0.8_20230627

// windows 不可用，go 部分功能不支持

*/
import "C"
