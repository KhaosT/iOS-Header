//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class CTXPCServiceSubscriptionContext, NSOrderedSet;

@interface TPSListController : PSListController
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    NSOrderedSet *_subscriptions;
}

@property(copy, nonatomic) NSOrderedSet *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
- (void).cxx_destruct;
- (void)setSpecifier:(id)arg1;

@end
