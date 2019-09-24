//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSDate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKNumericChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xValue;
    id _yValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

- (void).cxx_destruct;
- (id)userInfo;
- (id)maxYValue;
- (id)minYValue;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)yValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
