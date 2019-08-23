//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBIconModelStore-Protocol.h"

@class NSDictionary, NSString;

@interface SBIconModelMemoryStore : NSObject <SBIconModelStore>
{
    NSDictionary *_currentState;
    NSDictionary *_desiredState;
}

@property(copy, nonatomic) NSDictionary *desiredState; // @synthesize desiredState=_desiredState;
@property(copy, nonatomic) NSDictionary *currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (id)loadDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (_Bool)deleteDesiredIconState:(id *)arg1;
- (_Bool)deleteCurrentIconState:(id *)arg1;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (_Bool)saveCurrentIconState:(id)arg1 error:(id *)arg2;
- (id)initWithITunesRepresentation:(id)arg1;
- (id)init;
- (id)initWithCurrentState:(id)arg1 desiredState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
