/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE
 */

#ifndef __AB_CONFIG_H
#define __AB_CONFIG_H

#include "ABInflectionPointSettings.h"
#include "ABLevelScalingDynamicLevelSettings.h"
#include "ABStatModifiers.h"
#include "AutoBalance.h"

#include "SharedDefines.h"

#include <list>
#include <map>

extern std::map<uint32, AutoBalanceInflectionPointSettings>          dungeonOverrides;
extern std::map<uint32, AutoBalanceInflectionPointSettings>          bossOverrides;
extern std::map<uint32, AutoBalanceStatModifiers>                    statModifierOverrides;
extern std::map<uint32, AutoBalanceStatModifiers>                    statModifierBossOverrides;
extern std::map<uint32, AutoBalanceStatModifiers>                    statModifierCreatureOverrides;
extern std::map<uint8 , AutoBalanceLevelScalingDynamicLevelSettings> levelScalingDynamicLevelOverrides;
extern std::map<uint32, uint32>                                      levelScalingDistanceCheckOverrides;

extern std::map <int, int>                                           forcedCreatureIds;
extern std::list<uint32>                                             disabledDungeonIds;

extern uint32                                                        minPlayersNormal;
extern uint32                                                        minPlayersHeroic;
extern uint32                                                        minPlayersRaid;
extern uint32                                                        minPlayersRaidHeroic;
extern std::map<uint32, uint8>                                       minPlayersPerDungeonIdMap;
extern std::map<uint32, uint8>                                       minPlayersPerHeroicDungeonIdMap;

extern std::list<uint32>                                             spellIdsThatSpendPlayerHealth;
extern std::list<uint32>                                             spellIdsToNeverModify;
extern std::list<uint32>                                             creatureIDsThatAreNotClones;

extern int8                                                          PlayerCountDifficultyOffset;
extern bool                                                          UseGroupSizeForDifficulty;
extern bool                                                          IncludeGMsInPlayerCount;

extern bool                                                          LevelScaling;
extern int8                                                          LevelScalingSkipHigherLevels;
extern int8                                                          LevelScalingSkipLowerLevels;
extern int8                                                          LevelScalingDynamicLevelCeilingDungeons;
extern int8                                                          LevelScalingDynamicLevelFloorDungeons;
extern int8                                                          LevelScalingDynamicLevelCeilingRaids;
extern int8                                                          LevelScalingDynamicLevelFloorRaids;
extern int8                                                          LevelScalingDynamicLevelCeilingHeroicDungeons;
extern int8                                                          LevelScalingDynamicLevelFloorHeroicDungeons;
extern int8                                                          LevelScalingDynamicLevelCeilingHeroicRaids;
extern int8                                                          LevelScalingDynamicLevelFloorHeroicRaids;
extern ScalingMethod                                                 LevelScalingMethod;

extern uint32                                                        rewardRaid;
extern uint32                                                        rewardDungeon;
extern uint32                                                        MinPlayerReward;

extern bool                                                          Announcement;

extern bool                                                          LevelScalingEndGameBoost;
extern bool                                                          PlayerChangeNotify;
extern bool                                                          rewardEnabled;

extern float                                                         MinHPModifier;
extern float                                                         MinManaModifier;
extern float                                                         MinDamageModifier;
extern float                                                         MinCCDurationModifier;
extern float                                                         MaxCCDurationModifier;

// 
// RewardScaling.*
// 

extern ScalingMethod                                                 RewardScalingMethod;
extern bool                                                          RewardScalingXP;
extern bool                                                          RewardScalingMoney;
extern float                                                         RewardScalingXPModifier;
extern float                                                         RewardScalingMoneyModifier;

extern uint64_t                                                      globalConfigTime;

// 
// Enable.*
// 

extern bool                                                          EnableGlobal;
extern bool                                                          Enable5M;
extern bool                                                          Enable10M;
extern bool                                                          Enable15M;
extern bool                                                          Enable20M;
extern bool                                                          Enable25M;
extern bool                                                          Enable40M;
extern bool                                                          Enable5MHeroic;
extern bool                                                          Enable10MHeroic;
extern bool                                                          Enable25MHeroic;
extern bool                                                          EnableOtherNormal;
extern bool                                                          EnableOtherHeroic;

