//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallControllerHostConnectionDelegate-Protocol.h>
#import <CallKit/NSXPCListenerDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol CXCallControllerHostDelegate, OS_dispatch_queue;

@interface CXCallControllerHost : NSObject <NSXPCListenerDelegate, CXCallControllerHostConnectionDelegate>
{
    int _clientsShouldConnectToken;
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallControllerHostDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSXPCListener *_xpcListener;
    NSMutableDictionary *_callUUIDToCallMap;
    NSMutableDictionary *_callUUIDToPublicCallUUIDMap;
    NSMutableSet *_connections;
}

@property(readonly, nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSMutableDictionary *callUUIDToPublicCallUUIDMap; // @synthesize callUUIDToPublicCallUUIDMap=_callUUIDToPublicCallUUIDMap;
@property(retain, nonatomic) NSMutableDictionary *callUUIDToCallMap; // @synthesize callUUIDToCallMap=_callUUIDToCallMap;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallControllerHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)callControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)callControllerHostConnection:(id)arg1 requestCalls:(CDUnknownBlockType)arg2;
- (void)callControllerHostConnectionInvalidated:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_callsForCallControllerHostConnection:(id)arg1;
- (id)_sanitizedCallFromCall:(id)arg1 forCallControllerHostConnection:(id)arg2;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)removeCall:(id)arg1;
- (void)addOrUpdateCall:(id)arg1;
- (void)dealloc;
- (id)initWithCalls:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
