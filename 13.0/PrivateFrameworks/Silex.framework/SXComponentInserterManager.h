//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInserterManager-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface SXComponentInserterManager : NSObject <SXComponentInserterManager>
{
    NSMutableArray *_mutableInserters;
}

@property(readonly, nonatomic) NSMutableArray *mutableInserters; // @synthesize mutableInserters=_mutableInserters;
- (void).cxx_destruct;
- (void)removeInserter:(id)arg1;
- (void)addInserter:(id)arg1;
@property(readonly, nonatomic) NSArray *inserters;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
