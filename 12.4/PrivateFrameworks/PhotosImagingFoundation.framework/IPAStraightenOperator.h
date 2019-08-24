//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPAStraightenOperator : IPAGeometryOperator
{
    double _zAngle;
}

+ (id)operatorWithIdentifier:(id)arg1 angleZ:(double)arg2;
+ (id)operatorWithAngleZ:(double)arg1;
- (id)description;
- (id)transformForGeometry:(id)arg1;

@end
