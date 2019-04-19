﻿//------------------------------------------------------------------------
// * @filename: Player.h
// *
// * @brief: 玩家
// *
// * @author: XGM
// * @date: 2018/05/11
//------------------------------------------------------------------------
#pragma once

#include "common/net/NetHeartbeat.h"

#include "xgame/gameplayer/GamePlayer.h"

#include <string>
#include <memory>
#include <stdint.h>

// 玩家中转的数据
struct PlayerClientInfo
{
};
typedef std::unique_ptr<PlayerClientInfo> PlayerClientInfoUPtr;

class Player : public GamePlayer
{
public:
	Player();
	virtual ~Player();
public:
	//------------------------------------------------------------------------
	// 初始化
	//------------------------------------------------------------------------
	virtual void Init(int64_t nPlayerGUID, int64_t nGwsSessionID);

	//------------------------------------------------------------------------
	// 重连
	//------------------------------------------------------------------------
	virtual void Reconnect(int64_t nGwsSessionID);

	//------------------------------------------------------------------------
	// 断开连接
	//------------------------------------------------------------------------
	virtual void OnDisconnect();

	//------------------------------------------------------------------------
	// 获取玩家GUID
	//------------------------------------------------------------------------
	//int64_t GetPlayerGUID() { return m_nPlayerGUID; }

	//------------------------------------------------------------------------
	// 获取玩家连接ID
	//------------------------------------------------------------------------
	//int64_t GetSessionID() { return m_nSessionID; }

	//------------------------------------------------------------------------
	// 获得网络心跳数据
	//------------------------------------------------------------------------
	NetHeartbeat& GetNetHeartbeat() { return m_Heartbeat; }

	//------------------------------------------------------------------------
	// 检测网络心跳
	//------------------------------------------------------------------------
	virtual bool CheckHeartbeat(int64_t nNow);

	//------------------------------------------------------------------------
	// 登陆Key
	//------------------------------------------------------------------------
	const std::string& GetLoginKey() const { return m_strLoginKey; }
	void SetLoginKey(const std::string& strLoginKey) { m_strLoginKey = strLoginKey; }

	//------------------------------------------------------------------------
	// 上线
	//------------------------------------------------------------------------
	virtual void Online();

	//------------------------------------------------------------------------
	// 下线
	//------------------------------------------------------------------------
	virtual void Offline();

	//------------------------------------------------------------------------
	// 是否在线
	//------------------------------------------------------------------------
	bool IsOnline() const { return m_bOnline; }
	bool IsOffline() const { return !m_bOnline; }


	//------------------------------------------------------------------------
	// 获得客户端数据
	//------------------------------------------------------------------------
	PlayerClientInfoUPtr& GetClientInfo() { return m_pClientInfo; }

protected:
	// PlayerGUID
	//int64_t m_nPlayerGUID = 0;

	// 连接ID
	//int64_t m_nSessionID = 0;

	// 网络心跳数据
	NetHeartbeat m_Heartbeat;

	// 登陆Key,重连验证
	std::string m_strLoginKey;

	// 在线状态
	bool m_bOnline = false;

	// 客户端数据
	PlayerClientInfoUPtr m_pClientInfo;
};