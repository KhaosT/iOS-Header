//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapFeatureAccess;
@protocol OS_dispatch_queue;

@interface RTMapAccess : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    GEOMapFeatureAccess *_mapFeatureAccess;
}

+ (CDStruct_c3b9c2ee)closestCoordinateOnRoad:(id)arg1 fromCoordinate:(CDStruct_c3b9c2ee)arg2;
+ (CDStruct_c3b9c2ee)coordinateOnRoad:(id)arg1 fromPolylineCoordinate:(CDStruct_f48a8b00)arg2;
@property(retain, nonatomic) GEOMapFeatureAccess *mapFeatureAccess; // @synthesize mapFeatureAccess=_mapFeatureAccess;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_findRoadFromLocation:(id)arg1 toLocation:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_findRoadsToJunction:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_findRoadsFromJunction:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_findRoadsToPreviousIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_findRoadsFromNextIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_findRoadsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_findPositiveDirectionRoadsAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1 allowsNetworkTileLoad:(_Bool)arg2;

@end

