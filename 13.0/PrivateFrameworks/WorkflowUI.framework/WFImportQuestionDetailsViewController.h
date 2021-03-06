//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/UITextViewDelegate-Protocol.h>
#import <WorkflowUI/WFParameterEditorHostingCellDelegate-Protocol.h>

@class NSString, UITextView, WFAction, WFGradient, WFParameter, WFParameterEditorHostingCell, WFParameterEditorModel, WFWorkflowImportQuestion, WFWorkflowSettingsLayoutMetrics;
@protocol WFImportQuestionDetailsViewControllerDelegate;

@interface WFImportQuestionDetailsViewController : UITableViewController <WFParameterEditorHostingCellDelegate, UITextViewDelegate>
{
    _Bool _focusOnTextView;
    id <WFImportQuestionDetailsViewControllerDelegate> _delegate;
    WFGradient *_workflowGradient;
    WFWorkflowSettingsLayoutMetrics *_layoutMetrics;
    WFWorkflowImportQuestion *_importQuestion;
    WFParameterEditorModel *_parameterEditorModel;
    WFParameterEditorHostingCell *_parameterEditorCell;
    UITextView *_textView;
    WFParameter *_retainedParameter;
    WFAction *_retainedAction;
    struct CGSize _parameterEditorSize;
}

@property(readonly, nonatomic) WFAction *retainedAction; // @synthesize retainedAction=_retainedAction;
@property(readonly, nonatomic) WFParameter *retainedParameter; // @synthesize retainedParameter=_retainedParameter;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool focusOnTextView; // @synthesize focusOnTextView=_focusOnTextView;
@property(nonatomic) struct CGSize parameterEditorSize; // @synthesize parameterEditorSize=_parameterEditorSize;
@property(nonatomic) __weak WFParameterEditorHostingCell *parameterEditorCell; // @synthesize parameterEditorCell=_parameterEditorCell;
@property(retain, nonatomic) WFParameterEditorModel *parameterEditorModel; // @synthesize parameterEditorModel=_parameterEditorModel;
@property(retain, nonatomic) WFWorkflowImportQuestion *importQuestion; // @synthesize importQuestion=_importQuestion;
@property(retain, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(readonly, nonatomic) WFGradient *workflowGradient; // @synthesize workflowGradient=_workflowGradient;
@property(nonatomic) __weak id <WFImportQuestionDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissKeyboard;
- (void)textViewDidChange:(id)arg1;
- (void)parameterEditorCellDidInvalidateSize:(id)arg1;
- (void)parameterEditorCell:(id)arg1 didUpdateParameterState:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)invalidateLayoutMetrics;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (void)reflowParameterEditorCell;
- (void)updateParameterEditorModel;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithImportQuestion:(id)arg1 forTypingQuestion:(_Bool)arg2 workflowGradient:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

