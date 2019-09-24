//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GKBubbleSet, MISSING_TYPE, NSArray, NSMutableArray;

@interface GKBubbleFlowContainerView : UIView
{
    struct CGRect _bubbleRestingRects[12];
    NSMutableArray *_bubbleSets;
    _Bool _usingCustomLayout;
    long long _supportedBubbles;
}

@property(nonatomic) _Bool usingCustomLayout; // @synthesize usingCustomLayout=_usingCustomLayout;
@property(retain, nonatomic) NSArray *bubbleSets; // @synthesize bubbleSets=_bubbleSets;
@property(readonly, nonatomic) long long supportedBubbles; // @synthesize supportedBubbles=_supportedBubbles;
- (void)layoutSubviews;
- (MISSING_TYPE *)worldPositionForBubble:(long long)arg1;
- (void)enumerateBubbles:(CDUnknownBlockType)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) GKBubbleSet *primaryBubbleControls;
- (void)addBubbleSet:(id)arg1;
- (void)setRestingRect:(struct CGRect)arg1 forBubbleType:(long long)arg2;
- (struct CGRect)restingRectForBubbleType:(long long)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
