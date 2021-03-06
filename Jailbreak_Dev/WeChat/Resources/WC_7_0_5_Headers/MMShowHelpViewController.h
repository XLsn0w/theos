//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"

@class MMTableViewInfo, NSString, UILabel;

@interface MMShowHelpViewController : MMUIViewController <UIAlertViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_userName;
    UILabel *m_labelProduct;
    _Bool m_bFullVersion;
    _Bool m_clearLocalInfo;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearInitMark;
- (id)getHeaderView;
- (id)init;
- (void)onBack;
- (void)onShowClearInitMark;
- (void)reloadTableData;
- (void)showMemStat;
- (void)showRecoverView;
- (void)showUploadFileView;
- (void)showUploadLogView;
- (void)showUploadStackView;
- (void)updateProduct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

