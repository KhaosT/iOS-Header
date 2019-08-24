//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/VMSpeechRecognizerOperation.h>

@protocol VMSpeechRecognitionRequest;

@interface VMSpeechRecognitionRequestOperation : VMSpeechRecognizerOperation
{
    _Bool _forceOfflineRecognition;
    id <VMSpeechRecognitionRequest> _speechRecognitionRequest;
}

@property(retain) id <VMSpeechRecognitionRequest> speechRecognitionRequest; // @synthesize speechRecognitionRequest=_speechRecognitionRequest;
@property _Bool forceOfflineRecognition; // @synthesize forceOfflineRecognition=_forceOfflineRecognition;
- (void).cxx_destruct;
- (id)initWithSpeechRecognizer:(id)arg1 speechRecognitionRequest:(id)arg2;
- (id)initWithSpeechRecognizer:(id)arg1;

@end
