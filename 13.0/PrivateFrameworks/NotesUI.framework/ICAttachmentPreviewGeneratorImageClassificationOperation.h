//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICAttachmentPreviewGeneratorOperation.h>

@class ICAttachmentModel, NSManagedObjectContext;

@interface ICAttachmentPreviewGeneratorImageClassificationOperation : ICAttachmentPreviewGeneratorOperation
{
    NSManagedObjectContext *_managedObjectContext;
    ICAttachmentModel *_attachmentModel;
}

@property(retain) ICAttachmentModel *attachmentModel; // @synthesize attachmentModel=_attachmentModel;
@property(retain) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (void)main;
- (unsigned long long)type;

@end

