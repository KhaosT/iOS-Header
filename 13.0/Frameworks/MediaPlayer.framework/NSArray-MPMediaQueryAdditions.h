//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <MediaPlayer/MPSectionedIdentifierListIdentifierPair-Protocol.h>

@class NSString;

@interface NSArray (MPMediaQueryAdditions) <MPSectionedIdentifierListIdentifierPair>
- (_Bool)MPIsEmpty;
@property(readonly, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly, nonatomic) _Bool isQueryResultSetInvalidated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
