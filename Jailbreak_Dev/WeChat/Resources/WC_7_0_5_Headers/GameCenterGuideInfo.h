//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface GameCenterGuideInfo : MMObject <PBCoding>
{
    NSString *title;
    NSArray *guideList;
    NSString *moreTitle;
    NSString *moreURL;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSArray *guideList; // @synthesize guideList;
@property(retain, nonatomic) NSString *moreTitle; // @synthesize moreTitle;
@property(retain, nonatomic) NSString *moreURL; // @synthesize moreURL;
- (void)parseFromResp:(id)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

