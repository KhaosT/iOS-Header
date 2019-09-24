//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "B238SetupBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AVPlayer, NSObject, NSString, NSUUID, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, _TtC18SharingViewService15MediaPlayerView;
@protocol OS_dispatch_source;

@interface B238SetupStartViewController : B238SetupBaseViewController <UIGestureRecognizerDelegate>
{
    UIButton *_infoButton;
    UIView *_infoView;
    UILabel *_infoSerialNumber;
    UILabel *_infoModel;
    UILabel *_infoWiFiAddressLabel;
    UILabel *_infoWiFiAddress;
    NSObject<OS_dispatch_source> *_infoRevealTimer;
    int _infoState;
    UIActivityIndicatorView *_activityIndicatorView;
    NSUUID *_deviceIdentifier;
    UIButton *_dismissButton;
    _Bool _dismissed;
    UIImageView *_imageView;
    _TtC18SharingViewService15MediaPlayerView *_movieView;
    AVPlayer *_moviePlayer;
    UIButton *_startButton;
    _Bool _started;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)_updatePreAuthInfo;
- (void)handleTapOutsideView:(id)arg1;
- (void)handleInfoButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleDeviceSetupNotification:(id)arg1;
- (void)handleStartButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
