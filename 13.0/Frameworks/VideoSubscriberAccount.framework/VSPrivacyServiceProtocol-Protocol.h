//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSString;

@protocol VSPrivacyServiceProtocol <NSObject>
- (void)requestAccessForAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(NSString *)arg3 providerIsSupported:(_Bool)arg4 identityProviderID:(NSString *)arg5 allowUI:(_Bool)arg6 completionHandler:(void (^)(unsigned long long, VSOptional *))arg7;
- (void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(void (^)(unsigned long long))arg2;
@end
