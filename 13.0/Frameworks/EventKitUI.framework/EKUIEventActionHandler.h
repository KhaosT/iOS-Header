//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKUIEventActionHandler : NSObject
{
}

+ (id)sharedInstance;
- (id)createEventIntentForEvent:(id)arg1 withSuggestionsInfoUniqueKey:(id)arg2;
- (id)createEventIntentForEvent:(id)arg1;
- (void)donatePredictiveAction:(id)arg1 forEvent:(id)arg2;
- (void)donateInteractionForAction:(id)arg1 onEvent:(id)arg2;
- (id)_intentForAction:(id)arg1 onEvent:(id)arg2;
- (void)removeInteractionsForCalendar:(id)arg1;
- (void)handleEventDeletion:(id)arg1;
- (void)handleEventUpdate:(id)arg1;
- (void)prepareForEventUpdate:(id)arg1;
- (void)handleEventCreation:(id)arg1;

@end

