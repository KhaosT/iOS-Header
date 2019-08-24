//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

#import <RemoteManagement/RMUniquelySerializableManagedObject-Protocol.h>

@class NSData, NSDate, NSSet, NSString, RMBlueprintSchedule, RMBlueprintUsageLimit, RMCoreOrganization;

@interface RMBlueprint : RMUniquedManagedObject <RMUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchResultsRequestsForChangesToBlueprintsForUserWithDSID:(id)arg1;
+ (id)fetchResultsRequestsForChangesToBlueprints;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 fromOrganization:(id)arg4;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 fromOrganization:(id)arg3;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1;
+ (id)fetchRequestMatchingExpiredBlueprints;
- (void)delete;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;
- (id)declarationsWithError:(id *)arg1;
- (void)tombstone;

// Remaining properties
@property(retain, nonatomic) NSSet *configurations; // @dynamic configurations;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(copy, nonatomic) NSDate *expiration; // @dynamic expiration;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) _Bool invertUsageLimit; // @dynamic invertUsageLimit;
@property(nonatomic) _Bool isDirty; // @dynamic isDirty;
@property(nonatomic) _Bool isTombstoned; // @dynamic isTombstoned;
@property(nonatomic) _Bool limitEnabled; // @dynamic limitEnabled;
@property(retain, nonatomic) RMCoreOrganization *organization; // @dynamic organization;
@property(retain, nonatomic) RMBlueprintSchedule *schedule; // @dynamic schedule;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) RMBlueprintUsageLimit *usageLimit; // @dynamic usageLimit;
@property(retain, nonatomic) NSSet *users; // @dynamic users;
@property(copy, nonatomic) NSData *versionVector; // @dynamic versionVector;

@end
