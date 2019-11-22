//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKAppLinkResolving.h"

@class NSString;

@interface FBSDKWebViewAppLinkResolver : NSObject <FBSDKAppLinkResolving>
{
}

+ (id)sharedInstance;
- (id)appLinkFromALData:(id)arg1 destination:(id)arg2;
- (void)appLinkFromURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)followRedirects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getALDataFromLoadedPage:(id)arg1;
- (id)parseALData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
