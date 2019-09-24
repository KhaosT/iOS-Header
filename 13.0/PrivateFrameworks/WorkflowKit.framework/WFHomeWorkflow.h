//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFTriggerActionsSetsUISummary, NSArray, NSData, NSString, WFWorkflow;

@interface WFHomeWorkflow : NSObject
{
    NSData *_data;
    WFWorkflow *_workflow;
    HFTriggerActionsSetsUISummary *_actionSetsSummary;
}

@property(retain, nonatomic) HFTriggerActionsSetsUISummary *actionSetsSummary; // @synthesize actionSetsSummary=_actionSetsSummary;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)actionSetsFromTriggerActionSetsBuilders:(id)arg1;
- (id)triggerActionSetsBuilders;
@property(readonly, nonatomic) _Bool requiresDeviceUnlock;
@property(readonly, copy, nonatomic) NSArray *summaryIconDescriptors;
@property(readonly, copy, nonatomic) NSArray *summaryIconNames;
@property(readonly, copy, nonatomic) NSString *summaryString;
- (id)initWithData:(id)arg1;

@end
