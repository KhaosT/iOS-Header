//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOMotionContextDelegate-Protocol.h>
#import <Navigation/MNGuidanceManagerDelegate-Protocol.h>
#import <Navigation/MNLocationManagerHeadingObserver-Protocol.h>
#import <Navigation/MNLocationManagerObserver-Protocol.h>
#import <Navigation/MNLocationTrackerDelegate-Protocol.h>
#import <Navigation/MNNavigationAudioSessionDelegate-Protocol.h>
#import <Navigation/MNSessionUpdateManagerDelegate-Protocol.h>
#import <Navigation/MNTimeAndDistanceUpdaterDelegate-Protocol.h>
#import <Navigation/MNTracePlayerObserver-Protocol.h>
#import <Navigation/MNVoiceControllerObserver-Protocol.h>

@class GEOApplicationAuditToken, GEOComposedWaypoint, GEOMotionContext, GEONavigationGuidanceState, GEOResourceManifestUpdateAssertion, MNClassicGuidanceManager, MNGuidanceEventManager, MNGuidanceSignInfo, MNLocation, MNLocationTracker, MNNavigationSessionLogger, MNNavigationTraceManager, MNObserverHashTable, MNRouteManager, MNTimeAndDistanceUpdater, MNTraceNavigationEventRecorder, MNTrafficIncidentAlert, NSString, NSUUID;
@protocol MNAudioSession, MNGuidanceManager;

@interface MNNavigationSession : NSObject <GEOMotionContextDelegate, MNGuidanceManagerDelegate, MNLocationManagerHeadingObserver, MNLocationManagerObserver, MNLocationTrackerDelegate, MNNavigationAudioSessionDelegate, MNTimeAndDistanceUpdaterDelegate, MNTracePlayerObserver, MNVoiceControllerObserver, MNSessionUpdateManagerDelegate>
{
    int _navigationType;
    MNRouteManager *_routeManager;
    GEOComposedWaypoint *_destination;
    MNLocationTracker *_locationTracker;
    GEOMotionContext *_motionContext;
    id <MNAudioSession> _audioSession;
    id <MNGuidanceManager> _guidanceManager;
    MNClassicGuidanceManager *_classicGuidanceManager;
    MNGuidanceEventManager *_guidanceEventManager;
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;
    NSString *_voiceLanguage;
    MNNavigationSessionLogger *_logger;
    MNNavigationTraceManager *_traceManager;
    MNTraceNavigationEventRecorder *_navigationEventRecorder;
    MNTrafficIncidentAlert *_activeTrafficIncidentAlert;
    _Bool _guidancePromptsEnabled;
    _Bool _isConnectedToCarplay;
    _Bool _isSpeakingTrafficIncidentAlert;
    GEONavigationGuidanceState *_guidanceState;
    MNObserverHashTable *_observers;
    NSString *_tileLoaderClient;
    GEOApplicationAuditToken *_auditToken;
    GEOResourceManifestUpdateAssertion *_manifestUpdateAssertion;
    MNGuidanceSignInfo *_lastSignInfo;
    NSUUID *_lastLaneID;
    NSUUID *_lastJunctionViewID;
    _Bool _isAllowedToSwitchTransportTypes;
}

