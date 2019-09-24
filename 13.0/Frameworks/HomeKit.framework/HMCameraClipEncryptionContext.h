//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMCameraClipEncryptionContext : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_key;
    unsigned long long _scheme;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long scheme; // @synthesize scheme=_scheme;
@property(readonly, copy) NSData *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithKey:(id)arg1 scheme:(unsigned long long)arg2;

@end
