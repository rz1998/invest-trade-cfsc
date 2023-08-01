package credit

/*
#cgo linux LDFLAGS: -fPIC -L${SRCDIR}/api/tradecreditapi_v2.0.7_20230223 -Wl,-rpath,${SRCDIR}/api/tradecreditapi_v2.0.7_20230223 -lfastcredittraderapi -lstdc++ -lm -ldl
#cgo linux CPPFLAGS: -fPIC -I${SRCDIR}/api/tradecreditapi_v2.0.7_20230223

// windows 不可用，go 部分功能不支持

*/
import "C"
