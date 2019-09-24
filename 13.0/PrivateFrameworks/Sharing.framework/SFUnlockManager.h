//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFUnlockManager : NSObject
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_stateRequestTimer;
}

+ (id)sharedUnlockManager;
- (void).cxx_destruct;
- (void)cancelStateRequestTimer;
- (id)timerWithBlock:(CDUnknownBlockType)arg1;
- (void)unlockStateForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)establishStashBagWithManifest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)establishStashBagWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unlockEnabledWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableUnlockWithDevice:(id)arg1;
- (void)enableUnlockWithDevice:(id)arg1 fromKey:(_Bool)arg2 withPasscode:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end
