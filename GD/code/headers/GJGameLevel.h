#include "includes.h"

enum GJSong;

enum GJLength {
	kGJLengthTiny = 0x0,
	kGJLengthShort = 0x1,
	kGJLengthMedium = 0x2,
	kGJLengthLong = 0x3,
	kGJLengthXL = 0x4
};

enum GJLevelType;

class GJGameLevel : public cocos2d::CCNode
{
public:
	cocos2d::CCDictionary* m_pRecentlyBrowsedPages;
	int m_nLevelIDSeed;
	int m_nLevelIDRand;
	int m_nLevelID;
	std::string m_sLevelName;
	std::string m_sDescription;
	std::string m_sLevelString;
	std::string m_sCreator;
	std::string m_sReplayData;
	std::string m_sUploadDate;
	std::string m_sUpdateDate;
	int m_nUserIDSeed;
	int m_nUserIDRand;
	int m_nUserID;
	int m_nAccountIDSeed;
	int m_nAccountIDRand;
	int m_nAccountID;
	int m_nDifficulty;
	int m_nSongIndex;
	int m_nSongID;
	int m_nRevision;
	bool m_bIsUnlisted;
	char field_141;
	char field_142;
	char field_143;
	int m_nObjectCountSeed;
	int m_nObjectCountRand;
	int m_nObjectCount;
	int m_nLevelOrder;
	int m_nRatings;
	int m_nRatingsSum;
	int m_nDownloads;
	bool m_bIsEditable;
	bool m_bIsGauntlet;
	bool m_bIsFreeGame;
	char field_163;
	int m_nEditorTimeLocal;
	int m_nEditorTimeCopies;
	bool m_bHasLDM;
	bool m_bToggleLDM;
	char field_16E;
	char field_16F;
	int m_nVerifiedSeed;
	int m_nVerifiedRand;
	bool m_bVerified;
	bool m_bPublished;
	bool m_bHasBeenAltered;
	char field_17B;
	int m_nLevelVersion;
	int m_nGameVersion;
	int m_nAttemptsSeed;
	int m_nAttemptsRand;
	int m_nAttempts;
	int m_nJumpSeed;
	int m_nJumpRand;
	int m_nJumps;
	int m_nClickSeed;
	int m_nClickRand;
	int m_nClicks;
	int m_nAttemptTimeSeed;
	int m_nAttemptTimeRand;
	int m_nAttemptTime;
	int m_nLevelSeed;
	bool m_bVfDChk;
	bool m_bAnticheat;
	char field_1BA;
	char field_1BB;
	int m_nPercentage;
	int m_nPercentageRand;
	int m_nPercentageSeed;
	int m_nManaOrbSeed;
	int m_nManaOrbRand;
	int m_nManaOrbs;
	int m_nLeaderboardSeed;
	int m_nLeaderboardRand;
	int m_nLeaderboard;
	int m_nPractice;
	int m_nLikes;
	int m_nDislikes;
	GJLevelLength m_eLength;
	int m_nFeatureScore;
	bool m_bIsEpic;
	bool m_bIsLevelFavourited;
	char field_1F6;
	char field_1F7;
	int m_nFolder;
	int m_nTimelyIDSeed;
	int m_nTimelyIDRand;
	int m_nTimelyID;
	int m_nDemonSeed;
	int m_nDemonRand;
	int m_nDemon;
	GJDemonType m_eDemonType;
	int m_nStarSeed;
	int m_nStarRand;
	int m_nStars;
	bool m_bIsAuto;
	char field_225;
	char field_226;
	char field_227;
	int m_nTotalCoins;
	int m_nVerifiedCoinsSeed;
	int m_nVerifiedCoinsRand;
	int m_nCoinsVerified;
	int m_nPasswordSeed;
	int m_nPasswordRand;
	int m_nLevelIDServerSeed;
	int m_nLevelIDServerRand;
	int m_nLevelIDServer;
	bool m_bIsTwoPlayer;
	char field_24D;
	char field_24E;
	char field_24F;
	_DWORD dword164;
	int m_nCoin1Seed;
	int m_nCoin1Rand;
	int m_nCoin1;
	int m_nCoin2Seed;
	int m_nCoin2Rand;
	int m_nCoin2;
	int m_nCoin3Seed;
	int m_nCoin3Rand;
	int m_nCoin3;
	int m_nRequestedStars;
	_DWORD dword190;
	_DWORD dword194;
	_DWORD dword198;
	_DWORD dword19C;
	_DWORD dword1A0;
	_DWORD dword1A4;
	_DWORD dword1A8;
	_DWORD dword1AC;
	_DWORD dword1B0;
	bool m_bIsChallenge;
	bool m_bIsPlayable;
	char field_2A2;
	char field_2A3;
	int m_nRequiredCoins;
	bool m_bUnlocked;
	char field_2A9;
	char field_2AA;
	char field_2AB;
	float m_fCameraX;
	float m_fCameraY;
	float m_fCameraZoom;
	int m_nBuildTabPage;
	int m_nbuildTabPage;
	int m_nEditorLayer;
	GJLevelType m_eLevelType;
	_DWORD dword1DC;
	std::string m_sTempName;
	std::string m_sCapacityString;
	bool m_bHighObjectCount;
	char field_2D5;
	char field_2D6;
	char field_2D7;
	std::string m_sLevelProgress;


