// -------------------------------------------------------------------------
//    @FileName         :    NFIPlayerRedisModule.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2012-12-15
//    @Module           :    NFIPlayerRedisModule
//
// -------------------------------------------------------------------------

#ifndef NFI_PLAYER_REDIS_MODULE_H
#define NFI_PLAYER_REDIS_MODULE_H

#include "NFIModule.h"

class NFIPlayerRedisModule
    : public NFIModule
{

public:
	virtual int GetPlayerHomeSceneID(const NFGUID& self) = 0;

	virtual bool LoadPlayerData(const NFGUID& self) = 0;
	virtual bool SavePlayerData(const NFGUID& self) = 0;
	virtual bool SavePlayerTile(const int nSceneID, const NFGUID& self, const std::string& strTileData) = 0;

	virtual bool LoadPlayerTile(const int nSceneID, const NFGUID& self, std::string& strTileData) = 0;
	virtual bool LoadPlayerTileRandom(const int nSceneID, NFGUID& xPlayer, std::string& strTileData) = 0;
	virtual bool LoadPlayerTileRandomCache(const NFGUID& xPlayer, std::string& strTileData) = 0;
};

#endif