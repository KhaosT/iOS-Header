//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKSearchController.h>

@interface CKConversationSearchController : CKSearchController
{
    _Bool _gotResults;
}

+ (Class)cellClass;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (_Bool)supportsMenuInteraction;
+ (_Bool)supportsQuicklook;
@property(nonatomic) _Bool gotResults; // @synthesize gotResults=_gotResults;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (_Bool)wantsHeaderSection;
- (double)interGroupSpacing;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (id)_sortedAndRankedItemsWithItems:(id)arg1;
- (void)searchEnded;
- (void)_searchSpotlightWithText:(id)arg1 mode:(unsigned long long)arg2;
- (void)_searchZKWWithText:(id)arg1 mode:(unsigned long long)arg2;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (id)rankingQueriesWithText:(id)arg1;
- (id)filterQueries;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)fetchAttributes;

@end
