//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, WFVariable;

@interface WFVariableCell : UICollectionViewCell
{
    WFVariable *_variable;
    UIImageView *_imageView;
}

+ (double)widthWithVariable:(id)arg1 height:(double)arg2;
+ (id)titleFont;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WFVariable *variable; // @synthesize variable=_variable;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
