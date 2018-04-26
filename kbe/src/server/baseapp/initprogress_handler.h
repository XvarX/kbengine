// Copyright 2008-2018 Yolo Technogies, Inc. All Rights Reserved. https://www.comblockengine.com

#ifndef KBE_BASEAPP_INIT_PROGRESS_HANDLER_H
#define KBE_BASEAPP_INIT_PROGRESS_HANDLER_H

// common include
#include "helper/debug_helper.h"
#include "common/common.h"

namespace KBEngine{

class EntityAutoLoader;
class InitProgressHandler : public Task
{
public:
	InitProgressHandler(Network::NetworkInterface & networkInterface);
	~InitProgressHandler();
	
	bool process();

	void setAutoLoadState(int8 state);

	/** 网络接口
		数据库中查询的自动entity加载信息返回
	*/
	void onEntityAutoLoadCBFromDBMgr(Network::Channel* pChannel, MemoryStream& s);


	void setError();

private:
	Network::NetworkInterface & networkInterface_;
	int delayTicks_;
	EntityAutoLoader* pEntityAutoLoader_;
	int8 autoLoadState_;
	bool error_;
	bool baseappReady_;
};


}

#endif // KBE_BASEAPP_INIT_PROGRESS_HANDLER_H
