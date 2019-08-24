//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface CenteringView : UIView
{
    UIView *_contentView;
    long long _contentPlacement;
    CDUnknownBlockType _testForFindingSuperviewToCenterIn;
    struct UIEdgeInsets _contentInset;
}

@property(copy, nonatomic) CDUnknownBlockType testForFindingSuperviewToCenterIn; // @synthesize testForFindingSuperviewToCenterIn=_testForFindingSuperviewToCenterIn;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) long long contentPlacement; // @synthesize contentPlacement=_contentPlacement;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (struct CGRect)frameForView:(id)arg1 contentPlacement:(long long)arg2;
- (void)layoutMarginsDidChange;
- (struct CGRect)_centeringBounds;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)willRemoveSubview:(id)arg1;

@end
