//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "SightViewDelegate.h"
#import "VoiceComponentExt.h"
#import "WCCanvasDynamicDataLoaderDelegate.h"
#import "WCCanvasImageLoaderObserver.h"
#import "WCSightLoaderObserver.h"

@class NSString, SightView, UIButton, UIView, WCCanvasDynamicDataLoader;

@interface WCCanvasSightComponent : WCCanvasComponent <SightViewDelegate, WCCanvasImageLoaderObserver, WCSightLoaderObserver, VoiceComponentExt, WCCanvasDynamicDataLoaderDelegate>
{
    _Bool _sightReady;
    _Bool _sightPlaying;
    _Bool _bSlientPlay;
    SightView *_sightView;
    UIButton *_button;
    UIButton *_voiceIconButton;
    NSString *_currentSightUrl;
    UIButton *_jumpStreamVideoBtn;
    UIView *_bottomLineView;
    WCCanvasDynamicDataLoader *_dataLoader;
    struct CGSize _sightSize;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)SightDidFailForUrl:(id)arg1;
- (void)SightDidLoad:(id)arg1 Url:(id)arg2;
- (void)SightDidReceiveProgress:(double)arg1 Url:(id)arg2;
- (void)SightWillBeginLoadForUrl:(id)arg1;
@property(nonatomic) _Bool bSlientPlay; // @synthesize bSlientPlay=_bSlientPlay;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)cancelFloatComponentTrigger;
- (void)checkAndStartFloatTimer;
- (void)clear;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillStopState:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) NSString *currentSightUrl; // @synthesize currentSightUrl=_currentSightUrl;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void)dealloc;
- (unsigned long long)getSightViewScene;
- (_Bool)hasFloatComponentInfo;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIButton *jumpStreamVideoBtn; // @synthesize jumpStreamVideoBtn=_jumpStreamVideoBtn;
- (void)layoutSubviews;
- (void)onCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)onClickIconViewOfSightView:(id)arg1;
- (void)onClickSight:(id)arg1;
- (void)onClickStreamVideoBtn:(id)arg1;
- (void)onNotifyToShowFloatComponent;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)onVoiceIconBtnClick:(id)arg1;
- (void)resetSightViewAudioState:(_Bool)arg1;
@property(nonatomic) _Bool sightPlaying; // @synthesize sightPlaying=_sightPlaying;
@property(nonatomic) _Bool sightReady; // @synthesize sightReady=_sightReady;
@property(nonatomic) struct CGSize sightSize; // @synthesize sightSize=_sightSize;
@property(retain, nonatomic) SightView *sightView; // @synthesize sightView=_sightView;
@property(retain, nonatomic) UIButton *voiceIconButton; // @synthesize voiceIconButton=_voiceIconButton;
- (void)setup;
- (_Bool)shouldVideoLayerRasterize;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)startWaitForTriggerTime;
- (_Bool)tryToLoadSight;
- (_Bool)tryToLoadThumbImage;
- (void)tryToPauseWithShowThumb:(_Bool)arg1;
- (void)tryToPlaySight;
- (void)trytoPauseSight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
