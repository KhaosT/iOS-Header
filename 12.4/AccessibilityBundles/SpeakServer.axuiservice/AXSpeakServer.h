//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXUIService-Protocol.h"

@class AXCharacterSoundMap, AXDispatchTimer, AXElement, AXIndexMap, AXSpeechAction, AXSpeechManager, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AXSpeakServer : NSObject <AXUIService>
{
    NSString *_currentLanguage;
    _Bool _audioInitialized;
    _Bool _audioActive;
    _Bool _pasteOperationOccurred;
    AXDispatchTimer *_audioDeactivator;
    AXDispatchTimer *_feedbackDelayTimer;
    AXIndexMap *_letterPunctuationTable;
    NSObject<OS_dispatch_queue> *_punctuationLoaderQueue;
    NSArray *_availableLanguages;
    NSDictionary *_keyboardToLanguage;
    AXSpeechAction *_lastSpeechAction;
    AXElement *_responderElement;
    NSString *_elementValueText;
    AXSpeechManager *_speechManager;
    AXCharacterSoundMap *_characterSoundMap;
    double _lastTextReplacementOccurredTime;
}

+ (id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned long long)arg1;
+ (id)sharedInstance;
@property(nonatomic) double lastTextReplacementOccurredTime; // @synthesize lastTextReplacementOccurredTime=_lastTextReplacementOccurredTime;
@property(retain, nonatomic) AXCharacterSoundMap *characterSoundMap; // @synthesize characterSoundMap=_characterSoundMap;
@property(retain, nonatomic) AXSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) NSString *elementValueText; // @synthesize elementValueText=_elementValueText;
@property(retain, nonatomic) AXElement *responderElement; // @synthesize responderElement=_responderElement;
@property(retain, nonatomic) AXSpeechAction *lastSpeechAction; // @synthesize lastSpeechAction=_lastSpeechAction;
- (void).cxx_destruct;
- (id)_feedbackForCharacter:(id)arg1 andVoiceIdentifier:(id)arg2;
- (void)_speakAction:(id)arg1;
- (id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id *)arg4;
- (void)processDelayedTypingFeedback:(id)arg1;
- (void)_processTypingFeedback:(id)arg1;
- (id)_processCharacterForPunctuation:(id)arg1;
- (id)letterPunctuationTable;
- (void)processWordOutput:(id)arg1;
- (void)processAutocorrectionOutput:(id)arg1;
- (id)_prepareSpeechAction;
- (void)handleValueChange:(id)arg1;
- (void)handleFirstValueChange;
- (void)handleTextReplacementOccurred:(id)arg1;
- (void)_updateSpokenLangugage:(id)arg1;
- (id)_massageKeyboardLanguage:(id)arg1;
- (void)_observeNotifications:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
