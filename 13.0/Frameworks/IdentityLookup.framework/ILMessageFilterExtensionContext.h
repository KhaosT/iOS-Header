//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <IdentityLookup/ILMessageFilterExtensionVendorProtocol-Protocol.h>

@class NSString;

@interface ILMessageFilterExtensionContext : NSExtensionContext <ILMessageFilterExtensionVendorProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)extension;
- (oneway void)handleReportRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)handleQueryRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)finish;
- (void)deferReportRequestToNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (void)deferQueryRequestToNetworkWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

