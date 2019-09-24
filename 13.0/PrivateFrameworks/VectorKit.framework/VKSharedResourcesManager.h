//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, VKSharedResources;

__attribute__((visibility("hidden")))
@interface VKSharedResourcesManager : NSObject
{
    struct mutex _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (void)removeResourceUser;
+ (void)addResourceUser;
+ (id)sharedResources;
+ (id)sharedManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resources;
- (_Bool)hasResoruces;
- (void)dealloc;
- (id)init;

@end