@property(nonatomic) _Bool isConnectedToCarplay; // @synthesize isConnectedToCarplay=_isConnectedToCarplay;
@property(nonatomic) _Bool guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property(readonly, nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) _Bool isAllowedToSwitchTransportTypes; // @synthesize isAllowedToSwitchTransportTypes=_isAllowedToSwitchTransportTypes;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(readonly, nonatomic) GEOMotionContext *motionContext; // @synthesize motionContext=_motionContext;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) id <MNAudioSession> audioSession; // @synthesize audioSession=_audioSession;
- (void).cxx_destruct;
- (id)userLocationForUpdateManager:(id)arg1;
- (id)routeInfoForUpdateManager:(id)arg1;
- (_Bool)wantsETAUpdates;
- (void)updateManager:(id)arg1 didReceiveETAError:(id)arg2;
- (void)updateManager:(id)arg1 didUpdateETAForRouteInfo:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3;
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;
- (void)voiceController:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)voiceController:(id)arg1 didActivateAudioSession:(_Bool)arg2;
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tracePlayerDidStayOnRoute:(id)arg1;
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4;
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayerDidResume:(id)arg1;
- (void)tracePlayerDidPause:(id)arg1;
- (void)tracePlayerDidStop:(id)arg1;
- (void)tracePlayerDidStart:(id)arg1;
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5;
- (void)timeAndDistanceUpdater:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)timeAndDistanceUpdater:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)guidanceManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)guidanceManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)guidanceManager:(id)arg1 didArriveWithAnnouncement:(id)arg2;
- (void)guidanceManager:(id)arg1 triggerHaptics:(int)arg2;
- (void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 ignorePromptStyle:(_Bool)arg4 stage:(unsigned long long)arg5 hasSecondaryManeuver:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManager:(id)arg1 usePersistentDisplay:(_Bool)arg2;
- (void)guidanceManager:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)guidanceManager:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)guidanceManager:(id)arg1 showJunctionView:(id)arg2;
- (void)guidanceManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)guidanceManager:(id)arg1 showLaneDirections:(id)arg2;
- (void)guidanceManagerEndGuidanceUpdate:(id)arg1;
- (void)guidanceManagerBeginGuidanceUpdate:(id)arg1;
- (void)guidanceManagerHideSecondaryStep:(id)arg1;
- (void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)guidanceManagerDidUpdateProgress:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)guidanceManager:(id)arg1 didStartWithAnnouncement:(id)arg2;
- (void)audioSessionDidFinishAnnouncingArrival:(id)arg1;
- (void)audioSessionWillAnnounceArrival:(id)arg1;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;
- (void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
- (void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;
- (void)locationTracker:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
- (void)locationTrackerDidCancelReroute:(id)arg1;
- (void)locationTrackerWillReroute:(id)arg1;
- (void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
- (void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)locationTrackerDidTimeoutInArrivalRegion:(id)arg1;
- (void)locationTrackerDidArrive:(id)arg1;
- (void)locationTrackerDidEnterPreArrivalState:(id)arg1;
- (void)locationTracker:(id)arg1 didChangeState:(int)arg2;
- (void)motionContextDidUpdateMotion:(id)arg1;
- (void)_stopTravelTimeUpdates;
- (void)_startTravelTimeUpdates;
- (void)_stopGuidance;
- (void)_startGuidanceAllowMidRouteStart:(_Bool)arg1;
- (void)_stopAudioSession;
- (void)_startAudioSession;
- (void)_stopETAUpdates;
- (void)_startETAUpdates;
- (void)_stopMotionUpdates;
- (void)_startMotionUpdates;
- (void)_stopLocationUpdates;
- (void)_startLocationUpdates;
- (void)_stopLocationTracking;
- (void)_startLocationTracking;
- (id)_locationTrackerForTransportType:(int)arg1 navigationType:(int)arg2;
- (void)_closeTileLoader;
- (void)_openTileLoader;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;
- (void)traceJumpedInTime;
- (_Bool)isCurrentlySpeaking;
- (double)timeUntilNextAnnouncement;
- (double)timeSinceLastAnnouncement;
- (void)stopCurrentGuidancePrompt;
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;
- (_Bool)repeatCurrentTrafficAlert;
- (_Bool)repeatCurrentGuidance;
- (void)addInjectedEvent:(id)arg1;
- (void)switchToRoute:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopNavigationSession;
- (void)startNavigationSessionWithDetails:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) double distanceToManeuverEnd;
@property(readonly, nonatomic) double distanceToManeuverStart;
@property(readonly, nonatomic) double remainingDistance;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) int navigationState;
@property(readonly, nonatomic) MNLocation *lastMatchedLocation;
- (void)dealloc;
- (id)initWithRouteManager:(id)arg1 auditToken:(id)arg2 traceManager:(id)arg3;
- (id)init;
@property(readonly, nonatomic) _Bool traceIsPlaying;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
