//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNCommuteDestinationScore.h>

#import <Navigation/MNCommuteDestinationLocationScore-Protocol.h>

@class NSMutableArray;

@interface MNCommuteDestinationOffRouteScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore>
{
    int _score;
    _Bool _destinationInvalid;
    NSMutableArray *_offRouteEntries;
}

+ (double)weight;
@property(retain, nonatomic) NSMutableArray *offRouteEntries; // @synthesize offRouteEntries=_offRouteEntries;
- (void).cxx_destruct;
- (id)descriptionExtras;
- (_Bool)destinationInvalid;
- (int)score;
- (void)_updateScoreAndDestinationInvalid;
- (void)updateForRerouteWithLocation:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)updateScoreIfPossible;
- (id)initWithDestination:(id)arg1;

@end

