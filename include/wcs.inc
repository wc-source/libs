#if defined _wcs_included
 #endinput
#endif
#define _wcs_included

/**
 * GetRealSpeed, GetRealGravity, GetRealAlpha, GetRealHealth
 * возвращают значения, включая прибавки навыков.
 * Но GetRealModel возвращает значение,
 * которое было до установки навыков.
 */
 
/**
 * GetRealSpeed, GetRealGravity, GetRealAlpha, GetRealHealth
 * returns values including skills adds.
 * But GetRealModel returns value,
 * which doesn't include skills adds.
 */
 
/**
 *
 * NATIVES
 *
 */

/**
 * Get mod prefix.
 *
 * @param prefix				A char.
 * @param size				An integer.
 * @return					true on success.
 */
native bool WCS_GetPrefix(char[] prefix, int size);

/**
 * Get mod version.
 *
 * Version: 9.8.9 => return 989;
 * Version: 9.9.0 => return 990; ... etc..
 * @return					version number.
 */
native int WCS_GetVersion();
 
/**
 * Check if client is loaded.
 *
 * @param client			An integer.
 * @return					true if loaded, false otherwise.
 */
native bool WCS_IsPlayerLoaded(int client);

/**
 * Get client's Anti Ultimate Status.
 *
 * @param client			An integer.
 * @return					Anti Ultimate Status.
 */
native bool WCS_GetAntiUlt(int client);

/**
 * Get client's Anti Aura Status.
 *
 * @param client			An integer.
 * @return					Anti Aura Status.
 */
native bool WCS_GetAntiAura(int client);

/**
 * Get client's Anti Totem Status.
 *
 * @param client			An integer.
 * @return					Anti Totem Status.
 */
native bool WCS_GetAntiTotem(int client);

/**
 * Get client's Diet Status.
 *
 * @param client			An integer.
 * @return					Diet Status.
 */
native bool WCS_GetDiet(int client);

/**
 * Get client's Block Respawn Status.
 *
 * @param client			An integer.
 * @return					Block Respawn Status.
 */
native bool WCS_GetBlockRespawn(int client);

/**
 * Get client's Anti Aim Status.
 *
 * @param client			An integer.
 * @return					Anti Aim Status.
 */
native bool WCS_GetAntiAim(int client);

/**
 * Is passive skill disabled?
 *
 * Both params victim & attacker - can be 0 (0 = disable specific check)
 *
 * @param victim			An integer. (To check if the victim has an *antipassive* effect)
 * @param attacker			An integer. (To check if the attacker is affected by *break* (ult_break..))
 * @param skill				A char.
 * @return					true if disabled, false otherwise.
 */
native bool WCS_IsPassiveDisabled(int victim = 0, int attacker = 0, const char[] skill = "");

/**
 * Is ally buff disabled?
 *
 * @param client			An integer.
 * @param buff				A char.
 * @return					true if disabled, false otherwise.
 */
native bool WCS_IsAllyBuffDisabled(int client, const char[] buff);

/**
 * Is skill disabled on map?
 *
 * @param skill				A char.
 * @return					true if disabled, false otherwise.
 */
native bool WCS_IsSkillRestrictedOnMap(const char[] skill);

/**
 * Get client's 'Hide Effects' opt Status.
 *
 * @param client			An integer.
 * @return					Hide Effects opt Status.
 */
native bool WCS_GetHideEffects(int client);

/**
 * Get client's 'Mute Sound' opt Status.
 *
 * @param client			An integer.
 * @return					Mute Sound opt Status.
 */
native bool WCS_GetMuteSound(int client);

/**
 * Get client's 'Hide Skill Msg' opt Status.
 *
 * @param client			An integer.
 * @return					Hide Skill Msg opt Status.
 */
native bool WCS_GetHideSkillMsg(int client);

/**
 * Get client's gold.
 *
 * @param client			An integer.
 * @return					Client's gold.
 */
native int WCS_GetGold(int client);

/**
 * Get client's lvl.
 *
 * @param client			An integer.
 * @return					Client's lvl.
 */
native int WCS_GetLvl(int client);

/**
 * Get client's race lvl.
 *
 * @param client			An integer.
 * @return					Client's race lvl.
 */
native int WCS_GetCLvl(int client);

/**
 * Get client's Level Bank lvl.
 *
 * @param client			An integer.
 * @return					Client's Level Bank lvl.
 */
native int WCS_GetLBlvl(int client);

