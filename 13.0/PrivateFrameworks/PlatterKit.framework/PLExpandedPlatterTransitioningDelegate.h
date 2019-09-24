//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlatterKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIPresentationController;

@interface PLExpandedPlatterTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>
{
    UIPresentationController *_presentationController;
}

@property(retain, nonatomic, getter=_presentationController, setter=_setPresentationController:) UIPresentationController *presentationController; // @synthesize presentationController=_presentationController;
- (void).cxx_destruct;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
