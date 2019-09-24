//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSSO/NSObject-Protocol.h>

@class NSDictionary, NSError, SOAuthorizationCredential;

@protocol SOExtensionDelegate <NSObject>
- (void)authorizationDidCompleteWithCredential:(SOAuthorizationCredential *)arg1 error:(NSError *)arg2;
- (void)presentAuthorizationViewControllerWithHints:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