/**
 * Get client's skulls.
 *
 * @param client			An integer.
 * @return					Client's skulls.
 */
native int WCS_GetSkulls(int client);

/**
 * Get client's vip status.
 * 
 * @param client			An integer.
 * @return					true on success, false otherwise.
 */
native bool WCS_GetVip(int client);

/**
 * Get if client's vip loaded.
 * 
 * @param client			An integer.
 * @return					true on success, false otherwise.
 */
native bool WCS_IsVIPLoaded(int client);

/**
 * Get client's reborn status.
 * 
 * @param client			An integer.
 * @return					true on success, false otherwise.
 */
native bool WCS_GetReborn(int client);

/**
 * Get client's xp.
 *
 * @param client			An integer.
 * @return					Client's xp.
 */
native int WCS_GetXp(int client);

/**
 * Get client's xp difference.
 *
 * @param client			An integer.
 * @return					Client's xp.
 */
native int WCS_GetXpDifference(int client);

/**
 * Get client's race name.
 *
 * @param client			An integer.
 * @param race				A char.
 * @param size				An integer.
 * @return					true on success.
 */
native bool WCS_GetRace(int client, char[] race, int size = 64);

/**
 * Get client's random race name.
 *
 * @param client			An integer.
 * @param race				A char.
 * @param size				An integer.
 * @param maxlvl			An integer. (if 0 = then determines on Player total lvl)
 * @param ignoreCurrent		A bool. ignore or not current race.
 * @param ignorePrivate		A bool. ignore or not private races. (if not ignore then adds all private races to which the player has access)
 * @param checkConds		A bool. check or not race conditions. (like "disablemaps" \ "teamlimit", etc..)
 * @param allowNotOwned		A bool. allow or not NOT OWNED private races.
 * @return					true on success.
 */
native bool WCS_GetRandomRace(int client, char[] race, int size = 64, int maxlvl = -1, bool ignoreCurrent = false, bool ignorePrivate = true, bool checkConds = false, bool allowNotOwned = false);

/**
 * Get client's real speed.
 *
 * @param client			An integer.
 * @return					Client's speed.
 */
native float WCS_GetRealSpeed(int client);

/**
 * Get client's real gravity.
 *
 * @param client			An integer.
 * @return					Client's speed.
 */
native float WCS_GetRealGravity(int client);

/**
 * Get client's real alpha.
 *
 * @param client			An integer.
 * @return					Client's alpha.
 */
native int WCS_GetRealAlpha(int client);

/**
 * Get client's real health.
 *
 * @param client			An integer.
 * @return					Client's health.
 */
native int WCS_GetRealHealth(int client);

/**
 * Get client's real model.
 *
 * @param client			An integer.
 * @param model				A char.
 * @param size				An integer.
 * @return					true on success, false otherwise.
 */
native bool WCS_GetRealModel(int client, char[] model, int size);

/**
 * Get random client between radius.
 *
 * @param client			An integer.
 * @param radius			A float.
 * @param checkImmun		A bool.
 * @return					random client on true.
 */
native int WCS_GetRandomDistance(int client, float radius, bool checkImmun);

/**
 * Get nearest client between radius.
 *
 * @param client			An integer.
 * @param radius			A float.
 * @param checkImmun		A bool.
 * @return					nearest client on true.
 */
native int WCS_GetBestDistance(int client, float radius, bool checkImmun);

/**
 * Get nearest client to aim with radius.
 *
 * @param client			An integer.
 * @param distance			A float. (0.0 - прямо от прицела)
 * @param radius			A float.
 * @param checkImmun		A bool.
 * @return					nearest client on true.
 */
native int WCS_GetNearAim(int client, float distance = 0.0, float radius, bool checkImmun);

/**
 * Check if line is blocked by smoke
 *
 * @param from			A vector.
 * @param to			A vector.
 * @return					true if blocked, false otherwise.
 */
native bool WCS_IsLineBlockedBySmoke(const float from[3], const float to[3]);

/**
 * Get client is admin.
 *
 * @param client			An integer.
 * @return					true if client is admin, false otherwise.
 */
native bool WCS_GetWcsAdmin(int client);

/**
 * Get if client's admin with the flag.
 *
 * @param client			An integer.
 * @param flag				A char. [32]
 * @return					true if client is admin, false otherwise.
 */
native bool WCS_GetWcsAdminFlag(int client, const char[] flag);

