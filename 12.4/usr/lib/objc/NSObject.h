//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject-Protocol.h>

@class NSString;

@interface NSObject <NSObject>
{
    Class isa;
}

+ (id)mutableCopyWithZone:(struct _NSZone *)arg1;
+ (id)mutableCopy;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)copy;
+ (struct _NSZone *)zone;
+ (void)dealloc;
+ (id)init;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (unsigned long long)retainCount;
+ (id)autorelease;
+ (oneway void)release;
+ (_Bool)retainWeakReference;
+ (_Bool)allowsWeakReference;
+ (_Bool)_isDeallocating;
+ (_Bool)_tryRetain;
+ (id)retain;
+ (id)new;
+ (id)debugDescription;
+ (id)description;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)resolveClassMethod:(SEL)arg1;
+ (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;
+ (CDUnknownFunctionPointerType)instanceMethodForSelector:(SEL)arg1;
+ (_Bool)isProxy;
+ (_Bool)isFault;
+ (_Bool)isEqual:(id)arg1;
+ (unsigned long long)hash;
+ (_Bool)conformsToProtocol:(id)arg1;
+ (_Bool)respondsToSelector:(SEL)arg1;
+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (_Bool)isAncestorOfObject:(id)arg1;
+ (_Bool)isSubclassOfClass:(Class)arg1;
+ (_Bool)isKindOfClass:(Class)arg1;
+ (_Bool)isMemberOfClass:(Class)arg1;
+ (Class)superclass;
+ (Class)class;
+ (id)self;
+ (void)initialize;
+ (void)load;
- (id)mutableCopy;
- (id)copy;
- (struct _NSZone *)zone;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (id)retain;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;
- (_Bool)isProxy;
- (_Bool)isFault;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
@property(readonly) Class superclass;
- (Class)class;
- (id)self;

@end
