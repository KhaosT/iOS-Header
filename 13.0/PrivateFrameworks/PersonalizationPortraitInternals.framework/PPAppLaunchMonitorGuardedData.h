//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, _CDClientContext;

@interface PPAppLaunchMonitorGuardedData : NSObject
{
    NSMutableDictionary *handlers;
    unsigned long long nextToken;
    _Bool isRegistered;
    _CDClientContext *clientContext;
}

- (void).cxx_destruct;

@end
