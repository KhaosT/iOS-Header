//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MNNavigationServiceObserver-Protocol.h"

@class CLInUseAssertion, CPDistributedMessagingCenter, GuidanceETA, IPCLoadDirectionsMessage, IPCMapsLockScreenStateReply, LockScreenDimmingBehavior, MKJunction, MKServerFormattedString, MNGuidanceSignInfo, MNTrafficIncidentAlert, MapsSuggestionsEntry, NSArray, NSData, NSString, NSTimer, NSUUID, NavSignShieldInfo, UIView;
@protocol BackgroundNavigationDelegate, ExternalGuidanceSource, LockScreenLayerSource;

__attribute__((visibility("hidden")))
@interface IPCServer : NSObject <MNNavigationServiceObserver>
{
    CPDistributedMessagingCenter *_center;
    unsigned long long _lastSeenManeuverAlert;
    struct CGRect _previousViewFrame;
    UIView *_previousSuperview;
    _Bool _isDelaying;
    _Bool _suppressNavBannerCarPlayTarget;
    _Bool _siriSheetIsShowing;
    _Bool _multitaskingTrayIsShowing;
    _Bool _hasAnnouncedViewAvailability;
    _Bool _waitingForDistanceAndTimeToManeuver;
    MNTrafficIncidentAlert *_trafficIncidentAlert;
    _Bool _wasInitiatedByActiveWatch;
    _Bool _knowsLockScreenBundleEnabledState;
    _Bool _lockScreenBundleEnabled;
    _Bool _pendingSafetyWarning;
    _Bool _carplaySceneOccluded;
    int _drivingSide;
    CLInUseAssertion *_coreLocationInUseAssertion;
    NSTimer *_trafficAlertTimer;
    NSTimer *_lowFuelAlertTimer;
    NSTimer *_waitingToRespondToMessageTimer;
    IPCMapsLockScreenStateReply *_lastSentLockScreenState;
    _Bool _newManeuverUpdate;
    _Bool _etaOnlyNavMode;
    int _maneuver;
    int _transportType;
    NSString *_proceedingToRouteDisplayString;
    double _distanceToManeuver;
    double _timeToManeuver;
    GuidanceETA *_latestETA;
    double _distanceToRoute;
    MNGuidanceSignInfo *_signInfo;
    NSString *_currentGroupIdentifier;
    LockScreenDimmingBehavior *_dimmingBehavior;
    unsigned long long _lastSentRemainingMinutes;
    double _lastSentRemainingDistance;
    NSString *_lastSentETADateString;
    unsigned long long _state;
    id <LockScreenLayerSource> _lockScreenLayerSource;
    id <ExternalGuidanceSource> _externalGuidanceSource;
    id <BackgroundNavigationDelegate> _backgroundNavigationDelegate;
    MKJunction *_junction;
    MKServerFormattedString *_distanceText;
    NSArray *_maneuverInstructions;
    NSArray *_secondaryManeuverInstructions;
    NSUUID *__maneuverID;
    NavSignShieldInfo *_shieldInfo;
    MapsSuggestionsEntry *_lowFuelSuggestion;
    NSUUID *_laneGuidanceID;
    id _prepareNavigationDelayedReplyContext;
    id _startNavigationDelayedReplyContext;
    IPCLoadDirectionsMessage *_lastPrepareNavigationMessage;
    NSData *__stepViewStateData;
}

