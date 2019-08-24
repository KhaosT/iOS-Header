//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDCKSyncState;
@protocol IMDCKAbstractSyncControllerDelegate;

@interface IMDCKAbstractSyncController : NSObject
{
    _Bool _isSyncing;
    id <IMDCKAbstractSyncControllerDelegate> _delegate;
}

@property __weak id <IMDCKAbstractSyncControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
- (void).cxx_destruct;
- (_Bool)_fetchedAllChangesFromCloudKit;
- (void)syncBatchCompleted:(unsigned long long)arg1;
- (void)addSyncDebuggingInfoToDictionary:(id)arg1;
- (id)syncStateDebuggingInfo:(id)arg1;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToUploading;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateStateToFinished;
- (long long)syncControllerRecordType;
@property(readonly, nonatomic) IMDCKSyncState *syncState;
- (id)ckUtilities;
@property(readonly, nonatomic) _Bool isUsingStingRay;

@end
