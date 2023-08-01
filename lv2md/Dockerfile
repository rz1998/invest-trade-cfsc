FROM ubuntu-cgo:latest as build

WORKDIR $GO_HOME/src/lv2md
COPY . $GO_HOME/src/lv2md

# 准备库
RUN go get -u github.com/axgle/mahonia

# 删除多余文件
RUN rm -rf $GO_HOME/src/lv2md/lv2md.go

# 编译ctp
RUN make install

EXPOSE 22
#设置自启动命令
CMD ["/run.sh"]