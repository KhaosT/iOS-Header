//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextGestureCluster.h>

__attribute__((visibility("hidden")))
@interface UITextGestureClusterSelection : UITextGestureCluster
{
    double _lastTapTimestamp;
}

- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (_Bool)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (id)initWithView:(id)arg1 andMode:(int)arg2;

@end
