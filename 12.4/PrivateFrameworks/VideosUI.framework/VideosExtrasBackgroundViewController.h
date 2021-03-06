//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IKImageElement, MPUArtworkView, NSArray, NSTimer, UIImageView;

__attribute__((visibility("hidden")))
@interface VideosExtrasBackgroundViewController : UIViewController
{
    NSArray *_backgroundElements;
    IKImageElement *_displayedImageElement;
    NSArray *_imageConstraints;
    MPUArtworkView *_imageView;
    NSTimer *_updateTimer;
    UIImageView *_vignetteView;
    unsigned long long _vignetteType;
}

+ (id)vignetteImageForType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long vignetteType; // @synthesize vignetteType=_vignetteType;
@property(readonly, nonatomic) NSArray *backgroundElements; // @synthesize backgroundElements=_backgroundElements;
- (void).cxx_destruct;
- (void)_initVignette;
- (void)_invalidateTimer;
- (void)_scheduleTimerIfNeeded;
- (void)_didReceiveImage:(id)arg1;
- (void)_updateImage;
- (void)_updateConstraintsForImageSize:(struct CGSize)arg1 position:(unsigned long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithBackgroundElements:(id)arg1;
- (id)initWithBackgroundElement:(id)arg1;

@end

