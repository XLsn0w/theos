//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WCPayFavorComposeInfo : NSObject
{
    NSString *m_nFavorComposeid;
    unsigned long long m_uiTotalFavorAmount;
    unsigned long long m_uiAfterFavorTradeAmount;
    NSArray *m_arrFavItemList;
    unsigned long long m_uiShowFavorAmount;
    unsigned long long m_uiInvariableFavorAmount;
    _Bool m_bIsVariableFavor;
    NSString *m_nsInvariableFavorDesc;
    NSString *m_nsVariableFavorDesc;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSArray *m_arrFavItemList; // @synthesize m_arrFavItemList;
@property(nonatomic) _Bool m_bIsVariableFavor; // @synthesize m_bIsVariableFavor;
@property(retain, nonatomic) NSString *m_nFavorComposeid; // @synthesize m_nFavorComposeid;
@property(retain, nonatomic) NSString *m_nsInvariableFavorDesc; // @synthesize m_nsInvariableFavorDesc;
@property(retain, nonatomic) NSString *m_nsVariableFavorDesc; // @synthesize m_nsVariableFavorDesc;
@property(nonatomic) unsigned long long m_uiAfterFavorTradeAmount; // @synthesize m_uiAfterFavorTradeAmount;
@property(nonatomic) unsigned long long m_uiInvariableFavorAmount; // @synthesize m_uiInvariableFavorAmount;
@property(nonatomic) unsigned long long m_uiShowFavorAmount; // @synthesize m_uiShowFavorAmount;
@property(nonatomic) unsigned long long m_uiTotalFavorAmount; // @synthesize m_uiTotalFavorAmount;

@end
