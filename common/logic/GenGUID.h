﻿//------------------------------------------------------------------------
// * @filename: GenGUID.h
// *
// * @brief: 生成GUID
// *
// * @author: XGM
// * @date: 2017/09/11
//------------------------------------------------------------------------
#pragma once

#include "xbase/Singleton.h"
#include "xdb/DBHandler.h"
#include "xshare/work/LogicHandler.h"

#include <mutex>
#include <stdint.h>

class GenGUID : public LogicHandler, public DBHandler, public Singleton<GenGUID>
{
	friend class GUIDValue;
protected:
	friend class Singleton<GenGUID>;
	GenGUID() {}
	virtual ~GenGUID() {}
public:
	//------------------------------------------------------------------------
	// 逻辑名称
	//------------------------------------------------------------------------
	virtual std::string GetLogicName() override { return LOGIC_NAME(GenGUID); }

	//------------------------------------------------------------------------
	// 初始化数据库
	//------------------------------------------------------------------------
	virtual void PreInitDatabase() override;

private:
	//------------------------------------------------------------------------
	// 初始化索引
	//------------------------------------------------------------------------
	static void InitIndex();

	//------------------------------------------------------------------------
	// 初始化不同类型的GUID
	//------------------------------------------------------------------------
	static int64_t InitGUIDByType(const std::string& strTypeName, int64_t nInitValue, bool bReset = false);

	//------------------------------------------------------------------------
	// 生成不同类型的GUID
	//------------------------------------------------------------------------
	static int64_t GenGUIDByType(const std::string& strTypeName, int64_t nAddValue = 1);

	//------------------------------------------------------------------------
	// 初始化UserID
	//------------------------------------------------------------------------
	static void InitUserID();

	//------------------------------------------------------------------------
	// 初始化玩家GUID
	//------------------------------------------------------------------------
	static void InitPlayerGUID();

	//------------------------------------------------------------------------
	// 初始化聚会GUID
	//------------------------------------------------------------------------
	static void InitPartyGUID();

	//------------------------------------------------------------------------
	// 初始化分享GUID
	//------------------------------------------------------------------------
	static void InitShareGUID();

	//------------------------------------------------------------------------
	// 初始化游戏房间GUID
	//------------------------------------------------------------------------
	static void InitGameRoomGUID();

public:
	//------------------------------------------------------------------------
	// 生成UserID
	//------------------------------------------------------------------------
	static int64_t GenUserID();

	//------------------------------------------------------------------------
	// 生成玩家GUID
	//------------------------------------------------------------------------
	static int64_t GenPlayerGUID();

	//------------------------------------------------------------------------
	// 生成聚会GUID
	//------------------------------------------------------------------------
	static int64_t GenPartyGUID();

	//------------------------------------------------------------------------
	// 生成分享GUID
	//------------------------------------------------------------------------
	static int64_t GenShareGUID();

	//------------------------------------------------------------------------
	// 生成游戏房间GUID
	//------------------------------------------------------------------------
	static int64_t GenGameRoomGUID();
};

class GUIDValue
{
public:
	GUIDValue(const std::string& strName, int64_t nInitGUID, int64_t nStep);
	~GUIDValue() {}

	//------------------------------------------------------------------------
	// 初始化GUID
	//------------------------------------------------------------------------
	void Init();

	//------------------------------------------------------------------------
	// 下一个GUID
	//------------------------------------------------------------------------
	int64_t Next();

private:
	// 名字
	std::string m_strName;
	// 互斥锁
	std::mutex m_Mutex;
	// 初始化GUID
	const int64_t m_nInitGUID = 0;
	// 每次重置后自增步长
	const int64_t m_nStep = 0;
	// 当前的GUID
	int64_t m_nCurGUID = 0;
};