/**
 * Init Effects to client & attacker [optional].
 * If you want to use effect only for client:
 * InitEffects(client, client, effect);
 *
 * @param client			An integer.
 * @param victim			An integer.
 * @param effect			A char.
 * @return					true on success.
 */
native bool WCS_InitEffects(int client, int victim, const char[] effect);

/**
 * Give client gold.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @return					true on success.
 */
native bool WCS_GiveGold(int client, int value);

/**
 * Give client lvl.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @return					true on success.
 */
native bool WCS_GiveLvl(int client, int value);

/**
 * Give client race lvl.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @return					true on success.
 */
native bool WCS_GiveCLvl(int client, int value);

/**
 * Give client Level Bank lvl.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @return					true on success.
 */
native bool WCS_GiveLBlvl(int client, int value);

/**
 * Give client xp.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @param announce			A bool.
 * @return					true on success.
 */
native bool WCS_GiveXp(int client, int value, bool announce = true);

/**
 * Set client skulls.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @return					true on success.
 */
native bool WCS_SetSkulls(int client, int value);

/**
 * Take client gold.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @return					true on success.
 */
native bool WCS_TakeGold(int client, int value);

/**
 * Take client Level Bank lvl.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @return					true on success.
 */
native bool WCS_TakeLBlvl(int client, int value);

/**
 * Set client real speed.
 *
 * @param client			An integer.
 * @param value				A float.
 * @return					true on success.
 */
native bool WCS_SetRealSpeed(int client, float value);

/**
 * Set client real gravity.
 *
 * @param client			An integer.
 * @param value				A float.
 * @return					true on success.
 */
native bool WCS_SetRealGravity(int client, float value);

/**
 * Set client real alpha.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @return					true on success, false otherwise.
 */
native bool WCS_SetRealAlpha(int client, int value);

/**
 * Set client real health.
 *
 * @param client			An integer.
 * @param value				An integer.
 * @return					true on success, false otherwise.
 */
native bool WCS_SetRealHealth(int client, int value);

/**
 * Set client's real model.
 *
 * @param client			An integer.
 * @param model				A char.
 * @return					true on success, false otherwise.
 */
native bool WCS_SetRealModel(int client, const char[] model);

/**
 * Set client's race.
 *
 * @param client			An integer.
 * @param race				A char.
 * @param suicide			A bool. (Check or not CVAR 'wcs_cr_suicide' = 1 then client will be killed)
 * @return					true on success, false otherwise.
 */
native bool WCS_SetRace(int client, const char[] race, bool suicide = true);

/**
 * Reset client's skills.
 *
 * @param client			An integer.
 * @param fully				A bool. (if true then dont reuse skills after this operation)
 * @return					true on success, false otherwise.
 */
native bool WCS_ResetSkills(int client, bool fully);

/**
 * Reset client ultimate cooldown.
 *
 * @param client			An integer.
 * @return					true on success.
 */
native bool WCS_ResetUltCld(int client);

/**
 * Reset client ability cooldown.
 *
 * @param client			An integer.
 * @return					true on success, false otherwise.
 */
native bool WCS_ResetAbilityCld(int client);

/**
 * Checks if the race is private
 *
 * @param racename			A char. [64]
 * @return					true on success, false otherwise.
 */
native bool WCS_IsRacePrivate(const char[] RaceName);

/**
 * Gives a private race to client
 *
 * @param steamid			A char. [64]
 * @param racename			A char. [64]
 * @param expiretime		An integer.
 * @return					true on success, false otherwise.
 */
native bool WCS_GivePrivateRace(const char[] SteamId, const char[] RaceName, int expiretime = 0);

/**
 * Take a private race from client
 *
 * @param steamid			A char. [64]
 * @param racename			A char. [64]
 * @return					true on success, false otherwise.
 */
native bool WCS_TakePrivateRace(const char[] SteamId, const char[] RaceName);

/**
 * Gives a VIP to client
 *
 * @param SteamId			A char. [64]
 * @param Name				A char. [64]
 * @param Group				A char. [128]
 * @param time				An int [in minutes]
 * @return					true on success, false otherwise.
 */
native bool WCS_GiveVIP(const char[] SteamId, const char[] Name, const char[] Group, int time);

/**
 * Get required lvl for race
 *
 * @param racename			A char. [64]
 * @return					required lvl on success, -1 otherwise.
 */
native int WCS_GetRaceReqLvl(const char[] RaceName);

