//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ROCKit/NSObject-Protocol.h>

@protocol ROCKInvocationInterface;

@protocol ROCKInvocationInterposable <NSObject>
- (void)invokeWithInvocation:(id <ROCKInvocationInterface>)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
