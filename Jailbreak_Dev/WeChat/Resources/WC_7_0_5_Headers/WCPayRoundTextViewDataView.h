//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WCPayVoidCallbackDelegate.h"

@class KindaRichLabelViewV2, NSString, RoundTextViewData;

@interface WCPayRoundTextViewDataView : UIView <WCPayVoidCallbackDelegate>
{
    KindaRichLabelViewV2 *_m_text;
    RoundTextViewData *_m_viewData;
    double _m_maxWidth;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
@property double m_maxWidth; // @synthesize m_maxWidth=_m_maxWidth;
@property(retain) KindaRichLabelViewV2 *m_text; // @synthesize m_text=_m_text;
@property(retain) RoundTextViewData *m_viewData; // @synthesize m_viewData=_m_viewData;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)updateText;
- (void)updateView;
- (void)updateViewData:(id)arg1 maxWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

