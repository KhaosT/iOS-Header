//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LoadingViewController : UIViewController
{
    _Bool _imageIsFullScreen;
    UIImage *_image;
    UIImageView *_imageView;
    long long _orientation;
    UIView *_statusBarView;
    long long _preferredStatusBarStyle;
}

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithWebClip:(id)arg1 orientation:(long long)arg2;
- (long long)preferredStatusBarStyle;

@end