+ (id)sharedServer;
@property(retain, nonatomic) NSData *_stepViewStateData; // @synthesize _stepViewStateData=__stepViewStateData;
@property(retain, nonatomic) IPCLoadDirectionsMessage *lastPrepareNavigationMessage; // @synthesize lastPrepareNavigationMessage=_lastPrepareNavigationMessage;
@property(retain, nonatomic) id startNavigationDelayedReplyContext; // @synthesize startNavigationDelayedReplyContext=_startNavigationDelayedReplyContext;
@property(retain, nonatomic) id prepareNavigationDelayedReplyContext; // @synthesize prepareNavigationDelayedReplyContext=_prepareNavigationDelayedReplyContext;
@property(copy, nonatomic) NSUUID *laneGuidanceID; // @synthesize laneGuidanceID=_laneGuidanceID;
@property(retain, nonatomic) MapsSuggestionsEntry *lowFuelSuggestion; // @synthesize lowFuelSuggestion=_lowFuelSuggestion;
@property(retain, nonatomic) NavSignShieldInfo *shieldInfo; // @synthesize shieldInfo=_shieldInfo;
@property(copy, nonatomic) NSUUID *_maneuverID; // @synthesize _maneuverID=__maneuverID;
@property(copy, nonatomic) NSArray *secondaryManeuverInstructions; // @synthesize secondaryManeuverInstructions=_secondaryManeuverInstructions;
@property(copy, nonatomic) NSArray *maneuverInstructions; // @synthesize maneuverInstructions=_maneuverInstructions;
@property(retain, nonatomic) MKServerFormattedString *distanceText; // @synthesize distanceText=_distanceText;
@property(retain, nonatomic) MKJunction *junction; // @synthesize junction=_junction;
@property(nonatomic) _Bool etaOnlyNavMode; // @synthesize etaOnlyNavMode=_etaOnlyNavMode;
@property(nonatomic) __weak id <BackgroundNavigationDelegate> backgroundNavigationDelegate; // @synthesize backgroundNavigationDelegate=_backgroundNavigationDelegate;
@property(nonatomic) __weak id <ExternalGuidanceSource> externalGuidanceSource; // @synthesize externalGuidanceSource=_externalGuidanceSource;
@property(nonatomic) __weak id <LockScreenLayerSource> lockScreenLayerSource; // @synthesize lockScreenLayerSource=_lockScreenLayerSource;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool _newManeuverUpdate; // @synthesize _newManeuverUpdate;
@property(copy, nonatomic) NSString *_lastSentETADateString; // @synthesize _lastSentETADateString;
@property(nonatomic) double _lastSentRemainingDistance; // @synthesize _lastSentRemainingDistance;
@property(nonatomic) unsigned long long _lastSentRemainingMinutes; // @synthesize _lastSentRemainingMinutes;
@property(nonatomic) int _transportType; // @synthesize _transportType;
@property(retain, nonatomic) LockScreenDimmingBehavior *_dimmingBehavior; // @synthesize _dimmingBehavior;
@property(copy, nonatomic) NSString *_currentGroupIdentifier; // @synthesize _currentGroupIdentifier;
@property(retain, nonatomic) MNGuidanceSignInfo *_signInfo; // @synthesize _signInfo;
@property(nonatomic) double _distanceToRoute; // @synthesize _distanceToRoute;
@property(retain, nonatomic) GuidanceETA *_latestETA; // @synthesize _latestETA;
@property(nonatomic) double _timeToManeuver; // @synthesize _timeToManeuver;
@property(nonatomic) double _distanceToManeuver; // @synthesize _distanceToManeuver;
@property(nonatomic) int _maneuver; // @synthesize _maneuver;
@property(nonatomic) int _drivingSide; // @synthesize _drivingSide;
@property(retain, nonatomic) NSString *_proceedingToRouteDisplayString; // @synthesize _proceedingToRouteDisplayString;
- (void).cxx_destruct;
- (void)navigationService:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationService:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationService:(id)arg1 usePersistentDisplay:(_Bool)arg2;
- (void)navigationService:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationServiceEndGuidanceUpdate:(id)arg1;
- (void)navigationServiceBeginGuidanceUpdate:(id)arg1;
- (void)navigationService:(id)arg1 didChangeGuidanceState:(id)arg2;
- (void)navigationService:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationService:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationService:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationServiceDidCancelReroute:(id)arg1;
- (void)navigationServiceWillResumeFromPause:(id)arg1;
- (void)navigationServiceWillPause:(id)arg1;
- (void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationService:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationService:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)navigationService:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationServiceDidArrive:(id)arg1;
- (void)navigationService:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationService:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationService:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationService:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationService:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)_vibrateForRerouteWithService:(id)arg1;
- (id)_startPreparedBackgroundNavigation:(id)arg1 messageDictionary:(id)arg2;
- (void)navigationStateDidChangeTo:(unsigned long long)arg1 reason:(id)arg2 error:(id)arg3;
- (void)navigationStateDidChangeTo:(unsigned long long)arg1 reason:(id)arg2;
- (id)_prepareBackgroundNavigation:(id)arg1 messageDictionary:(id)arg2;
- (void)setNeedsToDisplaySafetyWarning;
- (void)_timedOutWaitingToSendResponse;
- (void)_startWaitingToSendResponse;
- (void)_dismissNavSafetyAlert;
- (id)_endNavigation;
- (id)_repeatCurrentTrafficAlert;
- (id)_repeatCurrentGuidance;
- (void)_toggleNavigationGuidance:(id)arg1 messageDictionary:(id)arg2;
- (void)_setNavigationVolume:(id)arg1 messageDictionary:(id)arg2;
- (id)_relayTrafficRerouteResponse:(id)arg1 messageDictionary:(id)arg2;
- (id)_ipcMessageForShieldInfo:(id)arg1;
- (id)_currentGuidanceStateMessageWithGuidanceCausedVibration:(_Bool)arg1;
- (_Bool)_timeDistanceOrETAToDestinationDidChange;
- (_Bool)_guidanceAffectsDimming;
- (_Bool)isNavigationBannerHiddenBySiri;
- (id)_sendCurrentGuidance:(id)arg1 messageDictionary:(id)arg2;
- (void)_noteGuidanceStateChangedWithVibration:(_Bool)arg1;
- (void)_noteGuidanceStateChanged;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 forStep:(id)arg3;
- (void)setETA:(id)arg1;
- (void)setDestinationDisplayName:(id)arg1;
- (void)_vibrateForReroute:(id)arg1;
- (void)showRecalculating;
- (void)_showNoGuidance;
- (void)dismissTrafficIncidentAlert:(id)arg1;
- (void)_removeTrafficIncidentAlertFromTimer:(id)arg1;
- (void)_invalidatedTrafficIncidentAlert:(id)arg1;
- (void)_updatedTrafficIncidentAlert:(id)arg1;
- (void)_receivedTrafficIncidentAlert:(id)arg1;
- (void)directionsSessionDidFailToReceiveRoute:(id)arg1 error:(id)arg2;
- (void)directionsSessionDidCancelRoute:(id)arg1;
- (id)_lowFuelImageForEngineType:(int)arg1 isCarPlay:(_Bool)arg2;
- (void)_removeLowFuelAlertFromTimer:(id)arg1;
- (void)presentBannerForSuggestion:(id)arg1;
- (void)_carplaySceneOcclusionChanged:(id)arg1;
- (void)sendMapsLockScreenStateUpdateIfNeeded:(id)arg1;
- (_Bool)_isInBackground;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)_changeCurrentGroupIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
