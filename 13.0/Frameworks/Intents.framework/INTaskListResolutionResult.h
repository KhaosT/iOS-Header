//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INTaskListResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithTaskListToConfirm:(id)arg1;
+ (id)disambiguationWithTaskListsToDisambiguate:(id)arg1;
+ (id)successWithResolvedTaskList:(id)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
