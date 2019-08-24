//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSString;

@interface RMPCheckInProtocolCapabilitiesRequest : CEMPayloadBase
{
    NSString *_messageType;
    NSString *_UDID;
    CEMAnyPayload *_clientCapabilities;
}

+ (_Bool)supportsSecureCoding;
+ (id)request;
@property(copy, nonatomic) CEMAnyPayload *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)serialize;
- (_Bool)loadFromDictionary:(id)arg1 error:(id *)arg2;

@end
