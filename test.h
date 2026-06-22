// Generated with github.com/TheNuggetEater05/GModNetvarDumper/

#define OFFSET constexpr static std::ptrdiff_t

#define DERIVES_FROM using parent = 

#include <cstddef>


namespace DT
{
	struct DT_GMODRules;
	struct DT_ScriptedEntity;
	struct DT_LocalActiveWeaponData;
	struct DT_LocalWeaponData;
	struct DT_ServerAnimationData;
	struct DT_BeamPredictableId;
	struct DT_OverlayVars;
	struct DT_BCCLocalPlayerExclusive;
	struct DT_PredictableId;
	struct DT_CollisionProperty;
	struct DT_AnimTimeMustBeFirst;
	struct DT_LocalPlayerExclusive;
	struct DT_PlayerState;
	struct DT_EntityParticleTrailInfo;
	struct _ST_m_hActorList_16;
	struct DT_HL2Local;
	struct DT_EnvHeadcrabCanisterShared;
	struct DT_HL2MPLocalPlayerExclusive;
	struct DT_HL2MPNonLocalPlayerExclusive;
	struct DT_HL2MPRules;
	struct DT_EnvWindShared;
	struct DT_EffectData;
	struct DT_TEWorldDecal;
	struct DT_TESpriteSpray;
	struct DT_TESprite;
	struct DT_TESparks;
	struct DT_TESmoke;
	struct DT_TEShowLine;
	struct DT_TEProjectedDecal;
	struct DT_TEPlayerDecal;
	struct DT_TEPhysicsProp;
	struct DT_TEParticleSystem;
	struct DT_TEMuzzleFlash;
	struct DT_TELargeFunnel;
	struct DT_TEKillPlayerAttachments;
	struct DT_TEGlowSprite;
	struct DT_TEShatterSurface;
	struct DT_TEFootprintDecal;
	struct DT_TEFizz;
	struct DT_TEExplosion;
	struct DT_TEEnergySplash;
	struct DT_TEEffectDispatch;
	struct DT_TEDynamicLight;
	struct DT_TEDecal;
	struct DT_TEClientProjectile;
	struct DT_TEBubbleTrail;
	struct DT_TEBubbles;
	struct DT_TEBSPDecal;
	struct DT_TEBreakModel;
	struct DT_TEBloodStream;
	struct DT_TEBloodSprite;
	struct DT_TEBeamSpline;
	struct DT_TEBeamRingPoint;
	struct DT_TEBeamRing;
	struct DT_TEBeamPoints;
	struct DT_TEBeamLaser;
	struct DT_TEBeamFollow;
	struct DT_TEBeamEnts;
	struct DT_TEBeamEntPoint;
	struct DT_BaseBeam;
	struct DT_TEArmorRicochet;
	struct DT_TEMetalSparks;
	struct DT_SteamJet;
	struct DT_SmokeStack;
	struct DT_DustTrail;
	struct DT_FireTrail;
	struct DT_SporeTrail;
	struct DT_SporeExplosion;
	struct DT_RocketTrail;
	struct DT_SmokeTrail;
	struct DT_PropVehicleDriveable;
	struct DT_ParticleSmokeGrenade;
	struct DT_MovieExplosion;
	struct DT_TEGaussExplosion;
	struct DT_QuadraticBeam;
	struct DT_Embers;
	struct DT_EnvWind;
	struct DT_Precipitation;
	struct DT_PrecipitationBlocker;
	struct DT_BaseTempEntity;
	struct DT_PropEnergyBall;
	struct DT_NPC_RocketTurret;
	struct DT_NPC_Portal_FloorTurret;
	struct DT_WeaponStunStick;
	struct DT_WeaponSMG1;
	struct DT_Weapon_SLAM;
	struct DT_WeaponShotgun;
	struct DT_WeaponRPG;
	struct DT_LaserDot;
	struct DT_WeaponPistol;
	struct DT_WeaponPhysCannon;
	struct DT_BaseHL2MPCombatWeapon;
	struct DT_BaseHL2MPBludgeonWeapon;
	struct DT_HL2MPMachineGun;
	struct DT_WeaponHL2MPBase;
	struct DT_WeaponFrag;
	struct DT_WeaponCrowbar;
	struct DT_WeaponCrossbow;
	struct DT_WeaponAR2;
	struct DT_Weapon357;
	struct DT_HL2MPGameRulesProxy;
	struct DT_TEHL2MPFireBullets;
	struct DT_TEPlayerAnimEvent;
	struct DT_HL2MPRagdoll;
	struct DT_HL2MP_Player;
	struct DT_WeaponBugBait;
	struct DT_CrossbowBolt;
	struct DT_WeaponOldManHarpoon;
	struct DT_WeaponCitizenSuitcase;
	struct DT_WeaponCitizenPackage;
	struct DT_WeaponAlyxGun;
	struct DT_WeaponCubemap;
	struct DT_WeaponAnnabelle;
	struct DT_WeaponCycler;
	struct DT_VortigauntEffectDispel;
	struct DT_VortigauntChargeToken;
	struct DT_NPC_Vortigaunt;
	struct DT_PropVehiclePrisonerPod;
	struct DT_PropCrane;
	struct DT_PropAirboat;
	struct DT_Flare;
	struct DT_TEConcussiveExplosion;
	struct DT_NPC_Strider;
	struct DT_ScriptIntro;
	struct DT_RotorWashEmitter;
	struct DT_PropCombineBall;
	struct DT_PlasmaBeamNode;
	struct DT_RollerMine;
	struct DT_NPC_Manhack;
	struct DT_CombineGunship;
	struct DT_NPC_AntlionGuard;
	struct DT_InfoTeleporterCountdown;
	struct DT_MortarShell;
	struct DT_EnvStarfield;
	struct DT_EnvHeadcrabCanister;
	struct DT_AlyxEmpEffect;
	struct DT_Corpse;
	struct DT_CitadelEnergyCore;
	struct DT_HL2_Player;
	struct DT_BaseHLBludgeonWeapon;
	struct DT_HLSelectFireMachineGun;
	struct DT_HLMachineGun;
	struct DT_BaseHelicopter;
	struct DT_NPC_Barney;
	struct DT_Barnacle;
	struct DT_AR2Explosion;
	struct DT_TEAntlionDust;
	struct DT_BaseHLCombatWeapon;
	struct DT_WeaponShotgun_HL1;
	struct DT_WeaponSatchel;
	struct DT_WeaponRPG_HL1;
	struct DT_LaserDot_HL1;
	struct DT_WeaponMP5;
	struct DT_WeaponHgun;
	struct DT_WeaponHandGrenade;
	struct DT_WeaponGlock;
	struct DT_WeaponGauss;
	struct DT_WeaponEgon;
	struct DT_WeaponCrossbow_HL1;
	struct DT_Weapon357_HL1;
	struct DT_BaseHL1MPCombatWeapon;
	struct DT_WeaponTripMine;
	struct DT_WeaponSnark;
	struct DT_WeaponCrowbar_HL1;
	struct DT_BaseHelicopter_HL1;
	struct DT_RpgRocket;
	struct DT_BaseHL1CombatWeapon;
	struct DT_PredictedViewModel;
	struct DT_TriggerPlayerMovement;
	struct DT_BaseTrigger;
	struct DT_SpatialEntity;
	struct DT_PointWorldText;
	struct DT_EnvAmbientLight;
	struct DT_BeamSpotlight;
	struct DT_BaseToggle;
	struct DT_SpriteTrail;
	struct DT_SpriteOriented;
	struct DT_Sprite;
	struct DT_Ragdoll_Attached;
	struct DT_Ragdoll;
	struct DT_PoseController;
	struct DT_GameRulesProxy;
	struct DT_InfoLadderDismount;
	struct DT_FuncLadder;
	struct DT_DetailController;
	struct DT_World;
	struct DT_WaterLODControl;
	struct DT_WaterBullet;
	struct DT_VGuiScreen;
	struct DT_PropJeep;
	struct DT_PropVehicleChoreoGeneric;
	struct DT_Tesla;
	struct DT_Team;
	struct DT_Sun;
	struct DT_ParticlePerformanceMonitor;
	struct DT_SpotlightEnd;
	struct DT_SlideshowDisplay;
	struct DT_ShadowControl;
	struct DT_SceneEntity;
	struct DT_RopeKeyframe;
	struct DT_RagdollManager;
	struct DT_PhysicsPropMultiplayer;
	struct DT_PhysBoxMultiplayer;
	struct DT_PropDoorRotating;
	struct DT_BasePropDoor;
	struct DT_DynamicProp;
	struct DT_PointCamera;
	struct DT_PlayerResource;
	struct DT_Plasma;
	struct DT_PhysMagnet;
	struct DT_PhysicsProp;
	struct DT_PhysBox;
	struct DT_ParticleSystem;
	struct DT_MaterialModifyControl;
	struct DT_LightGlow;
	struct DT_InfoOverlayAccessor;
	struct DT_FuncTrackTrain;
	struct DT_FuncSmokeVolume;
	struct DT_FuncRotating;
	struct DT_FuncReflectiveGlass;
	struct DT_FuncOccluder;
	struct DT_FuncMonitor;
	struct DT_Func_LOD;
	struct DT_TEDust;
	struct DT_Func_Dust;
	struct DT_FuncConveyor;
	struct DT_BreakableSurface;
	struct DT_FuncAreaPortalWindow;
	struct DT_CFish;
	struct DT_EntityFlame;
	struct DT_FireSmoke;
	struct DT_EnvTonemapController;
	struct DT_EnvScreenEffect;
	struct DT_EnvScreenOverlay;
	struct DT_EnvProjectedTexture;
	struct DT_EnvParticleScript;
	struct DT_FogController;
	struct DT_EntityParticleTrail;
	struct DT_EntityDissolve;
	struct DT_DynamicLight;
	struct DT_ColorCorrectionVolume;
	struct DT_ColorCorrection;
	struct DT_BreakableProp;
	struct DT_BasePlayer;
	struct DT_BaseFlex;
	struct DT_BaseEntity;
	struct DT_BaseDoor;
	struct DT_BaseCombatCharacter;
	struct DT_BaseAnimatingOverlay;
	struct DT_BoneFollower;
	struct DT_BaseAnimating;
	struct DT_InfoLightingRelative;
	struct DT_AI_BaseNPC;
	struct DT_Beam;
	struct DT_BaseViewModel;
	struct DT_BaseParticleEntity;
	struct DT_BaseGrenade;
	struct DT_BaseCombatWeapon;
	struct DT_WeaponPhysGun;
	struct DT_PhysBeam;
	struct DT_LuaNextBot;
	struct DT_FlexManipulate;
	struct DT_BoneManipulate;
	struct DT_WeaponSWEP;
	struct DT_SENT_point;
	struct DT_SENT_anim;
	struct DT_SENT_AI;
	struct DT_GMODGameRulesProxy;
	struct DT_NextBot;
	struct DT_GMOD_Player;
	struct DT_FleshEffectTarget;
	struct DT_CPropJeepEpisodic;
	struct DT_PropScalable;
	struct DT_NPC_Puppet;



