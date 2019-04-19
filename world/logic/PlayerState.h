﻿//------------------------------------------------------------------------
// * @filename: PlayerState.h
// *
// * @brief: 玩家状态
// *
// * @author: XGM
// * @date: 2018/05/11
//------------------------------------------------------------------------
#pragma once

class Player;

class PlayerState
{
public:
	PlayerState() {}
	virtual ~PlayerState() {}
public:
	//------------------------------------------------------------------------
	// 是不是能进入分享
	//------------------------------------------------------------------------
	virtual bool IsCanEnter(Player* pPlayer) const { return false; }

	//------------------------------------------------------------------------
	// 是不是游戏中
	//------------------------------------------------------------------------
	virtual bool IsInGame(Player* pPlayer) const { return false; }
};
