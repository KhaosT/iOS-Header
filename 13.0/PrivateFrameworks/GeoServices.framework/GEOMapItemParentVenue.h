//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOMapItemParentVenue : NSObject
{
    unsigned long long _businessID;
    int _featureType;
}

@property(readonly, nonatomic) int featureType; // @synthesize featureType=_featureType;
@property(readonly, nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
- (id)initWithLocatedInsideInfo:(id)arg1;
- (id)initWithBusinessID:(unsigned long long)arg1 featureType:(int)arg2;
- (id)init;

@end
