//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MPCommentTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, MMUIViewController, MPCommentHeaderView, MPCommentMsg, MPLandingPageCgiHandler, MPLandingPageOpenParameter, MPLandingPageReportLogic, NSMutableArray, NSMutableSet, NSString;

@interface MPCommentTableViewLogic : MMObject <UITableViewDelegate, UITableViewDataSource, MPCommentTableViewCellDelegate>
{
    _Bool _isNoMoreComment;
    _Bool _onlyFansCanComment;
    _Bool _funcEnable;
    int _commentNextOffset;
    long long _commentType;
    MPLandingPageCgiHandler *_cgiHandler;
    MPLandingPageOpenParameter *_openParam;
    NSMutableArray *_commentMsgArr;
    NSMutableArray *_cellViewModelArr;
    MPLandingPageReportLogic *_reportLogic;
    MMUIViewController *_viewController;
    MMTableView *_tableView;
    MPCommentHeaderView *_commentHeaderView;
    id <MPCommentTableViewLogicDelete> _delegate;
    MPCommentMsg *_deletingCommentMsg;
    NSMutableSet *_commentMsgIdSet;
}

- (void).cxx_destruct;
- (void)cancelDeleteSelectCommentMsg;
@property(readonly, nonatomic) NSMutableArray *cellViewModelArr; // @synthesize cellViewModelArr=_cellViewModelArr;
@property(retain, nonatomic) MPLandingPageCgiHandler *cgiHandler; // @synthesize cgiHandler=_cgiHandler;
- (void)clearAndFetchComment;
@property(retain, nonatomic) MPCommentHeaderView *commentHeaderView; // @synthesize commentHeaderView=_commentHeaderView;
@property(readonly, nonatomic) NSMutableArray *commentMsgArr; // @synthesize commentMsgArr=_commentMsgArr;
@property(retain, nonatomic) NSMutableSet *commentMsgIdSet; // @synthesize commentMsgIdSet=_commentMsgIdSet;
@property(nonatomic) int commentNextOffset; // @synthesize commentNextOffset=_commentNextOffset;
@property(nonatomic) long long commentType; // @synthesize commentType=_commentType;
- (void)dealloc;
@property(nonatomic) __weak id <MPCommentTableViewLogicDelete> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPCommentMsg *deletingCommentMsg; // @synthesize deletingCommentMsg=_deletingCommentMsg;
- (void)doDeleteSelectCommentMsg;
@property(readonly, nonatomic) _Bool funcEnable; // @synthesize funcEnable=_funcEnable;
- (void)handleGetCommentList:(id)arg1 funcEnable:(_Bool)arg2 nextOffset:(int)arg3 onlyFansCanComment:(_Bool)arg4 resetData:(_Bool)arg5;
@property(readonly, nonatomic) _Bool hasComment;
- (id)init;
@property(nonatomic) _Bool isNoMoreComment; // @synthesize isNoMoreComment=_isNoMoreComment;
- (void)localDeleteCommentMsg:(id)arg1;
- (void)onClickCommentDeleteBtn:(id)arg1;
- (void)onClickCommentLikeBtn:(id)arg1 isLikeRely:(_Bool)arg2;
@property(readonly, nonatomic) _Bool onlyFansCanComment; // @synthesize onlyFansCanComment=_onlyFansCanComment;
@property(retain, nonatomic) MPLandingPageOpenParameter *openParam; // @synthesize openParam=_openParam;
@property(retain, nonatomic) MPLandingPageReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tryFetchMoreComment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
