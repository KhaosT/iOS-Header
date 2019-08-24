//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding>
{
    _Bool _postFailsafeObliteration;
    long long _chipID;
    NSString *_productType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool postFailsafeObliteration; // @synthesize postFailsafeObliteration=_postFailsafeObliteration;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic) long long chipID; // @synthesize chipID=_chipID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
