//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDFitnessFriendActivitySnapshotEntity : HDSampleEntity
{
}

+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)samplesAfterAnchor:(id *)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)samplesForFriend:(id)arg1 snapshotIndex:(id)arg2 beforeAnchor:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)samplesForFriend:(id)arg1 snapshotIndex:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)samplesForFriend:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5 insertHandler:(CDUnknownBlockType)arg6;
+ (_Bool)supportsObjectMerging;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (id)HDDataEntityPredicateForFriendUUID:(id)arg1;

@end

