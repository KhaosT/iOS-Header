//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFTimerDelegate-Protocol.h>

@class HMFActivity, HMFTimer, HMFUnfairLock, NSDate, NSError, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate>
{
    _Bool _executing;
    _Bool _finished;
    NSError *_error;
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFActivity *_activity;
    NSUUID *_identifier;
    HMFTimer *_timer;
}

+ (id)logCategory;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (id)logIdentifier;
@property(retain) HMFActivity *activity; // @synthesize activity=_activity;
- (void)finish;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)start;
- (void)setQualityOfService:(long long)arg1;
@property(readonly, copy) NSDate *timeoutDate;
@property(readonly, copy) NSError *error;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
@property(readonly) NSObject<OS_dispatch_queue> *underlyingQueue;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithTimeout:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
