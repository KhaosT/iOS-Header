//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIFeedbackGenerator.h>

#import <UIKitCore/UIFeedbackGeneratorUserInteractionDriven-Protocol.h>

@class _UIButtonFeedbackGeneratorConfiguration;

@interface _UIButtonFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
}

+ (Class)_configurationClass;
- (id)_stats_key;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
@property(readonly, nonatomic, getter=_buttonConfiguration) _UIButtonFeedbackGeneratorConfiguration *buttonConfiguration;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end
