﻿//------------------------------------------------------------------------
// * @filename: ResourceModule.h
// *
// * @brief: 资源模块
// *
// * @author: XGM
// * @date: 2017/08/09
//------------------------------------------------------------------------
#pragma once

#include "xbase/Module.h"

class ResourceModule : public Module
{
public:
	//------------------------------------------------------------------------
	// 模块名称
	//------------------------------------------------------------------------
	virtual std::string GetName() override;

	//------------------------------------------------------------------------
	// 初始化
	//------------------------------------------------------------------------
	virtual bool Init() override;

	//------------------------------------------------------------------------
	// 退出
	//------------------------------------------------------------------------
	virtual void Exit() override;

	//------------------------------------------------------------------------
	// 运行一次
	//------------------------------------------------------------------------
	virtual void RunOnce() override;
};
