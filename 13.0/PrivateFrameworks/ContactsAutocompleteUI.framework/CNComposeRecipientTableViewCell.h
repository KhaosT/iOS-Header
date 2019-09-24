//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/CNComposeTableViewCell.h>

#import <ContactsAutocompleteUI/NUIContainerViewDelegate-Protocol.h>

@class CNAvatarViewController, NSArray, NSString, UIButton;
@protocol CNComposeRecipientTableViewCellDelegate;

@interface CNComposeRecipientTableViewCell : CNComposeTableViewCell <NUIContainerViewDelegate>
{
    _Bool _shouldHighlightCompleteMatches;
    id <CNComposeRecipientTableViewCellDelegate> _delegate;
    UIButton *_actionButton;
    CNAvatarViewController *_avatarViewController;
    NSArray *_activeConstraints;
    unsigned long long _actionType;
}

+ (id)attributedStringWithBoldedRangesForMatchedStrings:(id)arg1 inString:(id)arg2 font:(id)arg3 boldAllMatches:(_Bool)arg4;
+ (id)_attributedTitleForRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4;
+ (id)_attributedStringForListOfGroupMemberNames:(id)arg1 numberTruncated:(unsigned long long)arg2;
+ (id)_attributedStringForGroupMembersOfRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4;
+ (_Bool)avatarsAreHidden;
+ (double)additionalSeparatorInset;
+ (id)identifier;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(readonly, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) _Bool shouldHighlightCompleteMatches; // @synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches;
@property __weak id <CNComposeRecipientTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)actionButtonTapped;
- (double)trailingButtonWidth;
- (void)setActionType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setRecipient:(id)arg1;
- (void)updateLabelsContrainedToWidth:(double)arg1;
- (void)labelsChangedWidth:(double)arg1;
- (void)applyActionButtonTouchInsets;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
