//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class NSDateFormatter;

@interface WFAddNewReminderAction : WFAction
{
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)arg1;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void)updateLists;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;

@end
