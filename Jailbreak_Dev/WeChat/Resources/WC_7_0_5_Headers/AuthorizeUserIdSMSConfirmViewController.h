//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCActionSheetDelegate.h"
#import "WCBaseInfoItemDelegate.h"

@class NSString, UIButton, UILabel, UIView, UserIdAuthorizeSmsPageInfo, UserIdAuthorizeSmsPhoneItem, WCAccountTextFieldItem, WCActionSheet;

@interface AuthorizeUserIdSMSConfirmViewController : MMUIViewController <WCBaseInfoItemDelegate, WCActionSheetDelegate>
{
    NSString *_verifyToken;
    WCActionSheet *_actionSheet;
    id <AuthorizeUserIdSMSConfirmDelegate> _delegate;
    UserIdAuthorizeSmsPageInfo *_pageInfo;
    UILabel *_titleLabel;
    UILabel *_selectedPhoneLabel;
    UIButton *_changePhoneButton;
    WCAccountTextFieldItem *_confirmCodeTF;
    UIButton *_resendButton;
    UIView *_separateLine;
    UIButton *_confirmButton;
    UserIdAuthorizeSmsPhoneItem *_selectedPhoneItem;
    unsigned long long _countDown;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) UIButton *changePhoneButton; // @synthesize changePhoneButton=_changePhoneButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) WCAccountTextFieldItem *confirmCodeTF; // @synthesize confirmCodeTF=_confirmCodeTF;
@property(nonatomic) unsigned long long countDown; // @synthesize countDown=_countDown;
- (void)dealloc;
@property(nonatomic) __weak id <AuthorizeUserIdSMSConfirmDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fillPageInfo;
- (void)initSubviews;
- (id)initWithSMSPageInfo:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onChangePhoneButton:(id)arg1;
- (void)onConfirmButton:(id)arg1;
- (void)onResendButton:(id)arg1;
- (void)onReturn;
- (void)onTap:(id)arg1;
@property(retain, nonatomic) UserIdAuthorizeSmsPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
- (void)processErrCode:(unsigned int)arg1 errMsg:(id)arg2;
@property(retain, nonatomic) UIButton *resendButton; // @synthesize resendButton=_resendButton;
- (void)selectPhone:(id)arg1;
@property(retain, nonatomic) UserIdAuthorizeSmsPhoneItem *selectedPhoneItem; // @synthesize selectedPhoneItem=_selectedPhoneItem;
@property(retain, nonatomic) UILabel *selectedPhoneLabel; // @synthesize selectedPhoneLabel=_selectedPhoneLabel;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)showAlarmBoxWithTitle:(id)arg1 desc:(id)arg2;
- (void)showToast:(id)arg1 isSuccess:(_Bool)arg2;
- (void)startTimer;
- (void)updateSendVerifyCodeButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

