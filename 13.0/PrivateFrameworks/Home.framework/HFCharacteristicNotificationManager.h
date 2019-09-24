//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeManagerObserver-Protocol.h>
#import <Home/HFHomeObserver-Protocol.h>

@class HMHome, NSDate, NSMutableSet, NSString;

@interface HFCharacteristicNotificationManager : NSObject <HFHomeManagerObserver, HFHomeObserver>
{
    _Bool _hasRegisteredForMediaAccessoryControl;
    NSDate *_lastNotificationsEnableRequestDate;
    NSMutableSet *_notificationsEnabledReasons;
    HMHome *_notificationsEnabledHome;
}

+ (id)sharedManager;
@property(nonatomic) _Bool hasRegisteredForMediaAccessoryControl; // @synthesize hasRegisteredForMediaAccessoryControl=_hasRegisteredForMediaAccessoryControl;
@property(retain, nonatomic) HMHome *notificationsEnabledHome; // @synthesize notificationsEnabledHome=_notificationsEnabledHome;
@property(readonly, nonatomic) NSMutableSet *notificationsEnabledReasons; // @synthesize notificationsEnabledReasons=_notificationsEnabledReasons;
@property(retain, nonatomic) NSDate *lastNotificationsEnableRequestDate; // @synthesize lastNotificationsEnableRequestDate=_lastNotificationsEnableRequestDate;
- (void).cxx_destruct;
- (void)_updateNotificationsEnabled;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
@property(readonly, nonatomic) _Bool notificationsEnabled;
- (void)disableNotificationsForSelectedHomeWithReason:(id)arg1;
- (void)enableNotificationsForSelectedHomeWithReason:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
