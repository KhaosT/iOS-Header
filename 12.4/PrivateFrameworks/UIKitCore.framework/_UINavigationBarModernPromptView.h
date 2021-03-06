//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface _UINavigationBarModernPromptView : UIView
{
    UILabel *_promptLabel;
    UIFont *_font;
    NSString *_prompt;
    UIColor *_textColor;
}

@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)_promptHeight;
- (id)defaultFontDescriptor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updatePromptLabel;
- (void)_updateFontFromPreviousTraitCollection:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

