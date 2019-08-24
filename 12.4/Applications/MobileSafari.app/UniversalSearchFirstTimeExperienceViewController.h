//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SearchUIFirstTimeExperienceDelegate-Protocol.h"

@class NSString, SearchUIFirstTimeExperienceViewController, UIScrollView;
@protocol UniversalSearchFirstTimeExperienceViewControllerDelegate;

@interface UniversalSearchFirstTimeExperienceViewController : UIViewController <SearchUIFirstTimeExperienceDelegate>
{
    SearchUIFirstTimeExperienceViewController *_firstTimeExperienceViewController;
    UIScrollView *_scrollView;
    id <UniversalSearchFirstTimeExperienceViewControllerDelegate> _delegate;
}

+ (void)userDidInteractWithParsecFirstTimeUserExperience;
+ (_Bool)hasShownParsecFirstTimeUserExperience;
@property(nonatomic) __weak id <UniversalSearchFirstTimeExperienceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)firstTimeExperienceContinueButtonPressed;
- (void)unifiedFieldDidChange;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
