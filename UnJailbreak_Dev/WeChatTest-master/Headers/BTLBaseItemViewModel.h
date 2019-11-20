//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, CMessageWrap, NSMutableArray, NSString, ReaderWrap;
@protocol BTLBaseItemViewModelDelegate;

@interface BTLBaseItemViewModel : NSObject
{
    double m_viewHeight;
    NSMutableArray *m_titleLabelStyles;
    struct CGSize m_titleSize;
    unsigned int _itemIndex;
    ReaderWrap *_readerWrap;
    CMessageWrap *_msgWrap;
    CContact *_contact;
    id <BTLBaseItemViewModelDelegate> _delegate;
}

+ (id)createModelWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4;
+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
@property(nonatomic) __weak id <BTLBaseItemViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(readonly, nonatomic) ReaderWrap *readerWrap; // @synthesize readerWrap=_readerWrap;
@property(readonly, nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasLandingPage;
@property(readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property(readonly, nonatomic) struct CGSize titleSize;
@property(readonly, nonatomic) NSString *titleStr;
@property(readonly, nonatomic) NSString *coverImgURL;
@property(readonly, nonatomic) struct CGSize viewSize;
@property(readonly, nonatomic) double viewHeight;
@property(readonly, nonatomic) double viewWidth;
- (id)createBTLBaseItemView;
- (id)itemViewClassName;
- (id)initWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4;

@end
