//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTDeviceDataUsage, CoreTelephonyClient, NSDictionary;
@protocol OS_dispatch_queue;

@interface PSDataUsageStatisticsCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _refreshInProgress;
    CoreTelephonyClient *_client;
    CTDeviceDataUsage *_cachedDeviceDataUsage;
    CDUnknownBlockType _refreshCompletionHandler;
    NSDictionary *_workspaceInfoDict;
    NSDictionary *_hotspotClientsUsage;
}

+ (id)sharedInstance;
@property(retain) NSDictionary *hotspotClientsUsage; // @synthesize hotspotClientsUsage=_hotspotClientsUsage;
@property(retain) NSDictionary *workspaceInfoDict; // @synthesize workspaceInfoDict=_workspaceInfoDict;
@property(copy) CDUnknownBlockType refreshCompletionHandler; // @synthesize refreshCompletionHandler=_refreshCompletionHandler;
@property _Bool refreshInProgress; // @synthesize refreshInProgress=_refreshInProgress;
@property(retain) CTDeviceDataUsage *cachedDeviceDataUsage; // @synthesize cachedDeviceDataUsage=_cachedDeviceDataUsage;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)_handleUsageOrInfoChanged;
- (id)previousBillingCycleEndDate;
- (id)billingCycleEndDate;
- (_Bool)useCalendarMonthBillingCycle;
- (_Bool)billingCycleSupported;
- (void)fetchWorkspaceInfo;
- (unsigned long long)totalRoamingUsageForPeriod:(unsigned long long)arg1;
- (unsigned long long)totalCellularUsageForPeriod:(unsigned long long)arg1;
- (id)wifiAssistUsageForPeriod:(unsigned long long)arg1;
- (id)usageForBundleID:(id)arg1 inPeriod:(unsigned long long)arg2;
- (unsigned long long)usageForHotspotClientID:(id)arg1 inPeriod:(unsigned long long)arg2;
- (unsigned long long)totalHotspotClientUsageForPeriod:(unsigned long long)arg1;
- (id)displayNameForHotspotClientID:(id)arg1;
- (id)hotspotClientIDsForPeriod:(unsigned long long)arg1;
- (id)totalUninstalledAppUsageForPeriod:(unsigned long long)arg1;
- (id)displayNameForUninstalledAppBundleID:(id)arg1;
- (id)uninstalledAppBundleIDsForPeriod:(unsigned long long)arg1;
- (id)totalSystemServicesUsageForPeriod:(unsigned long long)arg1;
- (id)displayNameForSystemServiceBundleID:(id)arg1;
- (id)systemServiceBundleIDsForPeriod:(unsigned long long)arg1;
- (id)totalWatchOnlyAppUsageForPeriod:(unsigned long long)arg1;
- (id)displayNameForWatchOnlyAppBundleID:(id)arg1;
- (id)watchOnlyAppBundleIDsForPeriod:(unsigned long long)arg1;
- (id)totalAppUsageForPeriod:(unsigned long long)arg1;
- (id)displayNameForAppBundleID:(id)arg1;
- (id)appBundleIDs;
- (void)fetchHotspotClientsUsage;
- (void)fetchDeviceDataUsageWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDeviceDataUsage;
- (void)_clearCache;
- (void)willEnterForeground;
- (void)dealloc;
- (id)init;
- (id)initPrivate;

@end
