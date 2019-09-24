//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <ActionKit/UIImagePickerControllerDelegate-Protocol.h>
#import <ActionKit/UINavigationControllerDelegate-Protocol.h>

@class NSString;

@interface WFSelectPhotoAction : WFAction <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
}

- (void)presentationControllerDidDismiss:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerDidCancel:(id)arg1;
- (void)imagePicker:(id)arg1 didFinishPickingMedia:(id)arg2;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
@property(readonly, nonatomic) _Bool selectMultiple;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
