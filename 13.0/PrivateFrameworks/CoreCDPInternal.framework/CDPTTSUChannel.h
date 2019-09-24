//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPSecureChannelApprovingProxy-Protocol.h>
#import <CoreCDPInternal/CDPSecureChannelProxy-Protocol.h>

@class CUMessageSession, NSString;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy>
{
    CUMessageSession *_sharingSession;
    _Bool _approverBackupRecordsExist;
    unsigned long long _approveriCloudKeychainState;
    _Bool _sentInitialResponse;
}

- (void).cxx_destruct;
- (void)setApproveriCloudKeychainState:(unsigned long long)arg1;
- (void)setApproverBackupRecordsExist:(_Bool)arg1;
- (void)listenForPayloadsWithHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)approveriCloudKeychainState;
- (_Bool)approverBackupRecordsExist;
- (void)sendPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
