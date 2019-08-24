//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUConversationMediaControllerXPCServer-Protocol.h>

@class NSSet, NSUUID, TUConversationMember;
@protocol TUConversationManagerXPCClient;

@protocol TUConversationManagerXPCServer <TUConversationMediaControllerXPCServer>
- (void)unregisterClient:(id <TUConversationManagerXPCClient>)arg1;
- (void)registerClient:(id <TUConversationManagerXPCClient>)arg1;
- (oneway void)buzzMember:(TUConversationMember *)arg1 conversationUUID:(NSUUID *)arg2;
- (oneway void)addRemoteMembers:(NSSet *)arg1 toConversationWithUUID:(NSUUID *)arg2;
- (oneway void)conversationsByGroupUUID:(void (^)(NSDictionary *))arg1;
@end
