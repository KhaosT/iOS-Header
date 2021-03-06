//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer;

@interface NTKSiderealSolarOrbitView : UIView
{
    double _orbitDiameter;
    UIView *_glowView;
    CAShapeLayer *_glowOrbitMask;
    CAGradientLayer *_glowGnomon;
}

- (void).cxx_destruct;
- (id)_newGnomonLayer;
- (void)setGlowPath:(id)arg1 gnomonAngle:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 orbitDiameter:(double)arg2;

@end

