//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPinchGestureRecognizer.h>

@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer
{
    _Bool mZoomTimedOut;
}

- (void)p_cancelAfterDelay;
- (void)p_stopCancellationTimer;
- (void)p_startCancellationTimer;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;

@end
