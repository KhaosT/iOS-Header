//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DDRemoteActionViewService-Protocol.h"
#import "REMReminderCreationDelegate-Protocol.h"

@class CLLocation, DDAction, NSAttributedString, NSDateComponents, NSObject, NSString, NSURL, NSUserActivity, REMReminderCreationViewController;
@protocol DDRemoteActionPresenter, OS_dispatch_group, OS_dispatch_queue;

@interface DDReminderViewController : UIViewController <REMReminderCreationDelegate, DDRemoteActionViewService>
{
    id <DDRemoteActionPresenter> _proxy;
    DDAction *_action;
    REMReminderCreationViewController *_reminderViewController;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_updaterQueue;
    NSAttributedString *_reminderTitle;
    NSAttributedString *_reminderNotes;
    NSDateComponents *_reminderDueDateComponents;
    NSString *_reminderLocation;
    NSUserActivity *_reminderUserActivity;
    _Bool _isAllDay;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wantsExtendedDetailOnlyView;
@property(readonly, nonatomic) NSUserActivity *userActivity;
@property(readonly, nonatomic) NSString *locationString;
@property(readonly, nonatomic) CLLocation *location;
- (_Bool)isAllDayDueDate;
@property(readonly, nonatomic) NSDateComponents *dueDateComponents;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSAttributedString *notes;
@property(readonly, nonatomic) NSAttributedString *title;
- (void)setTitle:(id)arg1;
- (void)reminderCreationViewController:(id)arg1 didCreateReminder:(_Bool)arg2 error:(id)arg3;
- (void)adaptForPresentationInPopover:(_Bool)arg1;
- (void)prepareForAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long locationProximity;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool titleIsGeneratedSuggestion;

@end
