//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@class ASDCheckQueueRequestOptions, ASDClaimApplicationsRequestOptions, ASDManagedApplicationRequestOptions, ASDRepairApplicationRequestOptions;

@protocol ASDStoreQueueProtocol <NSObject>
- (void)repairApplicationWithOptions:(ASDRepairApplicationRequestOptions *)arg1 completionBlock:(void (^)(_Bool, NSArray *, NSError *))arg2;
- (void)managedApplicationRequestWithOptions:(ASDManagedApplicationRequestOptions *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, long long, NSError *))arg2;
- (void)getDownloadQueueWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)getAutomaticDownloadQueueWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)claimApplicationsWithOptions:(ASDClaimApplicationsRequestOptions *)arg1 completionBlock:(void (^)(_Bool, NSArray *, NSError *))arg2;
- (void)checkQueueWithOptions:(ASDCheckQueueRequestOptions *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
@end