	struct DT_TEWorldDecal
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_nIndex = 0x2c;
	}; // DT_TEWorldDecal

	struct DT_TESpriteSpray
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_vecDirection = 0x2c;
		OFFSET m_nModelIndex = 0x38;
		OFFSET m_fNoise = 0x40;
		OFFSET m_nCount = 0x44;
		OFFSET m_nSpeed = 0x3c;
	}; // DT_TESpriteSpray

	struct DT_TESprite
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_nModelIndex = 0x2c;
		OFFSET m_fScale = 0x30;
		OFFSET m_nBrightness = 0x34;
	}; // DT_TESprite

	struct DT_TESparks
	{
		DERIVES_FROM DT_TEParticleSystem;
		OFFSET m_nMagnitude = 0x30;
		OFFSET m_nTrailLength = 0x34;
		OFFSET m_vecDir = 0x38;
	}; // DT_TESparks

	struct DT_TESmoke
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_nModelIndex = 0x2c;
		OFFSET m_fScale = 0x30;
		OFFSET m_nFrameRate = 0x34;
	}; // DT_TESmoke

	struct DT_TEShowLine
	{
		DERIVES_FROM DT_TEParticleSystem;
		OFFSET m_vecEnd = 0x30;
	}; // DT_TEShowLine

	struct DT_TEProjectedDecal
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_angRotation = 0x2c;
		OFFSET m_flDistance = 0x38;
		OFFSET m_nIndex = 0x3c;
	}; // DT_TEProjectedDecal

	struct DT_TEPlayerDecal
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x24;
		OFFSET m_nEntity = 0x30;
		OFFSET m_nPlayer = 0x20;
	}; // DT_TEPlayerDecal

	struct DT_TEPhysicsProp
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_angRotation_0 = 0x2c;
		OFFSET m_angRotation_1 = 0x30;
		OFFSET m_angRotation_2 = 0x34;
		OFFSET m_vecVelocity = 0x38;
		OFFSET m_nModelIndex = 0x44;
		OFFSET m_nFlags = 0x4c;
		OFFSET m_nSkin = 0x48;
		OFFSET m_nEffects = 0x50;
		OFFSET m_clrRender = 0x54;
		OFFSET m_fModelScale = 0x58;
	}; // DT_TEPhysicsProp

	struct DT_TEParticleSystem
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin_0 = 0x20;
		OFFSET m_vecOrigin_1 = 0x24;
		OFFSET m_vecOrigin_2 = 0x28;
	}; // DT_TEParticleSystem

	struct DT_TEMuzzleFlash
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_vecAngles = 0x2c;
		OFFSET m_flScale = 0x38;
		OFFSET m_nType = 0x3c;
	}; // DT_TEMuzzleFlash

	struct DT_TELargeFunnel
	{
		DERIVES_FROM DT_TEParticleSystem;
		OFFSET m_nReversed = 0x30;
	}; // DT_TELargeFunnel

	struct DT_TEKillPlayerAttachments
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_nPlayer = 0x20;
	}; // DT_TEKillPlayerAttachments

	struct DT_TEGlowSprite
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_nModelIndex = 0x2c;
		OFFSET m_fScale = 0x30;
		OFFSET m_fLife = 0x34;
		OFFSET m_nBrightness = 0x38;
	}; // DT_TEGlowSprite

	struct DT_TEShatterSurface
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_vecAngles = 0x2c;
		OFFSET m_vecForce = 0x38;
		OFFSET m_vecForcePos = 0x44;
		OFFSET m_flWidth = 0x50;
		OFFSET m_flHeight = 0x54;
		OFFSET m_flShardSize = 0x58;
		OFFSET m_nSurfaceType = 0x5c;
		OFFSET m_uchFrontColor_0 = 0x60;
		OFFSET m_uchFrontColor_1 = 0x61;
		OFFSET m_uchFrontColor_2 = 0x62;
		OFFSET m_uchBackColor_0 = 0x63;
		OFFSET m_uchBackColor_1 = 0x64;
		OFFSET m_uchBackColor_2 = 0x65;
	}; // DT_TEShatterSurface

	struct DT_TEFootprintDecal
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_vecDirection = 0x2c;
		OFFSET m_nEntity = 0x44;
		OFFSET m_nIndex = 0x48;
	}; // DT_TEFootprintDecal

	struct DT_TEFizz
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_nEntity = 0x20;
		OFFSET m_nModelIndex = 0x24;
		OFFSET m_nDensity = 0x28;
		OFFSET m_nCurrent = 0x2c;
	}; // DT_TEFizz

	struct DT_TEExplosion
	{
		DERIVES_FROM DT_TEParticleSystem;
		OFFSET m_fScale = 0x30;
		OFFSET m_nFlags = 0x34;
		OFFSET m_nRadius = 0x38;
		OFFSET m_nMagnitude = 0x3c;
	}; // DT_TEExplosion

	struct DT_TEEnergySplash
	{
		OFFSET m_vecPos = 0x20;
		OFFSET m_vecDir = 0x2c;
		OFFSET m_bExplosive = 0x38;
	}; // DT_TEEnergySplash

	struct DT_TEEffectDispatch
	{
		DERIVES_FROM DT_BaseTempEntity;
		DERIVES_FROM DT_EffectData;
	}; // DT_TEEffectDispatch

	struct DT_TEDynamicLight
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET r = 0x30;
		OFFSET g = 0x34;
		OFFSET b = 0x38;
		OFFSET exponent = 0x3c;
		OFFSET m_fRadius = 0x2c;
		OFFSET m_fTime = 0x40;
		OFFSET m_fDecay = 0x44;
	}; // DT_TEDynamicLight

	struct DT_TEDecal
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_vecStart = 0x2c;
		OFFSET m_nEntity = 0x38;
		OFFSET m_nHitbox = 0x3c;
		OFFSET m_nIndex = 0x40;
	}; // DT_TEDecal

	struct DT_TEClientProjectile
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_vecVelocity = 0x2c;
		OFFSET m_nModelIndex = 0x38;
		OFFSET m_nLifeTime = 0x3c;
		OFFSET m_hOwner = 0x40;
	}; // DT_TEClientProjectile

	struct DT_TEBubbleTrail
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecMins = 0x20;
		OFFSET m_vecMaxs = 0x2c;
		OFFSET m_nModelIndex = 0x3c;
		OFFSET m_flWaterZ = 0x38;
		OFFSET m_nCount = 0x40;
		OFFSET m_fSpeed = 0x44;
	}; // DT_TEBubbleTrail

	struct DT_TEBubbles
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecMins = 0x20;
		OFFSET m_vecMaxs = 0x2c;
		OFFSET m_nModelIndex = 0x3c;
		OFFSET m_fHeight = 0x38;
		OFFSET m_nCount = 0x40;
		OFFSET m_fSpeed = 0x44;
	}; // DT_TEBubbles

	struct DT_TEBSPDecal
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_nEntity = 0x2c;
		OFFSET m_nIndex = 0x30;
	}; // DT_TEBSPDecal

	struct DT_TEBreakModel
	{
		DERIVES_FROM DT_BaseTempEntity;
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_angRotation_0 = 0x2c;
		OFFSET m_angRotation_1 = 0x30;
		OFFSET m_angRotation_2 = 0x34;
		OFFSET m_vecSize = 0x38;
		OFFSET m_vecVelocity = 0x44;
		OFFSET m_nModelIndex = 0x54;
		OFFSET m_nRandomization = 0x50;
		OFFSET m_nCount = 0x58;
		OFFSET m_fTime = 0x5c;
		OFFSET m_nFlags = 0x60;
	}; // DT_TEBreakModel

	struct DT_TEBloodStream
	{
		DERIVES_FROM DT_TEParticleSystem;
		OFFSET m_vecDirection = 0x30;
		OFFSET r = 0x3c;
		OFFSET g = 0x40;
		OFFSET b = 0x44;
		OFFSET a = 0x48;
		OFFSET m_nAmount = 0x4c;
	}; // DT_TEBloodStream

	struct DT_TEBloodSprite
	{
		OFFSET m_vecOrigin = 0x20;
		OFFSET m_vecDirection = 0x2c;
		OFFSET r = 0x38;
		OFFSET g = 0x3c;
		OFFSET b = 0x40;
		OFFSET a = 0x44;
		OFFSET m_nSize = 0x48;
	}; // DT_TEBloodSprite

	struct DT_TEBeamSpline
	{
		OFFSET m_nPoints = 0xe0;
		OFFSET m_vecPoints_0 = 0x20;
		OFFSET m_vecPoints = 0x0;
	}; // DT_TEBeamSpline

	struct DT_TEBeamRingPoint
	{
		DERIVES_FROM DT_BaseBeam;
		OFFSET m_vecCenter = 0x60;
		OFFSET m_flStartRadius = 0x6c;
		OFFSET m_flEndRadius = 0x70;
	}; // DT_TEBeamRingPoint

	struct DT_TEBeamRing
	{
		DERIVES_FROM DT_BaseBeam;
		OFFSET m_nStartEntity = 0x60;
		OFFSET m_nEndEntity = 0x64;
	}; // DT_TEBeamRing

	struct DT_TEBeamPoints
	{
		DERIVES_FROM DT_BaseBeam;
		OFFSET m_vecStartPoint = 0x60;
		OFFSET m_vecEndPoint = 0x6c;
	}; // DT_TEBeamPoints

	struct DT_TEBeamLaser
	{
		DERIVES_FROM DT_BaseBeam;
		OFFSET m_nStartEntity = 0x60;
		OFFSET m_nEndEntity = 0x64;
	}; // DT_TEBeamLaser

	struct DT_TEBeamFollow
	{
		DERIVES_FROM DT_BaseBeam;
		OFFSET m_iEntIndex = 0x60;
	}; // DT_TEBeamFollow

	struct DT_TEBeamEnts
	{
		DERIVES_FROM DT_BaseBeam;
		OFFSET m_nStartEntity = 0x60;
		OFFSET m_nEndEntity = 0x64;
	}; // DT_TEBeamEnts

	struct DT_TEBeamEntPoint
	{
		DERIVES_FROM DT_BaseBeam;
		OFFSET m_nStartEntity = 0x60;
		OFFSET m_nEndEntity = 0x64;
		OFFSET m_vecStartPoint = 0x68;
		OFFSET m_vecEndPoint = 0x74;
	}; // DT_TEBeamEntPoint

	struct DT_BaseBeam
	{
		OFFSET m_nModelIndex = 0x20;
		OFFSET m_nHaloIndex = 0x24;
		OFFSET m_nStartFrame = 0x28;
		OFFSET m_nFrameRate = 0x2c;
		OFFSET m_fLife = 0x30;
		OFFSET m_fWidth = 0x34;
		OFFSET m_fEndWidth = 0x38;
		OFFSET m_nFadeLength = 0x3c;
		OFFSET m_fAmplitude = 0x40;
		OFFSET m_nSpeed = 0x54;
		OFFSET r = 0x44;
		OFFSET g = 0x48;
		OFFSET b = 0x4c;
		OFFSET a = 0x50;
		OFFSET m_nFlags = 0x58;
	}; // DT_BaseBeam

	struct DT_TEArmorRicochet
	{
		DERIVES_FROM DT_TEMetalSparks;
	}; // DT_TEArmorRicochet

	struct DT_TEMetalSparks
	{
		OFFSET m_vecPos = 0x20;
		OFFSET m_vecDir = 0x2c;
	}; // DT_TEMetalSparks

	struct DT_SteamJet
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_SpreadSpeed = 0x17e8;
		OFFSET m_Speed = 0x17ec;
		OFFSET m_StartSize = 0x17f0;
		OFFSET m_EndSize = 0x17f4;
		OFFSET m_Rate = 0x17f8;
		OFFSET m_JetLength = 0x17fc;
		OFFSET m_bEmit = 0x1800;
		OFFSET m_bFaceLeft = 0x1808;
		OFFSET m_nType = 0x1804;
		OFFSET m_spawnflags = 0x180c;
		OFFSET m_flRollSpeed = 0x1810;
	}; // DT_SteamJet

	struct DT_SmokeStack
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_SpreadSpeed = 0x1840;
		OFFSET m_Speed = 0x1844;
		OFFSET m_StartSize = 0x1848;
		OFFSET m_EndSize = 0x184c;
		OFFSET m_Rate = 0x1850;
		OFFSET m_JetLength = 0x1854;
		OFFSET m_bEmit = 0x1858;
		OFFSET m_flBaseSpread = 0x185c;
		OFFSET m_flTwist = 0x18b0;
		OFFSET m_flRollSpeed = 0x18f8;
		OFFSET m_iMaterialModel = 0x18b4;
		OFFSET m_AmbientLight_m_vPos = 0x1860;
		OFFSET m_AmbientLight_m_vColor = 0x186c;
		OFFSET m_AmbientLight_m_flIntensity = 0x1878;
		OFFSET m_DirLight_m_vPos = 0x187c;
		OFFSET m_DirLight_m_vColor = 0x1888;
		OFFSET m_DirLight_m_flIntensity = 0x1894;
		OFFSET m_vWind = 0x18a4;
	}; // DT_SmokeStack

	struct DT_DustTrail
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_SpawnRate = 0x17e8;
		OFFSET m_Color = 0x17ec;
		OFFSET m_ParticleLifetime = 0x17fc;
		OFFSET m_StopEmitTime = 0x1804;
		OFFSET m_MinSpeed = 0x1808;
		OFFSET m_MaxSpeed = 0x180c;
		OFFSET m_MinDirectedSpeed = 0x1810;
		OFFSET m_MaxDirectedSpeed = 0x1814;
		OFFSET m_StartSize = 0x1818;
		OFFSET m_EndSize = 0x181c;
		OFFSET m_SpawnRadius = 0x1820;
		OFFSET m_bEmit = 0x1830;
		OFFSET m_Opacity = 0x17f8;
	}; // DT_DustTrail

	struct DT_FireTrail
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_nAttachment = 0x17e8;
		OFFSET m_flLifetime = 0x17ec;
	}; // DT_FireTrail

	struct DT_SporeTrail
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_flSpawnRate = 0x17ec;
		OFFSET m_vecEndColor = 0x17e0;
		OFFSET m_flParticleLifetime = 0x17f0;
		OFFSET m_flStartSize = 0x17f4;
		OFFSET m_flEndSize = 0x17f8;
		OFFSET m_flSpawnRadius = 0x17fc;
		OFFSET m_bEmit = 0x180c;
	}; // DT_SporeTrail

	struct DT_SporeExplosion
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_flSpawnRate = 0x17e8;
		OFFSET m_flParticleLifetime = 0x17ec;
		OFFSET m_flStartSize = 0x17f0;
		OFFSET m_flEndSize = 0x17f4;
		OFFSET m_flSpawnRadius = 0x17f8;
		OFFSET m_bEmit = 0x1800;
		OFFSET m_bDontRemove = 0x1801;
	}; // DT_SporeExplosion

	struct DT_RocketTrail
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_SpawnRate = 0x17e8;
		OFFSET m_StartColor = 0x17ec;
		OFFSET m_EndColor = 0x17f8;
		OFFSET m_ParticleLifetime = 0x1808;
		OFFSET m_StopEmitTime = 0x180c;
		OFFSET m_MinSpeed = 0x1810;
		OFFSET m_MaxSpeed = 0x1814;
		OFFSET m_StartSize = 0x1818;
		OFFSET m_EndSize = 0x181c;
		OFFSET m_SpawnRadius = 0x1820;
		OFFSET m_bEmit = 0x1830;
		OFFSET m_nAttachment = 0x1834;
		OFFSET m_Opacity = 0x1804;
		OFFSET m_bDamaged = 0x1831;
		OFFSET m_flFlareScale = 0x1844;
	}; // DT_RocketTrail

	struct DT_SmokeTrail
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_SpawnRate = 0x17e8;
		OFFSET m_StartColor = 0x17ec;
		OFFSET m_EndColor = 0x17f8;
		OFFSET m_ParticleLifetime = 0x1808;
		OFFSET m_StopEmitTime = 0x180c;
		OFFSET m_MinSpeed = 0x1810;
		OFFSET m_MaxSpeed = 0x1814;
		OFFSET m_MinDirectedSpeed = 0x1818;
		OFFSET m_MaxDirectedSpeed = 0x181c;
		OFFSET m_StartSize = 0x1820;
		OFFSET m_EndSize = 0x1824;
		OFFSET m_SpawnRadius = 0x1828;
		OFFSET m_bEmit = 0x1838;
		OFFSET m_nAttachment = 0x183c;
		OFFSET m_Opacity = 0x1804;
	}; // DT_SmokeTrail

	struct DT_PropVehicleDriveable
	{
		DERIVES_FROM DT_BaseAnimating;
		OFFSET m_hPlayer = 0x1bd0;
		OFFSET m_nSpeed = 0x1bd4;
		OFFSET m_nRPM = 0x1bd8;
		OFFSET m_flThrottle = 0x1bdc;
		OFFSET m_nBoostTimeLeft = 0x1be0;
		OFFSET m_nHasBoost = 0x1be4;
		OFFSET m_bEnterAnimOn = 0x1c04;
		OFFSET m_bExitAnimOn = 0x1c05;
		OFFSET m_bUnableToFire = 0x1c75;
		OFFSET m_vecEyeExitEndpoint = 0x1c68;
		OFFSET m_bHasGun = 0x1c74;
		OFFSET m_vecGunCrosshair = 0x1c0c;
		OFFSET m_bLocked = 0x1d00;
	}; // DT_PropVehicleDriveable

	struct DT_ParticleSmokeGrenade
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_flSpawnTime = 0x17f8;
		OFFSET m_FadeStartTime = 0x17fc;
		OFFSET m_FadeEndTime = 0x1800;
		OFFSET m_CurrentStage = 0x17e8;
	}; // DT_ParticleSmokeGrenade

	struct DT_MovieExplosion
	{
		DERIVES_FROM DT_BaseParticleEntity;
	}; // DT_MovieExplosion

	struct DT_TEGaussExplosion
	{
		DERIVES_FROM DT_TEParticleSystem;
		OFFSET m_nType = 0x30;
		OFFSET m_vecDirection = 0x34;
	}; // DT_TEGaussExplosion

	struct DT_QuadraticBeam
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_targetPosition = 0x16b0;
		OFFSET m_controlPosition = 0x16bc;
		OFFSET m_scrollRate = 0x16c8;
		OFFSET m_flWidth = 0x16cc;
	}; // DT_QuadraticBeam

	struct DT_Embers
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_nDensity = 0x16b0;
		OFFSET m_nLifetime = 0x16b4;
		OFFSET m_nSpeed = 0x16b8;
		OFFSET m_bEmit = 0x16bc;
	}; // DT_Embers

	struct DT_EnvWind
	{
		DERIVES_FROM DT_BaseEntity;
		DERIVES_FROM DT_EnvWindShared;
	}; // DT_EnvWind

	struct DT_Precipitation
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_nPrecipType = 0x16dc;
		OFFSET m_sParticleNameClose = 0x17ca;
		OFFSET m_sParticleNameInner = 0x184a;
		OFFSET m_sParticleNameOuter = 0x18ca;
		OFFSET m_flParticleDist = 0x194c;
	}; // DT_Precipitation

	struct DT_PrecipitationBlocker
	{
		DERIVES_FROM DT_BaseEntity;
	}; // DT_PrecipitationBlocker

	struct DT_BaseTempEntity
	{
	}; // DT_BaseTempEntity

	struct DT_PropEnergyBall
	{
		DERIVES_FROM DT_PropCombineBall;
		OFFSET m_bIsInfiniteLife = 0x1bf8;
		OFFSET m_fTimeTillDeath = 0x1bfc;
	}; // DT_PropEnergyBall

	struct DT_NPC_RocketTurret
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_iLaserState = 0x292c;
		OFFSET m_nSiteHalo = 0x2930;
		OFFSET m_vecCurrentAngles = 0x2938;
	}; // DT_NPC_RocketTurret

	struct DT_NPC_Portal_FloorTurret
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_bOutOfAmmo = 0x292c;
		OFFSET m_bLaserOn = 0x292d;
		OFFSET m_sLaserHaloSprite = 0x2930;
	}; // DT_NPC_Portal_FloorTurret

	struct DT_WeaponStunStick
	{
		DERIVES_FROM DT_BaseHL2MPBludgeonWeapon;
		OFFSET m_bActive = 0x1cf4;
	}; // DT_WeaponStunStick

	struct DT_WeaponSMG1
	{
		DERIVES_FROM DT_HL2MPMachineGun;
	}; // DT_WeaponSMG1

	struct DT_Weapon_SLAM
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		OFFSET m_tSlamState = 0x1ca0;
		OFFSET m_bDetonatorArmed = 0x1ca4;
		OFFSET m_bNeedDetonatorDraw = 0x1ca5;
		OFFSET m_bNeedDetonatorHolster = 0x1ca6;
		OFFSET m_bNeedReload = 0x1ca7;
		OFFSET m_bClearReload = 0x1ca8;
		OFFSET m_bThrowSatchel = 0x1ca9;
		OFFSET m_bAttachSatchel = 0x1caa;
		OFFSET m_bAttachTripmine = 0x1cab;
	}; // DT_Weapon_SLAM

	struct DT_WeaponShotgun
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		OFFSET m_bNeedPump = 0x1ca0;
		OFFSET m_bDelayedFire1 = 0x1ca1;
		OFFSET m_bDelayedFire2 = 0x1ca2;
		OFFSET m_bDelayedReload = 0x1ca3;
	}; // DT_WeaponShotgun

	struct DT_WeaponRPG
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		OFFSET m_bInitialStateUpdate = 0x1cb8;
		OFFSET m_bGuiding = 0x1cb9;
		OFFSET m_bHideGuiding = 0x1cba;
		OFFSET m_hMissile = 0x1cbc;
		OFFSET m_vecLaserDot = 0x1cc0;
	}; // DT_WeaponRPG

	struct DT_LaserDot
	{
		DERIVES_FROM DT_BaseEntity;
	}; // DT_LaserDot

	struct DT_WeaponPistol
	{
		DERIVES_FROM DT_HL2MPMachineGun;
		OFFSET m_flSoonestPrimaryAttack = 0x1cb0;
		OFFSET m_flLastAttackTime = 0x1cb8;
		OFFSET m_flAccuracyPenalty = 0x1cc0;
		OFFSET m_nNumShotsFired = 0x1cc4;
	}; // DT_WeaponPistol

	struct DT_WeaponPhysCannon
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		OFFSET m_bActive = 0x2140;
		OFFSET m_hAttachedObject = 0x1cb8;
		OFFSET m_attachedPositionObjectSpace = 0x1cac;
		OFFSET m_attachedAnglesPlayerSpace_0 = 0x1ca0;
		OFFSET m_attachedAnglesPlayerSpace_1 = 0x1ca4;
		OFFSET m_attachedAnglesPlayerSpace_2 = 0x1ca8;
		OFFSET m_EffectState = 0x2144;
		OFFSET m_bOpen = 0x2148;
		OFFSET m_bPhyscannonState = 0x2149;
	}; // DT_WeaponPhysCannon

	struct DT_BaseHL2MPCombatWeapon
	{
		DERIVES_FROM DT_WeaponHL2MPBase;
	}; // DT_BaseHL2MPCombatWeapon

	struct DT_BaseHL2MPBludgeonWeapon
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
	}; // DT_BaseHL2MPBludgeonWeapon

	struct DT_HL2MPMachineGun
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		OFFSET m_nShotsFired = 0x1ca0;
	}; // DT_HL2MPMachineGun

	struct DT_WeaponHL2MPBase
	{
		DERIVES_FROM DT_BaseCombatWeapon;
	}; // DT_WeaponHL2MPBase

	struct DT_WeaponFrag
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		OFFSET m_bRedraw = 0x1ca0;
		OFFSET m_fDrawbackFinished = 0x1ca8;
		OFFSET m_AttackPaused = 0x1ca4;
	}; // DT_WeaponFrag

	struct DT_WeaponCrowbar
	{
		DERIVES_FROM DT_BaseHL2MPBludgeonWeapon;
	}; // DT_WeaponCrowbar

	struct DT_WeaponCrossbow
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		OFFSET m_bInZoom = 0x1ca4;
		OFFSET m_bMustReload = 0x1ca5;
	}; // DT_WeaponCrossbow

	struct DT_WeaponAR2
	{
		DERIVES_FROM DT_HL2MPMachineGun;
	}; // DT_WeaponAR2

	struct DT_Weapon357
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
	}; // DT_Weapon357

	struct DT_HL2MPGameRulesProxy
	{
		DERIVES_FROM DT_GameRulesProxy;
		DERIVES_FROM DT_HL2MPRules;
	}; // DT_HL2MPGameRulesProxy

	struct DT_TEHL2MPFireBullets
	{
		OFFSET m_vecOrigin = 0x24;
		OFFSET m_vecDir = 0x30;
		OFFSET m_iAmmoID = 0x3c;
		OFFSET m_iSeed = 0x44;
		OFFSET m_iShots = 0x4c;
		OFFSET m_iPlayer = 0x20;
		OFFSET m_iWeaponIndex = 0x40;
		OFFSET m_flSpread = 0x48;
		OFFSET m_bDoImpacts = 0x50;
		OFFSET m_bDoTracers = 0x51;
		OFFSET m_TracerType = 0x58;
		OFFSET m_flSpreadY = 0x54;
	}; // DT_TEHL2MPFireBullets

	struct DT_TEPlayerAnimEvent
	{
		OFFSET m_hPlayer = 0x20;
		OFFSET m_iEvent = 0x24;
		OFFSET m_nData = 0x28;
	}; // DT_TEPlayerAnimEvent

	struct DT_HL2MPRagdoll
	{
		OFFSET m_vecRagdollOrigin = 0x1c58;
		OFFSET m_hPlayer = 0x1c48;
		OFFSET m_nModelIndex = 0xd4;
		OFFSET m_nForceBone = 0x1714;
		OFFSET m_vecForce = 0x1708;
		OFFSET m_vecRagdollVelocity = 0x1c4c;
	}; // DT_HL2MPRagdoll

	struct DT_HL2MP_Player
	{
		DERIVES_FROM DT_HL2_Player;
		DERIVES_FROM DT_HL2MPLocalPlayerExclusive;
		DERIVES_FROM DT_HL2MPNonLocalPlayerExclusive;
		OFFSET m_hRagdoll = 0x3630;
		OFFSET m_iSpawnInterpCounter = 0x3674;
		OFFSET m_fIsWalking = 0x364c;
	}; // DT_HL2MP_Player

	struct DT_WeaponBugBait
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		OFFSET m_bRedraw = 0x1ca1;
		OFFSET m_bDrawBackFinished = 0x1ca0;
	}; // DT_WeaponBugBait

	struct DT_CrossbowBolt
	{
		DERIVES_FROM DT_BaseCombatCharacter;
	}; // DT_CrossbowBolt

	struct DT_WeaponOldManHarpoon
	{
		DERIVES_FROM DT_WeaponCitizenPackage;
	}; // DT_WeaponOldManHarpoon

	struct DT_WeaponCitizenSuitcase
	{
		DERIVES_FROM DT_WeaponCitizenPackage;
	}; // DT_WeaponCitizenSuitcase

	struct DT_WeaponCitizenPackage
	{
		DERIVES_FROM DT_BaseHLCombatWeapon;
	}; // DT_WeaponCitizenPackage

	struct DT_WeaponAlyxGun
	{
		DERIVES_FROM DT_HLSelectFireMachineGun;
	}; // DT_WeaponAlyxGun

	struct DT_WeaponCubemap
	{
		DERIVES_FROM DT_BaseCombatWeapon;
	}; // DT_WeaponCubemap

	struct DT_WeaponAnnabelle
	{
		DERIVES_FROM DT_BaseHLCombatWeapon;
	}; // DT_WeaponAnnabelle

	struct DT_WeaponCycler
	{
		DERIVES_FROM DT_BaseCombatWeapon;
	}; // DT_WeaponCycler

	struct DT_VortigauntEffectDispel
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_bFadeOut = 0x16c0;
	}; // DT_VortigauntEffectDispel

	struct DT_VortigauntChargeToken
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_bFadeOut = 0x16b8;
	}; // DT_VortigauntChargeToken

	struct DT_NPC_Vortigaunt
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_flBlueEndFadeTime = 0x292c;
		OFFSET m_bIsBlue = 0x2928;
		OFFSET m_bIsBlack = 0x2930;
	}; // DT_NPC_Vortigaunt

	struct DT_PropVehiclePrisonerPod
	{
		DERIVES_FROM DT_PhysicsProp;
		OFFSET m_hPlayer = 0x1bd8;
		OFFSET m_bEnterAnimOn = 0x1be0;
		OFFSET m_bExitAnimOn = 0x1be1;
		OFFSET m_vecEyeExitEndpoint = 0x1be4;
		OFFSET m_bLimitView = 0x1be2;
		OFFSET m_bLocked = 0x1be3;
	}; // DT_PropVehiclePrisonerPod

	struct DT_PropCrane
	{
		DERIVES_FROM DT_BaseAnimating;
		OFFSET m_hPlayer = 0x1bd0;
		OFFSET m_bMagnetOn = 0x1be8;
		OFFSET m_bEnterAnimOn = 0x1bd8;
		OFFSET m_bExitAnimOn = 0x1bd9;
		OFFSET m_vecEyeExitEndpoint = 0x1bdc;
	}; // DT_PropCrane

	struct DT_PropAirboat
	{
		DERIVES_FROM DT_PropVehicleDriveable;
		OFFSET m_bHeadlightIsOn = 0x1d3c;
		OFFSET m_nAmmoCount = 0x1d40;
		OFFSET m_nExactWaterLevel = 0x1d50;
		OFFSET m_nWaterLevel = 0x200;
		OFFSET m_vecPhysVelocity = 0x2238;
	}; // DT_PropAirboat

	struct DT_Flare
	{
		DERIVES_FROM DT_BaseCombatCharacter;
		OFFSET m_flTimeBurnOut = 0x2a70;
		OFFSET m_flScale = 0x2a74;
		OFFSET m_bLight = 0x2a78;
		OFFSET m_bSmoke = 0x2a79;
		OFFSET m_bPropFlare = 0x2a7a;
	}; // DT_Flare

	struct DT_TEConcussiveExplosion
	{
		DERIVES_FROM DT_TEParticleSystem;
		OFFSET m_vecNormal = 0x30;
		OFFSET m_flScale = 0x3c;
		OFFSET m_nRadius = 0x40;
		OFFSET m_nMagnitude = 0x44;
	}; // DT_TEConcussiveExplosion

	struct DT_NPC_Strider
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_vecHitPos = 0x2990;
		OFFSET m_vecIKTarget_0 = 0x299c;
		OFFSET m_vecIKTarget_1 = 0x29a8;
		OFFSET m_vecIKTarget_2 = 0x29b4;
		OFFSET m_vecIKTarget_3 = 0x29c0;
		OFFSET m_vecIKTarget_4 = 0x29cc;
		OFFSET m_vecIKTarget_5 = 0x29d8;
	}; // DT_NPC_Strider

	struct DT_ScriptIntro
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_vecCameraView = 0x1728;
		OFFSET m_vecCameraViewAngles = 0x1734;
		OFFSET m_iBlendMode = 0x1740;
		OFFSET m_iNextBlendMode = 0x1744;
		OFFSET m_flNextBlendTime = 0x1748;
		OFFSET m_flBlendStartTime = 0x1750;
		OFFSET m_bActive = 0x1758;
		OFFSET m_iFOV = 0x16b4;
		OFFSET m_iNextFOV = 0x16b0;
		OFFSET m_iStartFOV = 0x16bc;
		OFFSET m_flNextFOVBlendTime = 0x16c0;
		OFFSET m_flFOVBlendStartTime = 0x16c8;
		OFFSET m_bAlternateFOV = 0x16d0;
		OFFSET m_flFadeAlpha = 0x176c;
		OFFSET m_flFadeColor_0 = 0x1760;
		OFFSET m_flFadeColor = 0x0;
		OFFSET m_flFadeDuration = 0x1774;
		OFFSET m_hCameraEntity = 0x175c;
	}; // DT_ScriptIntro

	struct DT_RotorWashEmitter
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flAltitude = 0x16b0;
	}; // DT_RotorWashEmitter

	struct DT_PropCombineBall
	{
		DERIVES_FROM DT_BaseAnimating;
		OFFSET m_bEmit = 0x1bd4;
		OFFSET m_flRadius = 0x1bd8;
		OFFSET m_bHeld = 0x1bdc;
		OFFSET m_bLaunched = 0x1bdd;
	}; // DT_PropCombineBall

	struct DT_PlasmaBeamNode
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_vecVelocity = 0x150;
		OFFSET m_bSprayOn = 0x16b0;
	}; // DT_PlasmaBeamNode

	struct DT_RollerMine
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_bIsOpen = 0x2928;
		OFFSET m_flActiveTime = 0x292c;
		OFFSET m_bHackedByAlyx = 0x2930;
		OFFSET m_bPowerDown = 0x2931;
	}; // DT_RollerMine

	struct DT_NPC_Manhack
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_nEnginePitch1 = 0x2940;
		OFFSET m_flEnginePitch1Time = 0x2948;
		OFFSET m_nEnginePitch2 = 0x2944;
		OFFSET m_flEnginePitch2Time = 0x294c;
	}; // DT_NPC_Manhack

	struct DT_CombineGunship
	{
		DERIVES_FROM DT_BaseHelicopter;
		OFFSET m_vecHitPos = 0x2988;
	}; // DT_CombineGunship

	struct DT_NPC_AntlionGuard
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_bCavernBreed = 0x2928;
		OFFSET m_bInCavern = 0x2929;
		OFFSET m_iBleedingLevel = 0x2938;
	}; // DT_NPC_AntlionGuard

	struct DT_InfoTeleporterCountdown
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_bCountdownStarted = 0x16b0;
		OFFSET m_bDisabled = 0x16b1;
		OFFSET m_flStartTime = 0x16b4;
		OFFSET m_flTimeRemaining = 0x16b8;
	}; // DT_InfoTeleporterCountdown

	struct DT_MortarShell
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flLifespan = 0x16c0;
		OFFSET m_flRadius = 0x16c4;
		OFFSET m_vecSurfaceNormal = 0x16cc;
	}; // DT_MortarShell

	struct DT_EnvStarfield
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_bOn = 0x16b8;
		OFFSET m_flDensity = 0x16bc;
	}; // DT_EnvStarfield

	struct DT_EnvHeadcrabCanister
	{
		DERIVES_FROM DT_BaseAnimating;
		DERIVES_FROM DT_EnvHeadcrabCanisterShared;
		OFFSET m_bLanded = 0x1c48;
	}; // DT_EnvHeadcrabCanister

	struct DT_AlyxEmpEffect
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_nState = 0x16b0;
		OFFSET m_flDuration = 0x16b4;
		OFFSET m_flStartTime = 0x16b8;
	}; // DT_AlyxEmpEffect

	struct DT_Corpse
	{
		DERIVES_FROM DT_BaseAnimating;
		OFFSET m_nReferencePlayer = 0x1bc8;
	}; // DT_Corpse

	struct DT_CitadelEnergyCore
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flScale = 0x16b0;
		OFFSET m_nState = 0x16b4;
		OFFSET m_flDuration = 0x16b8;
		OFFSET m_flStartTime = 0x16bc;
		OFFSET m_spawnflags = 0x16c0;
	}; // DT_CitadelEnergyCore

	struct DT_HL2_Player
	{
		DERIVES_FROM DT_BasePlayer;
		DERIVES_FROM DT_HL2Local;
		OFFSET m_fIsSprinting = 0x35a0;
	}; // DT_HL2_Player

	struct DT_BaseHLBludgeonWeapon
	{
		DERIVES_FROM DT_BaseHLCombatWeapon;
	}; // DT_BaseHLBludgeonWeapon

	struct DT_HLSelectFireMachineGun
	{
		DERIVES_FROM DT_HLMachineGun;
	}; // DT_HLSelectFireMachineGun

	struct DT_HLMachineGun
	{
		DERIVES_FROM DT_BaseHLCombatWeapon;
	}; // DT_HLMachineGun

	struct DT_BaseHelicopter
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_flStartupTime = 0x2928;
	}; // DT_BaseHelicopter

	struct DT_NPC_Barney
	{
		DERIVES_FROM DT_AI_BaseNPC;
	}; // DT_NPC_Barney

	struct DT_Barnacle
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_flAltitude = 0x2958;
		OFFSET m_vecRoot = 0x2934;
		OFFSET m_vecTip = 0x2940;
		OFFSET m_vecTipDrawOffset = 0x294c;
	}; // DT_Barnacle

	struct DT_AR2Explosion
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_szMaterialName = 0x17f8;
	}; // DT_AR2Explosion

	struct DT_TEAntlionDust
	{
		DERIVES_FROM DT_TEParticleSystem;
		OFFSET m_vecOrigin = 0x38;
		OFFSET m_vecAngles = 0x44;
		OFFSET m_bBlockedSpawner = 0x50;
	}; // DT_TEAntlionDust

	struct DT_BaseHLCombatWeapon
	{
		DERIVES_FROM DT_BaseCombatWeapon;
	}; // DT_BaseHLCombatWeapon

	struct DT_WeaponShotgun_HL1
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_flPumpTime = 0x1c68;
		OFFSET m_fInSpecialReload = 0x1c6c;
	}; // DT_WeaponShotgun_HL1

	struct DT_WeaponSatchel
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_iRadioViewIndex = 0x1c68;
		OFFSET m_iRadioWorldIndex = 0x1c6c;
		OFFSET m_iSatchelViewIndex = 0x1c70;
		OFFSET m_iSatchelWorldIndex = 0x1c74;
		OFFSET m_iChargeReady = 0x1c78;
	}; // DT_WeaponSatchel

	struct DT_WeaponRPG_HL1
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_bIntialStateUpdate = 0x1c69;
		OFFSET m_bGuiding = 0x1c68;
		OFFSET m_bLaserDotSuspended = 0x1c6a;
	}; // DT_WeaponRPG_HL1

	struct DT_LaserDot_HL1
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_bIsOn = 0x16c9;
	}; // DT_LaserDot_HL1

	struct DT_WeaponMP5
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
	}; // DT_WeaponMP5

	struct DT_WeaponHgun
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_flRechargeTime = 0x1c68;
		OFFSET m_iFirePhase = 0x1c6c;
	}; // DT_WeaponHgun

	struct DT_WeaponHandGrenade
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_flStartThrow = 0x1c68;
		OFFSET m_flReleaseThrow = 0x1c6c;
	}; // DT_WeaponHandGrenade

	struct DT_WeaponGlock
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
	}; // DT_WeaponGlock

	struct DT_WeaponGauss
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_nAttackState = 0x1c68;
		OFFSET m_bPrimaryFire = 0x1c6c;
		OFFSET m_flStartCharge = 0x1c70;
		OFFSET m_flAmmoStartCharge = 0x1c74;
		OFFSET m_flPlayAftershock = 0x1c78;
		OFFSET m_flNextAmmoBurn = 0x1c80;
	}; // DT_WeaponGauss

	struct DT_WeaponEgon
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
	}; // DT_WeaponEgon

	struct DT_WeaponCrossbow_HL1
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_fInZoom = 0x1c68;
	}; // DT_WeaponCrossbow_HL1

	struct DT_Weapon357_HL1
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_fInZoom = 0x1c68;
	}; // DT_Weapon357_HL1

	struct DT_BaseHL1MPCombatWeapon
	{
		DERIVES_FROM DT_BaseHL1CombatWeapon;
	}; // DT_BaseHL1MPCombatWeapon

	struct DT_WeaponTripMine
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_iGroundIndex = 0x1c68;
		OFFSET m_iPickedUpIndex = 0x1c6c;
	}; // DT_WeaponTripMine

	struct DT_WeaponSnark
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
		OFFSET m_bJustThrown = 0x1c68;
	}; // DT_WeaponSnark

	struct DT_WeaponCrowbar_HL1
	{
		DERIVES_FROM DT_BaseHL1MPCombatWeapon;
	}; // DT_WeaponCrowbar_HL1

	struct DT_BaseHelicopter_HL1
	{
		DERIVES_FROM DT_AI_BaseNPC;
	}; // DT_BaseHelicopter_HL1

	struct DT_RpgRocket
	{
		DERIVES_FROM DT_BaseGrenade;
	}; // DT_RpgRocket

	struct DT_BaseHL1CombatWeapon
	{
		DERIVES_FROM DT_BaseCombatWeapon;
	}; // DT_BaseHL1CombatWeapon

	struct DT_PredictedViewModel
	{
		DERIVES_FROM DT_BaseViewModel;
	}; // DT_PredictedViewModel

	struct DT_TriggerPlayerMovement
	{
		DERIVES_FROM DT_BaseTrigger;
	}; // DT_TriggerPlayerMovement

	struct DT_BaseTrigger
	{
		DERIVES_FROM DT_BaseToggle;
		OFFSET m_bClientSidePredicted = 0x16e0;
		OFFSET m_spawnflags = 0x92c;
	}; // DT_BaseTrigger

	struct DT_SpatialEntity
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_vecOrigin = 0x16b0;
		OFFSET m_minFalloff = 0x16bc;
		OFFSET m_maxFalloff = 0x16c0;
		OFFSET m_flCurWeight = 0x16c4;
		OFFSET m_bEnabled = 0x17cc;
	}; // DT_SpatialEntity

	struct DT_PointWorldText
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_szText = 0x16ea;
		OFFSET m_colTextColor = 0x17fc;
		OFFSET m_flTextSize = 0x17f0;
		OFFSET m_flTextSpacingX = 0x17f4;
		OFFSET m_flTextSpacingY = 0x17f8;
		OFFSET m_nOrientation = 0x1800;
		OFFSET m_bRainbow = 0x16e8;
		OFFSET m_bTextEnabled = 0x16e9;
	}; // DT_PointWorldText

	struct DT_EnvAmbientLight
	{
		DERIVES_FROM DT_SpatialEntity;
		OFFSET m_vecColor = 0x17d8;
	}; // DT_EnvAmbientLight

	struct DT_BeamSpotlight
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_nHaloIndex = 0x16b0;
		OFFSET m_bSpotlightOn = 0x16bc;
		OFFSET m_bHasDynamicLight = 0x16bd;
		OFFSET m_flSpotlightMaxLength = 0x16c0;
		OFFSET m_flSpotlightGoalWidth = 0x16c4;
		OFFSET m_flHDRColorScale = 0x16c8;
		OFFSET m_nRotationAxis = 0x16b4;
		OFFSET m_flRotationSpeed = 0x16b8;
	}; // DT_BeamSpotlight

	struct DT_BaseToggle
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_vecFinalDest = 0x16c4;
		OFFSET m_movementType = 0x16d0;
		OFFSET m_flMoveTargetTime = 0x16d4;
	}; // DT_BaseToggle

	struct DT_SpriteTrail
	{
		DERIVES_FROM DT_Sprite;
		OFFSET m_flLifeTime = 0x2758;
		OFFSET m_flStartWidth = 0x275c;
		OFFSET m_flEndWidth = 0x2760;
		OFFSET m_flStartWidthVariance = 0x2764;
		OFFSET m_flTextureRes = 0x2768;
		OFFSET m_flMinFadeLength = 0x276c;
		OFFSET m_vecSkyboxOrigin = 0x2770;
		OFFSET m_flSkyboxScale = 0x277c;
	}; // DT_SpriteTrail

	struct DT_SpriteOriented
	{
		DERIVES_FROM DT_Sprite;
	}; // DT_SpriteOriented

	struct DT_Sprite
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_hAttachedToEntity = 0x16c8;
		OFFSET m_nAttachment = 0x16cc;
		OFFSET m_flScaleTime = 0x16e8;
		OFFSET m_flSpriteScale = 0x16e4;
		OFFSET m_flSpriteFramerate = 0x16d0;
		OFFSET m_flGlowProxySize = 0x16f0;
		OFFSET m_flHDRColorScale = 0x16f4;
		OFFSET m_flFrame = 0x16d4;
		OFFSET m_flBrightnessTime = 0x16e0;
		OFFSET m_nBrightness = 0x16dc;
		OFFSET m_bWorldSpaceScale = 0x16ec;
	}; // DT_Sprite

	struct DT_Ragdoll_Attached
	{
		DERIVES_FROM DT_Ragdoll;
		OFFSET m_boneIndexAttached = 0x2030;
		OFFSET m_ragdollAttachedObjectIndex = 0x202c;
		OFFSET m_attachmentPointBoneSpace = 0x2008;
		OFFSET m_attachmentPointRagdollSpace = 0x2020;
	}; // DT_Ragdoll_Attached

	struct DT_Ragdoll
	{
		DERIVES_FROM DT_BaseAnimating;
		OFFSET m_ragPos_0 = 0x1bc8;
		OFFSET m_ragPos_1 = 0x1bd4;
		OFFSET m_ragPos_2 = 0x1be0;
		OFFSET m_ragPos_3 = 0x1bec;
		OFFSET m_ragPos_4 = 0x1bf8;
		OFFSET m_ragPos_5 = 0x1c04;
		OFFSET m_ragPos_6 = 0x1c10;
		OFFSET m_ragPos_7 = 0x1c1c;
		OFFSET m_ragPos_8 = 0x1c28;
		OFFSET m_ragPos_9 = 0x1c34;
		OFFSET m_ragPos_10 = 0x1c40;
		OFFSET m_ragPos_11 = 0x1c4c;
		OFFSET m_ragPos_12 = 0x1c58;
		OFFSET m_ragPos_13 = 0x1c64;
		OFFSET m_ragPos_14 = 0x1c70;
		OFFSET m_ragPos_15 = 0x1c7c;
		OFFSET m_ragPos_16 = 0x1c88;
		OFFSET m_ragPos_17 = 0x1c94;
		OFFSET m_ragPos_18 = 0x1ca0;
		OFFSET m_ragPos_19 = 0x1cac;
		OFFSET m_ragPos_20 = 0x1cb8;
		OFFSET m_ragPos_21 = 0x1cc4;
		OFFSET m_ragPos_22 = 0x1cd0;
		OFFSET m_ragPos_23 = 0x1cdc;
		OFFSET m_ragPos_24 = 0x1ce8;
		OFFSET m_ragPos_25 = 0x1cf4;
		OFFSET m_ragPos_26 = 0x1d00;
		OFFSET m_ragPos_27 = 0x1d0c;
		OFFSET m_ragPos_28 = 0x1d18;
		OFFSET m_ragPos_29 = 0x1d24;
		OFFSET m_ragPos_30 = 0x1d30;
		OFFSET m_ragPos_31 = 0x1d3c;
		OFFSET m_ragAngles_0 = 0x1d48;
		OFFSET m_ragAngles_1 = 0x1d54;
		OFFSET m_ragAngles_2 = 0x1d60;
		OFFSET m_ragAngles_3 = 0x1d6c;
		OFFSET m_ragAngles_4 = 0x1d78;
		OFFSET m_ragAngles_5 = 0x1d84;
		OFFSET m_ragAngles_6 = 0x1d90;
		OFFSET m_ragAngles_7 = 0x1d9c;
		OFFSET m_ragAngles_8 = 0x1da8;
		OFFSET m_ragAngles_9 = 0x1db4;
		OFFSET m_ragAngles_10 = 0x1dc0;
		OFFSET m_ragAngles_11 = 0x1dcc;
		OFFSET m_ragAngles_12 = 0x1dd8;
		OFFSET m_ragAngles_13 = 0x1de4;
		OFFSET m_ragAngles_14 = 0x1df0;
		OFFSET m_ragAngles_15 = 0x1dfc;
		OFFSET m_ragAngles_16 = 0x1e08;
		OFFSET m_ragAngles_17 = 0x1e14;
		OFFSET m_ragAngles_18 = 0x1e20;
		OFFSET m_ragAngles_19 = 0x1e2c;
		OFFSET m_ragAngles_20 = 0x1e38;
		OFFSET m_ragAngles_21 = 0x1e44;
		OFFSET m_ragAngles_22 = 0x1e50;
		OFFSET m_ragAngles_23 = 0x1e5c;
		OFFSET m_ragAngles_24 = 0x1e68;
		OFFSET m_ragAngles_25 = 0x1e74;
		OFFSET m_ragAngles_26 = 0x1e80;
		OFFSET m_ragAngles_27 = 0x1e8c;
		OFFSET m_ragAngles_28 = 0x1e98;
		OFFSET m_ragAngles_29 = 0x1ea4;
		OFFSET m_ragAngles_30 = 0x1eb0;
		OFFSET m_ragAngles_31 = 0x1ebc;
		OFFSET m_hUnragdoll = 0x1ff0;
		OFFSET m_flBlendWeight = 0x1ff4;
		OFFSET m_nOverlaySequence = 0x1ffc;
	}; // DT_Ragdoll

	struct DT_PoseController
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_hProps = 0x16b0;
		OFFSET m_chPoseIndex = 0x16c0;
		OFFSET m_bPoseValueParity = 0x16c4;
		OFFSET m_fPoseValue = 0x16c8;
		OFFSET m_fInterpolationTime = 0x16cc;
		OFFSET m_bInterpolationWrap = 0x16d0;
		OFFSET m_fCycleFrequency = 0x16d4;
		OFFSET m_nFModType = 0x16d8;
		OFFSET m_fFModTimeOffset = 0x16dc;
		OFFSET m_fFModRate = 0x16e0;
		OFFSET m_fFModAmplitude = 0x16e4;
	}; // DT_PoseController

	struct DT_GameRulesProxy
	{
	}; // DT_GameRulesProxy

	struct DT_InfoLadderDismount
	{
		DERIVES_FROM DT_BaseEntity;
	}; // DT_InfoLadderDismount

	struct DT_FuncLadder
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_vecPlayerMountPositionTop = 0x16e0;
		OFFSET m_vecPlayerMountPositionBottom = 0x16ec;
		OFFSET m_vecLadderDir = 0x16b0;
		OFFSET m_bFakeLadder = 0x16f9;
	}; // DT_FuncLadder

	struct DT_DetailController
	{
		OFFSET m_flFadeStartDist = 0x16b0;
		OFFSET m_flFadeEndDist = 0x16b4;
	}; // DT_DetailController

	struct DT_World
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_WorldMins = 0x16b0;
		OFFSET m_WorldMaxs = 0x16bc;
		OFFSET m_bStartDark = 0x16c8;
		OFFSET m_flMaxOccludeeArea = 0x16cc;
		OFFSET m_flMinOccluderArea = 0x16d0;
		OFFSET m_flMaxPropScreenSpaceWidth = 0x16d8;
		OFFSET m_flMinPropScreenSpaceWidth = 0x16d4;
		OFFSET m_iszDetailSpriteMaterial = 0x16dc;
	}; // DT_World

	struct DT_WaterLODControl
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flCheapWaterStartDistance = 0x16b0;
		OFFSET m_flCheapWaterEndDistance = 0x16b4;
	}; // DT_WaterLODControl

	struct DT_WaterBullet
	{
		DERIVES_FROM DT_BaseAnimating;
	}; // DT_WaterBullet

	struct DT_VGuiScreen
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flWidth = 0x16b8;
		OFFSET m_flHeight = 0x16bc;
		OFFSET m_fScreenFlags = 0x16e4;
		OFFSET m_nPanelName = 0x16c0;
		OFFSET m_nAttachmentIndex = 0x16dc;
		OFFSET m_nOverlayMaterial = 0x16e0;
		OFFSET m_hPlayerOwner = 0x1750;
	}; // DT_VGuiScreen

	struct DT_PropJeep
	{
		DERIVES_FROM DT_PropVehicleDriveable;
		OFFSET m_bHeadlightIsOn = 0x1d48;
	}; // DT_PropJeep

	struct DT_PropVehicleChoreoGeneric
	{
		DERIVES_FROM DT_DynamicProp;
		OFFSET m_hPlayer = 0x1c00;
		OFFSET m_bEnterAnimOn = 0x1c08;
		OFFSET m_bExitAnimOn = 0x1c09;
		OFFSET m_bForceEyesToAttachment = 0x1c18;
		OFFSET m_vecEyeExitEndpoint = 0x1c0c;
		OFFSET m_vehicleView_bClampEyeAngles = 0x1ca8;
		OFFSET m_vehicleView_flPitchCurveZero = 0x1cac;
		OFFSET m_vehicleView_flPitchCurveLinear = 0x1cb0;
		OFFSET m_vehicleView_flRollCurveZero = 0x1cb4;
		OFFSET m_vehicleView_flRollCurveLinear = 0x1cb8;
		OFFSET m_vehicleView_flFOV = 0x1cbc;
		OFFSET m_vehicleView_flYawMin = 0x1cc0;
		OFFSET m_vehicleView_flYawMax = 0x1cc4;
		OFFSET m_vehicleView_flPitchMin = 0x1cc8;
		OFFSET m_vehicleView_flPitchMax = 0x1ccc;
	}; // DT_PropVehicleChoreoGeneric

	struct DT_Tesla
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_SoundName = 0x16e0;
		OFFSET m_iszSpriteName = 0x1720;
	}; // DT_Tesla

	struct DT_Team
	{
		OFFSET m_iTeamNum = 0x1704;
		OFFSET m_iScore = 0x16f0;
		OFFSET m_iRoundsWon = 0x16f4;
		OFFSET m_szTeamname = 0x16d0;
		OFFSET player_array_element = 0x0;
		OFFSET player_array = 0x0;
	}; // DT_Team

	struct DT_Sun
	{
		OFFSET m_clrRender = 0x90;
		OFFSET m_clrOverlay = 0x1860;
		OFFSET m_vDirection = 0x186c;
		OFFSET m_bOn = 0x1878;
		OFFSET m_nSize = 0x1864;
		OFFSET m_nOverlaySize = 0x1868;
		OFFSET m_nMaterial = 0x187c;
		OFFSET m_nOverlayMaterial = 0x1880;
		OFFSET HDRColorScale = 0x0;
	}; // DT_Sun

	struct DT_ParticlePerformanceMonitor
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_bMeasurePerf = 0x16b1;
		OFFSET m_bDisplayPerf = 0x16b0;
	}; // DT_ParticlePerformanceMonitor

	struct DT_SpotlightEnd
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flLightScale = 0x16b0;
		OFFSET m_Radius = 0x16b4;
	}; // DT_SpotlightEnd

	struct DT_SlideshowDisplay
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_bEnabled = 0x16b0;
		OFFSET m_szDisplayText = 0x16b1;
		OFFSET m_szSlideshowDirectory = 0x1731;
		OFFSET m_chCurrentSlideLists = 0x17d8;
		OFFSET m_fMinSlideTime = 0x17f0;
		OFFSET m_fMaxSlideTime = 0x17f4;
		OFFSET m_iCycleType = 0x17fc;
		OFFSET m_bNoListRepeats = 0x1800;
	}; // DT_SlideshowDisplay

	struct DT_ShadowControl
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_shadowDirection = 0x16b0;
		OFFSET m_shadowColor = 0x16bc;
		OFFSET m_flShadowMaxDist = 0x16c0;
		OFFSET m_bDisableShadows = 0x16c4;
		OFFSET m_bEnableLocalLightShadows = 0x16c5;
	}; // DT_ShadowControl

	struct DT_SceneEntity
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_nSceneStringIndex = 0x16c4;
		OFFSET m_bIsPlayingBack = 0x16b8;
		OFFSET m_bPaused = 0x16b9;
		OFFSET m_bMultiplayer = 0x16ba;
		OFFSET m_flForceClientTime = 0x16c0;
		DERIVES_FROM _ST_m_hActorList_16;
	}; // DT_SceneEntity

	struct DT_RopeKeyframe
	{
		OFFSET m_iRopeMaterialModelIndex = 0x16ec;
		OFFSET m_hStartPoint = 0x19dc;
		OFFSET m_hEndPoint = 0x19e0;
		OFFSET m_iStartAttachment = 0x19e4;
		OFFSET m_iEndAttachment = 0x19e6;
		OFFSET m_iStartBone = 0x1a9a;
		OFFSET m_iEndBone = 0x1a98;
		OFFSET m_vecStartOffset = 0x1a9c;
		OFFSET m_vecEndOffset = 0x1aa8;
		OFFSET m_clrRender = 0x90;
		OFFSET m_fLockedPoints = 0x19f8;
		OFFSET m_Slack = 0x19f0;
		OFFSET m_RopeLength = 0x19ec;
		OFFSET m_RopeFlags = 0x16e8;
		OFFSET m_TextureScale = 0x19f4;
		OFFSET m_nSegments = 0x19d8;
		OFFSET m_bConstrainBetweenEndpoints = 0x1a90;
		OFFSET m_Subdiv = 0x19e8;
		OFFSET m_Width = 0x19fc;
		OFFSET m_flScrollSpeed = 0x16e4;
		OFFSET m_vecOrigin = 0x438;
		OFFSET moveparent = 0x21c;
		OFFSET m_iParentAttachment = 0x1fe;
	}; // DT_RopeKeyframe

	struct DT_RagdollManager
	{
		OFFSET m_iCurrentMaxRagdollCount = 0x16b0;
	}; // DT_RagdollManager

	struct DT_PhysicsPropMultiplayer
	{
		DERIVES_FROM DT_PhysicsProp;
		OFFSET m_iPhysicsMode = 0x1bd8;
		OFFSET m_fMass = 0x1bdc;
		OFFSET m_collisionMins = 0x1be0;
		OFFSET m_collisionMaxs = 0x1bec;
	}; // DT_PhysicsPropMultiplayer

	struct DT_PhysBoxMultiplayer
	{
		DERIVES_FROM DT_PhysBox;
		OFFSET m_iPhysicsMode = 0x16c0;
		OFFSET m_fMass = 0x16c4;
	}; // DT_PhysBoxMultiplayer

	struct DT_PropDoorRotating
	{
		DERIVES_FROM DT_BasePropDoor;
	}; // DT_PropDoorRotating

	struct DT_BasePropDoor
	{
		DERIVES_FROM DT_DynamicProp;
		OFFSET m_bLocked = 0x1be9;
		OFFSET m_eDoorState = 0x1bec;
	}; // DT_BasePropDoor

	struct DT_DynamicProp
	{
		DERIVES_FROM DT_BreakableProp;
		OFFSET m_bUseHitboxesForRenderBox = 0x1bc8;
	}; // DT_DynamicProp

	struct DT_PointCamera
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_FOV = 0x16b0;
		OFFSET m_Resolution = 0x16b4;
		OFFSET m_bFogEnable = 0x16b8;
		OFFSET m_FogColor = 0x16b9;
		OFFSET m_FogColorHDR = 0x16bd;
		OFFSET m_flFogStart = 0x16c4;
		OFFSET m_flFogEnd = 0x16c8;
		OFFSET m_flFogMaxDensity = 0x16cc;
		OFFSET m_bFogRadial = 0x16d0;
		OFFSET m_bActive = 0x16d1;
		OFFSET m_bUseScreenAspectRatio = 0x16d2;
		OFFSET m_bGlobalOverride = 0x16d3;
	}; // DT_PointCamera

	struct DT_PlayerResource
	{
		OFFSET m_iPing = 0x1ac0;
		OFFSET m_iScore = 0x1cc4;
		OFFSET m_iDeaths = 0x1ec8;
		OFFSET m_bConnected = 0x20cc;
		OFFSET m_iTeam = 0x2150;
		OFFSET m_bAlive = 0x2354;
		OFFSET m_iHealth = 0x23d8;
		OFFSET m_iArmor = 0x25dc;
	}; // DT_PlayerResource

	struct DT_Plasma
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flStartScale = 0x16b0;
		OFFSET m_flScale = 0x16b4;
		OFFSET m_flScaleTime = 0x16b8;
		OFFSET m_nFlags = 0x16bc;
		OFFSET m_nPlasmaModelIndex = 0x16c0;
		OFFSET m_nPlasmaModelIndex2 = 0x16c4;
		OFFSET m_nGlowModelIndex = 0x16c8;
	}; // DT_Plasma

	struct DT_PhysMagnet
	{
		DERIVES_FROM DT_BaseAnimating;
	}; // DT_PhysMagnet

	struct DT_PhysicsProp
	{
		DERIVES_FROM DT_BreakableProp;
		OFFSET m_bAwake = 0x1bc8;
	}; // DT_PhysicsProp

	struct DT_PhysBox
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_mass = 0x16b0;
	}; // DT_PhysBox

	struct DT_ParticleSystem
	{
		OFFSET m_vecOrigin = 0x438;
		OFFSET m_hOwnerEntity = 0x744;
		OFFSET moveparent = 0x21c;
		OFFSET m_iParentAttachment = 0x1fe;
		OFFSET m_angRotation = 0x444;
		OFFSET m_iEffectIndex = 0x16b0;
		OFFSET m_bActive = 0x16b4;
		OFFSET m_flStartTime = 0x16b8;
		OFFSET m_hControlPointEnts = 0x16bc;
		OFFSET m_iControlPointParents = 0x17b8;
		OFFSET m_bWeatherEffect = 0x17f7;
	}; // DT_ParticleSystem

	struct DT_MaterialModifyControl
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_szMaterialName = 0x16b0;
		OFFSET m_szMaterialVar = 0x17af;
		OFFSET m_szMaterialVarValue = 0x18ae;
		OFFSET m_iFrameStart = 0x19bc;
		OFFSET m_iFrameEnd = 0x19c0;
		OFFSET m_bWrap = 0x19c4;
		OFFSET m_flFramerate = 0x19c8;
		OFFSET m_bNewAnimCommandsSemaphore = 0x19cc;
		OFFSET m_flFloatLerpStartValue = 0x19d0;
		OFFSET m_flFloatLerpEndValue = 0x19d4;
		OFFSET m_flFloatLerpTransitionTime = 0x19d8;
		OFFSET m_bFloatLerpWrap = 0x19dc;
		OFFSET m_nModifyMode = 0x19e8;
	}; // DT_MaterialModifyControl

	struct DT_LightGlow
	{
		OFFSET m_clrRender = 0x90;
		OFFSET m_nHorizontalSize = 0x16b0;
		OFFSET m_nVerticalSize = 0x16b4;
		OFFSET m_nMinDist = 0x16b8;
		OFFSET m_nMaxDist = 0x16bc;
		OFFSET m_nOuterMaxDist = 0x16c0;
		OFFSET m_spawnflags = 0x16c4;
		OFFSET m_vecOrigin = 0x438;
		OFFSET m_angRotation = 0x444;
		OFFSET moveparent = 0x21c;
		OFFSET m_flGlowProxySize = 0x17c0;
		OFFSET HDRColorScale = 0x0;
	}; // DT_LightGlow

	struct DT_InfoOverlayAccessor
	{
		OFFSET m_iTextureFrameIndex = 0x738;
		OFFSET m_iOverlayID = 0x16b0;
	}; // DT_InfoOverlayAccessor

	struct DT_FuncTrackTrain
	{
		DERIVES_FROM DT_BaseEntity;
	}; // DT_FuncTrackTrain

	struct DT_FuncSmokeVolume
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_Color1 = 0x17e8;
		OFFSET m_Color2 = 0x17ec;
		OFFSET m_MaterialName = 0x17f0;
		OFFSET m_ParticleDrawWidth = 0x18f0;
		OFFSET m_ParticleSpacingDistance = 0x18f4;
		OFFSET m_DensityRampSpeed = 0x18f8;
		OFFSET m_RotationSpeed = 0x18fc;
		OFFSET m_MovementSpeed = 0x1900;
		OFFSET m_Density = 0x1904;
		OFFSET m_spawnflags = 0x1908;
		DERIVES_FROM DT_CollisionProperty;
	}; // DT_FuncSmokeVolume

	struct DT_FuncRotating
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_vecOrigin = 0x438;
		OFFSET m_angRotation_0 = 0x444;
		OFFSET m_angRotation_1 = 0x448;
		OFFSET m_angRotation_2 = 0x44c;
		OFFSET m_flSimulationTime = 0xb0;
	}; // DT_FuncRotating

	struct DT_FuncReflectiveGlass
	{
		DERIVES_FROM DT_BaseEntity;
	}; // DT_FuncReflectiveGlass

	struct DT_FuncOccluder
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_bActive = 0x16b4;
		OFFSET m_nOccluderIndex = 0x16b0;
	}; // DT_FuncOccluder

	struct DT_FuncMonitor
	{
		DERIVES_FROM DT_BaseEntity;
	}; // DT_FuncMonitor

	struct DT_Func_LOD
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_fDisappearMinDist = 0x16b0;
		OFFSET m_fDisappearMaxDist = 0x16b4;
	}; // DT_Func_LOD

	struct DT_TEDust
	{
		DERIVES_FROM DT_TEParticleSystem;
		OFFSET m_flSize = 0x30;
		OFFSET m_flSpeed = 0x34;
		OFFSET m_vecDirection = 0x38;
	}; // DT_TEDust

	struct DT_Func_Dust
	{
		OFFSET m_Color = 0x16b0;
		OFFSET m_SpawnRate = 0x16b4;
		OFFSET m_flSizeMin = 0x16b8;
		OFFSET m_flSizeMax = 0x16bc;
		OFFSET m_LifetimeMin = 0x16c4;
		OFFSET m_LifetimeMax = 0x16c8;
		OFFSET m_DustFlags = 0x16d8;
		OFFSET m_SpeedMax = 0x16c0;
		OFFSET m_DistMax = 0x16cc;
		OFFSET m_nModelIndex = 0xd4;
		OFFSET m_FallSpeed = 0x16d0;
		OFFSET m_bAffectedByWind = 0x16d4;
		DERIVES_FROM DT_CollisionProperty;
	}; // DT_Func_Dust

	struct DT_FuncConveyor
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flConveyorSpeed = 0x16b0;
	}; // DT_FuncConveyor

	struct DT_BreakableSurface
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_nNumWide = 0x16b8;
		OFFSET m_nNumHigh = 0x16bc;
		OFFSET m_flPanelWidth = 0x16c0;
		OFFSET m_flPanelHeight = 0x16c4;
		OFFSET m_vNormal = 0x16c8;
		OFFSET m_vCorner = 0x16d4;
		OFFSET m_bIsBroken = 0x16e0;
		OFFSET m_nSurfaceType = 0x16e4;
		OFFSET m_RawPanelBitVec = 0x1718;
	}; // DT_BreakableSurface

	struct DT_FuncAreaPortalWindow
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flFadeStartDist = 0x16b0;
		OFFSET m_flFadeDist = 0x16b4;
		OFFSET m_flTranslucencyLimit = 0x16b8;
		OFFSET m_iBackgroundModelIndex = 0x16bc;
	}; // DT_FuncAreaPortalWindow

	struct DT_CFish
	{
		OFFSET m_poolOrigin = 0x1c24;
		OFFSET m_x = 0x1c0c;
		OFFSET m_y = 0x1c10;
		OFFSET m_z = 0x1c14;
		OFFSET m_angle = 0x1c1c;
		OFFSET m_nModelIndex = 0xd4;
		OFFSET m_lifeState = 0xd7;
		OFFSET m_waterLevel = 0x1c30;
	}; // DT_CFish

	struct DT_EntityFlame
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_hEntAttached = 0x16b8;
	}; // DT_EntityFlame

	struct DT_FireSmoke
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flStartScale = 0x16b0;
		OFFSET m_flScale = 0x16b4;
		OFFSET m_flScaleTime = 0x16b8;
		OFFSET m_nFlags = 0x16bc;
		OFFSET m_nFlameModelIndex = 0x16c0;
		OFFSET m_nFlameFromAboveModelIndex = 0x16c4;
	}; // DT_FireSmoke

	struct DT_EnvTonemapController
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_bUseCustomAutoExposureMin = 0x16b0;
		OFFSET m_bUseCustomAutoExposureMax = 0x16b1;
		OFFSET m_bUseCustomBloomScale = 0x16b2;
		OFFSET m_flCustomAutoExposureMin = 0x16b4;
		OFFSET m_flCustomAutoExposureMax = 0x16b8;
		OFFSET m_flCustomBloomScale = 0x16bc;
		OFFSET m_flCustomBloomScaleMinimum = 0x16c0;
	}; // DT_EnvTonemapController

	struct DT_EnvScreenEffect
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flDuration = 0x16b0;
		OFFSET m_nType = 0x16b4;
	}; // DT_EnvScreenEffect

	struct DT_EnvScreenOverlay
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_iszOverlayNames_0 = 0x16b0;
		OFFSET m_iszOverlayNames = 0x0;
		OFFSET m_flOverlayTimes_0 = 0x20a8;
		OFFSET m_flOverlayTimes = 0x0;
		OFFSET m_flStartTime = 0x20d0;
		OFFSET m_iDesiredOverlay = 0x20d4;
		OFFSET m_bIsActive = 0x20d8;
	}; // DT_EnvScreenOverlay

	struct DT_EnvProjectedTexture
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_hTargetEntity = 0x16b4;
		OFFSET m_bState = 0x16b8;
		OFFSET m_flLightFOV = 0x16bc;
		OFFSET m_bEnableShadows = 0x16c0;
		OFFSET m_bLightOnlyTarget = 0x16c1;
		OFFSET m_bLightWorld = 0x16c2;
		OFFSET m_bCameraSpace = 0x16c3;
		OFFSET m_LinearFloatLightColor = 0x16c4;
		OFFSET m_SpotlightTextureName = 0x16d8;
		OFFSET m_nSpotlightTextureFrame = 0x17dc;
		OFFSET m_flNearZ = 0x16d0;
		OFFSET m_flFarZ = 0x16d4;
		OFFSET m_nShadowQuality = 0x17e0;
		OFFSET m_iStyle = 0x17e8;
	}; // DT_EnvProjectedTexture

	struct DT_EnvParticleScript
	{
		DERIVES_FROM DT_BaseAnimating;
		OFFSET m_flSequenceScale = 0x1cf8;
	}; // DT_EnvParticleScript

	struct DT_FogController
	{
		OFFSET m_fog_enable = 0x1700;
		OFFSET m_fog_blend = 0x1701;
		OFFSET m_fog_radial = 0x1702;
		OFFSET m_fog_dirPrimary = 0x16b8;
		OFFSET m_fog_colorPrimary = 0x16c4;
		OFFSET m_fog_colorSecondary = 0x16c8;
		OFFSET m_fog_colorPrimaryHDR = 0x16cc;
		OFFSET m_fog_colorSecondaryHDR = 0x16d0;
		OFFSET m_fog_start = 0x16dc;
		OFFSET m_fog_end = 0x16e0;
		OFFSET m_fog_farz = 0x16e4;
		OFFSET m_fog_maxdensity = 0x16e8;
		OFFSET m_fog_colorPrimaryLerpTo = 0x16d4;
		OFFSET m_fog_colorSecondaryLerpTo = 0x16d8;
		OFFSET m_fog_startLerpTo = 0x16ec;
		OFFSET m_fog_endLerpTo = 0x16f0;
		OFFSET m_fog_maxdensityLerpTo = 0x16f4;
		OFFSET m_fog_lerptime = 0x16f8;
		OFFSET m_fog_duration = 0x16fc;
		OFFSET m_fog_HDRColorScale = 0x1704;
	}; // DT_FogController

	struct DT_EntityParticleTrail
	{
		DERIVES_FROM DT_BaseParticleEntity;
		OFFSET m_iMaterialName = 0x17e0;
		DERIVES_FROM DT_EntityParticleTrailInfo;
		OFFSET m_hConstraintEntity = 0x1808;
	}; // DT_EntityParticleTrail

	struct DT_EntityDissolve
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flStartTime = 0x16b8;
		OFFSET m_flFadeOutStart = 0x16bc;
		OFFSET m_flFadeOutLength = 0x16c0;
		OFFSET m_flFadeOutModelStart = 0x16c4;
		OFFSET m_flFadeOutModelLength = 0x16c8;
		OFFSET m_flFadeInStart = 0x16cc;
		OFFSET m_flFadeInLength = 0x16d0;
		OFFSET m_nDissolveType = 0x16d4;
		OFFSET m_vDissolverOrigin = 0x16e8;
		OFFSET m_nMagnitude = 0x16f4;
	}; // DT_EntityDissolve

	struct DT_DynamicLight
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_Flags = 0x16b0;
		OFFSET m_LightStyle = 0x16b1;
		OFFSET m_Radius = 0x16b4;
		OFFSET m_Exponent = 0x16b8;
		OFFSET m_InnerAngle = 0x16bc;
		OFFSET m_OuterAngle = 0x16c0;
		OFFSET m_SpotRadius = 0x16c4;
	}; // DT_DynamicLight

	struct DT_ColorCorrectionVolume
	{
		DERIVES_FROM DT_BaseTrigger;
		OFFSET m_bEnabled = 0x16f8;
		OFFSET m_MaxWeight = 0x16fc;
		OFFSET m_FadeDuration = 0x1700;
		OFFSET m_Weight = 0x1704;
		OFFSET m_lookupFilename = 0x1708;
		OFFSET m_nModelIndex = 0xd4;
	}; // DT_ColorCorrectionVolume

	struct DT_ColorCorrection
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_vecOrigin = 0x16b0;
		OFFSET m_minFalloff = 0x16bc;
		OFFSET m_maxFalloff = 0x16c0;
		OFFSET m_flCurWeight = 0x16d0;
		OFFSET m_flMaxWeight = 0x16cc;
		OFFSET m_flFadeInDuration = 0x16c4;
		OFFSET m_flFadeOutDuration = 0x16c8;
		OFFSET m_netLookupFilename = 0x16d4;
		OFFSET m_bEnabled = 0x17d8;
		OFFSET m_bClientSide = 0x17d9;
		OFFSET m_bExclusive = 0x17da;
	}; // DT_ColorCorrection

	struct DT_BreakableProp
	{
		DERIVES_FROM DT_BaseAnimating;
	}; // DT_BreakableProp

	struct DT_BasePlayer
	{
		DERIVES_FROM DT_BaseCombatCharacter;
		DERIVES_FROM DT_PlayerState;
		OFFSET m_hVehicle = 0x2c90;
		OFFSET m_hUseEntity = 0x2c98;
		OFFSET m_lifeState = 0xd7;
		OFFSET m_hColorCorrectionCtrl = 0x34e8;
		OFFSET m_flMaxspeed = 0x2c9c;
		OFFSET m_fFlags = 0x450;
		OFFSET m_iObserverMode = 0x2c64;
		OFFSET m_hObserverTarget = 0x2c68;
		OFFSET m_iFOV = 0x2c10;
		OFFSET m_iFOVStart = 0x2c14;
		OFFSET m_flFOVTime = 0x2c18;
		OFFSET m_iDefaultFOV = 0x2c20;
		OFFSET m_hZoomOwner = 0x2c24;
		OFFSET m_hViewModel_0 = 0x2d68;
		OFFSET m_hViewModel = 0x0;
		OFFSET m_bUseWeaponsInVehicle = 0x2d33;
		DERIVES_FROM DT_LocalPlayerExclusive;
	}; // DT_BasePlayer

	struct DT_BaseFlex
	{
		DERIVES_FROM DT_BaseAnimatingOverlay;
		OFFSET m_flexWeight = 0x1cb0;
		OFFSET m_blinktoggle = 0x1e80;
		OFFSET m_viewtarget = 0x1c50;
		OFFSET m_vecViewOffset_0 = 0x144;
		OFFSET m_vecViewOffset_1 = 0x148;
		OFFSET m_vecViewOffset_2 = 0x14c;
		OFFSET m_vecLean = 0x2040;
		OFFSET m_vecShift = 0x20a0;
	}; // DT_BaseFlex

	struct DT_BaseEntity
	{
		DERIVES_FROM DT_AnimTimeMustBeFirst;
		OFFSET m_flSimulationTime = 0xb0;
		OFFSET m_ubInterpolationFrame = 0xc0;
		OFFSET m_vecOrigin = 0x438;
		OFFSET m_angRotation = 0x444;
		OFFSET m_nModelIndex = 0xd4;
		OFFSET m_fEffects = 0xc4;
		OFFSET m_nRenderMode = 0xc2;
		OFFSET m_nRenderFX = 0x8c;
		OFFSET m_clrRender = 0x90;
		OFFSET m_iTeamNum = 0xe4;
		OFFSET m_CollisionGroup = 0x454;
		OFFSET m_flElasticity = 0x300;
		OFFSET m_flShadowCastDistance = 0x304;
		OFFSET m_hOwnerEntity = 0x744;
		OFFSET m_hEffectEntity = 0x748;
		OFFSET moveparent = 0x21c;
		OFFSET m_iParentAttachment = 0x1fe;
		OFFSET movetype = 0x0;
		OFFSET movecollide = 0x0;
		DERIVES_FROM DT_CollisionProperty;
		OFFSET m_iTextureFrameIndex = 0x738;
		DERIVES_FROM DT_PredictableId;
		OFFSET m_bSimulatedEveryTick = 0x735;
		OFFSET m_bAnimatedEveryTick = 0x736;
		OFFSET m_bAlternateSorting = 0x737;
		OFFSET m_takedamage = 0xd6;
		OFFSET m_RealClassName = 0x780;
		OFFSET m_OverrideMaterial = 0x784;
		OFFSET m_OverrideSubMaterials_0 = 0x790;
		OFFSET m_OverrideSubMaterials = 0x0;
		OFFSET m_iHealth = 0xd8;
		OFFSET m_iMaxHealth = 0xdc;
		OFFSET m_spawnflags = 0x92c;
		OFFSET m_iGModFlags = 0x930;
		OFFSET m_bOnFire = 0x77a;
		OFFSET m_CreationTime = 0x77c;
		OFFSET m_vecVelocity_0 = 0x150;
		OFFSET m_vecVelocity_1 = 0x154;
		OFFSET m_vecVelocity_2 = 0x158;
		OFFSET m_GMOD_DataTable = 0x1638;
		OFFSET m_GMOD_bool = 0x998;
		OFFSET m_GMOD_float = 0x9b8;
		OFFSET m_GMOD_int = 0xa38;
		OFFSET m_GMOD_Vector = 0xab8;
		OFFSET m_GMOD_QAngle = 0xc38;
		OFFSET m_GMOD_EHANDLE = 0xdb8;
		OFFSET m_GMOD_String0 = 0xe38;
		OFFSET m_GMOD_String1 = 0x1038;
		OFFSET m_GMOD_String2 = 0x1238;
		OFFSET m_GMOD_String3 = 0x1438;
		OFFSET m_iCreationID = 0x16a4;
		OFFSET m_iMapCreatedID = 0x16a8;
	}; // DT_BaseEntity

	struct DT_BaseDoor
	{
		DERIVES_FROM DT_BaseToggle;
	}; // DT_BaseDoor

	struct DT_BaseCombatCharacter
	{
		DERIVES_FROM DT_BaseFlex;
		DERIVES_FROM DT_BCCLocalPlayerExclusive;
		OFFSET m_hActiveWeapon = 0x2914;
		OFFSET m_hMyWeapons = 0x2514;
		OFFSET m_bloodColor = 0x2110;
	}; // DT_BaseCombatCharacter

	struct DT_BaseAnimatingOverlay
	{
		DERIVES_FROM DT_BaseAnimating;
		DERIVES_FROM DT_OverlayVars;
	}; // DT_BaseAnimatingOverlay

	struct DT_BoneFollower
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_modelIndex = 0x16b0;
		OFFSET m_solidIndex = 0x16b4;
	}; // DT_BoneFollower

	struct DT_BaseAnimating
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_nSequence = 0x19ec;
		OFFSET m_nForceBone = 0x1714;
		OFFSET m_vecForce = 0x1708;
		OFFSET m_nSkin = 0x16c0;
		OFFSET m_nBody = 0x16c4;
		OFFSET m_nHitboxSet = 0x16c8;
		OFFSET m_flModelScale = 0x1800;
		OFFSET m_flModelWidthScale = 0x1800;
		OFFSET m_flPoseParameter = 0x1804;
		OFFSET m_flPlaybackRate = 0x16fc;
		OFFSET m_flEncodedController = 0x1950;
		OFFSET m_bClientSideAnimation = 0x19e9;
		OFFSET m_bClientSideFrameReset = 0x17a6;
		OFFSET m_nNewSequenceParity = 0x19c0;
		OFFSET m_nResetEventsParity = 0x19c4;
		OFFSET m_nMuzzleFlashParity = 0x1ac8;
		OFFSET m_hLightingOrigin = 0x1ac0;
		OFFSET m_hLightingOriginRelative = 0x1ac4;
		DERIVES_FROM DT_ServerAnimationData;
		OFFSET m_fadeMinDist = 0x1790;
		OFFSET m_fadeMaxDist = 0x1794;
		OFFSET m_flFadeScale = 0x1798;
		OFFSET m_pBoneManipulator = 0x1b74;
		OFFSET m_pFlexManipulator = 0x1b7c;
		OFFSET m_OverrideViewTarget = 0x1ae8;
	}; // DT_BaseAnimating

	struct DT_InfoLightingRelative
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_hLightingLandmark = 0x16b0;
	}; // DT_InfoLightingRelative

	struct DT_AI_BaseNPC
	{
		DERIVES_FROM DT_BaseCombatCharacter;
		OFFSET m_lifeState = 0xd7;
		OFFSET m_bPerformAvoidance = 0x2920;
		OFFSET m_bIsMoving = 0x2921;
		OFFSET m_bFadeCorpse = 0x2922;
		OFFSET m_iDeathPose = 0x2918;
		OFFSET m_iDeathFrame = 0x291c;
		OFFSET m_bImportanRagdoll = 0x2923;
	}; // DT_AI_BaseNPC

	struct DT_Beam
	{
		OFFSET m_nBeamType = 0x16d0;
		OFFSET m_nBeamFlags = 0x16d4;
		OFFSET m_nNumBeamEnts = 0x16c4;
		OFFSET m_hAttachEntity = 0x16d8;
		OFFSET m_nAttachIndex = 0x1700;
		OFFSET m_nHaloIndex = 0x16cc;
		OFFSET m_fHaloScale = 0x1734;
		OFFSET m_fWidth = 0x1728;
		OFFSET m_fEndWidth = 0x172c;
		OFFSET m_fFadeLength = 0x1730;
		OFFSET m_fAmplitude = 0x1738;
		OFFSET m_fStartFrame = 0x173c;
		OFFSET m_fSpeed = 0x1740;
		OFFSET m_flFrameRate = 0x16b0;
		OFFSET m_flHDRColorScale = 0x16b4;
		OFFSET m_clrRender = 0x90;
		OFFSET m_nRenderFX = 0x8c;
		OFFSET m_nRenderMode = 0xc2;
		OFFSET m_flFrame = 0x1748;
		OFFSET m_vecEndPos = 0x174c;
		OFFSET m_nModelIndex = 0xd4;
		OFFSET m_nMinDXLevel = 0x1744;
		OFFSET m_vecOrigin = 0x438;
		OFFSET moveparent = 0x21c;
		DERIVES_FROM DT_BeamPredictableId;
	}; // DT_Beam

	struct DT_BaseViewModel
	{
		OFFSET m_nModelIndex = 0xd4;
		OFFSET m_nSkin = 0x16c0;
		OFFSET m_nBody = 0x16c4;
		OFFSET m_nSequence = 0x19ec;
		OFFSET m_nViewModelIndex = 0x1bdc;
		OFFSET m_flPlaybackRate = 0x16fc;
		OFFSET m_fEffects = 0xc4;
		OFFSET m_nAnimationParity = 0x1bf4;
		OFFSET m_hWeapon = 0x1c04;
		OFFSET m_hOwner = 0x1be0;
		OFFSET m_nNewSequenceParity = 0x19c0;
		OFFSET m_nResetEventsParity = 0x19c4;
		OFFSET m_nMuzzleFlashParity = 0x1ac8;
		OFFSET m_flPoseParameter_0 = 0x1804;
		OFFSET m_flPoseParameter = 0x0;
	}; // DT_BaseViewModel

	struct DT_BaseParticleEntity
	{
		DERIVES_FROM DT_BaseEntity;
	}; // DT_BaseParticleEntity

	struct DT_BaseGrenade
	{
		DERIVES_FROM DT_BaseAnimating;
		OFFSET m_flDamage = 0x1be8;
		OFFSET m_DmgRadius = 0x1bcc;
		OFFSET m_bIsLive = 0x1bc9;
		OFFSET m_hThrower = 0x1bfc;
		OFFSET m_vecVelocity = 0x150;
		OFFSET m_fFlags = 0x450;
	}; // DT_BaseGrenade

	struct DT_BaseCombatWeapon
	{
		DERIVES_FROM DT_BaseAnimating;
		DERIVES_FROM DT_LocalWeaponData;
		DERIVES_FROM DT_LocalActiveWeaponData;
		OFFSET m_iViewModelIndex = 0x1bf0;
		OFFSET m_iWorldModelIndex = 0x1bf4;
		OFFSET m_iState = 0x1c14;
		OFFSET m_hOwner = 0x1bc8;
	}; // DT_BaseCombatWeapon

	struct DT_WeaponPhysGun
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		OFFSET m_hPhysBeam = 0x1ca4;
		OFFSET m_vHitPosLocal = 0x1ca8;
		OFFSET m_hGrabbedEntity = 0x1ca0;
	}; // DT_WeaponPhysGun

	struct DT_PhysBeam
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_hTargetEnt = 0x16e0;
		OFFSET m_HoldPos = 0x16d4;
		OFFSET m_bIsOn = 0x16e4;
		OFFSET m_iPhysBone = 0x16d0;
	}; // DT_PhysBeam

	struct DT_LuaNextBot
	{
		DERIVES_FROM DT_NextBot;
		DERIVES_FROM DT_ScriptedEntity;
		OFFSET m_lifeState = 0xd7;
	}; // DT_LuaNextBot

	struct DT_FlexManipulate
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flexScale = 0x1830;
		OFFSET m_EyesLocalTarget = 0x1834;
		OFFSET m_iFlexWeights = 0x16b0;
	}; // DT_FlexManipulate

	struct DT_BoneManipulate
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_BonePos = 0x16b0;
		OFFSET m_BoneAng = 0x2eb0;
		OFFSET m_BoneScale = 0x22b0;
		OFFSET m_BoneJiggle = 0x3ab0;
	}; // DT_BoneManipulate

	struct DT_WeaponSWEP
	{
		DERIVES_FROM DT_BaseHL2MPCombatWeapon;
		DERIVES_FROM DT_ScriptedEntity;
		OFFSET m_strHoldType = 0x1e18;
	}; // DT_WeaponSWEP

	struct DT_SENT_point
	{
		DERIVES_FROM DT_BaseEntity;
		DERIVES_FROM DT_ScriptedEntity;
	}; // DT_SENT_point

	struct DT_SENT_anim
	{
		DERIVES_FROM DT_BaseAnimatingOverlay;
		DERIVES_FROM DT_ScriptedEntity;
	}; // DT_SENT_anim

	struct DT_SENT_AI
	{
		DERIVES_FROM DT_AI_BaseNPC;
		DERIVES_FROM DT_ScriptedEntity;
	}; // DT_SENT_AI

	struct DT_GMODGameRulesProxy
	{
		DERIVES_FROM DT_GameRulesProxy;
		DERIVES_FROM DT_GMODRules;
	}; // DT_GMODGameRulesProxy

	struct DT_NextBot
	{
		DERIVES_FROM DT_BaseCombatCharacter;
	}; // DT_NextBot

	struct DT_GMOD_Player
	{
		DERIVES_FROM DT_HL2MP_Player;
		OFFSET m_iGModPlayerFlags = 0x36a8;
		OFFSET m_HoveredWidget = 0x3870;
		OFFSET m_PressedWidget = 0x3874;
		OFFSET m_Driving = 0x3878;
		OFFSET m_DrivingMode = 0x387c;
		OFFSET m_PlayerClass = 0x3884;
		OFFSET m_bCanZoom = 0x38a5;
		OFFSET m_bCanWalk = 0x38a6;
		OFFSET m_bIsTyping = 0x38a7;
		OFFSET m_StepSize = 0x38a8;
		OFFSET m_JumpPower = 0x38ac;
		OFFSET m_ViewOffset = 0x38b0;
		OFFSET m_ViewOffsetDucked = 0x38bc;
		OFFSET m_fGestureEndTime = 0x38c8;
		OFFSET m_PlayerColor = 0x388c;
		OFFSET m_WeaponColor = 0x3898;
		OFFSET m_Hands = 0x3880;
		OFFSET m_nWaterLevel = 0x200;
		OFFSET m_iMaxArmor = 0x3888;
		OFFSET m_flGravity = 0x1e4;
		OFFSET m_bSprintEnabled = 0x38a4;
	}; // DT_GMOD_Player

	struct DT_FleshEffectTarget
	{
		DERIVES_FROM DT_BaseEntity;
		OFFSET m_flRadius = 0x16b0;
		OFFSET m_flScaleTime = 0x16bc;
	}; // DT_FleshEffectTarget

	struct DT_CPropJeepEpisodic
	{
		DERIVES_FROM DT_PropJeep;
		OFFSET m_iNumRadarContacts = 0x1d50;
		OFFSET m_vecRadarContactPos_0 = 0x1d54;
		OFFSET m_vecRadarContactPos = 0x0;
		OFFSET m_iRadarContactType_0 = 0x1e74;
		OFFSET m_iRadarContactType = 0x0;
	}; // DT_CPropJeepEpisodic

	struct DT_PropScalable
	{
		DERIVES_FROM DT_BaseAnimating;
		OFFSET m_flScaleX = 0x1bc8;
		OFFSET m_flScaleY = 0x1bcc;
		OFFSET m_flScaleZ = 0x1bd0;
		OFFSET m_flLerpTimeX = 0x1bd4;
		OFFSET m_flLerpTimeY = 0x1bd8;
		OFFSET m_flLerpTimeZ = 0x1bdc;
		OFFSET m_flGoalTimeX = 0x1be0;
		OFFSET m_flGoalTimeY = 0x1be4;
		OFFSET m_flGoalTimeZ = 0x1be8;
	}; // DT_PropScalable

	struct DT_NPC_Puppet
	{
		DERIVES_FROM DT_AI_BaseNPC;
		OFFSET m_hAnimationTarget = 0x2928;
		OFFSET m_nTargetAttachment = 0x292c;
	}; // DT_NPC_Puppet

};