//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIActivityIndicatorView, UIButton, UIImage;

@interface SXAudioComponentOverlayView : UIImageView
{
    UIButton *_playButton;
    UIImage *_audioIndicatorImage;
    UIActivityIndicatorView *_activityIndicator;
}

@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) UIImage *audioIndicatorImage; // @synthesize audioIndicatorImage=_audioIndicatorImage;
@property(readonly, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
- (void)setImage:(id)arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect)arg1;

@end
