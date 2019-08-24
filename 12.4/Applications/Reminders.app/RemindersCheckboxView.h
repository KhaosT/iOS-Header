//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;
@protocol RemindersCheckboxViewDelegate;

@interface RemindersCheckboxView : UIView
{
    UIImageView *_buttonImageView;
    _Bool _checked;
    _Bool _overdue;
    int _appearance;
    id <RemindersCheckboxViewDelegate> _delegate;
    UIColor *_buttonColor;
}

@property(nonatomic, getter=isOverdue) _Bool overdue; // @synthesize overdue=_overdue;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) int appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(nonatomic) __weak id <RemindersCheckboxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)_updateImage;
- (void)buttonCancelled;
- (void)buttonDown;
- (id)flatUncompletedImageForColor:(id)arg1;
- (id)flatCompletedImage;
- (id)flatImageNameCompleted:(_Bool)arg1;
- (void)buttonPressed;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
