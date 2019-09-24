//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSGrant.h>

@interface RBSJetsamPriorityGrant : RBSGrant
{
    long long _priority;
}

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)grantWithBackgroundPriority;
+ (id)grantWithForegroundPriority;
+ (id)grantWithPriority:(long long)arg1;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
- (id)_initWithPriority:(long long)arg1;
- (id)succinctDescriptionBuilder;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
