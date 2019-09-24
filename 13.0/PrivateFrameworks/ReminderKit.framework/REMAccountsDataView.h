//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REMStore;

@interface REMAccountsDataView : NSObject
{
    REMStore *_store;
}

@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)accountsFromStorages:(id)arg1;
- (id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchAccountsWithObjectIDs:(id)arg1 error:(id *)arg2;
- (id)fetchAccountWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchAllAccountsForDumpingWithError:(id *)arg1;
- (id)fetchAllAccountsForAccountManagementWithError:(id *)arg1;
- (id)fetchAllAccountsWithError:(id *)arg1;
- (id)initWithStore:(id)arg1;

@end
