//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADSerialWorkQueue : NSObject
{
}

+ (id)primaryQueue;
+ (void)addDelayedOperation:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addOperation:(CDUnknownBlockType)arg1;
+ (void)initialize;

@end
