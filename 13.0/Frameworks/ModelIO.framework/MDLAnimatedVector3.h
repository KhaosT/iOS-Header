//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLAnimatedValue.h>

@class MISSING_TYPE;

@interface MDLAnimatedVector3 : MDLAnimatedValue
{
}

- (unsigned long long)getDouble3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (void)resetWithDouble3Array:(const MISSING_TYPE **)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloat3Array:(const MISSING_TYPE **)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (MISSING_TYPE *)double3AtTime:(double)arg1;
- (MISSING_TYPE *)float3AtTime:(double)arg1;
- (void)setDouble3:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setFloat3:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (struct VtValue)defaultVtValue;
- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

