//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKManualEntryValidationController : NSObject
{
}

- (unsigned long long)_validateQuantity:(id)arg1 withAbsoluteRange:(id)arg2 confirmRange:(id)arg3;
- (unsigned long long)validateMinimumAllowedDuration:(double)arg1 ofType:(id)arg2;
- (unsigned long long)validateMaximumAllowedDuration:(double)arg1 ofType:(id)arg2;
- (unsigned long long)validateWorkoutEnergyBurned:(id)arg1;
- (unsigned long long)validateWorkoutDistance:(id)arg1;
- (unsigned long long)validateQuantity:(id)arg1 ofType:(id)arg2;
- (id)supportedQuantityTypes;

@end

