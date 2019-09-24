//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPCSKeySyncManager : NSObject
{
    NSMutableDictionary *_keySyncTrackerByServiceName;
    NSObject<OS_dispatch_queue> *_keySyncQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *keySyncQueue; // @synthesize keySyncQueue=_keySyncQueue;
@property(retain, nonatomic) NSMutableDictionary *keySyncTrackerByServiceName; // @synthesize keySyncTrackerByServiceName=_keySyncTrackerByServiceName;
- (void).cxx_destruct;
- (void)syncUserKeysForService:(id)arg1 serviceIsManatee:(_Bool)arg2 account:(id)arg3 shouldThrottle:(_Bool)arg4 testOverrideProvider:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)performKeySyncWithSyncTracker:(id)arg1 testableSyncConfig:(unsigned long long)arg2 shouldThrottle:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)syncTrackerForService:(id)arg1 manatee:(_Bool)arg2 shortThrottlePeriod:(_Bool)arg3;
- (id)createSyncTrackerForService:(id)arg1 manatee:(_Bool)arg2;
- (id)init;

@end
