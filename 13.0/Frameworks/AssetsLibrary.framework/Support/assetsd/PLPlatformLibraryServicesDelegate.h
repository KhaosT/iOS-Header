//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PLLibraryServicesDelegate-Protocol.h"

@class PLLibraryServicesManager;

@interface PLPlatformLibraryServicesDelegate : NSObject <PLLibraryServicesDelegate>
{
    PLLibraryServicesManager *_libraryServicesManager;
    long long _migrationType;
}

+ (Class)platformLibraryServicesDelegateClass;
@property(nonatomic) long long migrationType; // @synthesize migrationType=_migrationType;
@property(readonly, nonatomic) __weak PLLibraryServicesManager *libraryServicesManager; // @synthesize libraryServicesManager=_libraryServicesManager;
- (void).cxx_destruct;
- (void)handleCompletedAllOperationsForLibraryState:(long long)arg1;
- (id)commonBuiltInOperations;
- (id)systemLibraryBuiltInOperations;
- (id)operationsForLibraryStateTransition:(long long)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;

@end

