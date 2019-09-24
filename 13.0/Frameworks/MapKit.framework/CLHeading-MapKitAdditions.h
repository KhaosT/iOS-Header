//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/CLHeading.h>

@class NSString;

@interface CLHeading (MapKitAdditions)
@property(readonly, retain, nonatomic) NSString *compactDescription;
@property(readonly, nonatomic) _Bool hasGeomagneticVector;
@property(readonly, nonatomic) double heading;
- (id)initWithHeading:(double)arg1 accuracy:(double)arg2;
@end
