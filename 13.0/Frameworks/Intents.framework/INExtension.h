//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INIntentHandlerProviding-Protocol.h>
#import <Intents/NSExtensionRequestHandling-Protocol.h>

@class INExtensionContext, NSString;

@interface INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProviding>
{
    INExtensionContext *_extensionContext;
}

+ (void)initialize;
@property(readonly, nonatomic) INExtensionContext *_extensionContext; // @synthesize _extensionContext;
- (void).cxx_destruct;
- (id)handlerForIntent:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
