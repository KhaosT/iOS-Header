//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDNetworkRouterClientConfiguration, HMDNetworkRouterControlOperation, NSString;

@interface HMDNetworkRouterClientControlOperation : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterControlOperation *_operation;
    HMDNetworkRouterClientConfiguration *_configuration;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) HMDNetworkRouterClientConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HMDNetworkRouterControlOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithOperation:(id)arg1 configuration:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

