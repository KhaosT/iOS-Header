//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKStroke;

@interface PKStrokePoint : NSObject
{
    _Bool _inflight;
    PKStroke *_stroke;
    void *_point;
    _Bool _pointOwned;
}

+ (struct _PKStrokePoint)decompressStrokePoint:(struct PKCompressedStrokePoint)arg1 withTimestamp:(double)arg2;
+ (struct PKCompressedStrokePoint)compressStrokePoint:(struct _PKStrokePoint)arg1 withTimestamp:(double)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_stringFromPoint:(struct CGPoint)arg1;
- (id)description;
- (double)_aspectRatio;
- (void)_setAspectRatio:(double)arg1;
- (double)_edgeWidth;
- (void)_setEdgeWidth:(double)arg1;
- (double)_opacity;
- (void)_setOpacity:(double)arg1;
- (double)_radius;
- (void)_setRadius:(double)arg1;
- (double)_length;
- (void)_setLength:(double)arg1;
- (long long)_estimationUpdateIndex;
- (void)_setEstimationUpdateIndex:(long long)arg1;
- (_Bool)_hasEstimatedVelocity;
- (void)_setHasEstimatedVelocity:(_Bool)arg1;
@property(readonly) double velocity;
- (_Bool)_hasEstimatedAzimuthAndAltitude;
- (void)_setHasEstimatedAzimuthAndAltitude:(_Bool)arg1;
@property double altitude;
@property double azimuth;
- (_Bool)_hasEstimatedForce;
- (void)_setHasEstimatedForce:(_Bool)arg1;
@property double force;
- (_Bool)_hasEstimatedLocation;
- (void)_setHasEstimatedLocation:(_Bool)arg1;
@property struct CGPoint location;
@property double timestamp;
- (void *)_strokePoint;
- (id)initWithStroke:(id)arg1 strokePoint:(void *)arg2 inflight:(_Bool)arg3;
- (id)init;

@end

