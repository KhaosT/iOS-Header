//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBWorkspaceApplicationSceneTransitionContextDelegate-Protocol.h>

@class NSPointerArray, NSString, SBLayoutStateTransitionContext, SBSceneManager;
@protocol SBLayoutStateTransitionSceneEntityFrameProvider;

@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate>
{
    NSPointerArray *_observerPointerArray;
    SBLayoutStateTransitionContext *_transitionContext;
    SBSceneManager *_sceneManager;
    id <SBLayoutStateTransitionSceneEntityFrameProvider> _sceneEntityFrameProvider;
}

@property(nonatomic) __weak id <SBLayoutStateTransitionSceneEntityFrameProvider> sceneEntityFrameProvider; // @synthesize sceneEntityFrameProvider=_sceneEntityFrameProvider;
@property(readonly, nonatomic) __weak SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly, nonatomic) SBLayoutStateTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)endTransitionWithError:(id)arg1;
- (void)willEndTransition;
- (void)beginTransitionForWorkspaceTransaction:(id)arg1;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)init;
- (id)initWithSceneManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
