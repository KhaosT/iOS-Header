//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SODaemonUIProtocol-Protocol.h"
#import "SORemoteExtensionServiceProtocol-Protocol.h"
#import "SOServiceProtocol-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListener, SOAuthorizationRequestParameters, SODaemonUIManager;

@interface SODaemon : NSObject <NSXPCListenerDelegate, SORemoteExtensionServiceProtocol, SODaemonUIProtocol, SOServiceProtocol>
{
    CDUnknownBlockType _authenticateCompletion;
    SODaemonUIManager *_daemonUIManager;
    SOAuthorizationRequestParameters *_requestParameters;
    NSXPCListener *_extensionXpcListener;
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _invalidationHandler;
}

+ (CDUnknownBlockType)_processRequestBlock;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void).cxx_destruct;
- (void)_udpateCallerBundleIdentifierFromAuditTokenInParameters:(id)arg1;
- (void)_updateUsageOfInternalExtensionsInParameters:(id)arg1;
- (void)beginAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectionInvalidated;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;
- (void)debugHintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)realmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)configurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_doAKshouldProcessURL:(id)arg1;
- (void)_doPerformAuthorizationWithRequestParameters:(id)arg1 profile:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_doGetAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithXPCConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
