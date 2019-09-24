//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/NSSecureCoding-Protocol.h>

@class NSData, NSError;

@interface IDSLocalPairingIdentityDataErrorPair : NSObject <NSSecureCoding>
{
    NSData *_identityData;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *identityData; // @synthesize identityData=_identityData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithIdentityData:(id)arg1;
- (id)initWithIdentityData:(id)arg1 error:(id)arg2;

@end
