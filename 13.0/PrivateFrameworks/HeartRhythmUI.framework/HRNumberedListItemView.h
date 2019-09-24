//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface HRNumberedListItemView : UIView
{
    UILabel *_numberLabel;
    unsigned long long _number;
    UIView *_numberLabelBackground;
}

+ (id)numberFont;
@property(retain, nonatomic) UIView *numberLabelBackground; // @synthesize numberLabelBackground=_numberLabelBackground;
@property(nonatomic) unsigned long long number; // @synthesize number=_number;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)setTintColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithInteger:(unsigned long long)arg1;

@end
