//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLEXArgumentInputView.h"

@class NSArray;

@interface FLEXArgumentInputStructView : FLEXArgumentInputView
{
    NSArray *_argumentInputViews;
}

+ (id)customFieldTitlesForTypeEncoding:(const char *)arg1;
+ (_Bool)supportsObjCType:(const char *)arg1 withCurrentValue:(id)arg2;
+ (double)verticalPaddingBetweenFields;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *argumentInputViews; // @synthesize argumentInputViews=_argumentInputViews;
- (id)initWithArgumentTypeEncoding:(const char *)arg1;
- (id)inputValue;
- (_Bool)inputViewIsFirstResponder;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setInputValue:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

