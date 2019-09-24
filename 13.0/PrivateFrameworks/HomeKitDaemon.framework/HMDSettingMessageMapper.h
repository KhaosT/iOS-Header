//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDSettingsMessageHandler, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSettingMessageMapper : NSObject <HMFMessageReceiver>
{
    NSUUID *_identifier;
    HMDSettingsMessageHandler *_messageHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak HMDSettingsMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)registerForMessage:(id)arg1 policies:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 messageHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
