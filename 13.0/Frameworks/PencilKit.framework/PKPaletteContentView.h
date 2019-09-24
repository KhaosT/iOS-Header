//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>
#import <PencilKit/PKPaletteViewStateObserving-Protocol.h>

@class NSLayoutConstraint, NSString, PKPaletteAdditionalOptionsView, PKPaletteColorPickerView, PKPaletteToolPickerAndColorPickerView, PKPaletteToolPickerView, PKPaletteUndoRedoView, UIStackView;
@protocol PKPaletteViewStateObservable;

@interface PKPaletteContentView : UIView <PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteViewStateObserving>
{
    _Bool _usingSmallestSupportedWidth;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    PKPaletteUndoRedoView *_undoRedoView;
    PKPaletteAdditionalOptionsView *_additionalOptionsView;
    UIView *_contextualEditingView;
    id <PKPaletteViewStateObservable> _paletteViewState;
    UIStackView *_stackView;
    PKPaletteToolPickerAndColorPickerView *_toolAndColorPickerContainerView;
    NSLayoutConstraint *_stackViewTopConstraint;
    NSLayoutConstraint *_stackViewBottomConstraint;
    NSLayoutConstraint *_stackViewLeftConstraint;
    NSLayoutConstraint *_stackViewRightConstraint;
    NSLayoutConstraint *_stackViewCenterXConstraint;
    NSLayoutConstraint *_stackViewCompactLeftConstraint;
    NSLayoutConstraint *_stackViewCompactRightConstraint;
}

@property(nonatomic, getter=isUsingSmallestSupportedWidth) _Bool usingSmallestSupportedWidth; // @synthesize usingSmallestSupportedWidth=_usingSmallestSupportedWidth;
@property(retain, nonatomic) NSLayoutConstraint *stackViewCompactRightConstraint; // @synthesize stackViewCompactRightConstraint=_stackViewCompactRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *stackViewCompactLeftConstraint; // @synthesize stackViewCompactLeftConstraint=_stackViewCompactLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *stackViewCenterXConstraint; // @synthesize stackViewCenterXConstraint=_stackViewCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *stackViewRightConstraint; // @synthesize stackViewRightConstraint=_stackViewRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *stackViewLeftConstraint; // @synthesize stackViewLeftConstraint=_stackViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *stackViewBottomConstraint; // @synthesize stackViewBottomConstraint=_stackViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *stackViewTopConstraint; // @synthesize stackViewTopConstraint=_stackViewTopConstraint;
@property(retain, nonatomic) PKPaletteToolPickerAndColorPickerView *toolAndColorPickerContainerView; // @synthesize toolAndColorPickerContainerView=_toolAndColorPickerContainerView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <PKPaletteViewStateObservable> paletteViewState; // @synthesize paletteViewState=_paletteViewState;
@property(retain, nonatomic) UIView *contextualEditingView; // @synthesize contextualEditingView=_contextualEditingView;
@property(readonly, nonatomic) PKPaletteAdditionalOptionsView *additionalOptionsView; // @synthesize additionalOptionsView=_additionalOptionsView;
@property(readonly, nonatomic) PKPaletteUndoRedoView *undoRedoView; // @synthesize undoRedoView=_undoRedoView;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
- (void).cxx_destruct;
- (void)didChangeAnnotationSupport:(id)arg1;
- (void)_dismissPalettePopoverUsingConfirmationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)plusButtonFrame;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateContextEditingViewVisibility;
@property(nonatomic) long long contextEditingMode;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)_installContextualEditingView;
- (void)_installAdditionalOptionsView;
@property(readonly, nonatomic) PKPaletteColorPickerView *colorPickerView;
@property(readonly, nonatomic) PKPaletteToolPickerView *toolPickerView;
- (void)_installUndoRedoButtonsView;
- (void)_installStackView;
- (id)initWithPaletteViewStateObservable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
