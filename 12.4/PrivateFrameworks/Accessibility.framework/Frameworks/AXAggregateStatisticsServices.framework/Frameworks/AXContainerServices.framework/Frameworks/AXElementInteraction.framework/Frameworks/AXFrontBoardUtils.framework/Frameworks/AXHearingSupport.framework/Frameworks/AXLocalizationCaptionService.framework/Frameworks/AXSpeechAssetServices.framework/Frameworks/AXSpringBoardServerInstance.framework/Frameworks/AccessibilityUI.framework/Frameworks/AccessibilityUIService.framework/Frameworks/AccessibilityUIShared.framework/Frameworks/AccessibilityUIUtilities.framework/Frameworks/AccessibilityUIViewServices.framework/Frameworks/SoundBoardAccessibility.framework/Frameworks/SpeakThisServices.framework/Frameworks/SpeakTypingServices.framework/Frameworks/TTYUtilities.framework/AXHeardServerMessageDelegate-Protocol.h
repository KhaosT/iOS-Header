//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TTYUtilities/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol AXHeardServerMessageDelegate <NSObject>
- (void)handleMessageError:(NSString *)arg1 destructive:(_Bool)arg2;
- (void)handleMessageWithPayload:(NSDictionary *)arg1 forIdentifier:(unsigned long long)arg2;
@end
