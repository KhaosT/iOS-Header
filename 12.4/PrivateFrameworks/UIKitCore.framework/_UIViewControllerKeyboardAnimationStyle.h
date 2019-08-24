//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInputViewAnimationStyleDirectional.h>

@class _UIViewControllerKeyboardAnimationStyleInfo, _UIViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional
{
    _Bool _disableAlongsideView;
    _Bool _allowCustomTransition;
    _UIViewControllerTransitionContext *_context;
    _UIViewControllerKeyboardAnimationStyleInfo *_info;
}

+ (id)animationStyleWithContext:(id)arg1 useCustomTransition:(_Bool)arg2;
+ (id)animationStyleWithContext:(id)arg1;
@property(nonatomic) _Bool allowCustomTransition; // @synthesize allowCustomTransition=_allowCustomTransition;
@property(readonly, nonatomic) _UIViewControllerKeyboardAnimationStyleInfo *info; // @synthesize info=_info;
@property(nonatomic) _Bool disableAlongsideView; // @synthesize disableAlongsideView=_disableAlongsideView;
@property(readonly, nonatomic) _UIViewControllerTransitionContext *context; // @synthesize context=_context;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canDismissWithScrollView;
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (_Bool)isAnimationCompleted;

@end
