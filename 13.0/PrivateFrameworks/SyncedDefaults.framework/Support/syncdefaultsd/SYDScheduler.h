//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL, SYDAccount, SYDBackgroundScheduler, SYDGlobalScheduling, SYDNetworkStateManager, SYDPerformBlock, SYDSchedulerPushManager, SYDSchedulingParameters, SYDServer, SYDServerRequest;
@protocol OS_os_activity, OS_os_log;

@interface SYDScheduler : NSObject
{
    _Bool _isIdle;
    _Bool _tracksAllChanges;
    _Bool _disableThrottling;
    _Bool _tracksUsage;
    _Bool _wasDisabledLastTime;
    _Bool _isAwake;
    _Bool _isSynchronizing;
    _Bool _hadASuccessfulSync;
    _Bool _needsToEndTransaction;
    _Bool _isSyncCancelled;
    SYDServerRequest *_currentServerRequest;
    NSString *_identifier;
    SYDSchedulingParameters *_parameters;
    SYDGlobalScheduling *_scheduling;
    SYDAccount *_account;
    SYDServer *_server;
    NSString *_debugName;
    NSString *_lastKnownUser;
    NSMapTable *_syncTasksByApp;
    unsigned long long _rank;
    NSObject<OS_os_activity> *_blockedOnNetworkToSyncNow;
    NSObject<OS_os_activity> *_blockedOnSyncQueueToSyncNow;
    unsigned long long _syncIdentifier;
    NSMutableSet *_cancelledApps;
    NSMutableDictionary *_syncWithTrackingRequestsByBundleIdentifier;
    NSMutableArray *_pendingSyncRequests;
    SYDPerformBlock *_willStartSynchronizingSoonBlock;
    double _nextSoonSynchronization;
    NSURL *_lastSeenPrimaryURL;
    NSURL *_redirectedURL;
    unsigned long long _redirectCount;
    double _minimalDelayedTime;
    SYDPerformBlock *_synchronizeAllAppsBlock;
    NSString *_lastModifiedHeaderForConfig;
    SYDSchedulerPushManager *_pushManager;
    SYDNetworkStateManager *_networkStateManager;
    SYDBackgroundScheduler *_backgroundScheduler;
    unsigned long long _backgroundRescheduleCount;
    double _lastPushNotification;
    double _lastSynchronization;
    double _syncIndicatorStart;
    NSObject<OS_os_log> *_journalLog;
    unsigned long long _transactionCount;
    SYDPerformBlock *_isWaitingToIdleBlock;
    NSMutableDictionary *_usagePerDisplayIdentifier;
    NSMutableDictionary *_sessionUsagePerDisplayIdentifier;
    double _lastRequestForConfig;
}

