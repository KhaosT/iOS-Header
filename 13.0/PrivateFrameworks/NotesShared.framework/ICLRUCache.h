//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;
@protocol ICLRUCacheDelegate;

@interface ICLRUCache : NSObject
{
    NSMapTable *mData;
    NSMutableArray *mOrderedKeys;
    unsigned long long mMax;
    id <ICLRUCacheDelegate> _delegate;
}

+ (void)purgeAllCaches;
+ (id)cacheCollection;
@property(nonatomic) __weak id <ICLRUCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=mMax;
- (void).cxx_destruct;
- (void)p_removeOldestObject;
@property(readonly, nonatomic) NSArray *allKeys;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithMaxSize:(unsigned long long)arg1;

@end
