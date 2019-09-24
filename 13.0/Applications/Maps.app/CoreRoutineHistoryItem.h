//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarSearchItemCellDataSource-Protocol.h"
#import "RAPAutocompleteSearchResult-Protocol.h"
#import "RecentsItem-Protocol.h"

@class NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface CoreRoutineHistoryItem : NSObject <CarSearchItemCellDataSource, RAPAutocompleteSearchResult, RecentsItem>
{
    SearchResult *_searchResult;
    long long _locationOfInterestType;
}

@property(nonatomic) long long locationOfInterestType; // @synthesize locationOfInterestType=_locationOfInterestType;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void).cxx_destruct;
@property(readonly, nonatomic) double timestamp;
- (id)initWithSearchResult:(id)arg1 andLocationOfInterestType:(long long)arg2;
- (void)updateModel:(id)arg1;
- (id)entryWithTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
