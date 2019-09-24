//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/CFPrefsSource.h>

@class CFPrefsCloudSource, CFPrefsPlistSource;

__attribute__((visibility("hidden")))
@interface CFPrefsSearchListSource : CFPrefsSource
{
    struct __CFDictionary *_keysToSources;
    struct __CFString *_identifier;
    struct __CFArray *_sourceList;
    struct __CFSet *_cloudKeys;
    struct __CFArray *_cloudPrefixKeys;
    CFPrefsPlistSource *_standardSetTarget;
    CFPrefsCloudSource *_cloudSetTarget;
    _Bool initialized;
}

+ (void)preloadDomainsForIdentifiers:(const struct __CFString **)arg1 containers:(const struct __CFString **)arg2 cloudConfigurationURLs:(const struct __CFURL **)arg3 count:(long long)arg4 containingPreferences:(id)arg5;
- (void)dealloc;
- (struct __CFString *)copyOSLogDescription;
- (id)description;
- (void)setCloudEnabled:(_Bool)arg1 forKey:(struct __CFString *)arg2;
- (void)setCloudEnabled:(_Bool)arg1 forKeyPrefix:(struct __CFString *)arg2;
- (struct __CFString *)domainIdentifier;
- (void)replaceSource:(id)arg1 withSource:(id)arg2;
- (void)removeSource:(id)arg1;
- (void)addSource:(id)arg1;
- (void)freeze;
- (struct __CFDictionary *)alreadylocked_copyManagedDictionary;
- (void *)alreadylocked_copyManagedValueForKey:(struct __CFString *)arg1;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary *)arg1 toDictionary:(struct __CFDictionary *)arg2;
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString *)arg1 fromValue:(void *)arg2 toValue:(void *)arg3;
- (struct __CFArray *)_getPendingNotifications;
- (void)alreadylocked_getDictionary:(CDUnknownBlockType)arg1;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (void)alreadylocked_reloadCacheIfStale;
- (long long)generationCount;
- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString *)arg1 isRemote:(_Bool)arg2;
- (long long)alreadylocked_generationCountFromListOfSources:(id *)arg1 count:(long long)arg2;
- (void)synchronouslySendDaemonMessage:(id)arg1 andAgentMessage:(id)arg2 andDirectMessage:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (id)createMultiMessageWithContainedMessages:(id)arg1;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (_Bool)synchronize;
- (_Bool)alreadylocked_requestNewData;
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;
- (_Bool)alreadylocked_hasNonRegisteredValueForKey:(struct __CFString *)arg1;
- (_Bool)alreadylocked_hasCloudValueForKey:(struct __CFString *)arg1;
- (_Bool)alreadylocked_useCloudForKey:(struct __CFString *)arg1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString *)arg1;
- (void)addSuiteSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (void)addCloudSourceForIdentifier:(struct __CFString *)arg1 configurationPath:(struct __CFString *)arg2 storeName:(struct __CFString *)arg3 container:(struct __CFString *)arg4;
- (void)addSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 container:(struct __CFString *)arg4;
- (void)addSimulatorBackstopSourceForIdentifier:(struct __CFString *)arg1;
- (void)addManagedSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (_Bool)isDirectModeEnabled;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;
- (void)unlock;
- (void)lock;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removePreferencesObserver:(id)arg1;
- (void)addPreferencesObserver:(id)arg1;
- (void)alreadylocked_setObservingContents:(_Bool)arg1;
- (struct __CFString *)copyCloudConfigurationWithURL:(struct __CFURL *)arg1 outConfigFileSource:(id *)arg2 outStoreName:(const struct __CFString **)arg3;
- (id)initWithIdentifier:(struct __CFString *)arg1 containingPreferences:(id)arg2;

@end
