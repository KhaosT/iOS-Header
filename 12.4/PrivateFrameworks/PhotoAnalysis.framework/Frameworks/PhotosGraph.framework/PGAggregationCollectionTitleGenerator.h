//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class NSString;

@interface PGAggregationCollectionTitleGenerator : PGDefaultCollectionTitleGenerator
{
    NSString *_aggregationLabel;
}

@property(readonly, nonatomic) NSString *aggregationLabel; // @synthesize aggregationLabel=_aggregationLabel;
- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 aggregationLabel:(id)arg2;

@end

