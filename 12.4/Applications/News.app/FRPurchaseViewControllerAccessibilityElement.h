//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class UIControl, UIView;

@interface FRPurchaseViewControllerAccessibilityElement : UIAccessibilityElement
{
    UIView *_descriptionView;
    UIControl *_actionButton;
}

@property(nonatomic) __weak UIControl *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak UIView *descriptionView; // @synthesize descriptionView=_descriptionView;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityActivate;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (id)initWithDescriptionView:(id)arg1 actionButton:(id)arg2 accessibilityContainer:(id)arg3;

@end
