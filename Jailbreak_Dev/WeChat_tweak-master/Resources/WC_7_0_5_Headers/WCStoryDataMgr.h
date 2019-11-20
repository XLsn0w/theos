//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDataProviderDelegate.h"
#import "WCStoryWCDBDelegate.h"

@class NSString, WCStoryWCDB;

@interface WCStoryDataMgr : MMObject <WCStoryWCDBDelegate, WCDataProviderDelegate>
{
    WCStoryWCDB *_dataBase;
}

- (void).cxx_destruct;
- (void)addChatRoomSyncStoryWithChatName:(id)arg1 NextSyncTime:(unsigned int)arg2 Buffer:(id)arg3;
- (_Bool)addPostedStoryAndDeleteLocalWithDataItem:(id)arg1;
- (_Bool)addRelatedCommentWithComment:(id)arg1 dataItemOwner:(id)arg2;
- (void)addStoryCommentWith:(id)arg1;
- (_Bool)addStoryUnReadCommentWithStoryComment:(id)arg1;
- (void)addStorysFromSyncDataItems:(id)arg1;
- (_Bool)checkStoryDataItemHasUnreadCommentWithTid:(id)arg1;
- (void)cleanAllReadStatus;
- (_Bool)cleanAllUserRelatedcomment;
- (id)clearUnreadStoryWithUsername:(id)arg1;
@property(retain, nonatomic) WCStoryWCDB *dataBase; // @synthesize dataBase=_dataBase;
- (void)dealloc;
- (_Bool)deleteDataItemAllUserRelatedCommentWithTid:(id)arg1;
- (void)deleteLocalStoryWithTid:(id)arg1;
- (_Bool)deleteRelatedCommentWithComment:(id)arg1;
- (void)deleteStoryAllDataWithUserName:(id)arg1;
- (void)deleteStoryAndMakeUnReadTogetherWithTid:(id)arg1 UserName:(id)arg2;
- (void)deleteStoryComment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)deleteStoryCommentFromDB:(id)arg1;
- (void)deleteStoryDataItem:(id)arg1 retHandler:(CDUnknownBlockType)arg2;
- (_Bool)deleteStoryUnReadCommentsWithTid:(id)arg1;
- (_Bool)deleteStoryUnReadCommentsWithWithTid:(id)arg1 CommentId:(id)arg2;
- (unsigned int)earliestUnreadStoryPostTime;
- (void)fetchHistoryStoryWithTimeZone:(int)arg1 MaxId:(unsigned long long)arg2 DataHandler:(CDUnknownBlockType)arg3;
- (void)fetchInteractiveHeatWithDataItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)fetchNewestStoryWithUserName:(id)arg1 MaxId:(unsigned long long)arg2 ChatRoomName:(id)arg3 DataHandler:(CDUnknownBlockType)arg4;
- (void)fetchStoryDataItemDetailFromServerWithTid:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)fetchStoryDateDetailWithDateString:(id)arg1 timeZone:(int)arg2 DataHandler:(CDUnknownBlockType)arg3;
- (id)getAllStoryUnReadUserRelatedCommentObj;
- (id)getAllStoryUnReadUserRelatedCommentObjWithUsername:(id)arg1;
- (id)getAllTimelineShowUnreadStory;
- (id)getAllUnreadStory;
- (id)getAllUploadingDataItems;
- (double)getChatRoomNextSyncTimeStamp:(id)arg1;
- (id)getChatRoomSycStorysWithUserName:(id)arg1;
- (id)getChatRoomSyncData:(id)arg1;
- (double)getLastReadUserStoryTimeStamp:(id)arg1;
- (id)getLastReadUserStorysWithUserNames:(id)arg1;
- (id)getNewestStoryDataItemWithUserName:(id)arg1;
- (long long)getNumberOfUserPostInOneDay;
- (id)getPageDataItemsObjWithDate:(id)arg1 Zone:(int)arg2;
- (id)getPlayRecordWithDataItem:(id)arg1;
- (id)getPlayRecordWithUserName:(id)arg1;
- (id)getReadCommentIdOfDataItemTid:(id)arg1;
- (id)getStoryDataItemWithId:(id)arg1;
- (id)getStoryItemsWithUserName:(id)arg1 AfterTime:(unsigned int)arg2;
- (id)getStoryItemsWithUserName:(id)arg1 MaxTid:(id)arg2;
- (id)getStoryItemsWithUserName:(id)arg1 MaxTid:(id)arg2 Limit:(unsigned int)arg3;
- (id)getStoryUnReadCommentsWithTid:(id)arg1;
- (id)getUnreadStoryInUsernameArray:(id)arg1;
- (id)getZonePageObjListWithFirstTid:(id)arg1 Zone:(int)arg2 Limit:(unsigned int)arg3;
- (unsigned long long)halfTimeStampStoryUnreadTid;
- (_Bool)hasUnReadStoryComments;
- (_Bool)hasUnReadStoryWithUserName:(id)arg1;
- (_Bool)hasUserUnreadRelatedComment;
- (void)makeAllStoryUserRelatedCommentRead;
- (id)makeStoryFailWithTid:(id)arg1 ErrorType:(long long)arg2;
- (id)makeStoryPlayedWithDataItem:(id)arg1 Scene:(unsigned long long)arg2;
- (void)makeStoryReadWithUserName:(id)arg1 Tid:(id)arg2;
- (_Bool)makeStoryUserRelatedCommentReadWithTid:(id)arg1;
- (_Bool)makeUsernameDataItemAllRelatedCommentRead:(id)arg1;
- (void)mergeRelatedUnReadCommentWithDataItems:(id)arg1;
- (void)mergeSelfUnReadCommentWithDataItems:(id)arg1;
- (void)mergeUnReadCommentWithDataItems:(id)arg1 username:(id)arg2;
- (_Bool)mmcontactHasUnReadStory;
- (void)onCleanStoryUnReads:(id)arg1;
- (void)onDataItemsHasUpdate:(id)arg1;
- (void)removeChatRoomStorySync:(id)arg1;
- (_Bool)resetAllRelated;
- (void)reversePrivateWithDataItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (_Bool)shouldChatRoomSyncStory:(id)arg1;
- (void)updateHistoryStoryPageObj:(id)arg1 Zone:(int)arg2 MaxTid:(unsigned long long)arg3 RetCode:(int)arg4;
- (void)updateOneDayStorysWithDataItems:(id)arg1 Date:(id)arg2 Zone:(int)arg3;
- (void)updateStoryCommentsWith:(id)arg1;
- (void)updateStoryDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
