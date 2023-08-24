#define OFFSET_ENTITYLIST			0x1e74448
#define OFFSET_LOCAL_ENT			0x22245c8 //.LocalPlayer ?
#define OFFSET_NAME_LIST            0xc2b0c00 //NameList
#define OFFSET_THIRDPERSON          0x01e030e0 + 0x6c //thirdperson_override + 0x6c
#define OFFSET_TIMESCALE            0x017b8000 //host_timescale

#define OFFSET_TEAM					0x0480 //m_iTeamNum
#define OFFSET_HEALTH				0x0470 //m_iHealth
#define OFFSET_SHIELD				0x01a0 //m_shieldHealth
#define OFFSET_NAME					0x05c1 //m_iName
#define OFFSET_SIGN_NAME			0x05b8 //m_iSignifierName
#define OFFSET_ABS_VELOCITY         0x0170 //m_vecAbsVelocity
#define OFFSET_VISIBLE_TIME         0x1AA0 //CPlayer!lastVisibleTime
#define OFFSET_ZOOMING      		0x1c81 //m_bZooming
#define OFFSET_THIRDPERSON_SV       0x3728 //m_thirdPersonShoulderView
#define OFFSET_YAW                  0x22ec - 0x8 //m_currentFramePlayer.m_ammoPoolCount - 0x8

#define OFFSET_LIFE_STATE			0x07d0 //m_lifeState, >0 = dead
#define OFFSET_BLEED_OUT_STATE		0x2790 //m_bleedoutState, >0 = knocked

#define OFFSET_ORIGIN				0x017c //m_vecAbsOrigin
#define OFFSET_BONES				0x0ec8 + 0x48 //m_nForceBone + 0x48
#define OFFSET_STUDIOHDR            0x1118 //CBaseAnimating!m_pStudioHdr
#define OFFSET_AIMPUNCH				0x24e8 //m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
#define OFFSET_CAMERAPOS			0x1f80 //CPlayer!camera_origin
#define OFFSET_VIEWANGLES			0x25e4 - 0x14 //m_ammoPoolCapacity - 0x14
#define OFFSET_BREATH_ANGLES		OFFSET_VIEWANGLES - 0x10
#define OFFSET_OBSERVER_MODE		0x3534 //m_iObserverMode
#define OFFSET_OBSERVING_TARGET		0x3540 //m_hObserverTarget

#define OFFSET_MATRIX				0x11A350 
#define OFFSET_RENDER				0x7472A28

#define OFFSET_WEAPON				0x1a44 //m_latestPrimaryWeapons
#define OFFSET_BULLET_SPEED         OFFSET_VISIBLE_TIME + 0x04cc //CWeaponX!m_flProjectileSpeed
#define OFFSET_BULLET_SCALE         OFFSET_VISIBLE_TIME + 0x04d4 //CWeaponX!m_flProjectileScale
#define OFFSET_ZOOM_FOV             0x16e0 + 0xb8 //m_playerData + m_curZoomFOV
#define OFFSET_AMMO                 0x1664 //m_ammoInClip

#define OFFSET_ITEM_GLOW            0x1664 //m_highlightFunctionBits

#define OFFSET_GLOW_T1              0x262+ 0x30 //16256 = enabled, 0 = disabled 
#define OFFSET_GLOW_T2              0x2dc+ 0x30 //1193322764 = enabled, 0 = disabled 
#define OFFSET_GLOW_ENABLE          0x3c8+ 0x30 //7 = enabled, 2 = disabled
#define OFFSET_GLOW_THROUGH_WALLS   0x3d0+ 0x30 //2 = enabled, 5 = disabled