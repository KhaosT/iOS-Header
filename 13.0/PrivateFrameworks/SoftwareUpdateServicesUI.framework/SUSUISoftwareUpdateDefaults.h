//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSDictionary, NSString, NSUserDefaults;

@interface SUSUISoftwareUpdateDefaults : BSAbstractDefaultDomain
{
    NSUserDefaults *_sbLegacyDefaults;
}

- (void).cxx_destruct;
- (void)_clearLegacySpringBoardPreferences;
- (void)_migrateLegacySpringBoardPreferences;
- (void)migrateAndClearLegacyPreferences;
- (void)clearDeveloperInstallBrickAlerts;
- (void)_bindAndRegisterDefaults;
- (id)_initWithLegacyDefaults:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *lastOSVersion; // @dynamic lastOSVersion;
@property(nonatomic) _Bool needsAlertPresentationAfterOTAUpdate; // @dynamic needsAlertPresentationAfterOTAUpdate;
@property(retain, nonatomic) NSDictionary *softwareUpdateState; // @dynamic softwareUpdateState;

@end
