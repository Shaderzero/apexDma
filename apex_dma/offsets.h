#define OFFSET_ENTITYLIST			0x1d6b5d8 //cl_entitylist
#define OFFSET_LOCAL_ENT			0x2119848 //.?AVC_GameMovement@@ + 0x8 maybe 0x22048C0 ?
#define OFFSET_NAME_LIST            0xc26e750  //NameList
#define OFFSET_THIRDPERSON          0x01de45d0 + 0x6c //thirdperson_override + 0x6c need to delete
#define OFFSET_TIMESCALE            0x01799bd0 //host_timescale need to delete

#define OFFSET_TEAM					0x037c //m_iTeamNum
#define OFFSET_HEALTH				0x036c //m_iHealth
#define OFFSET_SHIELD				0x01a0 //m_shieldHealth
#define OFFSET_NAME					0x04b9 //m_iName
#define OFFSET_SIGN_NAME			0x04b0 //m_iSignifierName
#define OFFSET_ABS_VELOCITY         0x0170 //m_vecAbsVelocity
#define OFFSET_VISIBLE_TIME         0x19c0 //CPlayer!lastVisibleTime
#define OFFSET_ZOOMING      		0x1c01 //m_bZooming
#define OFFSET_THIRDPERSON_SV       0x36e8 //m_thirdPersonShoulderView need to delete
#define OFFSET_YAW                  0x226c - 0x8 //m_currentFramePlayer.m_ammoPoolCount - 0x8

#define OFFSET_LIFE_STATE			0x06c8 //m_lifeState, >0 = dead
#define OFFSET_BLEED_OUT_STATE		0x2710 //m_bleedoutState, >0 = knocked

#define OFFSET_ORIGIN				0x017c //m_vecAbsOrigin
#define OFFSET_BONES				0x0dd0 + 0x48 //m_nForceBone + 0x48
#define OFFSET_STUDIOHDR            0x1020 //CBaseAnimating!m_pStudioHdr
#define OFFSET_AIMPUNCH				0x2468 //m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
#define OFFSET_CAMERAPOS			0x1f00 //CPlayer!camera_origin
#define OFFSET_VIEWANGLES			0x2564 - 0x14 //m_ammoPoolCapacity - 0x14
#define OFFSET_BREATH_ANGLES		OFFSET_VIEWANGLES - 0x10
#define OFFSET_OBSERVER_MODE		0x34c4 //m_iObserverMode
#define OFFSET_OBSERVING_TARGET		0x34d0 //m_hObserverTarget

#define OFFSET_MATRIX				0x11A350 //ViewMatrix
#define OFFSET_RENDER				0x73828a0 //ViewRender

#define OFFSET_WEAPON				0x1964 //m_latestPrimaryWeapons
#define OFFSET_BULLET_SPEED         0x1ebc //CWeaponX!m_flProjectileSpeed
#define OFFSET_BULLET_SCALE         0x1ec4 //CWeaponX!m_flProjectileScale
#define OFFSET_ZOOM_FOV             0x1600 + 0xb8 //m_playerData + m_curZoomFOV
#define OFFSET_AMMO                 0x1584 //m_ammoInClip

#define OFFSET_CROSSHAIR_LAST       OFFSET_VISIBLE_TIME + 0x8 //CPlayer!lastCrosshairTargetTime // CPlayer!lastVisibleTime + 0x8
#define OFFSET_IN_ATTACK            0x07383af0 // in_attack

// #define OFFSET_ITEM_GLOW            0x02f0 //m_highlightFunctionBits
#define OFFSET_ITEM_GLOW            0x298 //m_highlightFunctionBits
#define OFF_GLOW_FIX                0x270

#define OFFSET_GLOW_T1              0x262 + 0x30 //16256 = enabled, 0 = disabled 
#define OFFSET_GLOW_T2              0x2dc + 0x30 //1193322764 = enabled, 0 = disabled 
#define OFFSET_GLOW_ENABLE          0x294 //7 = enabled, 2 = disabled
#define OFFSET_GLOW_THROUGH_WALLS   0x278 //2 = enabled, 5 = disabled