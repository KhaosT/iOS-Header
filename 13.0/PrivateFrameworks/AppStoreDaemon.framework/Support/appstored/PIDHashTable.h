//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface PIDHashTable : NSObject
{
    NSHashTable *_hash;
}

+ (id)hashTable;
- (void).cxx_destruct;
- (id)_initWithHashTable:(id)arg1;
- (id)description;
- (void)removePID:(long long)arg1;
- (_Bool)containsPID:(long long)arg1;
- (void)addPID:(long long)arg1;

@end

