//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARConfiguration.h>

@interface ARFaceTrackingConfiguration : ARConfiguration
{
    _Bool _worldTrackingEnabled;
    _Bool _lowPower;
    long long _maximumNumberOfTrackedFaces;
}

+ (id)supportedVideoFormatsForWorldTracking;
+ (id)supportedVideoFormats;
+ (long long)supportedNumberOfTrackedFaces;
+ (_Bool)isSupported;
+ (id)new;
+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (_Bool)supportsWorldTracking;
@property(nonatomic) _Bool lowPower; // @synthesize lowPower=_lowPower;
@property(nonatomic, getter=isWorldTrackingEnabled) _Bool worldTrackingEnabled; // @synthesize worldTrackingEnabled=_worldTrackingEnabled;
@property(nonatomic) long long maximumNumberOfTrackedFaces; // @synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)imageSensorSettingsForWorldTracking;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForLowPower;
- (id)parentImageSensorSettings;
- (id)renderingTechnique;
- (id)secondaryTechniques;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (void)setMirroredFrameOutput:(_Bool)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setLightEstimationEnabled:(_Bool)arg1;
- (id)init;

@end
