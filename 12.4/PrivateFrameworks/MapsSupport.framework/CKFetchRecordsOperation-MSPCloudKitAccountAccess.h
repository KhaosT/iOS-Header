//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKFetchRecordsOperation.h>

#import <MapsSupport/MSPCloudRequest-Protocol.h>

@class NSString;

@interface CKFetchRecordsOperation (MSPCloudKitAccountAccess) <MSPCloudRequest>
- (void)setNetworkBehaviorIsDiscretionary:(_Bool)arg1;
- (void)addCloudAccessCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
@property(readonly) Class superclass;
@end
