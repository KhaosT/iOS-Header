//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class STScrollView, UIEvent;

@protocol STScrollViewDelegate <NSObject>
- (_Bool)shouldPreventDraggingForScrollView:(STScrollView *)arg1;
- (void)didTouchScrollView:(STScrollView *)arg1 withEvent:(UIEvent *)arg2;

@optional
- (_Bool)accessibilityShouldScrollForScrollView:(STScrollView *)arg1;
- (_Bool)accessibilityShouldScrollForScrollView:(STScrollView *)arg1 defaultValue:(_Bool)arg2;
- (_Bool)scrollView:(STScrollView *)arg1 shouldOccludeAccessibilityElement:(id)arg2;
@end
