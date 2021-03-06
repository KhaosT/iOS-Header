//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/SCROHandlerProtocol-Protocol.h>

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol>
{
    NSLock *_lock;
    _Bool isInvalid;
    id _callbackDelegate;
}

@property(nonatomic) __weak id callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
- (void).cxx_destruct;
- (int)handlePerformActionForKey:(int)arg1 trusted:(_Bool)arg2;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(_Bool)arg4;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(_Bool)arg2;
- (void)invalidate;
- (void)unlock;
- (void)lock;
- (id)init;

@end

