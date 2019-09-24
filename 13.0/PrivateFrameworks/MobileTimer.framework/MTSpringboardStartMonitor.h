//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTObserverStore;
@protocol OS_dispatch_queue;

@interface MTSpringboardStartMonitor : NSObject
{
    int _notifyToken;
    _Bool _isSpringBoardStarted;
    MTObserverStore *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_checkSpringBoardStarted;
- (_Bool)isSpringboardStarted;
- (void)didReceiveSpringboardStarted:(_Bool)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
