//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@interface AppRecordMessageViewModel : CommonMessageViewModel
{
    double m_titleHeight;
    double m_descHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)additionalAccessibilityDescription;
- (id)cellViewClassName;
@property(readonly, nonatomic) double descHeight; // @synthesize descHeight=m_descHeight;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)sourceIcon;
- (id)sourceTitle;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=m_titleHeight;

@end
