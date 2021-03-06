//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface BBSystemStateProvider : NSObject
{
    NSXPCConnection *_connection;
    unsigned long long _currentState;
}

+ (id)serverInterface;
+ (id)clientInterface;
- (void).cxx_destruct;
- (void)noteChangeOfState:(unsigned long long)arg1 newValue:(_Bool)arg2;
- (void)_sendState:(unsigned long long)arg1 value:(_Bool)arg2;
- (void)noteOccurrenceOfEvent:(unsigned long long)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