	GJGameLevel();
	inline int getLevelID();
	inline int getUserID();
	inline int getDifficulty();
	inline GJSong getAudioTrack();
	inline int getSongID();
	inline int getLevelRev();
	inline int getObjectCount();
	inline int getOrder();
	inline int getRatings();
	inline int getRatingSum();
	inline int getDownloads();
	inline int getCompletes();
	inline bool getIsEditable();
	inline bool getIsVerified();
	inline bool getIsUploaded();
	inline bool getHasBeenModified();
	inline int getLevelVersion();
	inline int getGameVersion();
	inline int getAttempts();
	inline int getJumps();
	inline int getClicks();
	inline int getAttemptTime();
	inline int getNormalPercent();
	inline int getNewNormalPercent();
	inline int getNewNormalPercent2();
	inline int getPracticePercent();
	inline int getLikes();
	inline int getDislikes();
	inline GJLength getLevelLength();
	inline int getFeatured();
	inline bool getEpic();
	inline bool getDemon();
	inline int getStars();
	inline bool getAutoLevel();
	inline int getCoins();
	inline int getPassword();
	inline int getOriginalLevel();
	inline bool getTwoPlayerMode();
	inline int getFailedPasswordAttempts();
	inline bool getShowedSongWarning();
	inline int getStarRatings();
	inline int getStarRatingsSum();
	inline int getMaxStarRatings();
	inline int getMinStarRatings();
	inline int getDemonVotes();
	inline int getRateStars();
	inline int getRateFeature();
	inline bool getDontSave();
	inline bool getIsHidden();
	inline int getRequiredCoins();
	inline bool getIsUnlocked();
	inline float getLastEditorZoom();
	inline int getLastBuildTab();
	inline int getLastBuildPage();
	inline GJLevelType getLevelType();
	inline int getM_ID();
	inline int getCapacity001();
	inline int getCapacity002();
	inline int getCapacity003();
	inline int getCapacity004();
	inline std::string getTempName();
	inline std::string getRateUser();
	inline std::string getUpdateDate();
	inline std::string getUploadDate();
	inline std::string getRecordString();
	inline std::string getUserName();
	inline std::string getLevelString();
	inline std::string getLevelDesc();
	inline std::string getLevelName();
	inline cocos2d::CCPoint getLastCameraPos();
	inline GJLength getLengthKey();
	inline int getAverageDifficulty();
	inline std::string getSongName();
	inline std::string getExtraString();
	inline bool getVfDChk();
	inline int getLevelSeed();
	inline std::string getLevelProgress();
	inline int getDailyID();


