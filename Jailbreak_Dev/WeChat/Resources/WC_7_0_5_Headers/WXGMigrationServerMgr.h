//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ChatMigrationCreateQRCodeDelegate.h"
#import "MMService.h"
#import "WCAccountAutoLoginControlLogicExt.h"
#import "WXGMigrationServerEntryViewControllerDelegate.h"
#import "WXGMigrationServerLogicDelegate.h"

@class ChatMigrationCreateQRCode, NSArray, NSData, NSString, WXGMigrationServerEntryViewController, WXGMigrationServerLogic;

@interface WXGMigrationServerMgr : MMService <ChatMigrationCreateQRCodeDelegate, WXGMigrationServerLogicDelegate, WXGMigrationServerEntryViewControllerDelegate, WCAccountAutoLoginControlLogicExt, MMService>
{
    WXGMigrationServerEntryViewController *m_serverEntryViewController;
    id m_kickOutLogicObj;
    SEL m_kickOutSel;
    _Bool m_isWorking;
    WXGMigrationServerLogic *m_serverLogic;
    ChatMigrationCreateQRCode *m_qrCodeHandler;
    unsigned short _server_port;
    unsigned int _cryptUin;
    NSString *_server_id;
    NSData *_server_key;
    NSString *_server_hello;
    NSString *_server_ok;
    NSString *_server_ip;
    NSString *_server_ticket;
    NSArray *_sessionArray;
    unsigned long long _totalMsgCount;
    unsigned long long _totalSessionSize;
    NSString *_pcName;
    NSString *_pcAccouttName;
    NSString *_wifiName;
    NSString *_selfWifiName;
    unsigned long long _notifyCode;
}

- (void).cxx_destruct;
- (void)autoLoginLogic:(id)arg1 needInterruptKickOut:(CDUnknownBlockType)arg2 withReplayKickOutSelector:(SEL)arg3;
- (void)clearServerAllTmpData;
- (void)confirmNoSelectTimeMigrationOrQuickMigration;
@property(nonatomic) unsigned int cryptUin; // @synthesize cryptUin=_cryptUin;
- (void)dealloc;
- (void)doLogoutAction;
- (id)getAllSessionArray;
- (void)getQRCodeImage;
- (id)init;
- (_Bool)isLogout;
- (_Bool)isServerWorking;
@property(nonatomic) unsigned long long notifyCode; // @synthesize notifyCode=_notifyCode;
- (void)onCancelEntryViewController;
- (void)onGetQRCode:(id)arg1;
- (void)onGetQRCodeOffline:(id)arg1;
- (void)onMinimizeEntryViewController;
- (void)onServerLogicAlertCode:(unsigned long long)arg1;
- (void)onServerLogicCurrentProcessingSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onServerLogicCurrentTransferSpeed:(float)arg1;
- (void)onServerLogicNotifyCode:(unsigned long long)arg1;
- (void)p_getQRCodeImageOffline;
- (void)p_getQRCodeImageOnline;
@property(retain, nonatomic) NSString *pcAccouttName; // @synthesize pcAccouttName=_pcAccouttName;
@property(retain, nonatomic) NSString *pcName; // @synthesize pcName=_pcName;
- (void)registerKickOutEvent:(id)arg1 AndSelector:(SEL)arg2;
- (void)resetGetQRCodeImage;
- (void)resetServerState;
@property(retain, nonatomic) NSString *selfWifiName; // @synthesize selfWifiName=_selfWifiName;
@property(retain, nonatomic) NSString *server_hello; // @synthesize server_hello=_server_hello;
@property(retain, nonatomic) NSString *server_id; // @synthesize server_id=_server_id;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(retain, nonatomic) NSData *server_key; // @synthesize server_key=_server_key;
@property(retain, nonatomic) NSString *server_ok; // @synthesize server_ok=_server_ok;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(retain, nonatomic) NSString *server_ticket; // @synthesize server_ticket=_server_ticket;
@property(retain, nonatomic) NSArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(nonatomic) unsigned long long totalMsgCount; // @synthesize totalMsgCount=_totalMsgCount;
@property(nonatomic) unsigned long long totalSessionSize; // @synthesize totalSessionSize=_totalSessionSize;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
- (void)showServerEntryViewController;
- (void)startServerService;
- (void)stopServerService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

