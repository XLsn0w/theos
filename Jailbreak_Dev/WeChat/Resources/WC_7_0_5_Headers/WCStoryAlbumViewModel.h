//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "WCFacadeExt.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCStoryAlbumViewModel : NSObject <WCFacadeExt, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _noMoreData;
    NSString *_userName;
    NSMutableArray *_timeTable;
    NSMutableDictionary *_timelineMediaData;
    NSMutableArray *_photoMutipleImageArray;
    NSMutableDictionary *_isSectionANewYearCache;
    CDUnknownBlockType _didSelectedItemBlock;
    CDUnknownBlockType _dataDidChangeBlock;
    CDUnknownBlockType _fetchMoreDataResultBlock;
    CDUnknownBlockType _configFooterViewBlock;
    CDUnknownBlockType _getViewSizeBlock;
    CDUnknownBlockType _scrollViewDidScrollBlock;
}

+ (id)viewModelWithUserName:(id)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType configFooterViewBlock; // @synthesize configFooterViewBlock=_configFooterViewBlock;
@property(copy, nonatomic) CDUnknownBlockType dataDidChangeBlock; // @synthesize dataDidChangeBlock=_dataDidChangeBlock;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType didSelectedItemBlock; // @synthesize didSelectedItemBlock=_didSelectedItemBlock;
- (void)fetchData;
- (void)fetchMoreData;
@property(copy, nonatomic) CDUnknownBlockType fetchMoreDataResultBlock; // @synthesize fetchMoreDataResultBlock=_fetchMoreDataResultBlock;
@property(copy, nonatomic) CDUnknownBlockType getViewSizeBlock; // @synthesize getViewSizeBlock=_getViewSizeBlock;
- (void)handleData:(id)arg1;
@property(nonatomic, getter=hasNoMoreData) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
- (id)initWithUserName:(id)arg1;
- (_Bool)isANewYearSection:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *isSectionANewYearCache; // @synthesize isSectionANewYearCache=_isSectionANewYearCache;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onHomepageUpdate:(int)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
@property(retain, nonatomic) NSMutableArray *photoMutipleImageArray; // @synthesize photoMutipleImageArray=_photoMutipleImageArray;
- (void)registerExtension;
- (void)scrollViewDidScroll:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScrollBlock; // @synthesize scrollViewDidScrollBlock=_scrollViewDidScrollBlock;
@property(retain, nonatomic) NSMutableArray *timeTable; // @synthesize timeTable=_timeTable;
@property(retain, nonatomic) NSMutableDictionary *timelineMediaData; // @synthesize timelineMediaData=_timelineMediaData;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

