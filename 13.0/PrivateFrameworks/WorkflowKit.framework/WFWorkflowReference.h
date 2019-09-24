//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDatabaseObjectDescriptor.h>

#import <WorkflowKit/WFNaming-Protocol.h>

@class NSString, WFWorkflowIcon;

@interface WFWorkflowReference : WFDatabaseObjectDescriptor <WFNaming>
{
    _Bool _isDeleted;
    NSString *_name;
    NSString *_subtitle;
    NSString *_actionsDescription;
    NSString *_associatedAppBundleIdentifier;
    WFWorkflowIcon *_icon;
}

+ (_Bool)supportsSecureCoding;
+ (id)workflowReferenceConsumingSingleUseToken:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(readonly, copy, nonatomic) WFWorkflowIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *actionsDescription; // @synthesize actionsDescription=_actionsDescription;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)externalURLForViewing;
- (id)externalURLForRunningWithSource:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 subtitle:(id)arg3 actionsDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 icon:(id)arg6 isDeleted:(_Bool)arg7;
- (id)generateSingleUseToken;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)eventDictionary;
- (void)deleteAssociatedInteractions;
- (void)donateRunInteraction;
- (id)speakableString;

@end
