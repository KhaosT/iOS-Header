//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PHVideoScrubberView.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface QLVideoScrubberView : PHVideoScrubberView
{
    _Bool _userInteractingWithScrubber;
}

@property(getter=isUserInteractingWithScrubber) _Bool userInteractingWithScrubber; // @synthesize userInteractingWithScrubber=_userInteractingWithScrubber;
- (void)_handleInteractionEndedAndTogglePlayState:(_Bool)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handleInteractionBegan;
@property(readonly) UIScrollView *scrollView;

@end

