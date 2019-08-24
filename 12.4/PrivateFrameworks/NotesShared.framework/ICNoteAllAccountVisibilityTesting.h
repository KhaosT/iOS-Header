//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICNoteVisibilityTesting-Protocol.h>

@class NSString;

@interface ICNoteAllAccountVisibilityTesting : NSObject <ICNoteVisibilityTesting>
{
}

+ (id)sharedInstance;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (_Bool)supportsVisibilityTestingType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
