//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIFocusGuide.h>

@protocol UIKBFocusGuideDelegate;

__attribute__((visibility("hidden")))
@interface UIKBFocusGuide : UIFocusGuide
{
    unsigned long long focusHeading;
    id <UIKBFocusGuideDelegate> _keyboardDelegate;
}

@property(nonatomic) id <UIKBFocusGuideDelegate> keyboardDelegate; // @synthesize keyboardDelegate=_keyboardDelegate;
@property(nonatomic) unsigned long long focusHeading; // @synthesize focusHeading;
- (void)_didUpdateFocusToPreferredFocusedView;

@end
