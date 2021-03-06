//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDispatchOnce : NSObject
{
    CDUnknownBlockType _booleanHandler;
    struct atomic_flag _didFire;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _objectHandler;
    ICDispatchOnce *_strongSelf;
    double _timeout;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

- (void).cxx_destruct;
- (void)_invalidate;
- (void)startWithTimeout:(double)arg1 queue:(id)arg2;
- (void)startWithTimeout:(double)arg1;
- (void)finishWithObjectResult:(id)arg1 error:(id)arg2;
- (void)finishWithBooleanResult:(_Bool)arg1 error:(id)arg2;
- (void)failWithError:(id)arg1;
- (id)initWithObjectHandler:(CDUnknownBlockType)arg1;
- (id)initWithBooleanHandler:(CDUnknownBlockType)arg1;

@end

