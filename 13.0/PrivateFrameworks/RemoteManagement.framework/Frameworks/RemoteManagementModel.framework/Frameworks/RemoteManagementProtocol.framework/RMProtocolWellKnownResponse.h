//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMProtocolWellKnownResponse : RMModelPayloadBase
{
    NSArray *_responseServers;
}

+ (id)requestWithServers:(id)arg1;
@property(copy, nonatomic) NSArray *responseServers; // @synthesize responseServers=_responseServers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end
