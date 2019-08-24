//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy
{
    NSArray *_overrides;
    CDUnknownBlockType _noSuitableModuleFoundHandler;
    unsigned long long _currentIndex;
    NSInvocation *_invocation;
}

+ (id)allOverrides;
+ (id)newIteratorWithNotFoundHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)finish;
- (void)callNextOverrides;
- (id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(CDUnknownBlockType)arg2;

@end
