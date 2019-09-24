//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthMenstrualCycles/HKMCAnalysis.h>

@class HDMCNotification;

@interface HKMCAnalysis (NotificationTiming)
- (_Bool)isEarliestNotificationScheduledOnOrAfterDate:(id)arg1;
@property(readonly, copy, nonatomic) HDMCNotification *hdmc_beforeFertileWindowStartNotification;
@property(readonly, copy, nonatomic) HDMCNotification *hdmc_afterPeriodEndNotification;
@property(readonly, copy, nonatomic) HDMCNotification *hdmc_afterPeriodStartNotification;
@property(readonly, copy, nonatomic) HDMCNotification *hdmc_beforePeriodStartNotification;
- (id)_hdmc_firstPeriodStartProjection;
@end
