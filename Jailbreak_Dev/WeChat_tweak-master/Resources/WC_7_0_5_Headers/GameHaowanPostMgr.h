//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "GameHaowanUploadTaskDelegate.h"
#import "MMService.h"

@class GameHaowanPostInfo, GameHaowanUploadTask, NSString;

@interface GameHaowanPostMgr : MMService <MMService, GameHaowanUploadTaskDelegate>
{
    GameHaowanPostInfo *_postInfo;
    GameHaowanUploadTask *_uploadTask;
}

- (void).cxx_destruct;
- (id)buildTrackEventProps;
- (_Bool)cancelAllPost;
- (_Bool)cancelPost:(id)arg1;
- (void)clearPostInfo;
- (id)createUploadTask:(id)arg1;
- (id)generatePostId;
- (id)getAllPost;
- (id)getPost:(id)arg1;
- (void)handlePostCanceled:(id)arg1;
- (void)handlePostFailed:(id)arg1 code:(long long)arg2;
- (void)handlePostProgress:(float)arg1;
- (void)handlePostSucceed;
- (void)loadPostInfo;
- (void)onServiceInit;
- (void)onServiceReloadData;
@property(retain, nonatomic) GameHaowanPostInfo *postInfo; // @synthesize postInfo=_postInfo;
- (id)publishHaowanPost:(id)arg1;
- (id)readPostInfo;
- (id)reportObjWithAction:(int)arg1;
- (void)savePostInfo;
- (void)sendHaowanPostRequest:(id)arg1;
@property(retain, nonatomic) GameHaowanUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
- (int)ssidForTrackEvent;
- (void)startMediaPost:(id)arg1 onSucceed:(CDUnknownBlockType)arg2;
- (void)startTextPost:(id)arg1 onSucceed:(CDUnknownBlockType)arg2;
- (void)startUpload;
- (void)trackEventAddNewPost;
- (void)trackEventPostFailed:(long long)arg1;
- (void)trackEventPostSucceed:(unsigned int)arg1;
- (void)tryResumePublish;
- (void)uploadTask:(id)arg1 didContinueDataUpdate:(id)arg2;
- (void)uploadTask:(id)arg1 didFailedWithError:(id)arg2;
- (void)uploadTask:(id)arg1 didProgressChanged:(float)arg2;
- (void)uploadTask:(id)arg1 didSucceedWithResIds:(id)arg2;
- (void)writePostInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
