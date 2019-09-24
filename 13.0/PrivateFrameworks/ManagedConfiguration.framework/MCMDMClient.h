//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface MCMDMClient : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processDeviceRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)processDeviceRequest:(id)arg1 outError:(id *)arg2;
- (int)accessRights;
- (_Bool)isActivationLockAllowedWhileSupervised;
- (_Bool)isManagedByMDM;
- (void)uprootMDM;
- (void)migrateMDMWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulatePushIfNetworkTetheredWithCompletion:(CDUnknownBlockType)arg1;
- (void)simulatePush;
- (void)retryNotNowResponse;
- (void)scheduleTokenUpdateIfNecessary;
- (void)scheduleTokenUpdate;
- (void)notifyNewConfiguration;
- (_Bool)checkOutCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 topic:(id)arg3 signMessage:(_Bool)arg4 isUserEnrollment:(_Bool)arg5 enrollmentID:(id)arg6 outError:(id *)arg7;
- (id)deviceEnrollmentAuthenticationDict;
- (id)userEnrollmentAuthenticationDictWithEnrollmentID:(id)arg1;
- (_Bool)authenticateWithCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 topic:(id)arg3 useDevelopmentAPNS:(_Bool)arg4 signMessage:(_Bool)arg5 isUserEnrollment:(_Bool)arg6 enrollmentID:(id)arg7 outError:(id *)arg8;
- (void)_createAndStartMDMXPCConnection;
- (void)dealloc;

@end
