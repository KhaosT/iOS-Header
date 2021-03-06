//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DAEASOAuthFramework/UIWebViewDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSError, NSExtension, NSString;

@interface DAEASOAuthWebViewController : UIViewController <UIWebViewDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    CDUnknownBlockType _presentationBlock;
    UIViewController *_serviceViewController;
    NSExtension *_extension;
    NSError *_extensionCancellationError;
    _Bool _extensionRequestDidComplete;
    NSString *_authURI;
    unsigned long long _oauthType;
    _Bool _isFirstTimeSetup;
    CDUnknownBlockType _completion;
}

+ (void)presentInternetOfflineError;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)_presentUsernameMismatchAlert;
- (void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2 extensionCompletion:(CDUnknownBlockType)arg3;
- (void)_extensionRequestDidCompleteWithTokens:(id)arg1 extensionCompletion:(CDUnknownBlockType)arg2;
- (void)_extensionRequestDidCancelWithError:(id)arg1;
- (void)loadView;
- (void)_didInstantiateRemoteViewController;
- (void)_commonInitializationWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 accountDescription:(id)arg4 presentationBlock:(CDUnknownBlockType)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 authURI:(id)arg3 accountType:(unsigned long long)arg4 userName:(id)arg5 accountDescription:(id)arg6 isFirstTimeSetup:(_Bool)arg7 presentationBlock:(CDUnknownBlockType)arg8;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3;
- (id)initWithAccountDescription:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

