//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface NavigationThermalWarningController : NSObject
{
    struct SBSThermalWarningAssertion *_thermalWarningSuppressionAssertion;
    id <BSInvalidatable> _idleTimerAssertion;
    _Bool _active;
    CDUnknownBlockType _changeHandler;
}

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void).cxx_destruct;
- (void)_clearIdleTimerIfNeeded;
- (void)_lockAndStartIdleTimer;
@property(readonly, nonatomic, getter=isDeviceMelting) _Bool deviceMelting;
- (void)checkThermalLevel;
- (void)dealloc;
- (id)init;

@end
