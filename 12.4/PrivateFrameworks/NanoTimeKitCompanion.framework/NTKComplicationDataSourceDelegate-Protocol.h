//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSArray, NSDate;

@protocol NTKComplicationDataSourceDelegate <NSObject>
- (void)invalidateSwitcherTemplate;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)appendEntries:(NSArray *)arg1;
- (void)setTimelineEndDate:(NSDate *)arg1;
- (void)setTimelineStartDate:(NSDate *)arg1;
- (void)invalidateEntries;
@end
