//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class GEORouteIncident;

@interface MNRouteIncident : NSObject <NSSecureCoding>
{
    GEORouteIncident *_geoRouteIncident;
    double _offsetInMeters;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double offsetInMeters; // @synthesize offsetInMeters=_offsetInMeters;
@property(readonly, nonatomic) GEORouteIncident *geoRouteIncident; // @synthesize geoRouteIncident=_geoRouteIncident;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoRouteIncident:(id)arg1 offsetInMeters:(double)arg2;

@end

