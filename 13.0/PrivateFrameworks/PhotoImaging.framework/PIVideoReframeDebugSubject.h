//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PIReframeSubject.h>

@interface PIVideoReframeDebugSubject : PIReframeSubject
{
    struct CGVector _velocity;
    struct CGVector _acceleration;
}

@property struct CGVector acceleration; // @synthesize acceleration=_acceleration;
@property struct CGVector velocity; // @synthesize velocity=_velocity;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
