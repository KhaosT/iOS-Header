//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath;

@protocol OrderedDataSource <NSObject>
- (id)objectAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (NSArray *)orderedObjects;
- (id)initWithObjects:(NSArray *)arg1;
@end