/**
 * Get client's totems count that he can use (every use totem this value will decreased and restored on special events [this value = GetClientTotemsMax on special events])
 *
 * @param client			An integer.
 * @return					Amount of totems.
 */
native int WCS_GetClientTotems(int client);

/**
 * Get client's totems count maximum
 *
 * @param client			An integer.
 * @return					Amount of maximum totems.
 */
native int WCS_GetClientTotemsMax(int client);

/**
 * Get client's vip group.
 *
 * @param client			An integer.
 * @param group				A char.
 * @param size				An integer. [128]
 * @return					true on success.
 */
native bool WCS_GetVipGroup(int client, char[] group, int size);

/**
 * Set client's vip group.
 *
 * @param client			An integer.
 * @param group				A char. [128]
 * @return					true on success.
 */
native bool WCS_SetVipGroup(int client, char[] group);

/**
 * Reloads client's vip.
 *
 * @param client			An integer.
 * @param fully				if false then load only group stuff, otherwise fully reloading
 * @return					true on success.
 */
native bool WCS_ReloadVIPClient(int client, bool fully = true);

/**
 * Get client's vip premium status.
 * 
 * @param client			An integer.
 * @return					true on success, false otherwise.
 */
native bool WCS_GetVipPremium(int client);






/**
 *
 * FORWARDS
 *
 */
 


/**
 * Called on client skill lvl up
 *
 */
forward void WCS_OnSkillLvlUp(int client, int skilllvl, const char[] skillname);



/**
 * Called on client lvl up
 *
 */
forward void WCS_OnLvlUp(int client, int lvl);



/**
 * Called on client ultimate cooldown has finished
 *
 */
forward void WCS_OnUltimateCld(int client);



/**
 * Called on client ability cooldown has finished
 *
 */
forward void WCS_OnAbilityCld(int client);



/**
 * Called on client skills has resetted
 *
 */
forward void WCS_OnSkillsReset(int client, bool fully);



/**
 * Called on client xp gain
 *
 */
forward void WCS_OnXpGain(int client, int xp, bool lvlup);



/**
 * Called on client gold gain
 *
 */
forward void WCS_OnGoldGain(int client, int gold);



/**
 * Called on client ultimate pre
 *
 */
forward Action WCS_OnUltimatePre(int client, const char[] ultimate);



/**
 * Called on client ultimate post
 *
 */
forward void WCS_OnUltimatePost(int client);



/**
 * Called on client ability pre
 *
 */
forward Action WCS_OnAbilityPre(int client, const char[] ability);



/**
 * Called on client ability post
 *
 */
forward void WCS_OnAbilityPost(int client);



/**
 * Called on client change race pre
 *
 */
forward Action WCS_OnRaceChangePre(int client, const char[] OldRace, const char[] NewRace);



/**
 * Called on client change race post
 *
 */
forward void WCS_OnRaceChangePost(int client);



/**
 * Called on client item purchase pre
 *
 * PaymentType -- "cash" or "gold"
 */
forward Action WCS_OnItemPurchasePre(int client, const char[] ItemName, const char[] BlockName, int ItemCost, const char[] PaymentType);



/**
 * Called on client item purchase post
 *
 */
forward void WCS_OnItemPurchasePost(int client);



/**
 * Called on client skills just set pre
 *
 */
forward Action WCS_OnSkillsSetPre(int client, const char[] Race);



/**
 * Called on client skills just set
 *
 */
forward void WCS_OnSkillsSet(int client, const char[] Race);



/**
 * Called on client loaded
 *
 */
forward void WCS_OnClientLoaded(int client);



/**
 * Called on VIP loaded
 *
 */
forward void WCS_OnVIPLoaded(int client);



/**
 * Called on race should show
 *
 */
forward Action WCS_OnRaceShouldShow(int client, const char[] Race, int ReqLvl);



/**
 * Called on client become reborn
 *
 */
forward void WCS_OnBecomeReborn(int client, int prelvl);



/**
 * Called on client transfer LB lvl
 *
 */
forward void WCS_OnLBTransfer(int client, int receiver, int amount);



/**
 * Called on player healed post
 *
 */
forward void WCS_OnPlayerHealedPost(int client, int target, int amount);



/**
 * Called on player hooked post
 *
 */
forward void WCS_OnPlayerHookedPost(int client, int target, int damage);



/**
 * Called on player evaded post
 *
 */
forward void WCS_OnPlayerEvadedPost(int client, int attacker, int chance);