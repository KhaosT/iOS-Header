//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKMessageClassifier : NSObject
{
}

+ (_Bool)questionClassification:(id)arg1 withLanguageIdentifier:(id)arg2;
+ (id)messageClassification:(id)arg1 withLanguageIdentifier:(id)arg2 conversationTurns:(id)arg3;
+ (id)messageClassification:(id)arg1 withLanguageIdentifier:(id)arg2;
+ (id)preferredLanguages;
+ (void)setPreferredLanguages:(id)arg1;

@end
