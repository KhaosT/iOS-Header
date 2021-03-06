//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class PKPaymentPassAction;

@interface PKPaymentPassActionWidgetButton : UIButton
{
    _Bool _usesAccessibilityLayout;
    PKPaymentPassAction *_action;
}

+ (double)widgetHeightWithAccessibilityLayout:(_Bool)arg1;
+ (double)glyphImageHeight;
@property(nonatomic) _Bool usesAccessibilityLayout; // @synthesize usesAccessibilityLayout=_usesAccessibilityLayout;
@property(retain, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)_applyStyles;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithWidgetViewStyle:(unsigned long long)arg1;

@end