//
// InflectionPoint*
//

extern float                                                         InflectionPoint;
extern float                                                         InflectionPointCurveFloor;
extern float                                                         InflectionPointCurveCeiling;
extern float                                                         InflectionPointBoss;
extern float                                                         InflectionPointBossInflection;
extern float                                                         InflectionPointHealth;
extern float                                                         InflectionPointMana;
extern float                                                         InflectionPointArmor;
extern float                                                         InflectionPointDamage;
extern float                                                         InflectionPointBossHealth;
extern float                                                         InflectionPointBossMana;
extern float                                                         InflectionPointBossArmor;
extern float                                                         InflectionPointBossDamage;

extern float                                                         InflectionPointHeroic;
extern float                                                         InflectionPointHeroicCurveFloor;
extern float                                                         InflectionPointHeroicCurveCeiling;
extern float                                                         InflectionPointHeroicBoss;
extern float                                                         InflectionPointHeroicBossInflection;
extern float                                                         InflectionPointHeroicHealth;
extern float                                                         InflectionPointHeroicMana;
extern float                                                         InflectionPointHeroicArmor;
extern float                                                         InflectionPointHeroicDamage;
extern float                                                         InflectionPointHeroicBossHealth;
extern float                                                         InflectionPointHeroicBossMana;
extern float                                                         InflectionPointHeroicBossArmor;
extern float                                                         InflectionPointHeroicBossDamage;

extern float                                                         InflectionPointRaid;
extern float                                                         InflectionPointRaidCurveFloor;
extern float                                                         InflectionPointRaidCurveCeiling;
extern float                                                         InflectionPointRaidBoss;
extern float                                                         InflectionPointRaidBossInflection;
extern float                                                         InflectionPointRaidHealth;
extern float                                                         InflectionPointRaidMana;
extern float                                                         InflectionPointRaidArmor;
extern float                                                         InflectionPointRaidDamage;
extern float                                                         InflectionPointRaidBossHealth;
extern float                                                         InflectionPointRaidBossMana;
extern float                                                         InflectionPointRaidBossArmor;
extern float                                                         InflectionPointRaidBossDamage;

extern float                                                         InflectionPointRaidHeroic;
extern float                                                         InflectionPointRaidHeroicCurveFloor;
extern float                                                         InflectionPointRaidHeroicCurveCeiling;
extern float                                                         InflectionPointRaidHeroicBoss;
extern float                                                         InflectionPointRaidHeroicBossInflection;
extern float                                                         InflectionPointRaidHeroicHealth;
extern float                                                         InflectionPointRaidHeroicMana;
extern float                                                         InflectionPointRaidHeroicArmor;
extern float                                                         InflectionPointRaidHeroicDamage;
extern float                                                         InflectionPointRaidHeroicBossHealth;
extern float                                                         InflectionPointRaidHeroicBossMana;
extern float                                                         InflectionPointRaidHeroicBossArmor;
extern float                                                         InflectionPointRaidHeroicBossDamage;

extern float                                                         InflectionPointRaid10M;
extern float                                                         InflectionPointRaid10MCurveFloor;
extern float                                                         InflectionPointRaid10MCurveCeiling;
extern float                                                         InflectionPointRaid10MBoss;
extern float                                                         InflectionPointRaid10MBossInflection;
extern float                                                         InflectionPointRaid10MHealth;
extern float                                                         InflectionPointRaid10MMana;
extern float                                                         InflectionPointRaid10MArmor;
extern float                                                         InflectionPointRaid10MDamage;

