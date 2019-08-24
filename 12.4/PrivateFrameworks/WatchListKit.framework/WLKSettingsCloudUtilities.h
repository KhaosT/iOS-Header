//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WLKSettingsCloudUtilities : NSObject
{
}

+ (id)_queue;
+ (id)_connection;
+ (void)_postChangeDictionaryToCloud:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_fetchSyncDictionary:(CDUnknownBlockType)arg1;
+ (id)_syncDictionaryForAppSettings:(id)arg1;
+ (id)_syncDictionaryForLocalStore;
+ (void)synchronizeSettingsFromCloudIfNeededWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)synchronizeSettingsFromCloudIfNeeded:(id *)arg1;
+ (void)updateLocalStoreWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)cloudSyncEnabled;
+ (void)resetAccountWithCompletion:(CDUnknownBlockType)arg1;
+ (void)forceUpdateWithCompletion:(CDUnknownBlockType)arg1;
+ (void)deleteAllHistoryWithCompletion:(CDUnknownBlockType)arg1;
+ (void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(_Bool)arg2 removeEntry:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateCloudStoreWithCompletion:(CDUnknownBlockType)arg1;

@end
