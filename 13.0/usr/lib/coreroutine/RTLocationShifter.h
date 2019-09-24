//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocationShifter;

@interface RTLocationShifter : NSObject
{
    GEOLocationShifter *_geoLocationShifter;
}

+ (_Bool)isLocationShiftRequiredForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void).cxx_destruct;
- (void)shiftCoordinate:(struct CLLocationCoordinate2D)arg1 accuracy:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)shiftedLocation:(id)arg1 allowNetwork:(_Bool)arg2 error:(id *)arg3;
- (void)shiftLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end
