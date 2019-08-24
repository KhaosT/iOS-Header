//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "SUClientInterfaceDelegate-Protocol.h"
#import "ServiceAccountPageEmbeddedParent-Protocol.h"

@class NSString, NSURL, SUClientInterface, UIViewController;

@interface ServiceWebViewPromptViewController : SBUIRemoteAlertServiceViewController <SUClientInterfaceDelegate, ServiceAccountPageEmbeddedParent>
{
    _Bool _viewControllerShown;
    SUClientInterface *_clientInterface;
    UIViewController *_underlyingViewController;
    NSURL *_URL;
}

+ (id)_generateClientInterface;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool viewControllerShown; // @synthesize viewControllerShown=_viewControllerShown;
@property(retain, nonatomic) UIViewController *underlyingViewController; // @synthesize underlyingViewController=_underlyingViewController;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void).cxx_destruct;
- (void)_presentViewController;
- (void)_dismiss;
- (void)dismissHostViewController;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_willAppearInRemoteViewController;
- (void)viewDidLoad;
- (void)handleHomeButtonPressed;
- (void)handleButtonActions:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
