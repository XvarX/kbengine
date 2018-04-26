// Copyright 2008-2018 Yolo Technogies, Inc. All Rights Reserved. https://www.comblockengine.com

#ifndef KBE_MGR_CELL_H
#define KBE_MGR_CELL_H

// common include
#include "helper/debug_helper.h"
#include "common/common.h"


namespace KBEngine{

class Cell
{
public:
	Cell(CELL_ID id);
	~Cell();

	CELL_ID id() const{ return id_; }
private:
	CELL_ID id_;
};

}
#endif
