//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMDMMigrator : NSObject
{
}

+ (id)sharedMigrator;
- (void)_updateUnlockTokenSecretToClassDIfNeeded;
- (void)_updateSkipBackupKeyForNonStoreBooksDirectory;
- (void)_updateNonStoreBooksManifestForSystemGroupContainer;
- (void)_moveNonStoreManagedBooksToSystemGroupContainerFromLegacyPath:(id)arg1;
- (void)_moveNonStoreManagedBooksToSystemGroupContainer;
- (void)migrateMDMWithContext:(int)arg1;

@end

