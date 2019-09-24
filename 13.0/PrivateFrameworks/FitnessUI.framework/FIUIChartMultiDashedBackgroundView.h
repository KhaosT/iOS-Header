//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/FIUIChartBackgroundView.h>

@class UIColor, UIImageView;

@interface FIUIChartMultiDashedBackgroundView : FIUIChartBackgroundView
{
    UIImageView *_imageView;
    UIColor *_lineColor;
    UIColor *_subLineColor;
    double _previousWidth;
    _Bool _backgroundIsTransparent;
    double _lineWidth;
    double _sublineInset;
    unsigned long long _numLines;
    unsigned long long _sublineInterval;
}

+ (id)calculateRoundedLinePositionsForTotalWidth:(double)arg1 lineWidth:(double)arg2 numberOfLines:(unsigned long long)arg3 roundedInView:(id)arg4;
@property(nonatomic) _Bool backgroundIsTransparent; // @synthesize backgroundIsTransparent=_backgroundIsTransparent;
@property(nonatomic) unsigned long long sublineInterval; // @synthesize sublineInterval=_sublineInterval;
@property(nonatomic) unsigned long long numLines; // @synthesize numLines=_numLines;
@property(nonatomic) double sublineInset; // @synthesize sublineInset=_sublineInset;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void).cxx_destruct;
- (id)_stretchableLinesPatternImage;
- (void)_setNeedsRegenerateBackgroundImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
