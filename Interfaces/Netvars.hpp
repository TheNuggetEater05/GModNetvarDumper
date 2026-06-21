#pragma once
#include <cstddef>



// GModNetvarDumper by Jayden


namespace CTEWorldDecal
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_nIndex = 0x2c;
}; // CTEWorldDecal
namespace CTESpriteSpray
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_vecDirection = 0x2c;
	constexpr std::ptrdiff_t m_nModelIndex = 0x38;
	constexpr std::ptrdiff_t m_fNoise = 0x40;
	constexpr std::ptrdiff_t m_nCount = 0x44;
	constexpr std::ptrdiff_t m_nSpeed = 0x3c;
}; // CTESpriteSpray
namespace CTESprite
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_nModelIndex = 0x2c;
	constexpr std::ptrdiff_t m_fScale = 0x30;
	constexpr std::ptrdiff_t m_nBrightness = 0x34;
}; // CTESprite
namespace CTESparks
{
	constexpr std::ptrdiff_t m_nMagnitude = 0x30;
	constexpr std::ptrdiff_t m_nTrailLength = 0x34;
	constexpr std::ptrdiff_t m_vecDir = 0x38;
}; // CTESparks
namespace CTESmoke
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_nModelIndex = 0x2c;
	constexpr std::ptrdiff_t m_fScale = 0x30;
	constexpr std::ptrdiff_t m_nFrameRate = 0x34;
}; // CTESmoke
namespace CTEShowLine
{
	constexpr std::ptrdiff_t m_vecEnd = 0x30;
}; // CTEShowLine
namespace CTEProjectedDecal
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_angRotation = 0x2c;
	constexpr std::ptrdiff_t m_flDistance = 0x38;
	constexpr std::ptrdiff_t m_nIndex = 0x3c;
}; // CTEProjectedDecal
namespace CTEPlayerDecal
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x24;
	constexpr std::ptrdiff_t m_nEntity = 0x30;
	constexpr std::ptrdiff_t m_nPlayer = 0x20;
}; // CTEPlayerDecal
namespace CTEPhysicsProp
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_angRotation__0 = 0x2c;
	constexpr std::ptrdiff_t m_angRotation__1 = 0x30;
	constexpr std::ptrdiff_t m_angRotation__2 = 0x34;
	constexpr std::ptrdiff_t m_vecVelocity = 0x38;
	constexpr std::ptrdiff_t m_nModelIndex = 0x44;
	constexpr std::ptrdiff_t m_nFlags = 0x4c;
	constexpr std::ptrdiff_t m_nSkin = 0x48;
	constexpr std::ptrdiff_t m_nEffects = 0x50;
	constexpr std::ptrdiff_t m_clrRender = 0x54;
	constexpr std::ptrdiff_t m_fModelScale = 0x58;
}; // CTEPhysicsProp
namespace CTEParticleSystem
{
	constexpr std::ptrdiff_t m_vecOrigin__0 = 0x20;
	constexpr std::ptrdiff_t m_vecOrigin__1 = 0x24;
	constexpr std::ptrdiff_t m_vecOrigin__2 = 0x28;
}; // CTEParticleSystem
namespace CTEMuzzleFlash
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_vecAngles = 0x2c;
	constexpr std::ptrdiff_t m_flScale = 0x38;
	constexpr std::ptrdiff_t m_nType = 0x3c;
}; // CTEMuzzleFlash
namespace CTELargeFunnel
{
	constexpr std::ptrdiff_t m_nReversed = 0x30;
}; // CTELargeFunnel
namespace CTEKillPlayerAttachments
{
	constexpr std::ptrdiff_t m_nPlayer = 0x20;
}; // CTEKillPlayerAttachments
namespace CTEGlowSprite
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_nModelIndex = 0x2c;
	constexpr std::ptrdiff_t m_fScale = 0x30;
	constexpr std::ptrdiff_t m_fLife = 0x34;
	constexpr std::ptrdiff_t m_nBrightness = 0x38;
}; // CTEGlowSprite
namespace CTEShatterSurface
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_vecAngles = 0x2c;
	constexpr std::ptrdiff_t m_vecForce = 0x38;
	constexpr std::ptrdiff_t m_vecForcePos = 0x44;
	constexpr std::ptrdiff_t m_flWidth = 0x50;
	constexpr std::ptrdiff_t m_flHeight = 0x54;
	constexpr std::ptrdiff_t m_flShardSize = 0x58;
	constexpr std::ptrdiff_t m_nSurfaceType = 0x5c;
	constexpr std::ptrdiff_t m_uchFrontColor__0 = 0x60;
	constexpr std::ptrdiff_t m_uchFrontColor__1 = 0x61;
	constexpr std::ptrdiff_t m_uchFrontColor__2 = 0x62;
	constexpr std::ptrdiff_t m_uchBackColor__0 = 0x63;
	constexpr std::ptrdiff_t m_uchBackColor__1 = 0x64;
	constexpr std::ptrdiff_t m_uchBackColor__2 = 0x65;
}; // CTEShatterSurface
namespace CTEFootprintDecal
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_vecDirection = 0x2c;
	constexpr std::ptrdiff_t m_nEntity = 0x44;
	constexpr std::ptrdiff_t m_nIndex = 0x48;
}; // CTEFootprintDecal
namespace CTEFizz
{
	constexpr std::ptrdiff_t m_nEntity = 0x20;
	constexpr std::ptrdiff_t m_nModelIndex = 0x24;
	constexpr std::ptrdiff_t m_nDensity = 0x28;
	constexpr std::ptrdiff_t m_nCurrent = 0x2c;
}; // CTEFizz
namespace CTEExplosion
{
	constexpr std::ptrdiff_t m_fScale = 0x30;
	constexpr std::ptrdiff_t m_nFlags = 0x34;
	constexpr std::ptrdiff_t m_nRadius = 0x38;
	constexpr std::ptrdiff_t m_nMagnitude = 0x3c;
}; // CTEExplosion
namespace CTEEnergySplash
{
	constexpr std::ptrdiff_t m_vecPos = 0x20;
	constexpr std::ptrdiff_t m_vecDir = 0x2c;
	constexpr std::ptrdiff_t m_bExplosive = 0x38;
}; // CTEEnergySplash
namespace CTEEffectDispatch
{
	constexpr std::ptrdiff_t m_EffectData = 0x20; // DATATABLE 
	constexpr std::ptrdiff_t m_EffectData__m_vOrigin__0 = 0x0;
	constexpr std::ptrdiff_t m_EffectData__m_vOrigin__1 = 0x4;
	constexpr std::ptrdiff_t m_EffectData__m_vOrigin__2 = 0x8;
	constexpr std::ptrdiff_t m_EffectData__m_vStart__0 = 0xc;
	constexpr std::ptrdiff_t m_EffectData__m_vStart__1 = 0x10;
	constexpr std::ptrdiff_t m_EffectData__m_vStart__2 = 0x14;
	constexpr std::ptrdiff_t m_EffectData__m_vAngles = 0x24;
	constexpr std::ptrdiff_t m_EffectData__m_vNormal = 0x18;
	constexpr std::ptrdiff_t m_EffectData__m_fFlags = 0x30;
	constexpr std::ptrdiff_t m_EffectData__m_flMagnitude = 0x3c;
	constexpr std::ptrdiff_t m_EffectData__m_flScale = 0x38;
	constexpr std::ptrdiff_t m_EffectData__m_nAttachmentIndex = 0x44;
	constexpr std::ptrdiff_t m_EffectData__m_nSurfaceProp = 0x48;
	constexpr std::ptrdiff_t m_EffectData__m_iEffectName = 0x8c;
	constexpr std::ptrdiff_t m_EffectData__m_nMaterial = 0x4c;
	constexpr std::ptrdiff_t m_EffectData__m_nDamageType = 0x50;
	constexpr std::ptrdiff_t m_EffectData__m_nHitBox = 0x54;
	constexpr std::ptrdiff_t m_EffectData__entindex = 0x0;
	constexpr std::ptrdiff_t m_EffectData__m_nColor = 0x58;
	constexpr std::ptrdiff_t m_EffectData__m_flRadius = 0x40;
	constexpr std::ptrdiff_t m_EffectData__m_bCustomColors = 0x59;
	constexpr std::ptrdiff_t m_EffectData__m_CustomColors__m_vecColor1 = 0x5c;
	constexpr std::ptrdiff_t m_EffectData__m_CustomColors__m_vecColor2 = 0x68;
	constexpr std::ptrdiff_t m_EffectData__m_bControlPoint1 = 0x74;
	constexpr std::ptrdiff_t m_EffectData__m_ControlPoint1__m_eParticleAttachment = 0x78;
	constexpr std::ptrdiff_t m_EffectData__m_ControlPoint1__m_vecOffset__0 = 0x7c;
	constexpr std::ptrdiff_t m_EffectData__m_ControlPoint1__m_vecOffset__1 = 0x80;
	constexpr std::ptrdiff_t m_EffectData__m_ControlPoint1__m_vecOffset__2 = 0x84;
	constexpr std::ptrdiff_t m_EffectData__m_bAllowOverride = 0x88;
}; // CTEEffectDispatch
namespace CTEDynamicLight
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t r = 0x30;
	constexpr std::ptrdiff_t g = 0x34;
	constexpr std::ptrdiff_t b = 0x38;
	constexpr std::ptrdiff_t exponent = 0x3c;
	constexpr std::ptrdiff_t m_fRadius = 0x2c;
	constexpr std::ptrdiff_t m_fTime = 0x40;
	constexpr std::ptrdiff_t m_fDecay = 0x44;
}; // CTEDynamicLight
namespace CTEDecal
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_vecStart = 0x2c;
	constexpr std::ptrdiff_t m_nEntity = 0x38;
	constexpr std::ptrdiff_t m_nHitbox = 0x3c;
	constexpr std::ptrdiff_t m_nIndex = 0x40;
}; // CTEDecal
namespace CTEClientProjectile
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_vecVelocity = 0x2c;
	constexpr std::ptrdiff_t m_nModelIndex = 0x38;
	constexpr std::ptrdiff_t m_nLifeTime = 0x3c;
	constexpr std::ptrdiff_t m_hOwner = 0x40;
}; // CTEClientProjectile
namespace CTEBubbleTrail
{
	constexpr std::ptrdiff_t m_vecMins = 0x20;
	constexpr std::ptrdiff_t m_vecMaxs = 0x2c;
	constexpr std::ptrdiff_t m_nModelIndex = 0x3c;
	constexpr std::ptrdiff_t m_flWaterZ = 0x38;
	constexpr std::ptrdiff_t m_nCount = 0x40;
	constexpr std::ptrdiff_t m_fSpeed = 0x44;
}; // CTEBubbleTrail
namespace CTEBubbles
{
	constexpr std::ptrdiff_t m_vecMins = 0x20;
	constexpr std::ptrdiff_t m_vecMaxs = 0x2c;
	constexpr std::ptrdiff_t m_nModelIndex = 0x3c;
	constexpr std::ptrdiff_t m_fHeight = 0x38;
	constexpr std::ptrdiff_t m_nCount = 0x40;
	constexpr std::ptrdiff_t m_fSpeed = 0x44;
}; // CTEBubbles
namespace CTEBSPDecal
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_nEntity = 0x2c;
	constexpr std::ptrdiff_t m_nIndex = 0x30;
}; // CTEBSPDecal
namespace CTEBreakModel
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_angRotation__0 = 0x2c;
	constexpr std::ptrdiff_t m_angRotation__1 = 0x30;
	constexpr std::ptrdiff_t m_angRotation__2 = 0x34;
	constexpr std::ptrdiff_t m_vecSize = 0x38;
	constexpr std::ptrdiff_t m_vecVelocity = 0x44;
	constexpr std::ptrdiff_t m_nModelIndex = 0x54;
	constexpr std::ptrdiff_t m_nRandomization = 0x50;
	constexpr std::ptrdiff_t m_nCount = 0x58;
	constexpr std::ptrdiff_t m_fTime = 0x5c;
	constexpr std::ptrdiff_t m_nFlags = 0x60;
}; // CTEBreakModel
namespace CTEBloodStream
{
	constexpr std::ptrdiff_t m_vecDirection = 0x30;
	constexpr std::ptrdiff_t r = 0x3c;
	constexpr std::ptrdiff_t g = 0x40;
	constexpr std::ptrdiff_t b = 0x44;
	constexpr std::ptrdiff_t a = 0x48;
	constexpr std::ptrdiff_t m_nAmount = 0x4c;
}; // CTEBloodStream
namespace CTEBloodSprite
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x20;
	constexpr std::ptrdiff_t m_vecDirection = 0x2c;
	constexpr std::ptrdiff_t r = 0x38;
	constexpr std::ptrdiff_t g = 0x3c;
	constexpr std::ptrdiff_t b = 0x40;
	constexpr std::ptrdiff_t a = 0x44;
	constexpr std::ptrdiff_t m_nSize = 0x48;
}; // CTEBloodSprite
namespace CTEBeamSpline
{
	constexpr std::ptrdiff_t m_nPoints = 0xe0;
	constexpr std::ptrdiff_t m_vecPoints__0 = 0x20;
	constexpr std::ptrdiff_t m_vecPoints = 0x0;
}; // CTEBeamSpline
namespace CTEBeamRingPoint
{
	constexpr std::ptrdiff_t m_vecCenter = 0x60;
	constexpr std::ptrdiff_t m_flStartRadius = 0x6c;
	constexpr std::ptrdiff_t m_flEndRadius = 0x70;
}; // CTEBeamRingPoint
namespace CTEBeamRing
{
	constexpr std::ptrdiff_t m_nStartEntity = 0x60;
	constexpr std::ptrdiff_t m_nEndEntity = 0x64;
}; // CTEBeamRing
namespace CTEBeamPoints
{
	constexpr std::ptrdiff_t m_vecStartPoint = 0x60;
	constexpr std::ptrdiff_t m_vecEndPoint = 0x6c;
}; // CTEBeamPoints
namespace CTEBeamLaser
{
	constexpr std::ptrdiff_t m_nStartEntity = 0x60;
	constexpr std::ptrdiff_t m_nEndEntity = 0x64;
}; // CTEBeamLaser
namespace CTEBeamFollow
{
	constexpr std::ptrdiff_t m_iEntIndex = 0x60;
}; // CTEBeamFollow
namespace CTEBeamEnts
{
	constexpr std::ptrdiff_t m_nStartEntity = 0x60;
	constexpr std::ptrdiff_t m_nEndEntity = 0x64;
}; // CTEBeamEnts
namespace CTEBeamEntPoint
{
	constexpr std::ptrdiff_t m_nStartEntity = 0x60;
	constexpr std::ptrdiff_t m_nEndEntity = 0x64;
	constexpr std::ptrdiff_t m_vecStartPoint = 0x68;
	constexpr std::ptrdiff_t m_vecEndPoint = 0x74;
}; // CTEBeamEntPoint
namespace CTEBaseBeam
{
	constexpr std::ptrdiff_t m_nModelIndex = 0x20;
	constexpr std::ptrdiff_t m_nHaloIndex = 0x24;
	constexpr std::ptrdiff_t m_nStartFrame = 0x28;
	constexpr std::ptrdiff_t m_nFrameRate = 0x2c;
	constexpr std::ptrdiff_t m_fLife = 0x30;
	constexpr std::ptrdiff_t m_fWidth = 0x34;
	constexpr std::ptrdiff_t m_fEndWidth = 0x38;
	constexpr std::ptrdiff_t m_nFadeLength = 0x3c;
	constexpr std::ptrdiff_t m_fAmplitude = 0x40;
	constexpr std::ptrdiff_t m_nSpeed = 0x54;
	constexpr std::ptrdiff_t r = 0x44;
	constexpr std::ptrdiff_t g = 0x48;
	constexpr std::ptrdiff_t b = 0x4c;
	constexpr std::ptrdiff_t a = 0x50;
	constexpr std::ptrdiff_t m_nFlags = 0x58;
}; // CTEBaseBeam
namespace CTEArmorRicochet
{
}; // CTEArmorRicochet
namespace CTEMetalSparks
{
	constexpr std::ptrdiff_t m_vecPos = 0x20;
	constexpr std::ptrdiff_t m_vecDir = 0x2c;
}; // CTEMetalSparks
namespace CSteamJet
{
	constexpr std::ptrdiff_t m_SpreadSpeed = 0x17e8;
	constexpr std::ptrdiff_t m_Speed = 0x17ec;
	constexpr std::ptrdiff_t m_StartSize = 0x17f0;
	constexpr std::ptrdiff_t m_EndSize = 0x17f4;
	constexpr std::ptrdiff_t m_Rate = 0x17f8;
	constexpr std::ptrdiff_t m_JetLength = 0x17fc;
	constexpr std::ptrdiff_t m_bEmit = 0x1800;
	constexpr std::ptrdiff_t m_bFaceLeft = 0x1808;
	constexpr std::ptrdiff_t m_nType = 0x1804;
	constexpr std::ptrdiff_t m_spawnflags = 0x180c;
	constexpr std::ptrdiff_t m_flRollSpeed = 0x1810;
}; // CSteamJet
namespace CSmokeStack
{
	constexpr std::ptrdiff_t m_SpreadSpeed = 0x1840;
	constexpr std::ptrdiff_t m_Speed = 0x1844;
	constexpr std::ptrdiff_t m_StartSize = 0x1848;
	constexpr std::ptrdiff_t m_EndSize = 0x184c;
	constexpr std::ptrdiff_t m_Rate = 0x1850;
	constexpr std::ptrdiff_t m_JetLength = 0x1854;
	constexpr std::ptrdiff_t m_bEmit = 0x1858;
	constexpr std::ptrdiff_t m_flBaseSpread = 0x185c;
	constexpr std::ptrdiff_t m_flTwist = 0x18b0;
	constexpr std::ptrdiff_t m_flRollSpeed = 0x18f8;
	constexpr std::ptrdiff_t m_iMaterialModel = 0x18b4;
	constexpr std::ptrdiff_t m_AmbientLight__m_vPos = 0x1860;
	constexpr std::ptrdiff_t m_AmbientLight__m_vColor = 0x186c;
	constexpr std::ptrdiff_t m_AmbientLight__m_flIntensity = 0x1878;
	constexpr std::ptrdiff_t m_DirLight__m_vPos = 0x187c;
	constexpr std::ptrdiff_t m_DirLight__m_vColor = 0x1888;
	constexpr std::ptrdiff_t m_DirLight__m_flIntensity = 0x1894;
	constexpr std::ptrdiff_t m_vWind = 0x18a4;
}; // CSmokeStack
namespace DustTrail
{
	constexpr std::ptrdiff_t m_SpawnRate = 0x17e8;
	constexpr std::ptrdiff_t m_Color = 0x17ec;
	constexpr std::ptrdiff_t m_ParticleLifetime = 0x17fc;
	constexpr std::ptrdiff_t m_StopEmitTime = 0x1804;
	constexpr std::ptrdiff_t m_MinSpeed = 0x1808;
	constexpr std::ptrdiff_t m_MaxSpeed = 0x180c;
	constexpr std::ptrdiff_t m_MinDirectedSpeed = 0x1810;
	constexpr std::ptrdiff_t m_MaxDirectedSpeed = 0x1814;
	constexpr std::ptrdiff_t m_StartSize = 0x1818;
	constexpr std::ptrdiff_t m_EndSize = 0x181c;
	constexpr std::ptrdiff_t m_SpawnRadius = 0x1820;
	constexpr std::ptrdiff_t m_bEmit = 0x1830;
	constexpr std::ptrdiff_t m_Opacity = 0x17f8;
}; // DustTrail
namespace CFireTrail
{
	constexpr std::ptrdiff_t m_nAttachment = 0x17e8;
	constexpr std::ptrdiff_t m_flLifetime = 0x17ec;
}; // CFireTrail
namespace SporeTrail
{
	constexpr std::ptrdiff_t m_flSpawnRate = 0x17ec;
	constexpr std::ptrdiff_t m_vecEndColor = 0x17e0;
	constexpr std::ptrdiff_t m_flParticleLifetime = 0x17f0;
	constexpr std::ptrdiff_t m_flStartSize = 0x17f4;
	constexpr std::ptrdiff_t m_flEndSize = 0x17f8;
	constexpr std::ptrdiff_t m_flSpawnRadius = 0x17fc;
	constexpr std::ptrdiff_t m_bEmit = 0x180c;
}; // SporeTrail
namespace SporeExplosion
{
	constexpr std::ptrdiff_t m_flSpawnRate = 0x17e8;
	constexpr std::ptrdiff_t m_flParticleLifetime = 0x17ec;
	constexpr std::ptrdiff_t m_flStartSize = 0x17f0;
	constexpr std::ptrdiff_t m_flEndSize = 0x17f4;
	constexpr std::ptrdiff_t m_flSpawnRadius = 0x17f8;
	constexpr std::ptrdiff_t m_bEmit = 0x1800;
	constexpr std::ptrdiff_t m_bDontRemove = 0x1801;
}; // SporeExplosion
namespace RocketTrail
{
	constexpr std::ptrdiff_t m_SpawnRate = 0x17e8;
	constexpr std::ptrdiff_t m_StartColor = 0x17ec;
	constexpr std::ptrdiff_t m_EndColor = 0x17f8;
	constexpr std::ptrdiff_t m_ParticleLifetime = 0x1808;
	constexpr std::ptrdiff_t m_StopEmitTime = 0x180c;
	constexpr std::ptrdiff_t m_MinSpeed = 0x1810;
	constexpr std::ptrdiff_t m_MaxSpeed = 0x1814;
	constexpr std::ptrdiff_t m_StartSize = 0x1818;
	constexpr std::ptrdiff_t m_EndSize = 0x181c;
	constexpr std::ptrdiff_t m_SpawnRadius = 0x1820;
	constexpr std::ptrdiff_t m_bEmit = 0x1830;
	constexpr std::ptrdiff_t m_nAttachment = 0x1834;
	constexpr std::ptrdiff_t m_Opacity = 0x1804;
	constexpr std::ptrdiff_t m_bDamaged = 0x1831;
	constexpr std::ptrdiff_t m_flFlareScale = 0x1844;
}; // RocketTrail
namespace SmokeTrail
{
	constexpr std::ptrdiff_t m_SpawnRate = 0x17e8;
	constexpr std::ptrdiff_t m_StartColor = 0x17ec;
	constexpr std::ptrdiff_t m_EndColor = 0x17f8;
	constexpr std::ptrdiff_t m_ParticleLifetime = 0x1808;
	constexpr std::ptrdiff_t m_StopEmitTime = 0x180c;
	constexpr std::ptrdiff_t m_MinSpeed = 0x1810;
	constexpr std::ptrdiff_t m_MaxSpeed = 0x1814;
	constexpr std::ptrdiff_t m_MinDirectedSpeed = 0x1818;
	constexpr std::ptrdiff_t m_MaxDirectedSpeed = 0x181c;
	constexpr std::ptrdiff_t m_StartSize = 0x1820;
	constexpr std::ptrdiff_t m_EndSize = 0x1824;
	constexpr std::ptrdiff_t m_SpawnRadius = 0x1828;
	constexpr std::ptrdiff_t m_bEmit = 0x1838;
	constexpr std::ptrdiff_t m_nAttachment = 0x183c;
	constexpr std::ptrdiff_t m_Opacity = 0x1804;
}; // SmokeTrail
namespace CPropVehicleDriveable
{
	constexpr std::ptrdiff_t m_hPlayer = 0x1bd0;
	constexpr std::ptrdiff_t m_nSpeed = 0x1bd4;
	constexpr std::ptrdiff_t m_nRPM = 0x1bd8;
	constexpr std::ptrdiff_t m_flThrottle = 0x1bdc;
	constexpr std::ptrdiff_t m_nBoostTimeLeft = 0x1be0;
	constexpr std::ptrdiff_t m_nHasBoost = 0x1be4;
	constexpr std::ptrdiff_t m_bEnterAnimOn = 0x1c04;
	constexpr std::ptrdiff_t m_bExitAnimOn = 0x1c05;
	constexpr std::ptrdiff_t m_bUnableToFire = 0x1c75;
	constexpr std::ptrdiff_t m_vecEyeExitEndpoint = 0x1c68;
	constexpr std::ptrdiff_t m_bHasGun = 0x1c74;
	constexpr std::ptrdiff_t m_vecGunCrosshair = 0x1c0c;
	constexpr std::ptrdiff_t m_bLocked = 0x1d00;
}; // CPropVehicleDriveable
namespace ParticleSmokeGrenade
{
	constexpr std::ptrdiff_t m_flSpawnTime = 0x17f8;
	constexpr std::ptrdiff_t m_FadeStartTime = 0x17fc;
	constexpr std::ptrdiff_t m_FadeEndTime = 0x1800;
	constexpr std::ptrdiff_t m_CurrentStage = 0x17e8;
}; // ParticleSmokeGrenade
namespace MovieExplosion
{
}; // MovieExplosion
namespace CTEGaussExplosion
{
	constexpr std::ptrdiff_t m_nType = 0x30;
	constexpr std::ptrdiff_t m_vecDirection = 0x34;
}; // CTEGaussExplosion
namespace CEnvQuadraticBeam
{
	constexpr std::ptrdiff_t m_targetPosition = 0x16b0;
	constexpr std::ptrdiff_t m_controlPosition = 0x16bc;
	constexpr std::ptrdiff_t m_scrollRate = 0x16c8;
	constexpr std::ptrdiff_t m_flWidth = 0x16cc;
}; // CEnvQuadraticBeam
namespace CEmbers
{
	constexpr std::ptrdiff_t m_nDensity = 0x16b0;
	constexpr std::ptrdiff_t m_nLifetime = 0x16b4;
	constexpr std::ptrdiff_t m_nSpeed = 0x16b8;
	constexpr std::ptrdiff_t m_bEmit = 0x16bc;
}; // CEmbers
namespace CEnvWind
{
	constexpr std::ptrdiff_t m_EnvWindShared = 0x16b0; // DATATABLE 
	constexpr std::ptrdiff_t m_EnvWindShared__m_iMinWind = 0x10;
	constexpr std::ptrdiff_t m_EnvWindShared__m_iMaxWind = 0x14;
	constexpr std::ptrdiff_t m_EnvWindShared__m_iMinGust = 0x1c;
	constexpr std::ptrdiff_t m_EnvWindShared__m_iMaxGust = 0x20;
	constexpr std::ptrdiff_t m_EnvWindShared__m_flMinGustDelay = 0x24;
	constexpr std::ptrdiff_t m_EnvWindShared__m_flMaxGustDelay = 0x28;
	constexpr std::ptrdiff_t m_EnvWindShared__m_iGustDirChange = 0x30;
	constexpr std::ptrdiff_t m_EnvWindShared__m_iWindSeed = 0xc;
	constexpr std::ptrdiff_t m_EnvWindShared__m_iInitialWindDir = 0x70;
	constexpr std::ptrdiff_t m_EnvWindShared__m_flInitialWindSpeed = 0x74;
	constexpr std::ptrdiff_t m_EnvWindShared__m_flStartTime = 0x8;
	constexpr std::ptrdiff_t m_EnvWindShared__m_flGustDuration = 0x2c;
	constexpr std::ptrdiff_t m_EnvWindShared__m_windRadius = 0x18;
}; // CEnvWind
namespace CPrecipitation
{
	constexpr std::ptrdiff_t m_nPrecipType = 0x16dc;
	constexpr std::ptrdiff_t m_sParticleNameClose = 0x17ca;
	constexpr std::ptrdiff_t m_sParticleNameInner = 0x184a;
	constexpr std::ptrdiff_t m_sParticleNameOuter = 0x18ca;
	constexpr std::ptrdiff_t m_flParticleDist = 0x194c;
}; // CPrecipitation
namespace CPrecipitationBlocker
{
}; // CPrecipitationBlocker
namespace CBaseTempEntity
{
}; // CBaseTempEntity
namespace CPropEnergyBall
{
	constexpr std::ptrdiff_t m_bIsInfiniteLife = 0x1bf8;
	constexpr std::ptrdiff_t m_fTimeTillDeath = 0x1bfc;
}; // CPropEnergyBall
namespace CNPC_RocketTurret
{
	constexpr std::ptrdiff_t m_iLaserState = 0x292c;
	constexpr std::ptrdiff_t m_nSiteHalo = 0x2930;
	constexpr std::ptrdiff_t m_vecCurrentAngles = 0x2938;
}; // CNPC_RocketTurret
namespace CNPC_Portal_FloorTurret
{
	constexpr std::ptrdiff_t m_bOutOfAmmo = 0x292c;
	constexpr std::ptrdiff_t m_bLaserOn = 0x292d;
	constexpr std::ptrdiff_t m_sLaserHaloSprite = 0x2930;
}; // CNPC_Portal_FloorTurret
namespace CWeaponStunStick
{
	constexpr std::ptrdiff_t m_bActive = 0x1cf4;
}; // CWeaponStunStick
namespace CWeaponSMG1
{
}; // CWeaponSMG1
namespace CWeapon_SLAM
{
	constexpr std::ptrdiff_t m_tSlamState = 0x1ca0;
	constexpr std::ptrdiff_t m_bDetonatorArmed = 0x1ca4;
	constexpr std::ptrdiff_t m_bNeedDetonatorDraw = 0x1ca5;
	constexpr std::ptrdiff_t m_bNeedDetonatorHolster = 0x1ca6;
	constexpr std::ptrdiff_t m_bNeedReload = 0x1ca7;
	constexpr std::ptrdiff_t m_bClearReload = 0x1ca8;
	constexpr std::ptrdiff_t m_bThrowSatchel = 0x1ca9;
	constexpr std::ptrdiff_t m_bAttachSatchel = 0x1caa;
	constexpr std::ptrdiff_t m_bAttachTripmine = 0x1cab;
}; // CWeapon_SLAM
namespace CWeaponShotgun
{
	constexpr std::ptrdiff_t m_bNeedPump = 0x1ca0;
	constexpr std::ptrdiff_t m_bDelayedFire1 = 0x1ca1;
	constexpr std::ptrdiff_t m_bDelayedFire2 = 0x1ca2;
	constexpr std::ptrdiff_t m_bDelayedReload = 0x1ca3;
}; // CWeaponShotgun
namespace CWeaponRPG
{
	constexpr std::ptrdiff_t m_bInitialStateUpdate = 0x1cb8;
	constexpr std::ptrdiff_t m_bGuiding = 0x1cb9;
	constexpr std::ptrdiff_t m_bHideGuiding = 0x1cba;
	constexpr std::ptrdiff_t m_hMissile = 0x1cbc;
	constexpr std::ptrdiff_t m_vecLaserDot = 0x1cc0;
}; // CWeaponRPG
namespace CLaserDot
{
}; // CLaserDot
namespace CWeaponPistol
{
	constexpr std::ptrdiff_t m_flSoonestPrimaryAttack = 0x1cb0;
	constexpr std::ptrdiff_t m_flLastAttackTime = 0x1cb8;
	constexpr std::ptrdiff_t m_flAccuracyPenalty = 0x1cc0;
	constexpr std::ptrdiff_t m_nNumShotsFired = 0x1cc4;
}; // CWeaponPistol
namespace CWeaponPhysCannon
{
	constexpr std::ptrdiff_t m_bActive = 0x2140;
	constexpr std::ptrdiff_t m_hAttachedObject = 0x1cb8;
	constexpr std::ptrdiff_t m_attachedPositionObjectSpace = 0x1cac;
	constexpr std::ptrdiff_t m_attachedAnglesPlayerSpace__0 = 0x1ca0;
	constexpr std::ptrdiff_t m_attachedAnglesPlayerSpace__1 = 0x1ca4;
	constexpr std::ptrdiff_t m_attachedAnglesPlayerSpace__2 = 0x1ca8;
	constexpr std::ptrdiff_t m_EffectState = 0x2144;
	constexpr std::ptrdiff_t m_bOpen = 0x2148;
	constexpr std::ptrdiff_t m_bPhyscannonState = 0x2149;
}; // CWeaponPhysCannon
namespace CBaseHL2MPCombatWeapon
{
}; // CBaseHL2MPCombatWeapon
namespace CBaseHL2MPBludgeonWeapon
{
}; // CBaseHL2MPBludgeonWeapon
namespace CHL2MPMachineGun
{
	constexpr std::ptrdiff_t m_nShotsFired = 0x1ca0;
}; // CHL2MPMachineGun
namespace CWeaponHL2MPBase
{
}; // CWeaponHL2MPBase
namespace CWeaponFrag
{
	constexpr std::ptrdiff_t m_bRedraw = 0x1ca0;
	constexpr std::ptrdiff_t m_fDrawbackFinished = 0x1ca8;
	constexpr std::ptrdiff_t m_AttackPaused = 0x1ca4;
}; // CWeaponFrag
namespace CWeaponCrowbar
{
}; // CWeaponCrowbar
namespace CWeaponCrossbow
{
	constexpr std::ptrdiff_t m_bInZoom = 0x1ca4;
	constexpr std::ptrdiff_t m_bMustReload = 0x1ca5;
}; // CWeaponCrossbow
namespace CWeaponAR2
{
}; // CWeaponAR2
namespace CWeapon357
{
}; // CWeapon357
namespace CHL2MPGameRulesProxy
{
	constexpr std::ptrdiff_t hl2mp_gamerules_data = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t hl2mp_gamerules_data__m_bTeamPlayEnabled = 0x38;
}; // CHL2MPGameRulesProxy
namespace CTEHL2MPFireBullets
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x24;
	constexpr std::ptrdiff_t m_vecDir = 0x30;
	constexpr std::ptrdiff_t m_iAmmoID = 0x3c;
	constexpr std::ptrdiff_t m_iSeed = 0x44;
	constexpr std::ptrdiff_t m_iShots = 0x4c;
	constexpr std::ptrdiff_t m_iPlayer = 0x20;
	constexpr std::ptrdiff_t m_iWeaponIndex = 0x40;
	constexpr std::ptrdiff_t m_flSpread = 0x48;
	constexpr std::ptrdiff_t m_bDoImpacts = 0x50;
	constexpr std::ptrdiff_t m_bDoTracers = 0x51;
	constexpr std::ptrdiff_t m_TracerType = 0x58;
	constexpr std::ptrdiff_t m_flSpreadY = 0x54;
}; // CTEHL2MPFireBullets
namespace CTEPlayerAnimEvent
{
	constexpr std::ptrdiff_t m_hPlayer = 0x20;
	constexpr std::ptrdiff_t m_iEvent = 0x24;
	constexpr std::ptrdiff_t m_nData = 0x28;
}; // CTEPlayerAnimEvent
namespace CHL2MPRagdoll
{
	constexpr std::ptrdiff_t m_vecRagdollOrigin = 0x1c58;
	constexpr std::ptrdiff_t m_hPlayer = 0x1c48;
	constexpr std::ptrdiff_t m_nModelIndex = 0xd4;
	constexpr std::ptrdiff_t m_nForceBone = 0x1714;
	constexpr std::ptrdiff_t m_vecForce = 0x1708;
	constexpr std::ptrdiff_t m_vecRagdollVelocity = 0x1c4c;
}; // CHL2MPRagdoll
namespace CHL2MP_Player
{
	constexpr std::ptrdiff_t hl2mplocaldata = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t hl2mplocaldata__m_vecOrigin = 0x438;
	constexpr std::ptrdiff_t hl2mplocaldata__m_angEyeAngles__0 = 0x35d0;
	constexpr std::ptrdiff_t hl2mplocaldata__m_angEyeAngles__1 = 0x35d4;
	constexpr std::ptrdiff_t hl2mpnonlocaldata = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t hl2mpnonlocaldata__m_vecOrigin = 0x438;
	constexpr std::ptrdiff_t hl2mpnonlocaldata__m_angEyeAngles__0 = 0x35d0;
	constexpr std::ptrdiff_t hl2mpnonlocaldata__m_angEyeAngles__1 = 0x35d4;
	constexpr std::ptrdiff_t m_hRagdoll = 0x3630;
	constexpr std::ptrdiff_t m_iSpawnInterpCounter = 0x3674;
	constexpr std::ptrdiff_t m_fIsWalking = 0x364c;
}; // CHL2MP_Player
namespace CWeaponBugBait
{
	constexpr std::ptrdiff_t m_bRedraw = 0x1ca1;
	constexpr std::ptrdiff_t m_bDrawBackFinished = 0x1ca0;
}; // CWeaponBugBait
namespace CCrossbowBolt
{
}; // CCrossbowBolt
namespace CWeaponOldManHarpoon
{
}; // CWeaponOldManHarpoon
namespace CWeaponCitizenSuitcase
{
}; // CWeaponCitizenSuitcase
namespace CWeaponCitizenPackage
{
}; // CWeaponCitizenPackage
namespace CWeaponAlyxGun
{
}; // CWeaponAlyxGun
namespace CWeaponCubemap
{
}; // CWeaponCubemap
namespace CWeaponAnnabelle
{
}; // CWeaponAnnabelle
namespace CWeaponCycler
{
}; // CWeaponCycler
namespace CVortigauntEffectDispel
{
	constexpr std::ptrdiff_t m_bFadeOut = 0x16c0;
}; // CVortigauntEffectDispel
namespace CVortigauntChargeToken
{
	constexpr std::ptrdiff_t m_bFadeOut = 0x16b8;
}; // CVortigauntChargeToken
namespace CNPC_Vortigaunt
{
	constexpr std::ptrdiff_t m_flBlueEndFadeTime = 0x292c;
	constexpr std::ptrdiff_t m_bIsBlue = 0x2928;
	constexpr std::ptrdiff_t m_bIsBlack = 0x2930;
}; // CNPC_Vortigaunt
namespace CPropVehiclePrisonerPod
{
	constexpr std::ptrdiff_t m_hPlayer = 0x1bd8;
	constexpr std::ptrdiff_t m_bEnterAnimOn = 0x1be0;
	constexpr std::ptrdiff_t m_bExitAnimOn = 0x1be1;
	constexpr std::ptrdiff_t m_vecEyeExitEndpoint = 0x1be4;
	constexpr std::ptrdiff_t m_bLimitView = 0x1be2;
	constexpr std::ptrdiff_t m_bLocked = 0x1be3;
}; // CPropVehiclePrisonerPod
namespace CPropCrane
{
	constexpr std::ptrdiff_t m_hPlayer = 0x1bd0;
	constexpr std::ptrdiff_t m_bMagnetOn = 0x1be8;
	constexpr std::ptrdiff_t m_bEnterAnimOn = 0x1bd8;
	constexpr std::ptrdiff_t m_bExitAnimOn = 0x1bd9;
	constexpr std::ptrdiff_t m_vecEyeExitEndpoint = 0x1bdc;
}; // CPropCrane
namespace CPropAirboat
{
	constexpr std::ptrdiff_t m_bHeadlightIsOn = 0x1d3c;
	constexpr std::ptrdiff_t m_nAmmoCount = 0x1d40;
	constexpr std::ptrdiff_t m_nExactWaterLevel = 0x1d50;
	constexpr std::ptrdiff_t m_nWaterLevel = 0x200;
	constexpr std::ptrdiff_t m_vecPhysVelocity = 0x2238;
}; // CPropAirboat
namespace CFlare
{
	constexpr std::ptrdiff_t m_flTimeBurnOut = 0x2a70;
	constexpr std::ptrdiff_t m_flScale = 0x2a74;
	constexpr std::ptrdiff_t m_bLight = 0x2a78;
	constexpr std::ptrdiff_t m_bSmoke = 0x2a79;
	constexpr std::ptrdiff_t m_bPropFlare = 0x2a7a;
}; // CFlare
namespace CTEConcussiveExplosion
{
	constexpr std::ptrdiff_t m_vecNormal = 0x30;
	constexpr std::ptrdiff_t m_flScale = 0x3c;
	constexpr std::ptrdiff_t m_nRadius = 0x40;
	constexpr std::ptrdiff_t m_nMagnitude = 0x44;
}; // CTEConcussiveExplosion
namespace CNPC_Strider
{
	constexpr std::ptrdiff_t m_vecHitPos = 0x2990;
	constexpr std::ptrdiff_t m_vecIKTarget__0 = 0x299c;
	constexpr std::ptrdiff_t m_vecIKTarget__1 = 0x29a8;
	constexpr std::ptrdiff_t m_vecIKTarget__2 = 0x29b4;
	constexpr std::ptrdiff_t m_vecIKTarget__3 = 0x29c0;
	constexpr std::ptrdiff_t m_vecIKTarget__4 = 0x29cc;
	constexpr std::ptrdiff_t m_vecIKTarget__5 = 0x29d8;
}; // CNPC_Strider
namespace CScriptIntro
{
	constexpr std::ptrdiff_t m_vecCameraView = 0x1728;
	constexpr std::ptrdiff_t m_vecCameraViewAngles = 0x1734;
	constexpr std::ptrdiff_t m_iBlendMode = 0x1740;
	constexpr std::ptrdiff_t m_iNextBlendMode = 0x1744;
	constexpr std::ptrdiff_t m_flNextBlendTime = 0x1748;
	constexpr std::ptrdiff_t m_flBlendStartTime = 0x1750;
	constexpr std::ptrdiff_t m_bActive = 0x1758;
	constexpr std::ptrdiff_t m_iFOV = 0x16b4;
	constexpr std::ptrdiff_t m_iNextFOV = 0x16b0;
	constexpr std::ptrdiff_t m_iStartFOV = 0x16bc;
	constexpr std::ptrdiff_t m_flNextFOVBlendTime = 0x16c0;
	constexpr std::ptrdiff_t m_flFOVBlendStartTime = 0x16c8;
	constexpr std::ptrdiff_t m_bAlternateFOV = 0x16d0;
	constexpr std::ptrdiff_t m_flFadeAlpha = 0x176c;
	constexpr std::ptrdiff_t m_flFadeColor__0 = 0x1760;
	constexpr std::ptrdiff_t m_flFadeColor = 0x0;
	constexpr std::ptrdiff_t m_flFadeDuration = 0x1774;
	constexpr std::ptrdiff_t m_hCameraEntity = 0x175c;
}; // CScriptIntro
namespace CRotorWashEmitter
{
	constexpr std::ptrdiff_t m_flAltitude = 0x16b0;
}; // CRotorWashEmitter
namespace CPropCombineBall
{
	constexpr std::ptrdiff_t m_bEmit = 0x1bd4;
	constexpr std::ptrdiff_t m_flRadius = 0x1bd8;
	constexpr std::ptrdiff_t m_bHeld = 0x1bdc;
	constexpr std::ptrdiff_t m_bLaunched = 0x1bdd;
}; // CPropCombineBall
namespace CPlasmaBeamNode
{
	constexpr std::ptrdiff_t m_vecVelocity = 0x150;
	constexpr std::ptrdiff_t m_bSprayOn = 0x16b0;
}; // CPlasmaBeamNode
namespace CNPC_RollerMine
{
	constexpr std::ptrdiff_t m_bIsOpen = 0x2928;
	constexpr std::ptrdiff_t m_flActiveTime = 0x292c;
	constexpr std::ptrdiff_t m_bHackedByAlyx = 0x2930;
	constexpr std::ptrdiff_t m_bPowerDown = 0x2931;
}; // CNPC_RollerMine
namespace CNPC_Manhack
{
	constexpr std::ptrdiff_t m_nEnginePitch1 = 0x2940;
	constexpr std::ptrdiff_t m_flEnginePitch1Time = 0x2948;
	constexpr std::ptrdiff_t m_nEnginePitch2 = 0x2944;
	constexpr std::ptrdiff_t m_flEnginePitch2Time = 0x294c;
}; // CNPC_Manhack
namespace CNPC_CombineGunship
{
	constexpr std::ptrdiff_t m_vecHitPos = 0x2988;
}; // CNPC_CombineGunship
namespace CNPC_AntlionGuard
{
	constexpr std::ptrdiff_t m_bCavernBreed = 0x2928;
	constexpr std::ptrdiff_t m_bInCavern = 0x2929;
	constexpr std::ptrdiff_t m_iBleedingLevel = 0x2938;
}; // CNPC_AntlionGuard
namespace CInfoTeleporterCountdown
{
	constexpr std::ptrdiff_t m_bCountdownStarted = 0x16b0;
	constexpr std::ptrdiff_t m_bDisabled = 0x16b1;
	constexpr std::ptrdiff_t m_flStartTime = 0x16b4;
	constexpr std::ptrdiff_t m_flTimeRemaining = 0x16b8;
}; // CInfoTeleporterCountdown
namespace CMortarShell
{
	constexpr std::ptrdiff_t m_flLifespan = 0x16c0;
	constexpr std::ptrdiff_t m_flRadius = 0x16c4;
	constexpr std::ptrdiff_t m_vecSurfaceNormal = 0x16cc;
}; // CMortarShell
namespace CEnvStarfield
{
	constexpr std::ptrdiff_t m_bOn = 0x16b8;
	constexpr std::ptrdiff_t m_flDensity = 0x16bc;
}; // CEnvStarfield
namespace CEnvHeadcrabCanister
{
	constexpr std::ptrdiff_t m_Shared = 0x1bc8; // DATATABLE 
	constexpr std::ptrdiff_t m_Shared__m_flFlightSpeed = 0x3c;
	constexpr std::ptrdiff_t m_Shared__m_flLaunchTime = 0x40;
	constexpr std::ptrdiff_t m_Shared__m_vecParabolaDirection = 0x58;
	constexpr std::ptrdiff_t m_Shared__m_flFlightTime = 0x38;
	constexpr std::ptrdiff_t m_Shared__m_flWorldEnterTime = 0x64;
	constexpr std::ptrdiff_t m_Shared__m_flInitialZSpeed = 0x48;
	constexpr std::ptrdiff_t m_Shared__m_flZAcceleration = 0x4c;
	constexpr std::ptrdiff_t m_Shared__m_flHorizSpeed = 0x50;
	constexpr std::ptrdiff_t m_Shared__m_bLaunchedFromWithinWorld = 0x54;
	constexpr std::ptrdiff_t m_Shared__m_vecStartPosition = 0x8;
	constexpr std::ptrdiff_t m_Shared__m_vecEnterWorldPosition = 0x14;
	constexpr std::ptrdiff_t m_Shared__m_vecDirection = 0x20;
	constexpr std::ptrdiff_t m_Shared__m_vecStartAngles = 0x2c;
	constexpr std::ptrdiff_t m_Shared__m_vecSkyboxOrigin = 0x68;
	constexpr std::ptrdiff_t m_Shared__m_flSkyboxScale = 0x74;
	constexpr std::ptrdiff_t m_Shared__m_bInSkybox = 0x78;
	constexpr std::ptrdiff_t m_bLanded = 0x1c48;
}; // CEnvHeadcrabCanister
namespace CAlyxEmpEffect
{
	constexpr std::ptrdiff_t m_nState = 0x16b0;
	constexpr std::ptrdiff_t m_flDuration = 0x16b4;
	constexpr std::ptrdiff_t m_flStartTime = 0x16b8;
}; // CAlyxEmpEffect
namespace CCorpse
{
	constexpr std::ptrdiff_t m_nReferencePlayer = 0x1bc8;
}; // CCorpse
namespace CCitadelEnergyCore
{
	constexpr std::ptrdiff_t m_flScale = 0x16b0;
	constexpr std::ptrdiff_t m_nState = 0x16b4;
	constexpr std::ptrdiff_t m_flDuration = 0x16b8;
	constexpr std::ptrdiff_t m_flStartTime = 0x16bc;
	constexpr std::ptrdiff_t m_spawnflags = 0x16c0;
}; // CCitadelEnergyCore
namespace CHL2_Player
{
	constexpr std::ptrdiff_t m_HL2Local = 0x3540; // DATATABLE 
	constexpr std::ptrdiff_t m_HL2Local__m_flSuitPower = 0x8;
	constexpr std::ptrdiff_t m_HL2Local__m_bZooming = 0x19;
	constexpr std::ptrdiff_t m_HL2Local__m_bitsActiveDevices = 0xc;
	constexpr std::ptrdiff_t m_HL2Local__m_iSquadMemberCount = 0x10;
	constexpr std::ptrdiff_t m_HL2Local__m_iSquadMedicCount = 0x14;
	constexpr std::ptrdiff_t m_HL2Local__m_fSquadInFollowMode = 0x18;
	constexpr std::ptrdiff_t m_HL2Local__m_bWeaponLowered = 0x1a;
	constexpr std::ptrdiff_t m_HL2Local__m_hLadder = 0x1c;
	constexpr std::ptrdiff_t m_HL2Local__m_bDisplayReticle = 0x1b;
	constexpr std::ptrdiff_t m_fIsSprinting = 0x35a0;
}; // CHL2_Player
namespace CBaseHLBludgeonWeapon
{
}; // CBaseHLBludgeonWeapon
namespace CHLSelectFireMachineGun
{
}; // CHLSelectFireMachineGun
namespace CHLMachineGun
{
}; // CHLMachineGun
namespace CBaseHelicopter
{
	constexpr std::ptrdiff_t m_flStartupTime = 0x2928;
}; // CBaseHelicopter
namespace CNPC_Barney
{
}; // CNPC_Barney
namespace CNPC_Barnacle
{
	constexpr std::ptrdiff_t m_flAltitude = 0x2958;
	constexpr std::ptrdiff_t m_vecRoot = 0x2934;
	constexpr std::ptrdiff_t m_vecTip = 0x2940;
	constexpr std::ptrdiff_t m_vecTipDrawOffset = 0x294c;
}; // CNPC_Barnacle
namespace AR2Explosion
{
	constexpr std::ptrdiff_t m_szMaterialName = 0x17f8;
}; // AR2Explosion
namespace CTEAntlionDust
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x38;
	constexpr std::ptrdiff_t m_vecAngles = 0x44;
	constexpr std::ptrdiff_t m_bBlockedSpawner = 0x50;
}; // CTEAntlionDust
namespace CBaseHLCombatWeapon
{
}; // CBaseHLCombatWeapon
namespace CWeaponShotgun_HL1
{
	constexpr std::ptrdiff_t m_flPumpTime = 0x1c68;
	constexpr std::ptrdiff_t m_fInSpecialReload = 0x1c6c;
}; // CWeaponShotgun_HL1
namespace CWeaponSatchel
{
	constexpr std::ptrdiff_t m_iRadioViewIndex = 0x1c68;
	constexpr std::ptrdiff_t m_iRadioWorldIndex = 0x1c6c;
	constexpr std::ptrdiff_t m_iSatchelViewIndex = 0x1c70;
	constexpr std::ptrdiff_t m_iSatchelWorldIndex = 0x1c74;
	constexpr std::ptrdiff_t m_iChargeReady = 0x1c78;
}; // CWeaponSatchel
namespace CWeaponRPG_HL1
{
	constexpr std::ptrdiff_t m_bIntialStateUpdate = 0x1c69;
	constexpr std::ptrdiff_t m_bGuiding = 0x1c68;
	constexpr std::ptrdiff_t m_bLaserDotSuspended = 0x1c6a;
}; // CWeaponRPG_HL1
namespace CLaserDot_HL1
{
	constexpr std::ptrdiff_t m_bIsOn = 0x16c9;
}; // CLaserDot_HL1
namespace CWeaponMP5
{
}; // CWeaponMP5
namespace CWeaponHgun
{
	constexpr std::ptrdiff_t m_flRechargeTime = 0x1c68;
	constexpr std::ptrdiff_t m_iFirePhase = 0x1c6c;
}; // CWeaponHgun
namespace CWeaponHandGrenade
{
	constexpr std::ptrdiff_t m_flStartThrow = 0x1c68;
	constexpr std::ptrdiff_t m_flReleaseThrow = 0x1c6c;
}; // CWeaponHandGrenade
namespace CWeaponGlock
{
}; // CWeaponGlock
namespace CWeaponGauss
{
	constexpr std::ptrdiff_t m_nAttackState = 0x1c68;
	constexpr std::ptrdiff_t m_bPrimaryFire = 0x1c6c;
	constexpr std::ptrdiff_t m_flStartCharge = 0x1c70;
	constexpr std::ptrdiff_t m_flAmmoStartCharge = 0x1c74;
	constexpr std::ptrdiff_t m_flPlayAftershock = 0x1c78;
	constexpr std::ptrdiff_t m_flNextAmmoBurn = 0x1c80;
}; // CWeaponGauss
namespace CWeaponEgon
{
}; // CWeaponEgon
namespace CWeaponCrossbow_HL1
{
	constexpr std::ptrdiff_t m_fInZoom = 0x1c68;
}; // CWeaponCrossbow_HL1
namespace CWeapon357_HL1
{
	constexpr std::ptrdiff_t m_fInZoom = 0x1c68;
}; // CWeapon357_HL1
namespace CBaseHL1MPCombatWeapon
{
}; // CBaseHL1MPCombatWeapon
namespace CWeaponTripMine
{
	constexpr std::ptrdiff_t m_iGroundIndex = 0x1c68;
	constexpr std::ptrdiff_t m_iPickedUpIndex = 0x1c6c;
}; // CWeaponTripMine
namespace CWeaponSnark
{
	constexpr std::ptrdiff_t m_bJustThrown = 0x1c68;
}; // CWeaponSnark
namespace CWeaponCrowbar_HL1
{
}; // CWeaponCrowbar_HL1
namespace CBaseHelicopter_HL1
{
}; // CBaseHelicopter_HL1
namespace CRpgRocket
{
}; // CRpgRocket
namespace CBaseHL1CombatWeapon
{
}; // CBaseHL1CombatWeapon
namespace CPredictedViewModel
{
}; // CPredictedViewModel
namespace CTriggerPlayerMovement
{
}; // CTriggerPlayerMovement
namespace CBaseTrigger
{
	constexpr std::ptrdiff_t m_bClientSidePredicted = 0x16e0;
	constexpr std::ptrdiff_t m_spawnflags = 0x92c;
}; // CBaseTrigger
namespace CSpatialEntity
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x16b0;
	constexpr std::ptrdiff_t m_minFalloff = 0x16bc;
	constexpr std::ptrdiff_t m_maxFalloff = 0x16c0;
	constexpr std::ptrdiff_t m_flCurWeight = 0x16c4;
	constexpr std::ptrdiff_t m_bEnabled = 0x17cc;
}; // CSpatialEntity
namespace CPointWorldText
{
	constexpr std::ptrdiff_t m_szText = 0x16ea;
	constexpr std::ptrdiff_t m_colTextColor = 0x17fc;
	constexpr std::ptrdiff_t m_flTextSize = 0x17f0;
	constexpr std::ptrdiff_t m_flTextSpacingX = 0x17f4;
	constexpr std::ptrdiff_t m_flTextSpacingY = 0x17f8;
	constexpr std::ptrdiff_t m_nOrientation = 0x1800;
	constexpr std::ptrdiff_t m_bRainbow = 0x16e8;
	constexpr std::ptrdiff_t m_bTextEnabled = 0x16e9;
}; // CPointWorldText
namespace CEnvAmbientLight
{
	constexpr std::ptrdiff_t m_vecColor = 0x17d8;
}; // CEnvAmbientLight
namespace CBeamSpotlight
{
	constexpr std::ptrdiff_t m_nHaloIndex = 0x16b0;
	constexpr std::ptrdiff_t m_bSpotlightOn = 0x16bc;
	constexpr std::ptrdiff_t m_bHasDynamicLight = 0x16bd;
	constexpr std::ptrdiff_t m_flSpotlightMaxLength = 0x16c0;
	constexpr std::ptrdiff_t m_flSpotlightGoalWidth = 0x16c4;
	constexpr std::ptrdiff_t m_flHDRColorScale = 0x16c8;
	constexpr std::ptrdiff_t m_nRotationAxis = 0x16b4;
	constexpr std::ptrdiff_t m_flRotationSpeed = 0x16b8;
}; // CBeamSpotlight
namespace CBaseToggle
{
	constexpr std::ptrdiff_t m_vecFinalDest = 0x16c4;
	constexpr std::ptrdiff_t m_movementType = 0x16d0;
	constexpr std::ptrdiff_t m_flMoveTargetTime = 0x16d4;
}; // CBaseToggle
namespace CSpriteTrail
{
	constexpr std::ptrdiff_t m_flLifeTime = 0x2758;
	constexpr std::ptrdiff_t m_flStartWidth = 0x275c;
	constexpr std::ptrdiff_t m_flEndWidth = 0x2760;
	constexpr std::ptrdiff_t m_flStartWidthVariance = 0x2764;
	constexpr std::ptrdiff_t m_flTextureRes = 0x2768;
	constexpr std::ptrdiff_t m_flMinFadeLength = 0x276c;
	constexpr std::ptrdiff_t m_vecSkyboxOrigin = 0x2770;
	constexpr std::ptrdiff_t m_flSkyboxScale = 0x277c;
}; // CSpriteTrail
namespace CSpriteOriented
{
}; // CSpriteOriented
namespace CSprite
{
	constexpr std::ptrdiff_t m_hAttachedToEntity = 0x16c8;
	constexpr std::ptrdiff_t m_nAttachment = 0x16cc;
	constexpr std::ptrdiff_t m_flScaleTime = 0x16e8;
	constexpr std::ptrdiff_t m_flSpriteScale = 0x16e4;
	constexpr std::ptrdiff_t m_flSpriteFramerate = 0x16d0;
	constexpr std::ptrdiff_t m_flGlowProxySize = 0x16f0;
	constexpr std::ptrdiff_t m_flHDRColorScale = 0x16f4;
	constexpr std::ptrdiff_t m_flFrame = 0x16d4;
	constexpr std::ptrdiff_t m_flBrightnessTime = 0x16e0;
	constexpr std::ptrdiff_t m_nBrightness = 0x16dc;
	constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x16ec;
}; // CSprite
namespace CRagdollPropAttached
{
	constexpr std::ptrdiff_t m_boneIndexAttached = 0x2030;
	constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0x202c;
	constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0x2008;
	constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0x2020;
}; // CRagdollPropAttached
namespace CRagdollProp
{
	constexpr std::ptrdiff_t m_ragPos__0 = 0x1bc8;
	constexpr std::ptrdiff_t m_ragPos__1 = 0x1bd4;
	constexpr std::ptrdiff_t m_ragPos__2 = 0x1be0;
	constexpr std::ptrdiff_t m_ragPos__3 = 0x1bec;
	constexpr std::ptrdiff_t m_ragPos__4 = 0x1bf8;
	constexpr std::ptrdiff_t m_ragPos__5 = 0x1c04;
	constexpr std::ptrdiff_t m_ragPos__6 = 0x1c10;
	constexpr std::ptrdiff_t m_ragPos__7 = 0x1c1c;
	constexpr std::ptrdiff_t m_ragPos__8 = 0x1c28;
	constexpr std::ptrdiff_t m_ragPos__9 = 0x1c34;
	constexpr std::ptrdiff_t m_ragPos__10 = 0x1c40;
	constexpr std::ptrdiff_t m_ragPos__11 = 0x1c4c;
	constexpr std::ptrdiff_t m_ragPos__12 = 0x1c58;
	constexpr std::ptrdiff_t m_ragPos__13 = 0x1c64;
	constexpr std::ptrdiff_t m_ragPos__14 = 0x1c70;
	constexpr std::ptrdiff_t m_ragPos__15 = 0x1c7c;
	constexpr std::ptrdiff_t m_ragPos__16 = 0x1c88;
	constexpr std::ptrdiff_t m_ragPos__17 = 0x1c94;
	constexpr std::ptrdiff_t m_ragPos__18 = 0x1ca0;
	constexpr std::ptrdiff_t m_ragPos__19 = 0x1cac;
	constexpr std::ptrdiff_t m_ragPos__20 = 0x1cb8;
	constexpr std::ptrdiff_t m_ragPos__21 = 0x1cc4;
	constexpr std::ptrdiff_t m_ragPos__22 = 0x1cd0;
	constexpr std::ptrdiff_t m_ragPos__23 = 0x1cdc;
	constexpr std::ptrdiff_t m_ragPos__24 = 0x1ce8;
	constexpr std::ptrdiff_t m_ragPos__25 = 0x1cf4;
	constexpr std::ptrdiff_t m_ragPos__26 = 0x1d00;
	constexpr std::ptrdiff_t m_ragPos__27 = 0x1d0c;
	constexpr std::ptrdiff_t m_ragPos__28 = 0x1d18;
	constexpr std::ptrdiff_t m_ragPos__29 = 0x1d24;
	constexpr std::ptrdiff_t m_ragPos__30 = 0x1d30;
	constexpr std::ptrdiff_t m_ragPos__31 = 0x1d3c;
	constexpr std::ptrdiff_t m_ragAngles__0 = 0x1d48;
	constexpr std::ptrdiff_t m_ragAngles__1 = 0x1d54;
	constexpr std::ptrdiff_t m_ragAngles__2 = 0x1d60;
	constexpr std::ptrdiff_t m_ragAngles__3 = 0x1d6c;
	constexpr std::ptrdiff_t m_ragAngles__4 = 0x1d78;
	constexpr std::ptrdiff_t m_ragAngles__5 = 0x1d84;
	constexpr std::ptrdiff_t m_ragAngles__6 = 0x1d90;
	constexpr std::ptrdiff_t m_ragAngles__7 = 0x1d9c;
	constexpr std::ptrdiff_t m_ragAngles__8 = 0x1da8;
	constexpr std::ptrdiff_t m_ragAngles__9 = 0x1db4;
	constexpr std::ptrdiff_t m_ragAngles__10 = 0x1dc0;
	constexpr std::ptrdiff_t m_ragAngles__11 = 0x1dcc;
	constexpr std::ptrdiff_t m_ragAngles__12 = 0x1dd8;
	constexpr std::ptrdiff_t m_ragAngles__13 = 0x1de4;
	constexpr std::ptrdiff_t m_ragAngles__14 = 0x1df0;
	constexpr std::ptrdiff_t m_ragAngles__15 = 0x1dfc;
	constexpr std::ptrdiff_t m_ragAngles__16 = 0x1e08;
	constexpr std::ptrdiff_t m_ragAngles__17 = 0x1e14;
	constexpr std::ptrdiff_t m_ragAngles__18 = 0x1e20;
	constexpr std::ptrdiff_t m_ragAngles__19 = 0x1e2c;
	constexpr std::ptrdiff_t m_ragAngles__20 = 0x1e38;
	constexpr std::ptrdiff_t m_ragAngles__21 = 0x1e44;
	constexpr std::ptrdiff_t m_ragAngles__22 = 0x1e50;
	constexpr std::ptrdiff_t m_ragAngles__23 = 0x1e5c;
	constexpr std::ptrdiff_t m_ragAngles__24 = 0x1e68;
	constexpr std::ptrdiff_t m_ragAngles__25 = 0x1e74;
	constexpr std::ptrdiff_t m_ragAngles__26 = 0x1e80;
	constexpr std::ptrdiff_t m_ragAngles__27 = 0x1e8c;
	constexpr std::ptrdiff_t m_ragAngles__28 = 0x1e98;
	constexpr std::ptrdiff_t m_ragAngles__29 = 0x1ea4;
	constexpr std::ptrdiff_t m_ragAngles__30 = 0x1eb0;
	constexpr std::ptrdiff_t m_ragAngles__31 = 0x1ebc;
	constexpr std::ptrdiff_t m_hUnragdoll = 0x1ff0;
	constexpr std::ptrdiff_t m_flBlendWeight = 0x1ff4;
	constexpr std::ptrdiff_t m_nOverlaySequence = 0x1ffc;
}; // CRagdollProp
namespace CPoseController
{
	constexpr std::ptrdiff_t m_hProps = 0x16b0; // DATATABLE 
	constexpr std::ptrdiff_t m_chPoseIndex = 0x16c0; // DATATABLE 
	constexpr std::ptrdiff_t m_bPoseValueParity = 0x16c4;
	constexpr std::ptrdiff_t m_fPoseValue = 0x16c8;
	constexpr std::ptrdiff_t m_fInterpolationTime = 0x16cc;
	constexpr std::ptrdiff_t m_bInterpolationWrap = 0x16d0;
	constexpr std::ptrdiff_t m_fCycleFrequency = 0x16d4;
	constexpr std::ptrdiff_t m_nFModType = 0x16d8;
	constexpr std::ptrdiff_t m_fFModTimeOffset = 0x16dc;
	constexpr std::ptrdiff_t m_fFModRate = 0x16e0;
	constexpr std::ptrdiff_t m_fFModAmplitude = 0x16e4;
}; // CPoseController
namespace CGameRulesProxy
{
}; // CGameRulesProxy
namespace CInfoLadderDismount
{
}; // CInfoLadderDismount
namespace CFuncLadder
{
	constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x16e0;
	constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x16ec;
	constexpr std::ptrdiff_t m_vecLadderDir = 0x16b0;
	constexpr std::ptrdiff_t m_bFakeLadder = 0x16f9;
}; // CFuncLadder
namespace CEnvDetailController
{
	constexpr std::ptrdiff_t m_flFadeStartDist = 0x16b0;
	constexpr std::ptrdiff_t m_flFadeEndDist = 0x16b4;
}; // CEnvDetailController
namespace CWorld
{
	constexpr std::ptrdiff_t m_WorldMins = 0x16b0;
	constexpr std::ptrdiff_t m_WorldMaxs = 0x16bc;
	constexpr std::ptrdiff_t m_bStartDark = 0x16c8;
	constexpr std::ptrdiff_t m_flMaxOccludeeArea = 0x16cc;
	constexpr std::ptrdiff_t m_flMinOccluderArea = 0x16d0;
	constexpr std::ptrdiff_t m_flMaxPropScreenSpaceWidth = 0x16d8;
	constexpr std::ptrdiff_t m_flMinPropScreenSpaceWidth = 0x16d4;
	constexpr std::ptrdiff_t m_iszDetailSpriteMaterial = 0x16dc;
}; // CWorld
namespace CWaterLODControl
{
	constexpr std::ptrdiff_t m_flCheapWaterStartDistance = 0x16b0;
	constexpr std::ptrdiff_t m_flCheapWaterEndDistance = 0x16b4;
}; // CWaterLODControl
namespace CWaterBullet
{
}; // CWaterBullet
namespace CVGuiScreen
{
	constexpr std::ptrdiff_t m_flWidth = 0x16b8;
	constexpr std::ptrdiff_t m_flHeight = 0x16bc;
	constexpr std::ptrdiff_t m_fScreenFlags = 0x16e4;
	constexpr std::ptrdiff_t m_nPanelName = 0x16c0;
	constexpr std::ptrdiff_t m_nAttachmentIndex = 0x16dc;
	constexpr std::ptrdiff_t m_nOverlayMaterial = 0x16e0;
	constexpr std::ptrdiff_t m_hPlayerOwner = 0x1750;
}; // CVGuiScreen
namespace CPropJeep
{
	constexpr std::ptrdiff_t m_bHeadlightIsOn = 0x1d48;
}; // CPropJeep
namespace CPropVehicleChoreoGeneric
{
	constexpr std::ptrdiff_t m_hPlayer = 0x1c00;
	constexpr std::ptrdiff_t m_bEnterAnimOn = 0x1c08;
	constexpr std::ptrdiff_t m_bExitAnimOn = 0x1c09;
	constexpr std::ptrdiff_t m_bForceEyesToAttachment = 0x1c18;
	constexpr std::ptrdiff_t m_vecEyeExitEndpoint = 0x1c0c;
	constexpr std::ptrdiff_t m_vehicleView__bClampEyeAngles = 0x1ca8;
	constexpr std::ptrdiff_t m_vehicleView__flPitchCurveZero = 0x1cac;
	constexpr std::ptrdiff_t m_vehicleView__flPitchCurveLinear = 0x1cb0;
	constexpr std::ptrdiff_t m_vehicleView__flRollCurveZero = 0x1cb4;
	constexpr std::ptrdiff_t m_vehicleView__flRollCurveLinear = 0x1cb8;
	constexpr std::ptrdiff_t m_vehicleView__flFOV = 0x1cbc;
	constexpr std::ptrdiff_t m_vehicleView__flYawMin = 0x1cc0;
	constexpr std::ptrdiff_t m_vehicleView__flYawMax = 0x1cc4;
	constexpr std::ptrdiff_t m_vehicleView__flPitchMin = 0x1cc8;
	constexpr std::ptrdiff_t m_vehicleView__flPitchMax = 0x1ccc;
}; // CPropVehicleChoreoGeneric
namespace CTesla
{
	constexpr std::ptrdiff_t m_SoundName = 0x16e0;
	constexpr std::ptrdiff_t m_iszSpriteName = 0x1720;
}; // CTesla
namespace CTeam
{
	constexpr std::ptrdiff_t m_iTeamNum = 0x1704;
	constexpr std::ptrdiff_t m_iScore = 0x16f0;
	constexpr std::ptrdiff_t m_iRoundsWon = 0x16f4;
	constexpr std::ptrdiff_t m_szTeamname = 0x16d0;
	constexpr std::ptrdiff_t player_array_element = 0x0;
	constexpr std::ptrdiff_t player_array = 0x0; // ARRAY
}; // CTeam
namespace CSun
{
	constexpr std::ptrdiff_t m_clrRender = 0x90;
	constexpr std::ptrdiff_t m_clrOverlay = 0x1860;
	constexpr std::ptrdiff_t m_vDirection = 0x186c;
	constexpr std::ptrdiff_t m_bOn = 0x1878;
	constexpr std::ptrdiff_t m_nSize = 0x1864;
	constexpr std::ptrdiff_t m_nOverlaySize = 0x1868;
	constexpr std::ptrdiff_t m_nMaterial = 0x187c;
	constexpr std::ptrdiff_t m_nOverlayMaterial = 0x1880;
	constexpr std::ptrdiff_t HDRColorScale = 0x0;
}; // CSun
namespace CParticlePerformanceMonitor
{
	constexpr std::ptrdiff_t m_bMeasurePerf = 0x16b1;
	constexpr std::ptrdiff_t m_bDisplayPerf = 0x16b0;
}; // CParticlePerformanceMonitor
namespace CSpotlightEnd
{
	constexpr std::ptrdiff_t m_flLightScale = 0x16b0;
	constexpr std::ptrdiff_t m_Radius = 0x16b4;
}; // CSpotlightEnd
namespace CSlideshowDisplay
{
	constexpr std::ptrdiff_t m_bEnabled = 0x16b0;
	constexpr std::ptrdiff_t m_szDisplayText = 0x16b1;
	constexpr std::ptrdiff_t m_szSlideshowDirectory = 0x1731;
	constexpr std::ptrdiff_t m_chCurrentSlideLists = 0x17d8; // DATATABLE 
	constexpr std::ptrdiff_t m_fMinSlideTime = 0x17f0;
	constexpr std::ptrdiff_t m_fMaxSlideTime = 0x17f4;
	constexpr std::ptrdiff_t m_iCycleType = 0x17fc;
	constexpr std::ptrdiff_t m_bNoListRepeats = 0x1800;
}; // CSlideshowDisplay
namespace CShadowControl
{
	constexpr std::ptrdiff_t m_shadowDirection = 0x16b0;
	constexpr std::ptrdiff_t m_shadowColor = 0x16bc;
	constexpr std::ptrdiff_t m_flShadowMaxDist = 0x16c0;
	constexpr std::ptrdiff_t m_bDisableShadows = 0x16c4;
	constexpr std::ptrdiff_t m_bEnableLocalLightShadows = 0x16c5;
}; // CShadowControl
namespace CSceneEntity
{
	constexpr std::ptrdiff_t m_nSceneStringIndex = 0x16c4;
	constexpr std::ptrdiff_t m_bIsPlayingBack = 0x16b8;
	constexpr std::ptrdiff_t m_bPaused = 0x16b9;
	constexpr std::ptrdiff_t m_bMultiplayer = 0x16ba;
	constexpr std::ptrdiff_t m_flForceClientTime = 0x16c0;
	constexpr std::ptrdiff_t m_hActorList = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t m_hActorList__lengthproxy = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t lengthproxy__lengthprop16 = 0x0;
}; // CSceneEntity
namespace CRopeKeyframe
{
	constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x16ec;
	constexpr std::ptrdiff_t m_hStartPoint = 0x19dc;
	constexpr std::ptrdiff_t m_hEndPoint = 0x19e0;
	constexpr std::ptrdiff_t m_iStartAttachment = 0x19e4;
	constexpr std::ptrdiff_t m_iEndAttachment = 0x19e6;
	constexpr std::ptrdiff_t m_iStartBone = 0x1a9a;
	constexpr std::ptrdiff_t m_iEndBone = 0x1a98;
	constexpr std::ptrdiff_t m_vecStartOffset = 0x1a9c;
	constexpr std::ptrdiff_t m_vecEndOffset = 0x1aa8;
	constexpr std::ptrdiff_t m_clrRender = 0x90;
	constexpr std::ptrdiff_t m_fLockedPoints = 0x19f8;
	constexpr std::ptrdiff_t m_Slack = 0x19f0;
	constexpr std::ptrdiff_t m_RopeLength = 0x19ec;
	constexpr std::ptrdiff_t m_RopeFlags = 0x16e8;
	constexpr std::ptrdiff_t m_TextureScale = 0x19f4;
	constexpr std::ptrdiff_t m_nSegments = 0x19d8;
	constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1a90;
	constexpr std::ptrdiff_t m_Subdiv = 0x19e8;
	constexpr std::ptrdiff_t m_Width = 0x19fc;
	constexpr std::ptrdiff_t m_flScrollSpeed = 0x16e4;
	constexpr std::ptrdiff_t m_vecOrigin = 0x438;
	constexpr std::ptrdiff_t moveparent = 0x21c;
	constexpr std::ptrdiff_t m_iParentAttachment = 0x1fe;
}; // CRopeKeyframe
namespace CRagdollManager
{
	constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x16b0;
}; // CRagdollManager
namespace CPhysicsPropMultiplayer
{
	constexpr std::ptrdiff_t m_iPhysicsMode = 0x1bd8;
	constexpr std::ptrdiff_t m_fMass = 0x1bdc;
	constexpr std::ptrdiff_t m_collisionMins = 0x1be0;
	constexpr std::ptrdiff_t m_collisionMaxs = 0x1bec;
}; // CPhysicsPropMultiplayer
namespace CPhysBoxMultiplayer
{
	constexpr std::ptrdiff_t m_iPhysicsMode = 0x16c0;
	constexpr std::ptrdiff_t m_fMass = 0x16c4;
}; // CPhysBoxMultiplayer
namespace CPropDoorRotating
{
}; // CPropDoorRotating
namespace CBasePropDoor
{
	constexpr std::ptrdiff_t m_bLocked = 0x1be9;
	constexpr std::ptrdiff_t m_eDoorState = 0x1bec;
}; // CBasePropDoor
namespace CDynamicProp
{
	constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0x1bc8;
}; // CDynamicProp
namespace CPointCamera
{
	constexpr std::ptrdiff_t m_FOV = 0x16b0;
	constexpr std::ptrdiff_t m_Resolution = 0x16b4;
	constexpr std::ptrdiff_t m_bFogEnable = 0x16b8;
	constexpr std::ptrdiff_t m_FogColor = 0x16b9;
	constexpr std::ptrdiff_t m_FogColorHDR = 0x16bd;
	constexpr std::ptrdiff_t m_flFogStart = 0x16c4;
	constexpr std::ptrdiff_t m_flFogEnd = 0x16c8;
	constexpr std::ptrdiff_t m_flFogMaxDensity = 0x16cc;
	constexpr std::ptrdiff_t m_bFogRadial = 0x16d0;
	constexpr std::ptrdiff_t m_bActive = 0x16d1;
	constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x16d2;
	constexpr std::ptrdiff_t m_bGlobalOverride = 0x16d3;
}; // CPointCamera
namespace CPlayerResource
{
	constexpr std::ptrdiff_t m_iPing = 0x1ac0; // DATATABLE 
	constexpr std::ptrdiff_t m_iScore = 0x1cc4; // DATATABLE 
	constexpr std::ptrdiff_t m_iDeaths = 0x1ec8; // DATATABLE 
	constexpr std::ptrdiff_t m_bConnected = 0x20cc; // DATATABLE 
	constexpr std::ptrdiff_t m_iTeam = 0x2150; // DATATABLE 
	constexpr std::ptrdiff_t m_bAlive = 0x2354; // DATATABLE 
	constexpr std::ptrdiff_t m_iHealth = 0x23d8; // DATATABLE 
	constexpr std::ptrdiff_t m_iArmor = 0x25dc; // DATATABLE 
}; // CPlayerResource
namespace CPlasma
{
	constexpr std::ptrdiff_t m_flStartScale = 0x16b0;
	constexpr std::ptrdiff_t m_flScale = 0x16b4;
	constexpr std::ptrdiff_t m_flScaleTime = 0x16b8;
	constexpr std::ptrdiff_t m_nFlags = 0x16bc;
	constexpr std::ptrdiff_t m_nPlasmaModelIndex = 0x16c0;
	constexpr std::ptrdiff_t m_nPlasmaModelIndex2 = 0x16c4;
	constexpr std::ptrdiff_t m_nGlowModelIndex = 0x16c8;
}; // CPlasma
namespace CPhysMagnet
{
}; // CPhysMagnet
namespace CPhysicsProp
{
	constexpr std::ptrdiff_t m_bAwake = 0x1bc8;
}; // CPhysicsProp
namespace CPhysBox
{
	constexpr std::ptrdiff_t m_mass = 0x16b0;
}; // CPhysBox
namespace CParticleSystem
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x438;
	constexpr std::ptrdiff_t m_hOwnerEntity = 0x744;
	constexpr std::ptrdiff_t moveparent = 0x21c;
	constexpr std::ptrdiff_t m_iParentAttachment = 0x1fe;
	constexpr std::ptrdiff_t m_angRotation = 0x444;
	constexpr std::ptrdiff_t m_iEffectIndex = 0x16b0;
	constexpr std::ptrdiff_t m_bActive = 0x16b4;
	constexpr std::ptrdiff_t m_flStartTime = 0x16b8;
	constexpr std::ptrdiff_t m_hControlPointEnts = 0x16bc; // DATATABLE 
	constexpr std::ptrdiff_t m_iControlPointParents = 0x17b8; // DATATABLE 
	constexpr std::ptrdiff_t m_bWeatherEffect = 0x17f7;
}; // CParticleSystem
namespace CMaterialModifyControl
{
	constexpr std::ptrdiff_t m_szMaterialName = 0x16b0;
	constexpr std::ptrdiff_t m_szMaterialVar = 0x17af;
	constexpr std::ptrdiff_t m_szMaterialVarValue = 0x18ae;
	constexpr std::ptrdiff_t m_iFrameStart = 0x19bc;
	constexpr std::ptrdiff_t m_iFrameEnd = 0x19c0;
	constexpr std::ptrdiff_t m_bWrap = 0x19c4;
	constexpr std::ptrdiff_t m_flFramerate = 0x19c8;
	constexpr std::ptrdiff_t m_bNewAnimCommandsSemaphore = 0x19cc;
	constexpr std::ptrdiff_t m_flFloatLerpStartValue = 0x19d0;
	constexpr std::ptrdiff_t m_flFloatLerpEndValue = 0x19d4;
	constexpr std::ptrdiff_t m_flFloatLerpTransitionTime = 0x19d8;
	constexpr std::ptrdiff_t m_bFloatLerpWrap = 0x19dc;
	constexpr std::ptrdiff_t m_nModifyMode = 0x19e8;
}; // CMaterialModifyControl
namespace CLightGlow
{
	constexpr std::ptrdiff_t m_clrRender = 0x90;
	constexpr std::ptrdiff_t m_nHorizontalSize = 0x16b0;
	constexpr std::ptrdiff_t m_nVerticalSize = 0x16b4;
	constexpr std::ptrdiff_t m_nMinDist = 0x16b8;
	constexpr std::ptrdiff_t m_nMaxDist = 0x16bc;
	constexpr std::ptrdiff_t m_nOuterMaxDist = 0x16c0;
	constexpr std::ptrdiff_t m_spawnflags = 0x16c4;
	constexpr std::ptrdiff_t m_vecOrigin = 0x438;
	constexpr std::ptrdiff_t m_angRotation = 0x444;
	constexpr std::ptrdiff_t moveparent = 0x21c;
	constexpr std::ptrdiff_t m_flGlowProxySize = 0x17c0;
	constexpr std::ptrdiff_t HDRColorScale = 0x0;
}; // CLightGlow
namespace CInfoOverlayAccessor
{
	constexpr std::ptrdiff_t m_iTextureFrameIndex = 0x738;
	constexpr std::ptrdiff_t m_iOverlayID = 0x16b0;
}; // CInfoOverlayAccessor
namespace CFuncTrackTrain
{
}; // CFuncTrackTrain
namespace CFuncSmokeVolume
{
	constexpr std::ptrdiff_t m_Color1 = 0x17e8;
	constexpr std::ptrdiff_t m_Color2 = 0x17ec;
	constexpr std::ptrdiff_t m_MaterialName = 0x17f0;
	constexpr std::ptrdiff_t m_ParticleDrawWidth = 0x18f0;
	constexpr std::ptrdiff_t m_ParticleSpacingDistance = 0x18f4;
	constexpr std::ptrdiff_t m_DensityRampSpeed = 0x18f8;
	constexpr std::ptrdiff_t m_RotationSpeed = 0x18fc;
	constexpr std::ptrdiff_t m_MovementSpeed = 0x1900;
	constexpr std::ptrdiff_t m_Density = 0x1904;
	constexpr std::ptrdiff_t m_spawnflags = 0x1908;
	constexpr std::ptrdiff_t m_Collision = 0x230; // DATATABLE 
	constexpr std::ptrdiff_t m_Collision__m_vecMinsPreScaled = 0x10;
	constexpr std::ptrdiff_t m_Collision__m_vecMaxsPreScaled = 0x1c;
	constexpr std::ptrdiff_t m_Collision__m_vecMins = 0x28;
	constexpr std::ptrdiff_t m_Collision__m_vecMaxs = 0x34;
	constexpr std::ptrdiff_t m_Collision__m_nSolidType = 0x49;
	constexpr std::ptrdiff_t m_Collision__m_usSolidFlags = 0x44;
	constexpr std::ptrdiff_t m_Collision__m_nSurroundType = 0x48;
	constexpr std::ptrdiff_t m_Collision__m_triggerBloat = 0x4a;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMinsPreScaled = 0x4c;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMaxsPreScaled = 0x58;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMins = 0x64;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMaxs = 0x70;
}; // CFuncSmokeVolume
namespace CFuncRotating
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x438;
	constexpr std::ptrdiff_t m_angRotation__0 = 0x444;
	constexpr std::ptrdiff_t m_angRotation__1 = 0x448;
	constexpr std::ptrdiff_t m_angRotation__2 = 0x44c;
	constexpr std::ptrdiff_t m_flSimulationTime = 0xb0;
}; // CFuncRotating
namespace CFuncReflectiveGlass
{
}; // CFuncReflectiveGlass
namespace CFuncOccluder
{
	constexpr std::ptrdiff_t m_bActive = 0x16b4;
	constexpr std::ptrdiff_t m_nOccluderIndex = 0x16b0;
}; // CFuncOccluder
namespace CFuncMonitor
{
}; // CFuncMonitor
namespace CFunc_LOD
{
	constexpr std::ptrdiff_t m_fDisappearMinDist = 0x16b0;
	constexpr std::ptrdiff_t m_fDisappearMaxDist = 0x16b4;
}; // CFunc_LOD
namespace CTEDust
{
	constexpr std::ptrdiff_t m_flSize = 0x30;
	constexpr std::ptrdiff_t m_flSpeed = 0x34;
	constexpr std::ptrdiff_t m_vecDirection = 0x38;
}; // CTEDust
namespace CFunc_Dust
{
	constexpr std::ptrdiff_t m_Color = 0x16b0;
	constexpr std::ptrdiff_t m_SpawnRate = 0x16b4;
	constexpr std::ptrdiff_t m_flSizeMin = 0x16b8;
	constexpr std::ptrdiff_t m_flSizeMax = 0x16bc;
	constexpr std::ptrdiff_t m_LifetimeMin = 0x16c4;
	constexpr std::ptrdiff_t m_LifetimeMax = 0x16c8;
	constexpr std::ptrdiff_t m_DustFlags = 0x16d8;
	constexpr std::ptrdiff_t m_SpeedMax = 0x16c0;
	constexpr std::ptrdiff_t m_DistMax = 0x16cc;
	constexpr std::ptrdiff_t m_nModelIndex = 0xd4;
	constexpr std::ptrdiff_t m_FallSpeed = 0x16d0;
	constexpr std::ptrdiff_t m_bAffectedByWind = 0x16d4;
	constexpr std::ptrdiff_t m_Collision = 0x230; // DATATABLE 
	constexpr std::ptrdiff_t m_Collision__m_vecMinsPreScaled = 0x10;
	constexpr std::ptrdiff_t m_Collision__m_vecMaxsPreScaled = 0x1c;
	constexpr std::ptrdiff_t m_Collision__m_vecMins = 0x28;
	constexpr std::ptrdiff_t m_Collision__m_vecMaxs = 0x34;
	constexpr std::ptrdiff_t m_Collision__m_nSolidType = 0x49;
	constexpr std::ptrdiff_t m_Collision__m_usSolidFlags = 0x44;
	constexpr std::ptrdiff_t m_Collision__m_nSurroundType = 0x48;
	constexpr std::ptrdiff_t m_Collision__m_triggerBloat = 0x4a;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMinsPreScaled = 0x4c;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMaxsPreScaled = 0x58;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMins = 0x64;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMaxs = 0x70;
}; // CFunc_Dust
namespace CFuncConveyor
{
	constexpr std::ptrdiff_t m_flConveyorSpeed = 0x16b0;
}; // CFuncConveyor
namespace CBreakableSurface
{
	constexpr std::ptrdiff_t m_nNumWide = 0x16b8;
	constexpr std::ptrdiff_t m_nNumHigh = 0x16bc;
	constexpr std::ptrdiff_t m_flPanelWidth = 0x16c0;
	constexpr std::ptrdiff_t m_flPanelHeight = 0x16c4;
	constexpr std::ptrdiff_t m_vNormal = 0x16c8;
	constexpr std::ptrdiff_t m_vCorner = 0x16d4;
	constexpr std::ptrdiff_t m_bIsBroken = 0x16e0;
	constexpr std::ptrdiff_t m_nSurfaceType = 0x16e4;
	constexpr std::ptrdiff_t m_RawPanelBitVec = 0x1718; // DATATABLE 
}; // CBreakableSurface
namespace CFuncAreaPortalWindow
{
	constexpr std::ptrdiff_t m_flFadeStartDist = 0x16b0;
	constexpr std::ptrdiff_t m_flFadeDist = 0x16b4;
	constexpr std::ptrdiff_t m_flTranslucencyLimit = 0x16b8;
	constexpr std::ptrdiff_t m_iBackgroundModelIndex = 0x16bc;
}; // CFuncAreaPortalWindow
namespace CFish
{
	constexpr std::ptrdiff_t m_poolOrigin = 0x1c24;
	constexpr std::ptrdiff_t m_x = 0x1c0c;
	constexpr std::ptrdiff_t m_y = 0x1c10;
	constexpr std::ptrdiff_t m_z = 0x1c14;
	constexpr std::ptrdiff_t m_angle = 0x1c1c;
	constexpr std::ptrdiff_t m_nModelIndex = 0xd4;
	constexpr std::ptrdiff_t m_lifeState = 0xd7;
	constexpr std::ptrdiff_t m_waterLevel = 0x1c30;
}; // CFish
namespace CEntityFlame
{
	constexpr std::ptrdiff_t m_hEntAttached = 0x16b8;
}; // CEntityFlame
namespace CFireSmoke
{
	constexpr std::ptrdiff_t m_flStartScale = 0x16b0;
	constexpr std::ptrdiff_t m_flScale = 0x16b4;
	constexpr std::ptrdiff_t m_flScaleTime = 0x16b8;
	constexpr std::ptrdiff_t m_nFlags = 0x16bc;
	constexpr std::ptrdiff_t m_nFlameModelIndex = 0x16c0;
	constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x16c4;
}; // CFireSmoke
namespace CEnvTonemapController
{
	constexpr std::ptrdiff_t m_bUseCustomAutoExposureMin = 0x16b0;
	constexpr std::ptrdiff_t m_bUseCustomAutoExposureMax = 0x16b1;
	constexpr std::ptrdiff_t m_bUseCustomBloomScale = 0x16b2;
	constexpr std::ptrdiff_t m_flCustomAutoExposureMin = 0x16b4;
	constexpr std::ptrdiff_t m_flCustomAutoExposureMax = 0x16b8;
	constexpr std::ptrdiff_t m_flCustomBloomScale = 0x16bc;
	constexpr std::ptrdiff_t m_flCustomBloomScaleMinimum = 0x16c0;
}; // CEnvTonemapController
namespace CEnvScreenEffect
{
	constexpr std::ptrdiff_t m_flDuration = 0x16b0;
	constexpr std::ptrdiff_t m_nType = 0x16b4;
}; // CEnvScreenEffect
namespace CEnvScreenOverlay
{
	constexpr std::ptrdiff_t m_iszOverlayNames__0 = 0x16b0;
	constexpr std::ptrdiff_t m_iszOverlayNames = 0x0;
	constexpr std::ptrdiff_t m_flOverlayTimes__0 = 0x20a8;
	constexpr std::ptrdiff_t m_flOverlayTimes = 0x0;
	constexpr std::ptrdiff_t m_flStartTime = 0x20d0;
	constexpr std::ptrdiff_t m_iDesiredOverlay = 0x20d4;
	constexpr std::ptrdiff_t m_bIsActive = 0x20d8;
}; // CEnvScreenOverlay
namespace CEnvProjectedTexture
{
	constexpr std::ptrdiff_t m_hTargetEntity = 0x16b4;
	constexpr std::ptrdiff_t m_bState = 0x16b8;
	constexpr std::ptrdiff_t m_flLightFOV = 0x16bc;
	constexpr std::ptrdiff_t m_bEnableShadows = 0x16c0;
	constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x16c1;
	constexpr std::ptrdiff_t m_bLightWorld = 0x16c2;
	constexpr std::ptrdiff_t m_bCameraSpace = 0x16c3;
	constexpr std::ptrdiff_t m_LinearFloatLightColor = 0x16c4;
	constexpr std::ptrdiff_t m_SpotlightTextureName = 0x16d8;
	constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x17dc;
	constexpr std::ptrdiff_t m_flNearZ = 0x16d0;
	constexpr std::ptrdiff_t m_flFarZ = 0x16d4;
	constexpr std::ptrdiff_t m_nShadowQuality = 0x17e0;
	constexpr std::ptrdiff_t m_iStyle = 0x17e8;
}; // CEnvProjectedTexture
namespace CEnvParticleScript
{
	constexpr std::ptrdiff_t m_flSequenceScale = 0x1cf8;
}; // CEnvParticleScript
namespace CFogController
{
	constexpr std::ptrdiff_t m_fog__enable = 0x1700;
	constexpr std::ptrdiff_t m_fog__blend = 0x1701;
	constexpr std::ptrdiff_t m_fog__radial = 0x1702;
	constexpr std::ptrdiff_t m_fog__dirPrimary = 0x16b8;
	constexpr std::ptrdiff_t m_fog__colorPrimary = 0x16c4;
	constexpr std::ptrdiff_t m_fog__colorSecondary = 0x16c8;
	constexpr std::ptrdiff_t m_fog__colorPrimaryHDR = 0x16cc;
	constexpr std::ptrdiff_t m_fog__colorSecondaryHDR = 0x16d0;
	constexpr std::ptrdiff_t m_fog__start = 0x16dc;
	constexpr std::ptrdiff_t m_fog__end = 0x16e0;
	constexpr std::ptrdiff_t m_fog__farz = 0x16e4;
	constexpr std::ptrdiff_t m_fog__maxdensity = 0x16e8;
	constexpr std::ptrdiff_t m_fog__colorPrimaryLerpTo = 0x16d4;
	constexpr std::ptrdiff_t m_fog__colorSecondaryLerpTo = 0x16d8;
	constexpr std::ptrdiff_t m_fog__startLerpTo = 0x16ec;
	constexpr std::ptrdiff_t m_fog__endLerpTo = 0x16f0;
	constexpr std::ptrdiff_t m_fog__maxdensityLerpTo = 0x16f4;
	constexpr std::ptrdiff_t m_fog__lerptime = 0x16f8;
	constexpr std::ptrdiff_t m_fog__duration = 0x16fc;
	constexpr std::ptrdiff_t m_fog__HDRColorScale = 0x1704;
}; // CFogController
namespace CEntityParticleTrail
{
	constexpr std::ptrdiff_t m_iMaterialName = 0x17e0;
	constexpr std::ptrdiff_t m_Info = 0x17e8; // DATATABLE 
	constexpr std::ptrdiff_t m_Info__m_flLifetime = 0x10;
	constexpr std::ptrdiff_t m_Info__m_flStartSize = 0x14;
	constexpr std::ptrdiff_t m_Info__m_flEndSize = 0x18;
	constexpr std::ptrdiff_t m_hConstraintEntity = 0x1808;
}; // CEntityParticleTrail
namespace CEntityDissolve
{
	constexpr std::ptrdiff_t m_flStartTime = 0x16b8;
	constexpr std::ptrdiff_t m_flFadeOutStart = 0x16bc;
	constexpr std::ptrdiff_t m_flFadeOutLength = 0x16c0;
	constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x16c4;
	constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x16c8;
	constexpr std::ptrdiff_t m_flFadeInStart = 0x16cc;
	constexpr std::ptrdiff_t m_flFadeInLength = 0x16d0;
	constexpr std::ptrdiff_t m_nDissolveType = 0x16d4;
	constexpr std::ptrdiff_t m_vDissolverOrigin = 0x16e8;
	constexpr std::ptrdiff_t m_nMagnitude = 0x16f4;
}; // CEntityDissolve
namespace CDynamicLight
{
	constexpr std::ptrdiff_t m_Flags = 0x16b0;
	constexpr std::ptrdiff_t m_LightStyle = 0x16b1;
	constexpr std::ptrdiff_t m_Radius = 0x16b4;
	constexpr std::ptrdiff_t m_Exponent = 0x16b8;
	constexpr std::ptrdiff_t m_InnerAngle = 0x16bc;
	constexpr std::ptrdiff_t m_OuterAngle = 0x16c0;
	constexpr std::ptrdiff_t m_SpotRadius = 0x16c4;
}; // CDynamicLight
namespace CColorCorrectionVolume
{
	constexpr std::ptrdiff_t m_bEnabled = 0x16f8;
	constexpr std::ptrdiff_t m_MaxWeight = 0x16fc;
	constexpr std::ptrdiff_t m_FadeDuration = 0x1700;
	constexpr std::ptrdiff_t m_Weight = 0x1704;
	constexpr std::ptrdiff_t m_lookupFilename = 0x1708;
	constexpr std::ptrdiff_t m_nModelIndex = 0xd4;
}; // CColorCorrectionVolume
namespace CColorCorrection
{
	constexpr std::ptrdiff_t m_vecOrigin = 0x16b0;
	constexpr std::ptrdiff_t m_minFalloff = 0x16bc;
	constexpr std::ptrdiff_t m_maxFalloff = 0x16c0;
	constexpr std::ptrdiff_t m_flCurWeight = 0x16d0;
	constexpr std::ptrdiff_t m_flMaxWeight = 0x16cc;
	constexpr std::ptrdiff_t m_flFadeInDuration = 0x16c4;
	constexpr std::ptrdiff_t m_flFadeOutDuration = 0x16c8;
	constexpr std::ptrdiff_t m_netLookupFilename = 0x16d4;
	constexpr std::ptrdiff_t m_bEnabled = 0x17d8;
	constexpr std::ptrdiff_t m_bClientSide = 0x17d9;
	constexpr std::ptrdiff_t m_bExclusive = 0x17da;
}; // CColorCorrection
namespace CBreakableProp
{
}; // CBreakableProp
namespace CBasePlayer
{
	constexpr std::ptrdiff_t pl = 0x2bf8; // DATATABLE 
	constexpr std::ptrdiff_t pl__deadflag = 0x8;
	constexpr std::ptrdiff_t m_hVehicle = 0x2c90;
	constexpr std::ptrdiff_t m_hUseEntity = 0x2c98;
	constexpr std::ptrdiff_t m_lifeState = 0xd7;
	constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x34e8;
	constexpr std::ptrdiff_t m_flMaxspeed = 0x2c9c;
	constexpr std::ptrdiff_t m_fFlags = 0x450;
	constexpr std::ptrdiff_t m_iObserverMode = 0x2c64;
	constexpr std::ptrdiff_t m_hObserverTarget = 0x2c68;
	constexpr std::ptrdiff_t m_iFOV = 0x2c10;
	constexpr std::ptrdiff_t m_iFOVStart = 0x2c14;
	constexpr std::ptrdiff_t m_flFOVTime = 0x2c18;
	constexpr std::ptrdiff_t m_iDefaultFOV = 0x2c20;
	constexpr std::ptrdiff_t m_hZoomOwner = 0x2c24;
	constexpr std::ptrdiff_t m_hViewModel__0 = 0x2d68;
	constexpr std::ptrdiff_t m_hViewModel = 0x0;
	constexpr std::ptrdiff_t m_bUseWeaponsInVehicle = 0x2d33;
	constexpr std::ptrdiff_t localdata = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t localdata__m_Local = 0x2980; // DATATABLE 
	constexpr std::ptrdiff_t m_Local__m_chAreaBits = 0x8; // DATATABLE 
	constexpr std::ptrdiff_t m_Local__m_chAreaPortalBits = 0x28; // DATATABLE 
	constexpr std::ptrdiff_t m_Local__m_iHideHUD = 0x40;
	constexpr std::ptrdiff_t m_Local__m_flFOVRate = 0x44;
	constexpr std::ptrdiff_t m_Local__m_bDucked = 0x48;
	constexpr std::ptrdiff_t m_Local__m_bDucking = 0x49;
	constexpr std::ptrdiff_t m_Local__m_bInDuckJump = 0x4a;
	constexpr std::ptrdiff_t m_Local__m_flDucktime = 0x4c;
	constexpr std::ptrdiff_t m_Local__m_flDuckJumpTime = 0x50;
	constexpr std::ptrdiff_t m_Local__m_flJumpTime = 0x54;
	constexpr std::ptrdiff_t m_Local__m_flFallVelocity = 0x5c;
	constexpr std::ptrdiff_t m_Local__m_vecPunchAngle = 0x70;
	constexpr std::ptrdiff_t m_Local__m_vecPunchAngleVel = 0xd0;
	constexpr std::ptrdiff_t m_Local__m_bDrawViewmodel = 0x130;
	constexpr std::ptrdiff_t m_Local__m_bWearingSuit = 0x131;
	constexpr std::ptrdiff_t m_Local__m_bPoisoned = 0x132;
	constexpr std::ptrdiff_t m_Local__m_flStepSize = 0x134;
	constexpr std::ptrdiff_t m_Local__m_bAllowAutoMovement = 0x133;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__scale = 0x140;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__origin = 0x144;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__area = 0x150;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__enable = 0x1a8;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__blend = 0x1a9;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__radial = 0x1aa;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__dirPrimary = 0x160;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__colorPrimary = 0x16c;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__colorSecondary = 0x170;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__colorPrimaryHDR = 0x174;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__colorSecondaryHDR = 0x178;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__start = 0x184;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__end = 0x188;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__maxdensity = 0x190;
	constexpr std::ptrdiff_t m_Local__m_skybox3d__fog__HDRColorScale = 0x1ac;
	constexpr std::ptrdiff_t m_Local__m_PlayerFog__m_hCtrl = 0x1b8;
	constexpr std::ptrdiff_t m_Local__m_audio__localSound__0 = 0x1e0;
	constexpr std::ptrdiff_t m_Local__m_audio__localSound__1 = 0x1ec;
	constexpr std::ptrdiff_t m_Local__m_audio__localSound__2 = 0x1f8;
	constexpr std::ptrdiff_t m_Local__m_audio__localSound__3 = 0x204;
	constexpr std::ptrdiff_t m_Local__m_audio__localSound__4 = 0x210;
	constexpr std::ptrdiff_t m_Local__m_audio__localSound__5 = 0x21c;
	constexpr std::ptrdiff_t m_Local__m_audio__localSound__6 = 0x228;
	constexpr std::ptrdiff_t m_Local__m_audio__localSound__7 = 0x234;
	constexpr std::ptrdiff_t m_Local__m_audio__soundscapeIndex = 0x240;
	constexpr std::ptrdiff_t m_Local__m_audio__localBits = 0x244;
	constexpr std::ptrdiff_t m_Local__m_audio__ent = 0x248;
	constexpr std::ptrdiff_t m_Local__m_fSprintSpeed = 0x254;
	constexpr std::ptrdiff_t m_Local__m_fWalkSpeed = 0x258;
	constexpr std::ptrdiff_t m_Local__m_fSlowWalkSpeed = 0x25c;
	constexpr std::ptrdiff_t m_Local__m_fLadderSpeed = 0x260;
	constexpr std::ptrdiff_t m_Local__m_fCrouchedWalkSpeed = 0x264;
	constexpr std::ptrdiff_t m_Local__m_fDuckSpeed = 0x268;
	constexpr std::ptrdiff_t m_Local__m_fUnDuckSpeed = 0x26c;
	constexpr std::ptrdiff_t m_Local__m_bDuckToggled = 0x251;
	constexpr std::ptrdiff_t localdata__m_vecViewOffset__0 = 0x144;
	constexpr std::ptrdiff_t localdata__m_vecViewOffset__1 = 0x148;
	constexpr std::ptrdiff_t localdata__m_vecViewOffset__2 = 0x14c;
	constexpr std::ptrdiff_t localdata__m_flFriction = 0x318;
	constexpr std::ptrdiff_t localdata__m_iAmmo = 0x2114; // DATATABLE 
	constexpr std::ptrdiff_t localdata__m_nTickBase = 0x2d20;
	constexpr std::ptrdiff_t localdata__m_nNextThinkTick = 0xcc;
	constexpr std::ptrdiff_t localdata__m_hLastWeapon = 0x2d40;
	constexpr std::ptrdiff_t localdata__m_hGroundEntity = 0x30c;
	constexpr std::ptrdiff_t localdata__m_vecBaseVelocity = 0x1d8;
	constexpr std::ptrdiff_t localdata__m_hConstraintEntity = 0x2c48;
	constexpr std::ptrdiff_t localdata__m_vecConstraintCenter = 0x2c4c;
	constexpr std::ptrdiff_t localdata__m_flConstraintRadius = 0x2c58;
	constexpr std::ptrdiff_t localdata__m_flConstraintWidth = 0x2c5c;
	constexpr std::ptrdiff_t localdata__m_flConstraintSpeedFactor = 0x2c60;
	constexpr std::ptrdiff_t localdata__m_flDeathTime = 0x2c8c;
	constexpr std::ptrdiff_t localdata__m_flLaggedMovementValue = 0x3310;
	constexpr std::ptrdiff_t localdata__m_hTonemapController = 0x2bf0;
	constexpr std::ptrdiff_t localdata__m_hViewEntity = 0x350c;
	constexpr std::ptrdiff_t localdata__m_bDisableWorldClicking = 0x34fd;
}; // CBasePlayer
namespace CBaseFlex
{
	constexpr std::ptrdiff_t m_flexWeight = 0x1cb0; // DATATABLE 
	constexpr std::ptrdiff_t m_blinktoggle = 0x1e80;
	constexpr std::ptrdiff_t m_viewtarget = 0x1c50;
	constexpr std::ptrdiff_t m_vecViewOffset__0 = 0x144;
	constexpr std::ptrdiff_t m_vecViewOffset__1 = 0x148;
	constexpr std::ptrdiff_t m_vecViewOffset__2 = 0x14c;
	constexpr std::ptrdiff_t m_vecLean = 0x2040;
	constexpr std::ptrdiff_t m_vecShift = 0x20a0;
}; // CBaseFlex
namespace CBaseEntity
{
	constexpr std::ptrdiff_t AnimTimeMustBeFirst = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t AnimTimeMustBeFirst__m_flAnimTime = 0xa0;
	constexpr std::ptrdiff_t m_flSimulationTime = 0xb0;
	constexpr std::ptrdiff_t m_ubInterpolationFrame = 0xc0;
	constexpr std::ptrdiff_t m_vecOrigin = 0x438;
	constexpr std::ptrdiff_t m_angRotation = 0x444;
	constexpr std::ptrdiff_t m_nModelIndex = 0xd4;
	constexpr std::ptrdiff_t m_fEffects = 0xc4;
	constexpr std::ptrdiff_t m_nRenderMode = 0xc2;
	constexpr std::ptrdiff_t m_nRenderFX = 0x8c;
	constexpr std::ptrdiff_t m_clrRender = 0x90;
	constexpr std::ptrdiff_t m_iTeamNum = 0xe4;
	constexpr std::ptrdiff_t m_CollisionGroup = 0x454;
	constexpr std::ptrdiff_t m_flElasticity = 0x300;
	constexpr std::ptrdiff_t m_flShadowCastDistance = 0x304;
	constexpr std::ptrdiff_t m_hOwnerEntity = 0x744;
	constexpr std::ptrdiff_t m_hEffectEntity = 0x748;
	constexpr std::ptrdiff_t moveparent = 0x21c;
	constexpr std::ptrdiff_t m_iParentAttachment = 0x1fe;
	constexpr std::ptrdiff_t movetype = 0x0;
	constexpr std::ptrdiff_t movecollide = 0x0;
	constexpr std::ptrdiff_t m_Collision = 0x230; // DATATABLE 
	constexpr std::ptrdiff_t m_Collision__m_vecMinsPreScaled = 0x10;
	constexpr std::ptrdiff_t m_Collision__m_vecMaxsPreScaled = 0x1c;
	constexpr std::ptrdiff_t m_Collision__m_vecMins = 0x28;
	constexpr std::ptrdiff_t m_Collision__m_vecMaxs = 0x34;
	constexpr std::ptrdiff_t m_Collision__m_nSolidType = 0x49;
	constexpr std::ptrdiff_t m_Collision__m_usSolidFlags = 0x44;
	constexpr std::ptrdiff_t m_Collision__m_nSurroundType = 0x48;
	constexpr std::ptrdiff_t m_Collision__m_triggerBloat = 0x4a;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMinsPreScaled = 0x4c;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMaxsPreScaled = 0x58;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMins = 0x64;
	constexpr std::ptrdiff_t m_Collision__m_vecSpecifiedSurroundingMaxs = 0x70;
	constexpr std::ptrdiff_t m_iTextureFrameIndex = 0x738;
	constexpr std::ptrdiff_t predictable_id = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t predictable_id__m_PredictableID = 0xe8;
	constexpr std::ptrdiff_t predictable_id__m_bIsPlayerSimulated = 0x734;
	constexpr std::ptrdiff_t m_bSimulatedEveryTick = 0x735;
	constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x736;
	constexpr std::ptrdiff_t m_bAlternateSorting = 0x737;
	constexpr std::ptrdiff_t m_takedamage = 0xd6;
	constexpr std::ptrdiff_t m_RealClassName = 0x780;
	constexpr std::ptrdiff_t m_OverrideMaterial = 0x784;
	constexpr std::ptrdiff_t m_OverrideSubMaterials__0 = 0x790;
	constexpr std::ptrdiff_t m_OverrideSubMaterials = 0x0;
	constexpr std::ptrdiff_t m_iHealth = 0xd8;
	constexpr std::ptrdiff_t m_iMaxHealth = 0xdc;
	constexpr std::ptrdiff_t m_spawnflags = 0x92c;
	constexpr std::ptrdiff_t m_iGModFlags = 0x930;
	constexpr std::ptrdiff_t m_bOnFire = 0x77a;
	constexpr std::ptrdiff_t m_CreationTime = 0x77c;
	constexpr std::ptrdiff_t m_vecVelocity__0 = 0x150;
	constexpr std::ptrdiff_t m_vecVelocity__1 = 0x154;
	constexpr std::ptrdiff_t m_vecVelocity__2 = 0x158;
	constexpr std::ptrdiff_t m_GMOD_DataTable = 0x1638;
	constexpr std::ptrdiff_t m_GMOD_bool = 0x998; // DATATABLE 
	constexpr std::ptrdiff_t m_GMOD_float = 0x9b8; // DATATABLE 
	constexpr std::ptrdiff_t m_GMOD_int = 0xa38; // DATATABLE 
	constexpr std::ptrdiff_t m_GMOD_Vector = 0xab8; // DATATABLE 
	constexpr std::ptrdiff_t m_GMOD_QAngle = 0xc38; // DATATABLE 
	constexpr std::ptrdiff_t m_GMOD_EHANDLE = 0xdb8; // DATATABLE 
	constexpr std::ptrdiff_t m_GMOD_String0 = 0xe38;
	constexpr std::ptrdiff_t m_GMOD_String1 = 0x1038;
	constexpr std::ptrdiff_t m_GMOD_String2 = 0x1238;
	constexpr std::ptrdiff_t m_GMOD_String3 = 0x1438;
	constexpr std::ptrdiff_t m_iCreationID = 0x16a4;
	constexpr std::ptrdiff_t m_iMapCreatedID = 0x16a8;
}; // CBaseEntity
namespace CBaseDoor
{
}; // CBaseDoor
namespace CBaseCombatCharacter
{
	constexpr std::ptrdiff_t bcc_localdata = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t bcc_localdata__m_flNextAttack = 0x2108;
	constexpr std::ptrdiff_t m_hActiveWeapon = 0x2914;
	constexpr std::ptrdiff_t m_hMyWeapons = 0x2514; // DATATABLE 
	constexpr std::ptrdiff_t m_bloodColor = 0x2110;
}; // CBaseCombatCharacter
namespace CBaseAnimatingOverlay
{
	constexpr std::ptrdiff_t overlay_vars = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t overlay_vars__m_AnimOverlay = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t m_AnimOverlay__lengthproxy = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t lengthproxy__lengthprop15 = 0x0;
}; // CBaseAnimatingOverlay
namespace CBoneFollower
{
	constexpr std::ptrdiff_t m_modelIndex = 0x16b0;
	constexpr std::ptrdiff_t m_solidIndex = 0x16b4;
}; // CBoneFollower
namespace CBaseAnimating
{
	constexpr std::ptrdiff_t m_nSequence = 0x19ec;
	constexpr std::ptrdiff_t m_nForceBone = 0x1714;
	constexpr std::ptrdiff_t m_vecForce = 0x1708;
	constexpr std::ptrdiff_t m_nSkin = 0x16c0;
	constexpr std::ptrdiff_t m_nBody = 0x16c4;
	constexpr std::ptrdiff_t m_nHitboxSet = 0x16c8;
	constexpr std::ptrdiff_t m_flModelScale = 0x1800;
	constexpr std::ptrdiff_t m_flModelWidthScale = 0x1800;
	constexpr std::ptrdiff_t m_flPoseParameter = 0x1804; // DATATABLE 
	constexpr std::ptrdiff_t m_flPlaybackRate = 0x16fc;
	constexpr std::ptrdiff_t m_flEncodedController = 0x1950; // DATATABLE 
	constexpr std::ptrdiff_t m_bClientSideAnimation = 0x19e9;
	constexpr std::ptrdiff_t m_bClientSideFrameReset = 0x17a6;
	constexpr std::ptrdiff_t m_nNewSequenceParity = 0x19c0;
	constexpr std::ptrdiff_t m_nResetEventsParity = 0x19c4;
	constexpr std::ptrdiff_t m_nMuzzleFlashParity = 0x1ac8;
	constexpr std::ptrdiff_t m_hLightingOrigin = 0x1ac0;
	constexpr std::ptrdiff_t m_hLightingOriginRelative = 0x1ac4;
	constexpr std::ptrdiff_t serveranimdata = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t serveranimdata__m_flCycle = 0x19f0;
	constexpr std::ptrdiff_t m_fadeMinDist = 0x1790;
	constexpr std::ptrdiff_t m_fadeMaxDist = 0x1794;
	constexpr std::ptrdiff_t m_flFadeScale = 0x1798;
	constexpr std::ptrdiff_t m_pBoneManipulator = 0x1b74;
	constexpr std::ptrdiff_t m_pFlexManipulator = 0x1b7c;
	constexpr std::ptrdiff_t m_OverrideViewTarget = 0x1ae8;
}; // CBaseAnimating
namespace CInfoLightingRelative
{
	constexpr std::ptrdiff_t m_hLightingLandmark = 0x16b0;
}; // CInfoLightingRelative
namespace CAI_BaseNPC
{
	constexpr std::ptrdiff_t m_lifeState = 0xd7;
	constexpr std::ptrdiff_t m_bPerformAvoidance = 0x2920;
	constexpr std::ptrdiff_t m_bIsMoving = 0x2921;
	constexpr std::ptrdiff_t m_bFadeCorpse = 0x2922;
	constexpr std::ptrdiff_t m_iDeathPose = 0x2918;
	constexpr std::ptrdiff_t m_iDeathFrame = 0x291c;
	constexpr std::ptrdiff_t m_bImportanRagdoll = 0x2923;
}; // CAI_BaseNPC
namespace CBeam
{
	constexpr std::ptrdiff_t m_nBeamType = 0x16d0;
	constexpr std::ptrdiff_t m_nBeamFlags = 0x16d4;
	constexpr std::ptrdiff_t m_nNumBeamEnts = 0x16c4;
	constexpr std::ptrdiff_t m_hAttachEntity = 0x16d8; // DATATABLE 
	constexpr std::ptrdiff_t m_nAttachIndex = 0x1700; // DATATABLE 
	constexpr std::ptrdiff_t m_nHaloIndex = 0x16cc;
	constexpr std::ptrdiff_t m_fHaloScale = 0x1734;
	constexpr std::ptrdiff_t m_fWidth = 0x1728;
	constexpr std::ptrdiff_t m_fEndWidth = 0x172c;
	constexpr std::ptrdiff_t m_fFadeLength = 0x1730;
	constexpr std::ptrdiff_t m_fAmplitude = 0x1738;
	constexpr std::ptrdiff_t m_fStartFrame = 0x173c;
	constexpr std::ptrdiff_t m_fSpeed = 0x1740;
	constexpr std::ptrdiff_t m_flFrameRate = 0x16b0;
	constexpr std::ptrdiff_t m_flHDRColorScale = 0x16b4;
	constexpr std::ptrdiff_t m_clrRender = 0x90;
	constexpr std::ptrdiff_t m_nRenderFX = 0x8c;
	constexpr std::ptrdiff_t m_nRenderMode = 0xc2;
	constexpr std::ptrdiff_t m_flFrame = 0x1748;
	constexpr std::ptrdiff_t m_vecEndPos = 0x174c;
	constexpr std::ptrdiff_t m_nModelIndex = 0xd4;
	constexpr std::ptrdiff_t m_nMinDXLevel = 0x1744;
	constexpr std::ptrdiff_t m_vecOrigin = 0x438;
	constexpr std::ptrdiff_t moveparent = 0x21c;
	constexpr std::ptrdiff_t beampredictable_id = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t beampredictable_id__m_PredictableID = 0xe8;
	constexpr std::ptrdiff_t beampredictable_id__m_bIsPlayerSimulated = 0x734;
}; // CBeam
namespace CBaseViewModel
{
	constexpr std::ptrdiff_t m_nModelIndex = 0xd4;
	constexpr std::ptrdiff_t m_nSkin = 0x16c0;
	constexpr std::ptrdiff_t m_nBody = 0x16c4;
	constexpr std::ptrdiff_t m_nSequence = 0x19ec;
	constexpr std::ptrdiff_t m_nViewModelIndex = 0x1bdc;
	constexpr std::ptrdiff_t m_flPlaybackRate = 0x16fc;
	constexpr std::ptrdiff_t m_fEffects = 0xc4;
	constexpr std::ptrdiff_t m_nAnimationParity = 0x1bf4;
	constexpr std::ptrdiff_t m_hWeapon = 0x1c04;
	constexpr std::ptrdiff_t m_hOwner = 0x1be0;
	constexpr std::ptrdiff_t m_nNewSequenceParity = 0x19c0;
	constexpr std::ptrdiff_t m_nResetEventsParity = 0x19c4;
	constexpr std::ptrdiff_t m_nMuzzleFlashParity = 0x1ac8;
	constexpr std::ptrdiff_t m_flPoseParameter__0 = 0x1804;
	constexpr std::ptrdiff_t m_flPoseParameter = 0x0;
}; // CBaseViewModel
namespace CBaseParticleEntity
{
}; // CBaseParticleEntity
namespace CBaseGrenade
{
	constexpr std::ptrdiff_t m_flDamage = 0x1be8;
	constexpr std::ptrdiff_t m_DmgRadius = 0x1bcc;
	constexpr std::ptrdiff_t m_bIsLive = 0x1bc9;
	constexpr std::ptrdiff_t m_hThrower = 0x1bfc;
	constexpr std::ptrdiff_t m_vecVelocity = 0x150;
	constexpr std::ptrdiff_t m_fFlags = 0x450;
}; // CBaseGrenade
namespace CBaseCombatWeapon
{
	constexpr std::ptrdiff_t LocalWeaponData = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t LocalWeaponData__m_iClip1 = 0x1c28;
	constexpr std::ptrdiff_t LocalWeaponData__m_iClip2 = 0x1c2c;
	constexpr std::ptrdiff_t LocalWeaponData__m_iPrimaryAmmoType = 0x1c20;
	constexpr std::ptrdiff_t LocalWeaponData__m_iSecondaryAmmoType = 0x1c24;
	constexpr std::ptrdiff_t LocalWeaponData__m_nViewModelIndex = 0x1bd0;
	constexpr std::ptrdiff_t LocalWeaponData__m_bFlipViewModel = 0x1c30;
	constexpr std::ptrdiff_t LocalActiveWeaponData = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t LocalActiveWeaponData__m_flNextPrimaryAttack = 0x1bd8;
	constexpr std::ptrdiff_t LocalActiveWeaponData__m_flNextSecondaryAttack = 0x1be0;
	constexpr std::ptrdiff_t LocalActiveWeaponData__m_nNextThinkTick = 0xcc;
	constexpr std::ptrdiff_t LocalActiveWeaponData__m_flTimeWeaponIdle = 0x1be8;
	constexpr std::ptrdiff_t m_iViewModelIndex = 0x1bf0;
	constexpr std::ptrdiff_t m_iWorldModelIndex = 0x1bf4;
	constexpr std::ptrdiff_t m_iState = 0x1c14;
	constexpr std::ptrdiff_t m_hOwner = 0x1bc8;
}; // CBaseCombatWeapon
namespace CWeaponPhysGun
{
	constexpr std::ptrdiff_t m_hPhysBeam = 0x1ca4;
	constexpr std::ptrdiff_t m_vHitPosLocal = 0x1ca8;
	constexpr std::ptrdiff_t m_hGrabbedEntity = 0x1ca0;
}; // CWeaponPhysGun
namespace CPhysBeam
{
	constexpr std::ptrdiff_t m_hTargetEnt = 0x16e0;
	constexpr std::ptrdiff_t m_HoldPos = 0x16d4;
	constexpr std::ptrdiff_t m_bIsOn = 0x16e4;
	constexpr std::ptrdiff_t m_iPhysBone = 0x16d0;
}; // CPhysBeam
namespace CLuaNextBot
{
	constexpr std::ptrdiff_t m_ScriptedEntity = 0x2938; // DATATABLE 
	constexpr std::ptrdiff_t m_ScriptedEntity__m_strScriptName = 0x18;
	constexpr std::ptrdiff_t m_lifeState = 0xd7;
}; // CLuaNextBot
namespace CFlexManipulate
{
	constexpr std::ptrdiff_t m_flexScale = 0x1830;
	constexpr std::ptrdiff_t m_EyesLocalTarget = 0x1834;
	constexpr std::ptrdiff_t m_iFlexWeights = 0x16b0; // DATATABLE 
}; // CFlexManipulate
namespace CBoneManipulate
{
	constexpr std::ptrdiff_t m_BonePos = 0x16b0; // DATATABLE 
	constexpr std::ptrdiff_t m_BoneAng = 0x2eb0; // DATATABLE 
	constexpr std::ptrdiff_t m_BoneScale = 0x22b0; // DATATABLE 
	constexpr std::ptrdiff_t m_BoneJiggle = 0x3ab0; // DATATABLE 
}; // CBoneManipulate
namespace CWeaponSWEP
{
	constexpr std::ptrdiff_t m_ScriptedEntity = 0x1ca0; // DATATABLE 
	constexpr std::ptrdiff_t m_ScriptedEntity__m_strScriptName = 0x18;
	constexpr std::ptrdiff_t m_strHoldType = 0x1e18;
}; // CWeaponSWEP
namespace CSENT_point
{
	constexpr std::ptrdiff_t m_ScriptedEntity = 0x16b0; // DATATABLE 
	constexpr std::ptrdiff_t m_ScriptedEntity__m_strScriptName = 0x18;
}; // CSENT_point
namespace CSENT_anim
{
	constexpr std::ptrdiff_t m_ScriptedEntity = 0x1c50; // DATATABLE 
	constexpr std::ptrdiff_t m_ScriptedEntity__m_strScriptName = 0x18;
}; // CSENT_anim
namespace CSENT_AI
{
	constexpr std::ptrdiff_t m_ScriptedEntity = 0x2928; // DATATABLE 
	constexpr std::ptrdiff_t m_ScriptedEntity__m_strScriptName = 0x18;
}; // CSENT_AI
namespace CGMODGameRulesProxy
{
	constexpr std::ptrdiff_t gmod_gamerules_data = 0x0; // DATATABLE 
	constexpr std::ptrdiff_t gmod_gamerules_data__m_fTimeScale = 0x40;
	constexpr std::ptrdiff_t gmod_gamerules_data__m_iSkillLevel = 0x44;
}; // CGMODGameRulesProxy
namespace NextBotCombatCharacter
{
}; // NextBotCombatCharacter
namespace CGMOD_Player
{
	constexpr std::ptrdiff_t m_iGModPlayerFlags = 0x36a8;
	constexpr std::ptrdiff_t m_HoveredWidget = 0x3870;
	constexpr std::ptrdiff_t m_PressedWidget = 0x3874;
	constexpr std::ptrdiff_t m_Driving = 0x3878;
	constexpr std::ptrdiff_t m_DrivingMode = 0x387c;
	constexpr std::ptrdiff_t m_PlayerClass = 0x3884;
	constexpr std::ptrdiff_t m_bCanZoom = 0x38a5;
	constexpr std::ptrdiff_t m_bCanWalk = 0x38a6;
	constexpr std::ptrdiff_t m_bIsTyping = 0x38a7;
	constexpr std::ptrdiff_t m_StepSize = 0x38a8;
	constexpr std::ptrdiff_t m_JumpPower = 0x38ac;
	constexpr std::ptrdiff_t m_ViewOffset = 0x38b0;
	constexpr std::ptrdiff_t m_ViewOffsetDucked = 0x38bc;
	constexpr std::ptrdiff_t m_fGestureEndTime = 0x38c8;
	constexpr std::ptrdiff_t m_PlayerColor = 0x388c;
	constexpr std::ptrdiff_t m_WeaponColor = 0x3898;
	constexpr std::ptrdiff_t m_Hands = 0x3880;
	constexpr std::ptrdiff_t m_nWaterLevel = 0x200;
	constexpr std::ptrdiff_t m_iMaxArmor = 0x3888;
	constexpr std::ptrdiff_t m_flGravity = 0x1e4;
	constexpr std::ptrdiff_t m_bSprintEnabled = 0x38a4;
}; // CGMOD_Player
namespace CFleshEffectTarget
{
	constexpr std::ptrdiff_t m_flRadius = 0x16b0;
	constexpr std::ptrdiff_t m_flScaleTime = 0x16bc;
}; // CFleshEffectTarget
namespace CPropJeepEpisodic
{
	constexpr std::ptrdiff_t m_iNumRadarContacts = 0x1d50;
	constexpr std::ptrdiff_t m_vecRadarContactPos__0 = 0x1d54;
	constexpr std::ptrdiff_t m_vecRadarContactPos = 0x0;
	constexpr std::ptrdiff_t m_iRadarContactType__0 = 0x1e74;
	constexpr std::ptrdiff_t m_iRadarContactType = 0x0;
}; // CPropJeepEpisodic
namespace CPropScalable
{
	constexpr std::ptrdiff_t m_flScaleX = 0x1bc8;
	constexpr std::ptrdiff_t m_flScaleY = 0x1bcc;
	constexpr std::ptrdiff_t m_flScaleZ = 0x1bd0;
	constexpr std::ptrdiff_t m_flLerpTimeX = 0x1bd4;
	constexpr std::ptrdiff_t m_flLerpTimeY = 0x1bd8;
	constexpr std::ptrdiff_t m_flLerpTimeZ = 0x1bdc;
	constexpr std::ptrdiff_t m_flGoalTimeX = 0x1be0;
	constexpr std::ptrdiff_t m_flGoalTimeY = 0x1be4;
	constexpr std::ptrdiff_t m_flGoalTimeZ = 0x1be8;
}; // CPropScalable
namespace CNPC_Puppet
{
	constexpr std::ptrdiff_t m_hAnimationTarget = 0x2928;
	constexpr std::ptrdiff_t m_nTargetAttachment = 0x292c;
}; // CNPC_Puppet
