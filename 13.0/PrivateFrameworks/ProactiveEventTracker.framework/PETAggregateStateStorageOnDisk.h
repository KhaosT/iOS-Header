//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveEventTracker/PETAggregateStateStorage.h>

@class NSString;

@interface PETAggregateStateStorageOnDisk : PETAggregateStateStorage
{
    NSString *_path;
    int _fd;
    void *_bytes;
    unsigned long long _mappedLen;
    _Atomic _Bool _dead;
    struct _opaque_pthread_mutex_t _localLock;
}

- (void).cxx_destruct;
- (void)saveCorruptState;
- (void)reset;
- (_Bool)resetLocked;
- (unsigned long long)_reserveCapacity:(unsigned int)arg1;
- (void)expand:(unsigned long long)arg1 andRunWithLock:(CDUnknownBlockType)arg2;
- (void)_die;
- (void)_remapWithFlock:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
