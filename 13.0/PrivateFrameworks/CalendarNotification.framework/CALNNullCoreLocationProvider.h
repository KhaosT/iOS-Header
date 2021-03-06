//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNCoreLocationProvider-Protocol.h>

@class NSString;

@interface CALNNullCoreLocationProvider : NSObject <CALNCoreLocationProvider>
{
}

+ (id)sharedInstance;
- (void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(id)arg1;
- (int)authorizationStatusForBundle:(id)arg1;
- (int)authorizationStatusForBundleIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

