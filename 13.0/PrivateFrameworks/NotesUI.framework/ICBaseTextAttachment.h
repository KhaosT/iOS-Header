//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

#import <NotesUI/TTAttachment-Protocol.h>

@class ICAttachment, NSString;

@interface ICBaseTextAttachment : NSTextAttachment <TTAttachment>
{
    ICAttachment *_attachment;
}

@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (id)attachmentInContext:(id)arg1;
- (id)attachmentUTI;
- (id)attachmentIdentifier;
- (_Bool)isEqualToModelComparable:(id)arg1;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1;
- (id)attachmentAttributesForAttributedString;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2 forPlainText:(_Bool)arg3 forStandardizedText:(_Bool)arg4;
- (double)viewCornerRadius;
- (_Bool)usesTextAttachmentView;
- (_Bool)allowsTextAttachmentView;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (_Bool)canDragWithoutSelecting;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
