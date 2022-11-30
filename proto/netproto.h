#ifndef __NETPROTO_H
#define __NETPROTO_H

#define RADIOGROUP "224.3.2.5"
#define RCVPORT 3344
#define CHNLISTID 0
#define MAXCHNNR 200
#define MINCHNID 1
#define  MANCHNID (MINCHNID) + (MAXCHNNR) - 1

#define MAXMSG 512
//单个列表数据包 + 频道数据
//单个频道列表
struct list_entry_st{
	int8_t chnid;//频道号
	int8_t len;//自述长度
	char descr[1];//变长结构体，频道描述不限制长度
}__attribute__((packed));

struct chn_list_st{
	int8_t chnid;
	struct list_entry_st entry[1];
}__attribute__((packed));

struct chn_data_st{
	int8_t chnid;
	char data[1];
}__attribute__((packed));

#endif
