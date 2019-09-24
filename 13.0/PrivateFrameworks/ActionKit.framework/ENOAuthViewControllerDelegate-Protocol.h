//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class ENOAuthViewController, NSError, NSURL;

@protocol ENOAuthViewControllerDelegate <NSObject>
- (void)oauthViewController:(ENOAuthViewController *)arg1 receivedOAuthCallbackURL:(NSURL *)arg2;
- (void)oauthViewController:(ENOAuthViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)oauthViewControllerDidSwitchProfile:(ENOAuthViewController *)arg1;
- (void)oauthViewControllerDidCancel:(ENOAuthViewController *)arg1;
@end
