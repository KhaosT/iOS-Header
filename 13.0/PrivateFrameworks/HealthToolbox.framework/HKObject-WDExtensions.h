//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKObject.h>

#import <HealthToolbox/WDDataListDataObjectSource-Protocol.h>

@class NSString;

@interface HKObject (WDExtensions) <WDDataListDataObjectSource>
- (void)deleteObjectWithHealthStore:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