extern float                                                         InflectionPointRaid10MHeroic;
extern float                                                         InflectionPointRaid10MHeroicCurveFloor;
extern float                                                         InflectionPointRaid10MHeroicCurveCeiling;
extern float                                                         InflectionPointRaid10MHeroicBoss;
extern float                                                         InflectionPointRaid10MHeroicBossInflection;
extern float                                                         InflectionPointRaid10MHeroicHealth;
extern float                                                         InflectionPointRaid10MHeroicMana;
extern float                                                         InflectionPointRaid10MHeroicArmor;
extern float                                                         InflectionPointRaid10MHeroicDamage;

extern float                                                         InflectionPointRaid15M;
extern float                                                         InflectionPointRaid15MCurveFloor;
extern float                                                         InflectionPointRaid15MCurveCeiling;
extern float                                                         InflectionPointRaid15MBoss;
extern float                                                         InflectionPointRaid15MBossInflection;
extern float                                                         InflectionPointRaid15MHealth;
extern float                                                         InflectionPointRaid15MMana;
extern float                                                         InflectionPointRaid15MArmor;
extern float                                                         InflectionPointRaid15MDamage;

extern float                                                         InflectionPointRaid20M;
extern float                                                         InflectionPointRaid20MCurveFloor;
extern float                                                         InflectionPointRaid20MCurveCeiling;
extern float                                                         InflectionPointRaid20MBoss;
extern float                                                         InflectionPointRaid20MBossInflection;
extern float                                                         InflectionPointRaid20MHealth;
extern float                                                         InflectionPointRaid20MMana;
extern float                                                         InflectionPointRaid20MArmor;
extern float                                                         InflectionPointRaid20MDamage;

extern float                                                         InflectionPointRaid25M;
extern float                                                         InflectionPointRaid25MCurveFloor;
extern float                                                         InflectionPointRaid25MCurveCeiling;
extern float                                                         InflectionPointRaid25MBoss;
extern float                                                         InflectionPointRaid25MBossInflection;
extern float                                                         InflectionPointRaid25MHealth;
extern float                                                         InflectionPointRaid25MMana;
extern float                                                         InflectionPointRaid25MArmor;
extern float                                                         InflectionPointRaid25MDamage;

extern float                                                         InflectionPointRaid25MHeroic;
extern float                                                         InflectionPointRaid25MHeroicCurveFloor;
extern float                                                         InflectionPointRaid25MHeroicCurveCeiling;
extern float                                                         InflectionPointRaid25MHeroicBoss;
extern float                                                         InflectionPointRaid25MHeroicBossInflection;
extern float                                                         InflectionPointRaid25MHeroicHealth;
extern float                                                         InflectionPointRaid25MHeroicMana;
extern float                                                         InflectionPointRaid25MHeroicArmor;
extern float                                                         InflectionPointRaid25MHeroicDamage;

extern float                                                         InflectionPointRaid40M;
extern float                                                         InflectionPointRaid40MCurveFloor;
extern float                                                         InflectionPointRaid40MCurveCeiling;
extern float                                                         InflectionPointRaid40MBoss;
extern float                                                         InflectionPointRaid40MBossInflection;
extern float                                                         InflectionPointRaid40MHealth;
extern float                                                         InflectionPointRaid40MMana;
extern float                                                         InflectionPointRaid40MArmor;
extern float                                                         InflectionPointRaid40MDamage;

//
// FormulaType* (Health and Damage formula selection)
//

extern FormulaType                                                    FormulaTypeHealth;
extern FormulaType                                                    FormulaTypeMana;
extern FormulaType                                                    FormulaTypeArmor;
extern FormulaType                                                    FormulaTypeDamage;
extern FormulaType                                                    FormulaTypeBossHealth;
extern FormulaType                                                    FormulaTypeBossMana;
extern FormulaType                                                    FormulaTypeBossArmor;
extern FormulaType                                                    FormulaTypeBossDamage;

//
// StatModifier*
//

extern float                                                         StatModifier_Global;
extern float                                                         StatModifier_Health;
extern float                                                         StatModifier_Mana;
extern float                                                         StatModifier_Armor;
extern float                                                         StatModifier_Damage;
extern float                                                         StatModifier_CCDuration;

