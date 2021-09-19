#include "includes.h"

/* ================================================ IMPORTANT ================================================== */
/* This was reversed engineered on GD version 2.111 which is roughly 6 days behind the PC Release (2.113) it may */
/* be unlikely however there is a chance robert added a member during those 6 days causing the members to mis-   */
/* align. Also keep in mind that a couple members could be incorrect. PlayLayer is quite a difficult class to    */
/* understand.   																								 */		

// Unknown Members: 28
class PlayLayer : public GJBaseGameLayer, CCCircleWaveDelegate, CurrencyRewardDelegate, DialogDelegate
{
public:
	DWORD dwordC;
	bool gap2DC;
	bool m_bCheated;
	bool m_bStartGame;
	bool field_2DF;
	float dword14;
	bool dword18;
	cocos2d::CCDrawNode* m_pUnkDrawNode;
	float m_fToCameraY;
	float m_fVisibleHeightMaybe;
	float m_fDoubleGroundFixedYPos;
	float m_fPlayerToTopStartYDifference;
	float m_fDeathHeightMaybe;
	bool m_bDeactivateSectionObjects;
	bool m_bDisableShake2;
	bool m_bDisableShake;
	BYTE PAD1[25];
	StartPosObject* m_pStartPos;
	CheckpointObject* m_pStartPosCheckpoint;
	EndPortalObject* m_pEndPortal;
	cocos2d::CCArray* m_pCheckpointArray;
	cocos2d::CCArray* m_pSpeedObjects;
	cocos2d::CCArray* m_pSpeedPortalArray;
	cocos2d::CCArray* m_pSomeCollisionsArray;
	cocos2d::CCSprite* m_pBackground;
	cocos2d::CCRect m_obBackgroundRect;
	cocos2d::CCArray* m_pSomeGroupArray;
	cocos2d::CCArray* m_pActiveObjects;
	cocos2d::CCArray* m_pUnkVisibleObjArr;
	cocos2d::CCArray* m_pMoveActionsArr;
	bool m_bMusicDisabled;
	BYTE PAD2[7];
	cocos2d::CCArray* m_pStateObjects;
	cocos2d::CCParticleSystemQuad* m_pGlitterEffects;
	cocos2d::CCDictionary* m_pItemDict;
	cocos2d::CCArray* m_pCircleWaves;
	cocos2d::CCArray* m_pTriggeredObjects;
	AudioEffectsLayer* m_pAudioEffectsLayer;
	float m_fGroundBottomYPos;
	float m_fGroundTopYPos;
	GJGroundLayer* m_pBottomGround;
	GJGroundLayer* m_pTopGround;
	BYTE PAD3[8];
	bool m_bDead;
	bool m_bFullLevelReset2;
	bool m_bUnkCameraX;
	bool m_bUnkCameraY;
	BYTE PAD4[4];
	int m_nRand;
	float dwordCC;
	bool m_bGroundsNotEqual;
	float m_fTimeMod;
	cocos2d::CCSize m_obLevelSize;
	cocos2d::CCLabelBMFont* m_pAttemptLabel;
	cocos2d::CCLabelBMFont* m_pPercentLabel;
	bool m_bCameraShaking;
	float m_fStrength;
	float m_fInterval;
	double m_dLastShakeTime;
	cocos2d::CCPoint m_obCameraShake;
	bool m_bShowedHint;
	float m_fCameraXMaybe;
	float m_fMirrorTransition2;
	bool m_bFlipping;
	int m_nTotalUnkSprites;
	cocos2d::CCDictionary* m_pClaimedParticles;
	cocos2d::CCDictionary* m_pParticleDict;
	cocos2d::CCArray* m_pClaimedParticlesArray;
	cocos2d::CCNode* m_pLightningNode;
	cocos2d::CCSprite* m_pProgressBarGroove;
	cocos2d::CCSprite* ProgressBar;
	cocos2d::CCSize m_obSlider;
	float m_fUnkFlashEffect;
	int m_nTotalGravityEffectSprites;
	int m_nGravityEffect;
	int m_nGravitySpriteIdx;
	cocos2d::CCArray* m_pGravitySprites;
	bool m_bJustDont;
	bool m_bIsLocalLevel;
	char m_bPlayer1PushedButtonMaybe;
	bool m_bPlayerFrozen;
	bool m_bPlayer2PushedButtonMaybe;
	bool m_bPlayer2Frozen;
	std::string m_sReplayData;
	cocos2d::CCArray* m_pReplayArray;
	double m_dTime;
	float m_fGroundBottomYPos2;
	BYTE PAD5[4];
	bool m_bUnkMirrorFloatStepping;
	bool m_bUseSoundManager;
	cocos2d::CCDictionary* m_pColourDict;
	std::map<short, bool> m_sBlending; // an index is passed through and the blending state is returned
	DWORD dword184;
	DWORD dword188;
	bool dword18C;
	bool field_459;
	GameObject* m_pLastActivatedPortal;
	GameObject* m_pPortal;
	bool m_bFlipped;
	float m_fMirrorTransition;
	UILayer* m_pUILayer;
	GJGameLevel* m_pLevel;
	cocos2d::CCPoint m_obCameraPos;
	bool m_bTestMode;
	bool m_bPracticeMode;
	bool field_47E;
	bool field_47F;
	cocos2d::CCArray* m_pSomeArray3;
	bool m_bFullLevelReset;
	cocos2d::CCPoint m_obPlayerPosition;
	int m_nAttempts;
	int m_nJumpCount;
	bool m_bHasClicked;
	float m_fTime;
	int m_nAttemptJumps;
	bool m_bLeaderboardPercent;
	bool m_bShowUI;
	bool m_bTriggeredEvent;
	bool field_4A7;
	int m_nBestPercent;
	bool m_bStarRatedLevel;
	int m_nAwardedCurrency;
	int m_nAwardedDiamonds;
	bool m_bAwardedSecretKey;
	bool m_bNotRecording;
	cocos2d::CCArray* m_pObjectStateArr;
	cocos2d::CCDictionary* m_pSaveRequiredGroupsUIDs;
	BYTE PAD6[4];
	double dword1FC;
	double dword204;
	double dword20C;
	bool dword214;
	float field_4E4;
	int dword21C;
	double m_dAttemptTime;
	double m_dTempMilliTime;
	double m_dAttemptTimeSeed;
	double m_dAttemptTimeRand;
	DWORD dword244;
	bool m_bGlitter;
	bool m_bBGEffectVisibility;
	BYTE gap516;
	bool m_bGamePaused;
	GameObject* m_pCollidedObject;
	bool m_bVfDChk;
	bool m_bDisableGravityEffect;
};
