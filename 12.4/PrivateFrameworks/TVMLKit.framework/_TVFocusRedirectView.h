//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIFocusContainerGuide;

@interface _TVFocusRedirectView : UIView
{
    _Bool _containsInertia;
    UIFocusContainerGuide *_containerGuide;
}

@property(readonly, nonatomic) UIFocusContainerGuide *containerGuide; // @synthesize containerGuide=_containerGuide;
@property(nonatomic) _Bool containsInertia; // @synthesize containsInertia=_containsInertia;
- (void).cxx_destruct;
- (_Bool)_containsInertiaSelectionChanges;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
