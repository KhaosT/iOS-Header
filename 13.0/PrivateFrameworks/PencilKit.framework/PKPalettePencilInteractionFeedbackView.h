//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView, PKPaletteToolPreview;

@interface PKPalettePencilInteractionFeedbackView : UIView
{
    UIView *_clippingView;
    MTMaterialView *_backgroundView;
    PKPaletteToolPreview *_toolPreview;
}

@property(retain, nonatomic) PKPaletteToolPreview *toolPreview; // @synthesize toolPreview=_toolPreview;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
- (void).cxx_destruct;
- (void)showPreviewForToolWithInk:(id)arg1 withScalingFactor:(double)arg2;
- (void)layoutSubviews;
- (void)_setCornerRadius:(double)arg1;
- (id)init;

@end
