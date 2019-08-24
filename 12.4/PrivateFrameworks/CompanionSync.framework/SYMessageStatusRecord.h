//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SYMessageStatusRecord : NSObject
{
    _Bool _deviceACKReceived;
    _Bool _applicationACKReceived;
    _Bool _responseReceived;
    NSString *_messageID;
}

@property(nonatomic) _Bool responseReceived; // @synthesize responseReceived=_responseReceived;
@property(nonatomic) _Bool applicationACKReceived; // @synthesize applicationACKReceived=_applicationACKReceived;
@property(nonatomic) _Bool deviceACKReceived; // @synthesize deviceACKReceived=_deviceACKReceived;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) _Bool isComplete;
- (id)initWithMessageID:(id)arg1;

@end
