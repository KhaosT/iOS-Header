//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDVolumeController.h"

@interface MRDMediaServerVolumeController : MRDVolumeController
{
    float _volumeValue;
    float _volumeLimit;
    _Bool _deviceEnforcesEUVolumeLimit;
    unsigned long long _warningState;
    _Bool _volumeLimitDataInitialized;
}

- (void)_postVolumeDidChange:(float)arg1;
- (void)_internalSetVolumeValue:(float)arg1;
- (void)_updateVolumeValueCache;
- (float)_volumeFromAVController;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_initializeVolumeLimitDataIfNecessary;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (id)_mediaServerController;
- (_Bool)adjustVolumeWithStepAmount:(float)arg1 error:(id *)arg2;
- (_Bool)setVolume:(float)arg1 error:(id *)arg2;
- (unsigned long long)warningState;
- (float)volumeLimit;
- (_Bool)volumeWarningEnabled;
- (float)currentVolume;
- (void)dealloc;
- (id)initWithRoutingDataSource:(id)arg1;

@end
