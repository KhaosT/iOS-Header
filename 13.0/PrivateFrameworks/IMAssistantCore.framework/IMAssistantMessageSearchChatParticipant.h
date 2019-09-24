//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMAssistantMessageSearchChatParticipant : NSObject
{
    _Bool _isMe;
    NSString *_handle;
    NSArray *_contactIdentifiers;
}

@property(readonly, nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(readonly, copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (_Bool)matchesPerson:(id)arg1 withUnifiedContactIdentifiers:(id)arg2;
- (id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(_Bool)arg3;

@end
