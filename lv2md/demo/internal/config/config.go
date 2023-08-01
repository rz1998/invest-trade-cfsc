package config

type ConfLv2MD struct {
	NeedCache       bool
	Account         string
	Password        string
	UserProductInfo string
	// 绑定cpu核设置
	CpuCores string
	// 订阅设置
	TypeSub byte
	// 订阅-非组播
	UrlFront string
	// 订阅-组播
	UrlMulticast  []string // 组播行情服务地址串，格式“udp://224.3.9.110:34567”
	IpInterface   string   // 接收网卡地址,如:"127.0.0.1",填 NULL 则依次轮询尝试本机所有网卡加入组播组
	IpSource      string   // 组播数据包源地址,如:"127.0.0.1",填 NULL 表示不校验数据包源
	NameInterface string   // 接收网卡名,如 enp101s0f1,efvi 接收时有意义
	Capacity      int      // 接收队列大小,rxqCapacity<=0 则取默认值，（512，1024，2048，4096),efvi 接收时有意义。为了避免丢包可尝试设置 4096，如果设置的值超过了网卡的最大值，程序会直接退出，此时可减小 rxqCapacity 入参值重启
	EFVI          bool     // 接收模式开关
}
