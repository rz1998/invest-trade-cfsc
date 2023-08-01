package lv2md

/*
#cgo linux LDFLAGS: -fPIC -L${SRCDIR}/api/lv2md_v4.0.6_20230213 -Wl,-rpath,${SRCDIR}/api/lv2md_v4.0.6_20230213 -llev2mdapi -lstdc++ -lm -ldl
#cgo linux CPPFLAGS: -fPIC -I${SRCDIR}/api/lv2md_v4.0.6_20230213

// windows 不可用，go 部分功能不支持

*/
import "C"
