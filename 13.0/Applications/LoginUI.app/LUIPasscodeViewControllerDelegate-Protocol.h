//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBUIPasscodeLockView;

@protocol LUIPasscodeViewControllerDelegate <NSObject>

@optional
- (void)passcodeLockViewEmergencyCallButtonPressed:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewPasscodeEntered:(id <SBUIPasscodeLockView>)arg1;
@end
