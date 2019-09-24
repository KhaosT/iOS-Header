//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGSuggester-Protocol.h>

@class NSString;

@interface PGTripHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>
{
}

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
