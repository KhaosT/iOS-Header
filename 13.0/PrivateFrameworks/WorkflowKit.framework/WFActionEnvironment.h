//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFActionEnvironment : NSObject
{
}

+ (id)currentEnvironment;
+ (id)environmentForWorkflowType:(id)arg1;
@property(readonly, nonatomic) _Bool isAppExtension;
@property(readonly, nonatomic) _Bool isWatchOS;
@property(readonly, nonatomic) _Bool isMemoryConstrained;

@end
