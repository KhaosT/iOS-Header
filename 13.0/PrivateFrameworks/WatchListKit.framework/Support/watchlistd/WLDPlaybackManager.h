//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, WLDPlaybackDirectPlayObserver, WLDPlaybackNowPlayingObserver, WLDRateLimiter, WLDXPCTransactionScope, WLKCache;

__attribute__((visibility("hidden")))
@interface WLDPlaybackManager : NSObject
{
    NSMutableDictionary *_reporterDictionary;
    WLDPlaybackNowPlayingObserver *_nowPlayingObserver;
    WLDPlaybackDirectPlayObserver *_directPlayObserver;
    NSOperationQueue *_queue;
    WLDXPCTransactionScope *_pendingReportsTransaction;
    _Bool _isPrompting;
    WLDRateLimiter *_rateLimiter;
    WLKCache *_recentSummaries;
    NSMutableSet *_directPlayClientList;
    NSMutableDictionary *_lastSummaryDictionary;
}

+ (id)sharedManager;
@property(retain) NSMutableDictionary *lastSummaryDictionary; // @synthesize lastSummaryDictionary=_lastSummaryDictionary;
- (void).cxx_destruct;
- (id)reportedSummaryForID:(id)arg1;
- (void)_catalogSummary:(id)arg1;
- (id)_queuePathForSummary:(id)arg1;
- (id)_queueDir;
- (void)_cleanupSummary:(id)arg1;
- (_Bool)_serialize:(id)arg1;
- (void)_networkReachabilityChanged:(id)arg1;
- (void)_scanForPendingReports;
- (void)_enqueuePendingReports;
- (void)_handleDirectPlaybackAppTermination:(id)arg1;
- (_Bool)_promptForBundleID:(id)arg1;
- (_Bool)_shouldPromptForBundleID:(id)arg1 outAccessStatus:(unsigned long long *)arg2;
- (_Bool)_validateBundleID:(id)arg1;
- (_Bool)_validateEnvironment;
- (id)_getReporterBySessionID:(id)arg1;
- (void)_enqueuePlaybackSummary:(id)arg1 sessionID:(id)arg2 serialize:(_Bool)arg3 retry:(_Bool)arg4;
- (void)_endSession:(id)arg1;
- (void)_removeReporterBySessionID:(id)arg1;
- (id)_getSessionReporterBySessionID:(id)arg1;
- (void)_setLastSummaryBySessionID:(id)arg1 sessionID:(id)arg2;
- (void)_setSessionReporter:(id)arg1 sessionID:(id)arg2;
- (void)_removeLastSummaryBySessionID:(id)arg1;
- (id)_getLastSummaryBySessionID:(id)arg1;
- (id)reporter;
- (id)queue;
- (void)handleSubscriptionRegistration;
- (void)fetchDecoratedNowPlayingSummaries:(CDUnknownBlockType)arg1;
- (void)fetchNowPlayingSummary:(CDUnknownBlockType)arg1;
- (void)handlePlaybackSummary:(id)arg1 sessionID:(id)arg2;
- (void)endDirectPlaybackSession:(id)arg1;
- (void)handleDirectPlaybackSummary:(id)arg1 sessionID:(id)arg2;
- (id)nowPlayingObserver;
- (void)dealloc;
- (id)init;

@end
