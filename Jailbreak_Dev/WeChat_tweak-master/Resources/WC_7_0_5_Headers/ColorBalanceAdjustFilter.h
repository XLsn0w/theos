//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MultiFilterConnect.h"

@class ColorBalanceFilter;

@interface ColorBalanceAdjustFilter : MultiFilterConnect
{
    ColorBalanceFilter *balance;
    int balance_type;
}

- (void).cxx_destruct;
- (void)NewFilter;
- (id)init:(int)arg1;
- (void)setProperty:(id)arg1 value:(id)arg2;

@end
