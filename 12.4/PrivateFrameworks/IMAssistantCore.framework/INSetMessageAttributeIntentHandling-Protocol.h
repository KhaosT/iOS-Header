//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class INSetMessageAttributeIntent;

@protocol INSetMessageAttributeIntentHandling <NSObject>
- (void)handleSetMessageAttribute:(INSetMessageAttributeIntent *)arg1 completion:(void (^)(INSetMessageAttributeIntentResponse *))arg2;

@optional
- (void)resolveAttributeForSetMessageAttribute:(INSetMessageAttributeIntent *)arg1 withCompletion:(void (^)(INMessageAttributeResolutionResult *))arg2;
- (void)confirmSetMessageAttribute:(INSetMessageAttributeIntent *)arg1 completion:(void (^)(INSetMessageAttributeIntentResponse *))arg2;
@end
