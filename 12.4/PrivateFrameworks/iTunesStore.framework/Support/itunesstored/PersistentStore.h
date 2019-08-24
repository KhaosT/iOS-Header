//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL, PersistentStoreConfiguration;

@interface PersistentStore : NSObject
{
    PersistentStoreConfiguration *_configuration;
    NSManagedObjectModel *_model;
    NSPersistentStoreCoordinator *_storeCoordinator;
    NSString *_threadContextKey;
    NSString *_threadCountKey;
}

- (id)_newLegacyManagedObjectModel;
- (_Bool)_loadStoreCoordinatorWithIntegrityCheck:(_Bool)arg1 error:(id *)arg2;
- (id)_baseFilePath;
- (id)managedObjectModel;
- (_Bool)loadStoreCoordinatorWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)resetStore:(id *)arg1;
- (_Bool)performLightweightMigration:(id *)arg1;
@property(readonly) NSURL *modelFileURL;
- (void)endThreadContextSession;
@property(readonly) NSURL *databaseFileURL;
@property(readonly) PersistentStoreConfiguration *configuration;
- (void)checkIntegrityWithInitializationBlock:(CDUnknownBlockType)arg1;
- (id)beginThreadContextSession;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)init;

@end
