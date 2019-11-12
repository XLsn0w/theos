//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MemoryRecordInfo, NSMutableArray;

@interface WCMemoryRecordManager : NSObject
{
    NSMutableArray *m_recordList;
    MemoryRecordInfo *m_currRecord;
}

- (void).cxx_destruct;
- (void)deleteAllRecords;
- (void)deleteRecord:(id)arg1;
- (id)getRecordByLaunchTime:(unsigned long long)arg1;
- (id)init;
- (void)insertNewRecord:(id)arg1;
- (void)loadRecordList;
- (id)recordList;
- (id)recordListPath;
- (void)saveRecordList;
- (void)updateRecord:(id)arg1;

@end
