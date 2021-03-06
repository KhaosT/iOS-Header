//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSString;

@interface VSPrivacyConsentVoucher : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_appAdamID;
    NSString *_providerID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(readonly, copy, nonatomic) NSString *appAdamID; // @synthesize appAdamID=_appAdamID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppAdamID:(id)arg1 providerID:(id)arg2;

@end

