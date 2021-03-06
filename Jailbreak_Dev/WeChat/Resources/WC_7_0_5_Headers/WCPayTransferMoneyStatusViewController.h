//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "WCPayAddressRemarkViewDelegate.h"
#import "WCPayGetTransferWordingCgiDelegate.h"
#import "WCPayNoticeBannerDelegate.h"

@class GetTransferWordingResponse, MMTipsViewController, NSString, WCPayGetTransferWordingCgi, WCPayNoticeBanner;

@interface WCPayTransferMoneyStatusViewController : WCPayBaseViewController <WCPayAddressRemarkViewDelegate, WCPayGetTransferWordingCgiDelegate, WCPayNoticeBannerDelegate, MMTipsViewControllerDelegate, ILinkEventExt>
{
    id <WCPayTransferMoneyStatusViewControllerDelegate> m_delegate;
    _Bool _m_expendAddress;
    _Bool _m_shouldRefreshDataOnAppear;
    WCPayGetTransferWordingCgi *_wordingCgi;
    GetTransferWordingResponse *_wordingResponse;
    WCPayNoticeBanner *_noticeBanner;
    MMTipsViewController *_resendTipsView;
}

- (void).cxx_destruct;
- (void)OnConfirmTransferMoneyBtnDone;
- (void)OnHistoryOrderDetailBack;
- (void)OnRealnameSucceed;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getMainTitleWordingInLocal:(_Bool)arg1 receiverContact:(id)arg2;
- (id)getSubTitleWordingInLocal:(_Bool)arg1;
- (id)init;
- (void)initNavigationBar;
- (_Bool)isNotSentFromMeAndWaitingForReceive;
@property _Bool m_expendAddress; // @synthesize m_expendAddress=_m_expendAddress;
@property _Bool m_shouldRefreshDataOnAppear; // @synthesize m_shouldRefreshDataOnAppear=_m_shouldRefreshDataOnAppear;
- (id)navigationBarBackgroundColor;
@property(retain, nonatomic) WCPayNoticeBanner *noticeBanner; // @synthesize noticeBanner=_noticeBanner;
- (void)onClickAddressJumpInfo;
- (void)onClickJumpInfo:(id)arg1;
- (void)onClickMiddleInfo;
- (void)onClickTextInfo;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onOpenQA;
- (void)onWCPayAddressRemarkViewCopy;
- (void)onWCPayAddressRemarkViewExpend;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)reportAction:(unsigned long long)arg1;
- (void)reportLocationAndWifi;
- (void)requestWording;
@property(retain, nonatomic) MMTipsViewController *resendTipsView; // @synthesize resendTipsView=_resendTipsView;
- (void)setDelegate:(id)arg1;
@property(retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi; // @synthesize wordingCgi=_wordingCgi;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
- (void)showResendTipsView;
- (void)updateAddressInfo:(id)arg1;
- (void)updateFooterButton:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

