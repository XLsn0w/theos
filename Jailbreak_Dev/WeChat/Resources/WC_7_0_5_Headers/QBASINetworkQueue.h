//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

#import "NSCopying.h"
#import "QBASIHTTPRequestDelegate.h"
#import "QBASIProgressDelegate.h"

@class NSDictionary, NSString;

@interface QBASINetworkQueue : NSOperationQueue <QBASIProgressDelegate, QBASIHTTPRequestDelegate, NSCopying>
{
    id delegate;
    SEL requestDidStartSelector;
    SEL requestDidReceiveResponseHeadersSelector;
    SEL requestWillRedirectSelector;
    SEL requestDidFinishSelector;
    SEL requestDidFailSelector;
    SEL queueDidFinishSelector;
    id uploadProgressDelegate;
    unsigned long long bytesUploadedSoFar;
    unsigned long long totalBytesToUpload;
    id downloadProgressDelegate;
    unsigned long long bytesDownloadedSoFar;
    unsigned long long totalBytesToDownload;
    _Bool shouldCancelAllRequestsOnFailure;
    int requestsCount;
    _Bool showAccurateProgress;
    NSDictionary *userInfo;
}

+ (id)queue;
- (void)addHEADOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)authenticationNeededForRequest:(id)arg1;
@property unsigned long long bytesDownloadedSoFar; // @synthesize bytesDownloadedSoFar;
@property unsigned long long bytesUploadedSoFar; // @synthesize bytesUploadedSoFar;
- (void)cancelAllOperations;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property id delegate; // @synthesize delegate;
@property(nonatomic, setter=setDownloadProgressDelegate:) id downloadProgressDelegate; // @synthesize downloadProgressDelegate;
- (void)go;
- (id)init;
- (void)proxyAuthenticationNeededForRequest:(id)arg1;
@property SEL queueDidFinishSelector; // @synthesize queueDidFinishSelector;
- (void)request:(id)arg1 didReceiveBytes:(long long)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)request:(id)arg1 didSendBytes:(long long)arg2;
- (void)request:(id)arg1 incrementDownloadSizeBy:(long long)arg2;
- (void)request:(id)arg1 incrementUploadSizeBy:(long long)arg2;
- (void)request:(id)arg1 willRedirectToURL:(id)arg2;
@property SEL requestDidFailSelector; // @synthesize requestDidFailSelector;
@property SEL requestDidFinishSelector; // @synthesize requestDidFinishSelector;
@property SEL requestDidReceiveResponseHeadersSelector; // @synthesize requestDidReceiveResponseHeadersSelector;
@property SEL requestDidStartSelector; // @synthesize requestDidStartSelector;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)requestStarted:(id)arg1;
@property SEL requestWillRedirectSelector; // @synthesize requestWillRedirectSelector;
@property int requestsCount; // @synthesize requestsCount;
- (void)reset;
- (void)resetProgressDelegate:(id *)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property _Bool shouldCancelAllRequestsOnFailure; // @synthesize shouldCancelAllRequestsOnFailure;
@property _Bool showAccurateProgress; // @synthesize showAccurateProgress;
- (void)setSuspended:(_Bool)arg1;
@property unsigned long long totalBytesToDownload; // @synthesize totalBytesToDownload;
@property unsigned long long totalBytesToUpload; // @synthesize totalBytesToUpload;
@property(nonatomic, setter=setUploadProgressDelegate:) id uploadProgressDelegate; // @synthesize uploadProgressDelegate;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

