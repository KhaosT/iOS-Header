//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellular/CoreTelephonyClientDelegate-Protocol.h>
#import <SettingsCellular/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CTXPCServiceSubscriptionInfo, CoreTelephonyClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_coreTelephonyClient;
    CTXPCServiceSubscriptionInfo *_subscriptionInfo;
    NSMutableDictionary *_simStatusDict;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *simStatusDict; // @synthesize simStatusDict=_simStatusDict;
@property(copy) CTXPCServiceSubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDualSimCapable;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)simStatus:(id)arg1;
- (void)fetchSimStatus;
- (void)subscriptionInfoDidChange;
- (id)subscriptionsInUse;
- (id)subscriptionContexts;
- (void)fetchSubscriptionContexts;
- (void)willEnterForeground;
- (id)init;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
