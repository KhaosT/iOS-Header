//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIControl, UIImage, UIImageView, UILabel;

@interface SKUIRedeemITunesPassLearnMoreView : UIView
{
    UIButton *_button;
    UILabel *_explanationLabel;
    UIImageView *_headerImageView;
}

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *headerImage;
@property(copy, nonatomic) NSString *explanationString;
@property(copy, nonatomic) NSString *buttonTitle;
@property(readonly, nonatomic) UIControl *button;

@end

