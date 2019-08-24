//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBUIFullscreenAlertController.h>

@class UIView;

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController
{
    UIView *_topBar;
    UIView *_bottomBar;
    _Bool _animatingIn;
    _Bool _animatingOut;
}

@property(readonly, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(readonly, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
- (void).cxx_destruct;
- (void)finishedAnimatingIn;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (_Bool)viewIsReadyToBeRemoved;
- (void)animateViewOut;
- (double)_animationDelayForOthersActivation;
- (double)_slideOutAnimationDuration;
- (double)_slideOutAnimationDelay;
- (_Bool)_animatingToHomescreenWallpaper;
- (void)_viewAnimatedOut;
- (void)viewWillAnimateOut;
- (void)animateViewIn;
- (void)_performAnimateDisplayIn;
- (void)viewWillAnimateIn;
- (_Bool)shouldShowBottomBar;
- (_Bool)isShowingWallpaper;
- (_Bool)hasTranslucentBackground;
- (id)backgroundView;
- (void)viewDidLoad;
- (id)newBottomBar;
- (id)newTopBar;
- (_Bool)isSlidingViewController;

@end
