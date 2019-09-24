//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRCarPlayDNDService-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class CARAutomaticDNDStatus, NSString;

@interface CARDNDServiceAgent : NSObject <NSXPCListenerDelegate, CRCarPlayDNDService>
{
    CARAutomaticDNDStatus *_status;
}

@property(retain, nonatomic) CARAutomaticDNDStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)internalUtilityToolWithReply:(CDUnknownBlockType)arg1;
- (void)setInternalAutoReplyWhitelist:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)internalAutoReplyWhitelistWithReply:(CDUnknownBlockType)arg1;
- (void)disableDNDUntilEndOfDriveWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAutoReplyMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)autoReplyMessageWithReply:(CDUnknownBlockType)arg1;
- (void)setAllowedAutoReplyAudience:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)allowedAutoReplyAudienceWithReply:(CDUnknownBlockType)arg1;
- (void)completeDNDBuddyWithOption:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setDNDTriggerMode:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchDNDTriggerModeWithReply:(CDUnknownBlockType)arg1;
- (void)shouldDisplayExitConfirmationWithReply:(CDUnknownBlockType)arg1;
- (void)resetAutomaticDNDPreferencesWithReply:(CDUnknownBlockType)arg1;
- (void)setCarPlayAutomaticDNDActive:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)isCarPlayAutomaticDNDActiveWithReply:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
