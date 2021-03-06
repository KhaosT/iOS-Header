//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface _TVProgressBarView : UIView
{
    _Bool _useMaterial;
    _Bool _shouldProgressBarUseRoundCorner;
    double _cornerRadius;
    double _progress;
    UIColor *_progressTintColor;
    UIColor *_gradientStartColor;
    UIColor *_gradientEndColor;
    UIColor *_completeTintColor;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool shouldProgressBarUseRoundCorner; // @synthesize shouldProgressBarUseRoundCorner=_shouldProgressBarUseRoundCorner;
@property(nonatomic) _Bool useMaterial; // @synthesize useMaterial=_useMaterial;
@property(retain, nonatomic) UIColor *completeTintColor; // @synthesize completeTintColor=_completeTintColor;
@property(retain, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(retain, nonatomic) UIColor *gradientStartColor; // @synthesize gradientStartColor=_gradientStartColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)setgradientEndColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

