//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMMediaSystem.h>

#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFMediaProfileContainer-Protocol.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFServiceNameComponents, HMAccessory, HMAccessorySettings, HMHome, HMMediaSession, HMRoom, HMSymptomsHandler, NSDate, NSSet, NSString, NSUUID;
@protocol HFHomeKitObject, HFMediaValueSource, HMMediaObjectDelegate;

@interface HMMediaSystem (HFAdditions) <HFHomeKitObject, HFMediaProfileContainer>
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms; // @dynamic hf_fakeDebugSymptoms;
- (_Bool)hf_fake8021xNetworkSymptom;
@property(readonly, nonatomic) _Bool hf_fakeStereoPairVersionMismatchSymptom;
@property(readonly, nonatomic) _Bool hf_fakeStereoPairGeneralSymptom;
@property(readonly, nonatomic) _Bool hf_fakeStereoPairNotFoundSymptom;
- (id)hf_roleForAccessory:(id)arg1;
- (id)hf_accessoryForRole:(id)arg1;
- (_Bool)hf_isValidObject;
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (id)hf_idsDeviceIdentifierWithError:(id *)arg1;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;
- (id)hf_fetchLogListWithTimeout:(double)arg1;
@property(readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
- (id)hf_appleMusicCurrentLoggedInAccount;
- (id)hf_appleMusicCurrentLoggedInAccountDSID;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
@property(readonly, nonatomic) _Bool hasValidSettings;
@property(readonly, copy, nonatomic) NSString *hf_mediaRouteIdentifier;
@property(readonly, copy, nonatomic) NSSet *hf_deviceIdentifiers;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property(readonly, copy, nonatomic) NSString *hf_categoryLocalizedDescription;
@property(readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) _Bool hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) _Bool hf_isAppleMusicReachable;
@property(readonly, nonatomic) _Bool hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) _Bool hf_showsAudioSettings;
@property(readonly, nonatomic) _Bool hf_supportsMediaSystem;
@property(readonly, nonatomic) _Bool hf_isReachable;
@property(readonly, nonatomic) _Bool hf_isCurrentAccessory;
@property(readonly, copy) NSSet *symptoms;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
@property(readonly, nonatomic) HMHome *hf_home;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <HMMediaObjectDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *hf_prettyDescription;
@property(readonly, copy) HMMediaSession *mediaSession;
@property(readonly) HMAccessorySettings *settings;
@property(readonly) Class superclass;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