	inline void setLevelID(int _LevelID);
	inline void setUserID(int _UserID);
	inline void setDifficulty(int _Difficulty);
	inline void setAudioTrack(GJSong _AudioTrack);
	inline void setSongID(int _SongID);
	inline void setLevelRev(int _LevelRev);
	inline void setObjectCount(int _ObjectCount);
	inline void setOrder(int _Order);
	inline void setRatings(int _Ratings);
	inline void setRatingSum(int _RatingSum);
	inline void setDownloads(int _Downloads);
	inline void setCompletes(int _Completes);
	inline void setIsEditable(bool _IsEditable);
	inline void setIsVerified(bool _IsVerified);
	inline void setIsUploaded(bool _IsUploaded);
	inline void setHasBeenModified(bool _HasBeenModified);
	inline void setLevelVersion(int _LevelVersion);
	inline void setGameVersion(int _GameVersion);
	inline void setAttempts(int _Attempts);
	inline void setJumps(int _Jumps);
	inline void setClicks(int _Clicks);
	inline void setAttemptTime(int _AttemptTime);
	inline void setNormalPercent(int _NormalPercent);
	inline void setNewNormalPercent(int _NewNormalPercent);
	inline void setNewNormalPercent2(int _NewNormalPercent2);
	inline void setPracticePercent(int _PracticePercent);
	inline void setLikes(int _Likes);
	inline void setDislikes(int _Dislikes);
	inline void setLevelLength(GJLength _LevelLength);
	inline void setFeatured(int _Featured);
	inline void setEpic(bool _Epic);
	inline void setDemon(bool _Demon);
	inline void setStars(int _Stars);
	inline void setAutoLevel(bool _AutoLevel);
	inline void setCoins(int _Coins);
	inline void setPassword(int _Password);
	inline void setOriginalLevel(int _OriginalLevel);
	inline void setTwoPlayerMode(bool _TwoPlayerMode);
	inline void setFailedPasswordAttempts(int _FailedPasswordAttempts);
	inline void setShowedSongWarning(bool _ShowedSongWarning);
	inline void setStarRatings(int _StarRatings);
	inline void setStarRatingsSum(int _StarRatingsSum);
	inline void setMaxStarRatings(int _MaxStarRatings);
	inline void setMinStarRatings(int _MinStarRatings);
	inline void setDemonVotes(int _DemonVotes);
	inline void setRateStars(int _RateStars);
	inline void setRateFeature(int _RateFeature);
	inline void setDontSave(bool _DontSave);
	inline void setIsHidden(bool _IsHidden);
	inline void setRequiredCoins(int _RequiredCoins);
	inline void setIsUnlocked(bool _IsUnlocked);
	inline void setLastEditorZoom(float _LastEditorZoom);
	inline void setLastBuildTab(int _LastBuildTab);
	inline void setLastBuildPage(int _LastBuildPage);
	inline void setLevelType(GJLevelType _LevelType);
	inline void setM_ID(int _M_ID);
	inline void setCapacity001(int _Capacity001);
	inline void setCapacity002(int _Capacity002);
	inline void setCapacity003(int _Capacity003);
	inline void setCapacity004(int _Capacity004);
	inline void setTempName(std::string _TempName);
	inline void setRateUser(std::string _RateUser);
	inline void setUpdateDate(std::string _UpdateDate);
	inline void setUploadDate(std::string _UploadDate);
	inline void setRecordString(std::string _RecordString);
	inline void setUserName(std::string _UserName);
	inline void setLevelString(std::string _LevelString);
	inline void setLevelDesc(std::string _LevelDesc);
	inline void setLevelName(std::string _LevelName);
	inline void setLastCameraPos(cocos2d::CCPoint _LastCameraPos);
	inline void setLengthKey(GJLength _LengthKey);
	inline void setAverageDifficulty(int _AverageDifficulty);
	inline void setSongName(std::string _SongName);
	inline void setExtraString(std::string _ExtraString);
	inline void setVfDChk(bool _vfDChk);
	inline void setLevelSeed(int _seed);
	inline void setLevelProgress(std::string _progress);
	inline void setDailyID(int _dailyID);


	void savePercentage(int _percentage, bool _practice, int _clicks, int _attemptTime, bool _vfDChk)
};