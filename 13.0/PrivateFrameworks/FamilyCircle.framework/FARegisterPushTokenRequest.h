//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest
{
    NSData *_pushToken;
}

@property(readonly, copy) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPushToken:(id)arg1;

@end

