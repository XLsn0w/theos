//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FullScreenGestureDelegate.h"
#import "IMMAssetICloudExt.h"
#import "MMAssetPickerBrowserViewProtocol.h"
#import "SightAssetPreviewViewDelegate.h"

@class AVAsset, MMAssetInfo, MMAssetPickerBrowserStateInfo, NSString, NSURL, SightAssetPreviewView, SightDraft, UIButton, UIImageView, UILabel, UIView, WXFullScreenGestureRecognizer;

@interface MMVideoPreviewBrowserView : MMUIScrollView <IMMAssetICloudExt, SightAssetPreviewViewDelegate, FullScreenGestureDelegate, MMAssetPickerBrowserViewProtocol>
{
    NSURL *m_originUrl;
    AVAsset *m_avAsset;
    NSURL *_videoOutputURL;
    SightDraft *_sightDraft;
    _Bool _isPlaying;
    _Bool _isSending;
    UIView *_maskView;
    SightAssetPreviewView *_playerView;
    UIButton *_playBigButton;
    UIImageView *m_icloudImageIcon;
    UILabel *m_icloudLabel;
    UIImageView *m_thumbImageView;
    WXFullScreenGestureRecognizer *_gestureView;
    _Bool _isNeedResumeWXMusic;
    id <MMImagePickerControlCenter> controlCenter;
    MMAssetInfo *assetInfo;
    id <MMAssetPickerBrowserViewDelegate> browserDelegate;
    MMAssetPickerBrowserStateInfo *m_stateInfo;
    id <WCDragToCloseDelegate> _touchDelegate;
}

- (void).cxx_destruct;
- (void)OnPlay:(id)arg1;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate; // @synthesize browserDelegate;
- (void)changePlayStatus:(_Bool)arg1 needNotify:(_Bool)arg2;
- (void)checkVideo;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void)dealloc;
@property(nonatomic) _Bool enableDragToClose;
- (void)initData;
- (void)initMaskView;
- (void)initPlayButton;
- (void)initPlayerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadAsset;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onBeginToChangePage;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenSingleTap;
- (void)onGetVideoAssetFinishedWithAsset:(id)arg1 url:(id)arg2;
@property(readonly, nonatomic) SightAssetPreviewView *playerView;
@property(nonatomic) __weak id <WCDragToCloseDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void)showThumbImageViewWithThumb:(id)arg1;
- (void)sightAssetPreviewView:(id)arg1 didFailWithError:(id)arg2;
- (void)sightAssetPreviewViewDidFinishPreparing:(id)arg1;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo; // @synthesize stateInfo=m_stateInfo;
- (void)systemResigned:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
