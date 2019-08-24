//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface HRSimulatedAtrialFibrillationScreenView : UIView
{
    UIImageView *_quickLookIconView;
    UILabel *_quickLookTitleLabel;
    UILabel *_quickLookSubtitleLabel;
    UIView *_quickLookTitleContainer;
    UIView *_quickLookSubtitleContainer;
}

@property(retain, nonatomic) UIView *quickLookSubtitleContainer; // @synthesize quickLookSubtitleContainer=_quickLookSubtitleContainer;
@property(retain, nonatomic) UIView *quickLookTitleContainer; // @synthesize quickLookTitleContainer=_quickLookTitleContainer;
@property(retain, nonatomic) UILabel *quickLookSubtitleLabel; // @synthesize quickLookSubtitleLabel=_quickLookSubtitleLabel;
@property(retain, nonatomic) UILabel *quickLookTitleLabel; // @synthesize quickLookTitleLabel=_quickLookTitleLabel;
@property(retain, nonatomic) UIImageView *quickLookIconView; // @synthesize quickLookIconView=_quickLookIconView;
- (void).cxx_destruct;
- (id)_systemRedColor;
- (void)_layoutQuickLook;
- (void)_setUpSubviews;
- (id)init;

@end
