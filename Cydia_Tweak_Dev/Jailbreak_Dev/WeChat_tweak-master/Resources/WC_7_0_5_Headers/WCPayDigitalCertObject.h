//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayDigitalCertObject : NSObject
{
    int _m_isCurDevice;
    NSString *_m_deviceName;
    NSString *_m_deviceOs;
    NSString *_m_crtNo;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_crtNo; // @synthesize m_crtNo=_m_crtNo;
@property(retain, nonatomic) NSString *m_deviceName; // @synthesize m_deviceName=_m_deviceName;
@property(retain, nonatomic) NSString *m_deviceOs; // @synthesize m_deviceOs=_m_deviceOs;
@property(nonatomic) int m_isCurDevice; // @synthesize m_isCurDevice=_m_isCurDevice;

@end
