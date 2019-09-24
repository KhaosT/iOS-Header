//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer;

@interface CAMDirectionalIndicator : UIControl
{
    unsigned long long _direction;
}

+ (Class)layerClass;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void)_updateArrowShapeAnimated:(_Bool)arg1;
- (void)setDirection:(unsigned long long)arg1 animated:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) CAShapeLayer *_arrowLayer;

@end
