//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKStatisticsQueryClientInterface-Protocol.h>

@class NSDateInterval, NSString;

@interface HKStatisticsQuery : HKQuery <HKStatisticsQueryClientInterface>
{
    CDUnknownBlockType _completionHandler;
    unsigned long long _options;
    unsigned long long _mergeStrategy;
    NSDateInterval *_dateInterval;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
@property(retain, nonatomic, getter=_dateInterval, setter=_setDateInterval:) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)client_deliverStatistics:(id)arg1 forQuery:(id)arg2;
- (void)queue_deliverError:(id)arg1;
- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)_filter;
- (id)_filterForDateInterval:(id)arg1;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
