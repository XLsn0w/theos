//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FavoritesCommonUtil : NSObject
{
}

+ (_Bool)SelectCanvasFavItem:(id)arg1 FromViewController:(id)arg2 thumbView:(id)arg3 showNavigationBar:(_Bool)arg4;
+ (_Bool)SelectCanvasFavItem:(id)arg1 FromViewController:(id)arg2 thumbView:(id)arg3;
+ (void)selectFileData:(id)arg1 FromViewController:(id)arg2;
+ (void)selectLocationData:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (void)selectVideoData:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (void)SelectFavDataItemWrap:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (id)genNodeContentView:(id)arg1;
+ (_Bool)SelectFavItem:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5;
+ (_Bool)SelectFavItem:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (id)getCellViewForCapacityItem:(id)arg1;
+ (id)getCellViewForSearchItemData:(id)arg1 inItem:(id)arg2;
+ (id)getCellViewForItemData:(id)arg1 inItem:(id)arg2;
+ (id)getCellViewForSearchItem:(id)arg1;
+ (id)getCellViewForItem:(id)arg1;
+ (id)getFavCellComponentForCapacityItem:(id)arg1;
+ (id)getFavCellComponentForSearchItem:(id)arg1;
+ (id)getFavCellComponentForItem:(id)arg1;
+ (double)getHeightForItem:(id)arg1;
+ (void)sortArrFavData:(id)arg1;

@end

