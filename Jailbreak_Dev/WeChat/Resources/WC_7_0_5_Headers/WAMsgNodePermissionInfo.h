//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSMutableDictionary, NSString;

@interface WAMsgNodePermissionInfo : NSObject <PBCoding>
{
    unsigned int localBannedEndTime;
    NSString *appId;
    NSData *permissionBytes;
    NSMutableDictionary *debugMode2LaunchAction;
    NSMutableDictionary *debugMode2WidgetSetting;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (id)convertDictToString:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *debugMode2LaunchAction; // @synthesize debugMode2LaunchAction;
@property(retain, nonatomic) NSMutableDictionary *debugMode2WidgetSetting; // @synthesize debugMode2WidgetSetting;
@property(readonly, copy) NSString *description;
- (id)getLaunchActionWithDebugMode:(unsigned int)arg1 widgetType:(unsigned int)arg2;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)getWidgetSettingWithDebugMode:(unsigned int)arg1 widgetType:(unsigned int)arg2;
- (_Bool)isLocalBanned;
- (id)keyWithDebugMode:(unsigned int)arg1 widgetType:(unsigned int)arg2;
@property(nonatomic) unsigned int localBannedEndTime; // @synthesize localBannedEndTime;
@property(retain, nonatomic) NSData *permissionBytes; // @synthesize permissionBytes;
- (void)setBannedUntil:(unsigned int)arg1;
- (void)setLaunchAction:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3;
- (void)setWidgetSetting:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