extern float                                                         StatModifierHeroic_Global;
extern float                                                         StatModifierHeroic_Health;
extern float                                                         StatModifierHeroic_Mana;
extern float                                                         StatModifierHeroic_Armor;
extern float                                                         StatModifierHeroic_Damage;
extern float                                                         StatModifierHeroic_CCDuration;

extern float                                                         StatModifierRaid_Global;
extern float                                                         StatModifierRaid_Health;
extern float                                                         StatModifierRaid_Mana;
extern float                                                         StatModifierRaid_Armor;
extern float                                                         StatModifierRaid_Damage;
extern float                                                         StatModifierRaid_CCDuration;

extern float                                                         StatModifierRaidHeroic_Global;
extern float                                                         StatModifierRaidHeroic_Health;
extern float                                                         StatModifierRaidHeroic_Mana;
extern float                                                         StatModifierRaidHeroic_Armor;
extern float                                                         StatModifierRaidHeroic_Damage;
extern float                                                         StatModifierRaidHeroic_CCDuration;

extern float                                                         StatModifierRaid10M_Global;
extern float                                                         StatModifierRaid10M_Health;
extern float                                                         StatModifierRaid10M_Mana;
extern float                                                         StatModifierRaid10M_Armor;
extern float                                                         StatModifierRaid10M_Damage;
extern float                                                         StatModifierRaid10M_CCDuration;

extern float                                                         StatModifierRaid10MHeroic_Global;
extern float                                                         StatModifierRaid10MHeroic_Health;
extern float                                                         StatModifierRaid10MHeroic_Mana;
extern float                                                         StatModifierRaid10MHeroic_Armor;
extern float                                                         StatModifierRaid10MHeroic_Damage;
extern float                                                         StatModifierRaid10MHeroic_CCDuration;

extern float                                                         StatModifierRaid15M_Global;
extern float                                                         StatModifierRaid15M_Health;
extern float                                                         StatModifierRaid15M_Mana;
extern float                                                         StatModifierRaid15M_Armor;
extern float                                                         StatModifierRaid15M_Damage;
extern float                                                         StatModifierRaid15M_CCDuration;

extern float                                                         StatModifierRaid20M_Global;
extern float                                                         StatModifierRaid20M_Health;
extern float                                                         StatModifierRaid20M_Mana;
extern float                                                         StatModifierRaid20M_Armor;
extern float                                                         StatModifierRaid20M_Damage;
extern float                                                         StatModifierRaid20M_CCDuration;

extern float                                                         StatModifierRaid25M_Global;
extern float                                                         StatModifierRaid25M_Health;
extern float                                                         StatModifierRaid25M_Mana;
extern float                                                         StatModifierRaid25M_Armor;
extern float                                                         StatModifierRaid25M_Damage;
extern float                                                         StatModifierRaid25M_CCDuration;

extern float                                                         StatModifierRaid25MHeroic_Global;
extern float                                                         StatModifierRaid25MHeroic_Health;
extern float                                                         StatModifierRaid25MHeroic_Mana;
extern float                                                         StatModifierRaid25MHeroic_Armor;
extern float                                                         StatModifierRaid25MHeroic_Damage;
extern float                                                         StatModifierRaid25MHeroic_CCDuration;

extern float                                                         StatModifierRaid40M_Global;
extern float                                                         StatModifierRaid40M_Health;
extern float                                                         StatModifierRaid40M_Mana;
extern float                                                         StatModifierRaid40M_Armor;
extern float                                                         StatModifierRaid40M_Damage;
extern float                                                         StatModifierRaid40M_CCDuration;

//
// StatModifier* (Boss)
//

extern float                                                         StatModifier_Boss_Global;
extern float                                                         StatModifier_Boss_Health;
extern float                                                         StatModifier_Boss_Mana;
extern float                                                         StatModifier_Boss_Armor;
extern float                                                         StatModifier_Boss_Damage;
extern float                                                         StatModifier_Boss_CCDuration;

