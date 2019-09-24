//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _nextNotificationToken;
    NSMutableDictionary *_observers;
}

- (void).cxx_destruct;
- (void)issueNotificationAsyncWithContext:(id)arg1;
- (void)issueNotificationAsyncWithContext:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)deregisterHandlerAsyncWithToken:(id)arg1;
- (_Bool)deregisterHandlerWithToken:(id)arg1;
- (_Bool)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(_Bool)arg2;
- (id)registerWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
