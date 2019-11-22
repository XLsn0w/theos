//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IDeviceRankSettingExt.h"

@class MMTableViewInfo, NSString;

@interface BraceletRankMsgSettingViewController : MMUIViewController <IDeviceRankSettingExt>
{
    MMTableViewInfo *_tableView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)initData;
- (void)initView;
- (void)makeLikeMsgCell:(id)arg1;
- (void)makeRankMsgCell:(id)arg1;
- (void)makeRecordDataCell:(id)arg1;
- (void)makeSwitchCell:(id)arg1 colName:(id)arg2 action:(SEL)arg3 on:(_Bool)arg4;
- (void)onLikeSwitchChange:(id)arg1;
- (void)onRankMsgSwitchChange:(id)arg1;
- (void)onRecordDataChange;
- (void)onTakePartInSwitchChange:(id)arg1;
- (void)onUpdateSettingFromSVR:(int)arg1;
- (void)reloadTableView;
- (void)takePartInCell:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
