//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PurchaseActionsDatabase;

@interface PurchaseActionsManager : NSObject
{
    PurchaseActionsDatabase *_database;
    NSString *_bundleIdForCurrentInstallSheet;
}

+ (void)unregisterInstallAttributionPingbackRetryTask;
+ (void)registerInstallAttributionPingbackRetryTask;
+ (void)registerInstallAttributionDatabaseCleanTask;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_sendAppDownloadedNotificationIfNeeded:(id)arg1;
- (void)sendPendingPingbacks;
- (void)removeNonPendingInstallAttributionPingbacksBeforeDate:(id)arg1;
- (void)removeInstallAttributionPingbackForApp:(id)arg1;
- (void)getPendingInstallAttributionPingbacksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setPingbackPendingForApp:(id)arg1;
- (void)getInstallAttributionPingbackForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertInstallAttributionPingback:(id)arg1;
- (void)removeInstallAttributionParamsBeforeDate:(id)arg1;
- (void)removeInstallAttributionParamsForApp:(id)arg1;
- (void)getInstallAttributionParamsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertInstallAttributionParams:(id)arg1 overrideCampaignLimit:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAppBundleIdForCurrentInstallSheet:(id)arg1;
- (void)sendAppDownloadedNotificationsIfNeeded:(id)arg1;
- (void)resetTimestampsForApp:(id)arg1;
- (void)insertPurchaseIntent:(id)arg1;
- (void)getPurchaseIntentsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deletePurchaseIntentsForApp:(id)arg1;
- (id)init;

@end