+ (Class)pushManagerClass;
+ (Class)parametersClass;
+ (Class)accountClass;
@property(nonatomic) double lastRequestForConfig; // @synthesize lastRequestForConfig=_lastRequestForConfig;
@property(retain, nonatomic) NSMutableDictionary *sessionUsagePerDisplayIdentifier; // @synthesize sessionUsagePerDisplayIdentifier=_sessionUsagePerDisplayIdentifier;
@property(retain, nonatomic) NSMutableDictionary *usagePerDisplayIdentifier; // @synthesize usagePerDisplayIdentifier=_usagePerDisplayIdentifier;
@property(retain, nonatomic) SYDPerformBlock *isWaitingToIdleBlock; // @synthesize isWaitingToIdleBlock=_isWaitingToIdleBlock;
@property(nonatomic) unsigned long long transactionCount; // @synthesize transactionCount=_transactionCount;
@property(retain, nonatomic) NSObject<OS_os_log> *journalLog; // @synthesize journalLog=_journalLog;
@property(nonatomic) double syncIndicatorStart; // @synthesize syncIndicatorStart=_syncIndicatorStart;
@property(nonatomic) double lastSynchronization; // @synthesize lastSynchronization=_lastSynchronization;
@property(nonatomic) double lastPushNotification; // @synthesize lastPushNotification=_lastPushNotification;
@property(nonatomic) unsigned long long backgroundRescheduleCount; // @synthesize backgroundRescheduleCount=_backgroundRescheduleCount;
@property(retain, nonatomic) SYDBackgroundScheduler *backgroundScheduler; // @synthesize backgroundScheduler=_backgroundScheduler;
@property(retain, nonatomic) SYDNetworkStateManager *networkStateManager; // @synthesize networkStateManager=_networkStateManager;
@property(retain, nonatomic) SYDSchedulerPushManager *pushManager; // @synthesize pushManager=_pushManager;
@property(retain, nonatomic) NSString *lastModifiedHeaderForConfig; // @synthesize lastModifiedHeaderForConfig=_lastModifiedHeaderForConfig;
@property(retain, nonatomic) SYDPerformBlock *synchronizeAllAppsBlock; // @synthesize synchronizeAllAppsBlock=_synchronizeAllAppsBlock;
@property(nonatomic) double minimalDelayedTime; // @synthesize minimalDelayedTime=_minimalDelayedTime;
@property(nonatomic) unsigned long long redirectCount; // @synthesize redirectCount=_redirectCount;
@property(retain, nonatomic) NSURL *redirectedURL; // @synthesize redirectedURL=_redirectedURL;
@property(retain, nonatomic) NSURL *lastSeenPrimaryURL; // @synthesize lastSeenPrimaryURL=_lastSeenPrimaryURL;
@property(nonatomic) double nextSoonSynchronization; // @synthesize nextSoonSynchronization=_nextSoonSynchronization;
@property(retain, nonatomic) SYDPerformBlock *willStartSynchronizingSoonBlock; // @synthesize willStartSynchronizingSoonBlock=_willStartSynchronizingSoonBlock;
@property(retain, nonatomic) NSMutableArray *pendingSyncRequests; // @synthesize pendingSyncRequests=_pendingSyncRequests;
@property(retain, nonatomic) NSMutableDictionary *syncWithTrackingRequestsByBundleIdentifier; // @synthesize syncWithTrackingRequestsByBundleIdentifier=_syncWithTrackingRequestsByBundleIdentifier;
@property(retain, nonatomic) NSMutableSet *cancelledApps; // @synthesize cancelledApps=_cancelledApps;
@property(nonatomic) _Bool isSyncCancelled; // @synthesize isSyncCancelled=_isSyncCancelled;
@property(nonatomic) unsigned long long syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
@property(nonatomic) _Bool needsToEndTransaction; // @synthesize needsToEndTransaction=_needsToEndTransaction;
@property(retain, nonatomic) NSObject<OS_os_activity> *blockedOnSyncQueueToSyncNow; // @synthesize blockedOnSyncQueueToSyncNow=_blockedOnSyncQueueToSyncNow;
@property(retain, nonatomic) NSObject<OS_os_activity> *blockedOnNetworkToSyncNow; // @synthesize blockedOnNetworkToSyncNow=_blockedOnNetworkToSyncNow;
@property(nonatomic) _Bool hadASuccessfulSync; // @synthesize hadASuccessfulSync=_hadASuccessfulSync;
@property(nonatomic) _Bool isSynchronizing; // @synthesize isSynchronizing=_isSynchronizing;
@property(nonatomic) _Bool isAwake; // @synthesize isAwake=_isAwake;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSMapTable *syncTasksByApp; // @synthesize syncTasksByApp=_syncTasksByApp;
@property(nonatomic) _Bool wasDisabledLastTime; // @synthesize wasDisabledLastTime=_wasDisabledLastTime;
@property(retain, nonatomic) NSString *lastKnownUser; // @synthesize lastKnownUser=_lastKnownUser;
@property(retain, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property(nonatomic) _Bool tracksUsage; // @synthesize tracksUsage=_tracksUsage;
@property(nonatomic) _Bool disableThrottling; // @synthesize disableThrottling=_disableThrottling;
@property(nonatomic) _Bool tracksAllChanges; // @synthesize tracksAllChanges=_tracksAllChanges;
@property(nonatomic) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(nonatomic) SYDServer *server; // @synthesize server=_server;
@property(retain, nonatomic) SYDAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) SYDGlobalScheduling *scheduling; // @synthesize scheduling=_scheduling;
@property(retain, nonatomic) SYDSchedulingParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) SYDServerRequest *currentServerRequest; // @synthesize currentServerRequest=_currentServerRequest;
- (void).cxx_destruct;
- (void)logChange:(id)arg1 forBundleIdentifier:(id)arg2 changeCount:(long long)arg3;
- (id)description;
- (void)resetUsage;
- (void)updateUsageDictionary:(id *)arg1;
- (id)usageDescription;
- (void)_stopTrackingChanges;
- (void)_startTrackingChanges;
- (id)limitsDescription;
- (id)statusDescription;
- (void)refetchConfiguration;
- (void)resetUpdates;
- (void)_resetUpdatesForceSynchronization:(_Bool)arg1;
- (void)resetIdling;
- (void)endTransaction;
- (void)beginTransaction;
- (void)_forgetIdling;
- (void)shutdownWithHandler:(CDUnknownBlockType)arg1;
- (void)_didRescheduleAsUsual;
- (void)_didRescheduleEarly;
- (double)_rescheduleMinimalDelayWithNow:(double)arg1;
- (void)_idling;
@property(readonly, nonatomic) _Bool isWaitingToIdle;
- (void)resetAllApplications;
- (void)cancelSyncForApplications:(id)arg1;
- (void)cancelSyncOnShutdown;
- (void)cancelSync;
- (void)unscheduleApplication:(id)arg1;
- (void)synchronizeApplicationsSimilarToApplication:(id)arg1;
- (void)synchronizeApplicationsWithServerSoon:(id)arg1 reason:(int)arg2;
- (void)synchronizeApplicationsWithServerSoon:(id)arg1 reason:(int)arg2 message:(id)arg3 description:(id)arg4;
- (void)synchronizeApplicationsWithServerNow:(id)arg1 reason:(int)arg2;
- (void)synchronizeApplicationsWithServerNow:(id)arg1 reason:(int)arg2 message:(id)arg3 description:(id)arg4;
- (void)synchronizeApplicationsWithServerNow:(id)arg1 reason:(int)arg2 description:(id)arg3;
- (void)setApplicationNeedsToSynchronizeSoon:(id)arg1 reason:(int)arg2;
- (void)_networkTypeDidChangeHelper;
- (void)_networkTypeDidChange;
- (void)_networkStateDidChangeHelper;
- (void)_networkStateDidChange;
- (void)_receivedPushNotification:(id)arg1;
- (void)_handlePushNotification:(id)arg1;
- (void)_receivedSimulatedPushNotificationHelper:(id)arg1;
- (void)_receivedSimulatedPushNotification:(id)arg1;
- (void)_shouldUpdateTokenOnServerHelper;
- (void)_shouldUpdateTokenOnServer;
- (void)_accountDidChangeHelper;
- (void)_accountDidChange;
- (int)_updateAccountRelatedManagers;
- (_Bool)startQueuedSynchronization;
- (_Bool)_startSynchronizationIfPossible;
- (_Bool)_startSynchronizationIfPossibleHelper;
- (void)_sendConfigRequestWithCredentials:(id)arg1;
- (void)_handleConfigRequestResponseWithCredentials:(id)arg1 HTTPResponse:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)_sendSetAPNSRequestWithCredentials:(id)arg1;
- (void)_handleAPNSRequestResponseWithCredentials:(id)arg1 publicToken:(id)arg2 HTTPResponse:(id)arg3 data:(id)arg4 error:(id)arg5;
- (void)_sendSyncRequestWithCredentials:(id)arg1;
- (void)_startSynchronizingWithTasks:(id)arg1 capacity:(unsigned long long)arg2 group:(id)arg3 allChanges:(id)arg4 syncTaskMap:(id)arg5;
- (void)_startSynchronizingWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_didUsePropertyList:(id)arg1 forOutput:(_Bool)arg2 forDisplayIdentifier:(id)arg3;
- (void)_addUsage:(unsigned long long)arg1 forKey:(id)arg2 forDisplayIdentifier:(id)arg3;
- (void)_addUsage:(unsigned long long)arg1 forKey:(id)arg2 forDisplayIdentifier:(id)arg3 usingUsageDictionary:(id)arg4;
- (unsigned long long)_usageForKey:(id)arg1 forDisplayIdentifier:(id)arg2 usingUsageDictionary:(id)arg3;
- (void)_serviceUnavailableWithDuration:(double)arg1;
- (void)_cancelPlannedSynchronization;
- (void)_startSynchronizationSoon;
- (void)_startSynchronizationSoonHelper;
- (void)_scheduleNextPollingSynchronization;
- (void)_synchronizeAllApps;
- (void)_sendSyncRequestWithCredentials:(id)arg1 activity:(id)arg2 changes:(id)arg3 syncTaskMap:(id)arg4;
- (void)_handleSyncRequestResponseWithCredentials:(id)arg1 activity:(id)arg2 syncTaskMap:(id)arg3 changes:(id)arg4 HTTPResponse:(id)arg5 data:(id)arg6 error:(id)arg7;
- (id)_newRequestWithPath:(id)arg1 body:(id)arg2;
- (void)_performRequest:(id)arg1 credentials:(id)arg2 retryCount:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_handleSyncResponseWithData:(id)arg1 syncTaskMap:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (long long)_maxConcurrentProcessingTaskCount;
- (void)_stopSynchronizingWithTasks:(id)arg1 capacity:(unsigned long long)arg2 group:(id)arg3 now:(double)arg4;
- (void)_stopSynchronizingWithTask:(id)arg1 now:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_rescheduleSyncWithTrackingRequest;
- (void)_endSyncWithTrackingRequestWithError:(id)arg1;
- (void)endSyncWithTrackingRequestForBundleIndentifier:(id)arg1 error:(id)arg2;
- (void)_beginSyncWithTrackingForApps:(id)arg1 reason:(int)arg2 message:(id)arg3 soon:(_Bool)arg4;
- (void)_addPendingSyncRequest:(id)arg1;
- (void)_schedulePendingSyncRequests;
- (_Bool)_hasPendingTrackingMessages;
- (_Bool)_useAlternateHost:(id)arg1;
- (void)_endSynchronizationWithRemainingTasks:(id)arg1 response:(id)arg2 sessionError:(id)arg3;
- (_Bool)_needsToDoSomeUpdateWithServerNow:(double)arg1;
- (_Bool)_addAppsToQueue:(id)arg1 reason:(int)arg2 now:(double)arg3;
- (_Bool)_addAppToQueue:(id)arg1 reason:(int)arg2 now:(double)arg3;
- (double)_pollingInterval;
- (long long)_maximumAppsPerRequest;
- (double)_reasonnableConfigurationUpdateInterval;
- (double)_configurationUpdateInterval;
- (void)_otherSchedulerDidUpdateConfigurationDictionaryHelper:(id)arg1;
- (void)_otherSchedulerDidUpdateConfigurationDictionary:(id)arg1;
- (id)configuration;
- (id)persistentState;
- (void)revalidateAccount;
- (void)deviceUnlockedSinceBootChange;
- (void)passwordChange;
- (void)accountChange;
- (void)awake;
- (void)_awake;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 andPersistentState:(id)arg2 globalPushManager:(id)arg3;

@end
