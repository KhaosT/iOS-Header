//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKMultiPoint.h>

#import <MapKit/MKGeoJSONObject-Protocol.h>
#import <MapKit/MKOverlay-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKGeoJSONObject, NSSecureCoding, MKOverlay>
{
    struct CLLocationCoordinate2D _centroid;
    NSArray *_interiorPolygons;
    _Bool _isDefinitelyConvex;
    struct GEOOnce_s _determinedSimple;
    _Bool _simple;
}

+ (_Bool)supportsSecureCoding;
+ (id)_polygonWithMapRect:(CDStruct_02837cd9)arg1;
+ (id)polygonEnclosingMapPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(nonatomic) _Bool _isDefinitelyConvex; // @synthesize _isDefinitelyConvex;
@property(readonly) NSArray *interiorPolygons; // @synthesize interiorPolygons=_interiorPolygons;
- (void).cxx_destruct;
- (void)_determineSimple;
@property(readonly, nonatomic, getter=_isSimple) _Bool simple; // @synthesize simple=_simple;
- (void)_calculateBounds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)_initWithPointsNoCopy:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
- (id)_initWithGeoJSONCoordinateArrays:(id)arg1 error:(id *)arg2;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
