package xmd

/*
#cgo linux LDFLAGS: -fPIC -L${SRCDIR}/api/xfastmdapi_v1.0.5_20230210 -Wl,-rpath,${SRCDIR}/api/xfastmdapi_v1.0.5_20230210 -lxfastmdapi -lstdc++ -lm -ldl
#cgo linux CPPFLAGS: -fPIC -I${SRCDIR}/api/xfastmdapi_v1.0.5_20230210

// windows 不可用，go 部分功能不支持

*/
import "C"
