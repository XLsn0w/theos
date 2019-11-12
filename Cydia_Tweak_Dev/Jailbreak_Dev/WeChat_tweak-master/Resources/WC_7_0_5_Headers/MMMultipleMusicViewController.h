//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavClickStreamHelperDelegete.h"
#import "IMusicPlayerExt.h"
#import "MMMusicPageViewDelegate.h"
#import "MMScrollActionSheetDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "MinimizationTransitionControllerDelegate.h"
#import "SendAppMsgHandleDelegate.h"
#import "ShakeCheckerDelegate.h"
#import "ShareUploadTaskConfirmLogicHelperDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CShakeChecker, MMAnimationTipView, MMMusicInfo, MMMusicPageView, MMMusicPlayerModeTipView, MMScrollActionSheet, MMScrollView, MMTipsViewController, MMWebImageView, MPVolumeView, MinimizationTransitionController, NSMutableArray, NSString, SendAppMsgHandler, UIButton, UIImageView, UILabel;

@interface MMMultipleMusicViewController : MMUIViewController <FavClickStreamHelperDelegete, MinimizationTransitionControllerDelegate, WCActionSheetDelegate, ShareUploadTaskConfirmLogicHelperDelegate, SendAppMsgHandleDelegate, UIScrollViewDelegate, MMScrollActionSheetDelegate, MMMusicPageViewDelegate, ShakeCheckerDelegate, IMusicPlayerExt, MMTipsViewControllerDelegate>
{
    MMScrollView *_musicPageScrollView;
    MMMusicPageView *_leftPageView;
    MMMusicPageView *_centerPageView;
    MMMusicPageView *_rightPageView;
    NSMutableArray *_musicInfoArray;
    MMMusicInfo *_curMusicInfo;
    int _numberOfPages;
    unsigned long long _currentPageIndex;
    SendAppMsgHandler *_sendAppMsgHandler;
    _Bool _isSingleLyricPage;
    float _offset;
    UIImageView *_bottomView;
    UIButton *_playMusicButton;
    MMAnimationTipView *_tipView;
    MMMusicPlayerModeTipView *_transModeTipView;
    int _pushedFromType;
    _Bool _isFromShaking;
    MMScrollActionSheet *_scrollActionSheet;
    CShakeChecker *_shakeChecker;
    _Bool _isOnShakeCheck;
    unsigned long long _beginShakeTime;
    unsigned long long _endShakeTime;
    unsigned long long _startEntranceTime;
    MMTipsViewController *_easterEggTipView;
    MMMusicPlayerModeTipView *_justOneSongTipView;
    MPVolumeView *m_viewAirPlay;
    UIButton *m_jumpOriginMusicView;
    MMWebImageView *m_sourceMusicIconImageView;
    UILabel *m_sourceMusicTitleLabel;
    UIImageView *m_arrowImageView;
    _Bool _bLayoutScrollView;
    _Bool _forceRestart;
    _Bool _bClickJumpButton;
    int _playMode;
    NSString *_taskBizKey;
    MinimizationTransitionController *_transitionController;
    unsigned long long _enterMusicTime;
}

- (void).cxx_destruct;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)OnShake;
- (void)OnUpdateDuarationOnForeGround;
- (void)addGestureRecognizers;
- (void)airPlayButtonTouchUpInside:(id)arg1;
@property(nonatomic) _Bool bClickJumpButton; // @synthesize bClickJumpButton=_bClickJumpButton;
- (void)beginPlayCurMusic;
- (void)cancelSetShakePage;
- (void)commonInit;
- (void)dealloc;
@property(nonatomic) unsigned long long enterMusicTime; // @synthesize enterMusicTime=_enterMusicTime;
- (id)getCoverImageData;
- (id)getEasterEggcontentTip;
- (id)getJumpToOriginMusicSheetItemWithMusicInfo:(id)arg1;
- (id)getJumpToOriginMusicSheetItemWithMusicInfo:(id)arg1 FromShowMore:(_Bool)arg2;
- (id)getMessageWrap:(id)arg1;
- (id)getPlayButton;
- (unsigned int)getSceneByPushFromType:(int)arg1;
- (id)getUpLoadTask:(id)arg1;
- (unsigned long long)indexOfCurrentPage;
- (void)initAirPlayBtn;
- (id)initFromBanner;
- (void)initJumpOriginMusicButton;
- (void)initMusicPlayBtn;
- (void)initNavigationItem;
- (void)initPageInfo;
- (void)initScrollView;
- (void)initSelfView;
- (void)initView;
- (id)initWithMusicInfo:(id)arg1 withMusicListSource:(int)arg2 withOffset:(float)arg3;
- (id)initWithMusicInfo:(id)arg1 withMusicListSource:(int)arg2 withOffset:(float)arg3 forceRestart:(_Bool)arg4;
@property(nonatomic) _Bool isFromShaking; // @synthesize isFromShaking=_isFromShaking;
- (void)layoutAirPlayBtn;
- (void)layoutMusicPageView;
- (void)layoutMusicPlayBtn;
- (void)layoutScrollView;
- (void)layoutTipView;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (id)minimizationTaskData;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)onBack2FirstPage;
- (void)onClickJumpOriginMusicButton;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onDataBuffering:(double)arg1;
- (void)onFollowArrayUpToShowSecondPage;
- (void)onLyricsChanged:(id)arg1 Lyrics:(id)arg2;
- (void)onMinimizeMusicPlayer;
- (void)onMusicPlayStatusChanged;
- (void)onPlayMusic:(id)arg1 fromScene:(int)arg2;
- (void)onPlayMusicBtnClicked;
- (void)onPlayNextMusic;
- (void)onPlayPreviousMusic;
- (void)onRouteActiveChange:(id)arg1;
- (void)onShowCommonMore:(id)arg1;
- (void)onShowSecondPage;
- (void)onStopMusicListPlay;
- (void)onSwipeScrollView;
- (void)onUpdateBottomBtnColor:(id)arg1;
@property(nonatomic) int playMode; // @synthesize playMode=_playMode;
- (void)playShakeSound;
- (void)playSoundByAQAudioPlayer:(id)arg1 type:(id)arg2;
- (void)reportState;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setMusicPageDelegate;
- (void)setPlayMusicButtonImage:(_Bool)arg1;
- (void)setPushedFromType:(int)arg1;
@property(retain, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(retain, nonatomic) MinimizationTransitionController *transitionController; // @synthesize transitionController=_transitionController;
- (_Bool)shouldShowSearchPlayAllTip;
- (void)showEasterEgg;
- (void)startShakeCheck;
- (void)tileMusicPages;
- (void)transPlayMode;
- (void)updateButtomBtnColor:(id)arg1;
- (void)updateCurMusicInfo;
- (void)updateJumpOriginMusicView;
- (void)updateLogEntranceType;
- (void)updateMusicScrollView:(_Bool)arg1;
- (void)updateMusicScrollViewByCurMusicInfo;
- (void)updateNavBarByColor:(id)arg1;
- (void)updateNavBarTintColorByColor:(id)arg1;
- (void)updatePlayBtn;
- (_Bool)useTransparentNavibar;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
