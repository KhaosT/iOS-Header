//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/PSListControllerTestableSpecifiers-Protocol.h>
#import <PreferencesUI/PSMagnifyControllerDelegate-Protocol.h>

@class CBClient, NSArray, NSDateFormatter, NSDictionary, NSMutableDictionary, NSString;

@interface PSUIDisplayController : PSListController <PSMagnifyControllerDelegate, PSListControllerTestableSpecifiers>
{
    NSArray *_autoLockValues;
    NSDictionary *_autoLockTitleDictionary;
    NSMutableDictionary *_localizedAutoLockTitleDictionary;
    CBClient *_brightnessClient;
    NSDateFormatter *_timeFormatter;
}

+ (id)booleanCapabilitiesToTest;
- (void).cxx_destruct;
- (void)handlePSUIExternalDisplayManagerCurrentModeDidChangeNotification:(id)arg1;
- (void)removeExternalDisplaySpecifiers;
- (void)insertExternalDisplaySpecifiers;
- (id)connectedDisplaySpecifiers;
- (void)showAlertToDisableAccessibilityFilters:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;
- (void)setAutoWhiteBalanceEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)getAutoWhiteBalanceEnabled:(id)arg1;
- (id)localizedTimeForTime:(CDStruct_1ef3fb1f)arg1;
- (id)blueLightSchedule:(id)arg1;
- (void)handleBlueLightStatusChanged:(CDStruct_a90444bf *)arg1;
- (void)reloadBlueLightSpecifiers;
- (void)brightnessChangedExternally;
- (void)handleBrightnessChangedNotification:(id)arg1;
- (void)setBacklightValue:(id)arg1 specifier:(id)arg2;
- (id)backlightValue:(id)arg1;
- (void)_cleanupTransactionRef;
- (id)boldTextEnabledForSpecifier:(id)arg1;
- (void)setBoldTextEnabled:(id)arg1 specifier:(id)arg2;
- (void)magnifyController:(id)arg1 didFinishWithDisplayMode:(id)arg2;
- (void)presentModalMagnifyController;
- (id)localizedMagnifyModeName;
- (void)setLocksAndUnlocksWithCase:(id)arg1 specifier:(id)arg2;
- (id)locksAndUnlocksWithCase:(id)arg1;
- (void)profileNotification:(id)arg1;
- (void)_localizeAutoLockTitles;
- (void)updateAutoLockSpecifier;
- (void)setScreenLock:(id)arg1 specifier:(id)arg2;
- (id)screenLock:(id)arg1;
- (_Bool)shouldShowCaseLockOption;
- (_Bool)shouldShowAutoLock;
- (id)lockGroupFooter;
- (id)controllerForSpecifier:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
