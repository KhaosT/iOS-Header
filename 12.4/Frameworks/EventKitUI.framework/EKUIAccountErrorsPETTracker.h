//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKUIAccountErrorsPETTracker : NSObject
{
}

+ (id)_refreshedWhileOfflineTracker;
+ (id)_actionableErrorInteractedTracker;
+ (id)_otherErrorDisplayedTracker;
+ (id)_offlineErrorDisplayedTracker;
+ (id)_unknownErrorDisplayedTracker;
+ (id)_actionableErrorDisplayedTracker;
+ (id)_rootUIErrorEventTracker;
+ (void)trackRefreshedWhileOffline;
+ (void)trackCalendarListInteractedWithError;
+ (void)trackCalendarListDisplayedOtherError;
+ (void)trackCalendarListDisplayedOfflineError;
+ (void)trackCalendarListDisplayedUnknownError;
+ (void)trackCalendarListDisplayedActionableError;
+ (void)trackRootUIInteractedWithError;
+ (void)trackRootUIDisplayedError;

@end
