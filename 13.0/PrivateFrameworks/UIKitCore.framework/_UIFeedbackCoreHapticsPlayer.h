//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFeedbackPlayer_Internal-Protocol.h>

@class _UIFeedbackCoreHapticsEngine;
@protocol CHHapticPatternPlayer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIFeedbackCoreHapticsPlayer : NSObject <_UIFeedbackPlayer_Internal>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    CDUnknownBlockType _invalidationBlock;
    _UIFeedbackCoreHapticsEngine *_hapticEngine;
    id <CHHapticPatternPlayer> _coreHapticsPlayer;
}

@property(retain, nonatomic) id <CHHapticPatternPlayer> coreHapticsPlayer; // @synthesize coreHapticsPlayer=_coreHapticsPlayer;
@property(nonatomic) __weak _UIFeedbackCoreHapticsEngine *hapticEngine; // @synthesize hapticEngine=_hapticEngine;
@property(copy, nonatomic) CDUnknownBlockType invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
- (void).cxx_destruct;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_stopFeedback:(id)arg1;
- (_Bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_internal_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (id)_internal_createFixedParameterForParameters:(id)arg1 withKey:(id)arg2 forEventType:(id)arg3;
- (id)_internal_createPatternForFeedbackData:(id)arg1 feedback:(id)arg2;
- (id)_internal_createEventForFeedbackData:(id)arg1;
- (id)_internal_createPlayerWithPattern:(id)arg1;
- (id)initWithEngine:(id)arg1;

@end