extern float                                                         StatModifierHeroic_Boss_Global;
extern float                                                         StatModifierHeroic_Boss_Health;
extern float                                                         StatModifierHeroic_Boss_Mana;
extern float                                                         StatModifierHeroic_Boss_Armor;
extern float                                                         StatModifierHeroic_Boss_Damage;
extern float                                                         StatModifierHeroic_Boss_CCDuration;

extern float                                                         StatModifierRaid_Boss_Global;
extern float                                                         StatModifierRaid_Boss_Health;
extern float                                                         StatModifierRaid_Boss_Mana;
extern float                                                         StatModifierRaid_Boss_Armor;
extern float                                                         StatModifierRaid_Boss_Damage;
extern float                                                         StatModifierRaid_Boss_CCDuration;

extern float                                                         StatModifierRaidHeroic_Boss_Global;
extern float                                                         StatModifierRaidHeroic_Boss_Health;
extern float                                                         StatModifierRaidHeroic_Boss_Mana;
extern float                                                         StatModifierRaidHeroic_Boss_Armor;
extern float                                                         StatModifierRaidHeroic_Boss_Damage;
extern float                                                         StatModifierRaidHeroic_Boss_CCDuration;

extern float                                                         StatModifierRaid10M_Boss_Global;
extern float                                                         StatModifierRaid10M_Boss_Health;
extern float                                                         StatModifierRaid10M_Boss_Mana;
extern float                                                         StatModifierRaid10M_Boss_Armor;
extern float                                                         StatModifierRaid10M_Boss_Damage;
extern float                                                         StatModifierRaid10M_Boss_CCDuration;

extern float                                                         StatModifierRaid10MHeroic_Boss_Global;
extern float                                                         StatModifierRaid10MHeroic_Boss_Health;
extern float                                                         StatModifierRaid10MHeroic_Boss_Mana;
extern float                                                         StatModifierRaid10MHeroic_Boss_Armor;
extern float                                                         StatModifierRaid10MHeroic_Boss_Damage;
extern float                                                         StatModifierRaid10MHeroic_Boss_CCDuration;

extern float                                                         StatModifierRaid15M_Boss_Global;
extern float                                                         StatModifierRaid15M_Boss_Health;
extern float                                                         StatModifierRaid15M_Boss_Mana;
extern float                                                         StatModifierRaid15M_Boss_Armor;
extern float                                                         StatModifierRaid15M_Boss_Damage;
extern float                                                         StatModifierRaid15M_Boss_CCDuration;

extern float                                                         StatModifierRaid40M_Boss_Damage;
extern float                                                         StatModifierRaid20M_Boss_Global;
extern float                                                         StatModifierRaid20M_Boss_Health;
extern float                                                         StatModifierRaid20M_Boss_Mana;
extern float                                                         StatModifierRaid20M_Boss_Armor;
extern float                                                         StatModifierRaid20M_Boss_Damage;
extern float                                                         StatModifierRaid20M_Boss_CCDuration;

extern float                                                         StatModifierRaid25M_Boss_Global;
extern float                                                         StatModifierRaid25M_Boss_Health;
extern float                                                         StatModifierRaid25M_Boss_Mana;
extern float                                                         StatModifierRaid25M_Boss_Armor;
extern float                                                         StatModifierRaid25M_Boss_Damage;
extern float                                                         StatModifierRaid25M_Boss_CCDuration;

extern float                                                         StatModifierRaid25MHeroic_Boss_Global;
extern float                                                         StatModifierRaid25MHeroic_Boss_Health;
extern float                                                         StatModifierRaid25MHeroic_Boss_Mana;
extern float                                                         StatModifierRaid25MHeroic_Boss_Armor;
extern float                                                         StatModifierRaid25MHeroic_Boss_Damage;
extern float                                                         StatModifierRaid25MHeroic_Boss_CCDuration;

extern float                                                         StatModifierRaid40M_Boss_Global;
extern float                                                         StatModifierRaid40M_Boss_Health;
extern float                                                         StatModifierRaid40M_Boss_Mana;
extern float                                                         StatModifierRaid40M_Boss_Armor;
extern float                                                         StatModifierRaid40M_Boss_CCDuration;

#endif
