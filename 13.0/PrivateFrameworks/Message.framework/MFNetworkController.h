//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/CXCallObserverDelegate-Protocol.h>
#import <Message/MFDiagnosticsGenerator-Protocol.h>
#import <Message/RadiosPreferencesDelegate-Protocol.h>

@class AWDMailNetworkDiagnosticsReport, CXCallObserver, CoreTelephonyClient, EFObservable, NSLock, NSMutableArray, NSMutableSet, NSString, RadiosPreferences;
@protocol OS_dispatch_queue;

@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate, CXCallObserverDelegate>
{
    NSLock *_lock;
    struct __CFRunLoop *_rl;
    NSMutableArray *_observers;
    unsigned int _flags;
    _Bool _dns;
    unsigned long long _activeCalls;
    NSMutableSet *_backgroundWifiClients;
    struct __SCPreferences *_wiFiPreferences;
    _Bool _hasCellDataCapability;
    _Bool _hasWiFiCapability;
    _Bool _isWiFiEnabled;
    _Bool _isRoamingAllowed;
    _Bool _alternateAdviceState;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    int _symptomsToken;
    CoreTelephonyClient *_ctc;
    NSObject<OS_dispatch_queue> *_dataStatusQueue;
    _Bool _cellularDataAvailable;
    struct __SCNetworkReachability *_reachability;
    struct __SCDynamicStore *_store;
    struct __CFRunLoopSource *_store_source;
    CXCallObserver *_callObserver;
    int _dataIndicator;
}

+ (id)networkAssertionWithIdentifier:(id)arg1;
+ (id)sharedInstance;
@property(readonly) int dataIndicator; // @synthesize dataIndicator=_dataIndicator;
- (void).cxx_destruct;
@property(readonly, nonatomic) AWDMailNetworkDiagnosticsReport *awdNetworkDiagnosticReport;
- (id)copyDiagnosticInformation;
- (void)airplaneModeChanged;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)_updateActiveCalls;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (void)preferredDataSimChanged:(id)arg1;
- (void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
- (void)_carrierBundleDidChange;
- (void)removeBackgroundWifiClient:(id)arg1;
- (void)addBackgroundWifiClient:(id)arg1;
- (void)_updateWifiClientType;
@property(readonly, nonatomic) EFObservable *wifiObservable;
@property(readonly, nonatomic) EFObservable *networkObservable;
- (void)removeNetworkObserver:(id)arg1;
- (id)addNetworkObserverBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)copyCarrierBundleValue:(id)arg1;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore *)arg2;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability *)arg2;
@property(readonly) _Bool hasAlternateAdvice;
@property(readonly) long long transportType;
@property(readonly) _Bool is4GConnection;
@property(readonly) _Bool is3GConnection;
@property(readonly) _Bool inAirplaneMode;
@property(readonly) _Bool isOnWWAN;
@property(readonly) _Bool isFatPipe;
@property(readonly) _Bool isNetworkUp;
- (_Bool)_isNetworkUp_nts;
@property(readonly) _Bool isDataAvailable;
- (int)dataStatus;
- (void)_setDataStatus_nts:(id)arg1;
- (_Bool)_simulationOverrideForType:(unsigned long long)arg1 actualValue:(_Bool)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)_setupSymptons;
- (void)_initializeDataStatus;
- (void)_inititializeWifiManager;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
