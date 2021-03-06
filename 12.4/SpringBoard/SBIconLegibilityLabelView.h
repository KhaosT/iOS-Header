//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UILegibilityView.h>

#import "SBIconLabelView-Protocol.h"

@class SBIconLabelImageParameters, UIImage;

@interface SBIconLegibilityLabelView : _UILegibilityView <SBIconLabelView>
{
    SBIconLabelImageParameters *_imageParameters;
}

@property(retain, nonatomic) SBIconLabelImageParameters *imageParameters; // @synthesize imageParameters=_imageParameters;
- (void).cxx_destruct;
- (void)_checkInImages;
- (void)dealloc;
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIImage *image;

@end

