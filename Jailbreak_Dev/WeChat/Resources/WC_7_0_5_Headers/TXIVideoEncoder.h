//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCModule.h"

@interface TXIVideoEncoder : TXCModule
{
    id <TXIVideoEncoderDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    long long _realFPS;
    long long _encodeFrameCount;
    long long _encodeGop;
    long long _bitrate;
    long long _frameRef;
    long long _encodeFps;
    long long _rPSEncodeMode;
}

- (void).cxx_destruct;
@property __weak id <TXIVideoEncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableNearestRPS:(long long)arg1;
@property(nonatomic) long long encodeFps; // @synthesize encodeFps=_encodeFps;
@property(readonly, nonatomic) long long encodeFrameCount; // @synthesize encodeFrameCount=_encodeFrameCount;
@property(readonly, nonatomic) long long encodeGop; // @synthesize encodeGop=_encodeGop;
@property(nonatomic) long long frameRef; // @synthesize frameRef=_frameRef;
- (id)init;
@property __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (long long)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
@property(nonatomic) long long rPSEncodeMode; // @synthesize rPSEncodeMode=_rPSEncodeMode;
@property(nonatomic, getter=realBitrate) long long bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) long long realFPS; // @synthesize realFPS=_realFPS;
- (void)restartIDR;
- (void)sendNotifyEvent:(int)arg1;
- (long long)startWith:(struct TXSVideoEncoderParam *)arg1;
- (long long)stop;

@end

