//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MttMemoryCommon.h"

@class NSString;

@interface MttMemoryStrValue : MttMemoryCommon
{
    int _pos;
    int _size;
    NSString *_value;
}

+ (id)instanceWithPropertyInfo:(id)arg1;
- (void).cxx_destruct;
- (id)JSONObject;
@property(nonatomic) int pos; // @synthesize pos=_pos;
@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;

@end
