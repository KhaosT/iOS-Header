//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CXCallDirectoryStore;

@interface CXCallDirectoryStoreMigrator : NSObject
{
    CXCallDirectoryStore *_store;
    CDUnknownBlockType _storeCreationBlock;
    CDUnknownBlockType _retrieveExtensionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType retrieveExtensionBlock; // @synthesize retrieveExtensionBlock=_retrieveExtensionBlock;
@property(copy, nonatomic) CDUnknownBlockType storeCreationBlock; // @synthesize storeCreationBlock=_storeCreationBlock;
@property(retain, nonatomic) CXCallDirectoryStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)_performMigrationsStartingAtSchemaVersion:(long long)arg1 error:(id *)arg2;
- (id)performMigrationsWithError:(id *)arg1;
- (id)init;

@end
