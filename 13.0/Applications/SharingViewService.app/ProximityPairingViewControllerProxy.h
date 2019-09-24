//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ProximityCommonViewControllerProxy.h"

@class AudioSoftwareUpdateViewController, ProximityPairingViewController, UIStoryboard;

@interface ProximityPairingViewControllerProxy : ProximityCommonViewControllerProxy
{
    _Bool _dismissed;
    _Bool _homePressed;
    ProximityPairingViewController *_pairingViewController;
    _Bool _reportedResult;
    AudioSoftwareUpdateViewController *_vcSoftwareUpdate;
    double _viewAppearedTime;
    UIStoryboard *_shareAudioProxStoryboard;
    _Bool _guestMode;
    _Bool _siriNotificationOnly;
    _Bool _userAccepted;
    int _pairErrorCode;
    int _testMode;
    double _pairStartTime;
    double _userResponseTime;
}

+ (_Bool)_isSecureForRemoteViewService;
@property(nonatomic) double userResponseTime; // @synthesize userResponseTime=_userResponseTime;
@property(nonatomic) _Bool userAccepted; // @synthesize userAccepted=_userAccepted;
@property(nonatomic) int testMode; // @synthesize testMode=_testMode;
@property(nonatomic) _Bool siriNotificationOnly; // @synthesize siriNotificationOnly=_siriNotificationOnly;
@property(nonatomic) double pairStartTime; // @synthesize pairStartTime=_pairStartTime;
@property(nonatomic) int pairErrorCode; // @synthesize pairErrorCode=_pairErrorCode;
@property(nonatomic) _Bool guestMode; // @synthesize guestMode=_guestMode;
- (void).cxx_destruct;
- (void)siriNotificationsSetupStart;
- (_Bool)siriNotificationsSetupNeeded;
- (void)showLearnMore;
- (void)continueSetup;
- (void)skipSetup;
- (void)dismissSetup;
- (void)_trainingStart;
- (_Bool)trainingNeeded;
- (void)_testHandler:(id)arg1;
- (void)showStatus:(id)arg1;
- (void)showShareDone;
- (void)showRepairInstructions;
- (void)showRepairConnect:(id)arg1;
- (void)showConnectUI:(_Bool)arg1;
- (void)reportResult;
- (void)_handleHomeButtonPressed;
- (void)handleButtonActions:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_willAppearInRemoteViewController;
- (_Bool)_canShowWhileLocked;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
