//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FRFeedCollectionViewCellActivityIndicatorView, FRTouchInsetsButton, UILabel;

@interface FRCoverArticlesCollectionViewCellAccessoryView : UIView
{
    UILabel *_accessoryTextLabel;
    FRFeedCollectionViewCellActivityIndicatorView *_activityIndicatorView;
    FRTouchInsetsButton *_shareButton;
}

@property(retain, nonatomic) FRTouchInsetsButton *shareButton; // @synthesize shareButton=_shareButton;
@property(readonly, nonatomic) FRFeedCollectionViewCellActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) UILabel *accessoryTextLabel; // @synthesize accessoryTextLabel=_accessoryTextLabel;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
