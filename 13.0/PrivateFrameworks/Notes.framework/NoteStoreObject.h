//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NoteCollectionObject.h>

@class NSSet, NSString, NoteAccountObject;

@interface NoteStoreObject : NoteCollectionObject
{
}

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (id)predicateForNotes;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1;
- (unsigned int)maximumServerIntId;
- (id)notesForServerIntIdsInRange:(struct _NSRange)arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForServerIntIdsInRange:(struct _NSRange)arg1 ascending:(_Bool)arg2 limit:(unsigned long long)arg3;
- (id)notesForServerIntIds:(id)arg1 ascending:(_Bool)arg2 limit:(unsigned long long)arg3;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)notesForServerIds:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;

// Remaining properties
@property(retain, nonatomic) NoteAccountObject *account; // @dynamic account;
@property(retain, nonatomic) NSSet *changes; // @dynamic changes;
@property(retain, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *syncAnchor; // @dynamic syncAnchor;

@end
