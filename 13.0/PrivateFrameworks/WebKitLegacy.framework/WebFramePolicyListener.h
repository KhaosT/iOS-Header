//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebFormSubmissionListener-Protocol.h>
#import <WebKitLegacy/WebPolicyDecisionListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener>
{
    struct RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame>> _frame;
    struct PolicyCheckIdentifier _identifier;
    Function_b3117096 _policyFunction;
    struct RetainPtr<NSURL> _appLinkURL;
    unsigned char _defaultPolicy;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)continue;
- (void)use;
- (void)download;
- (void)ignore;
- (void)receivedPolicyDecision:(unsigned char)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithFrame:(struct Frame *)arg1 identifier:(struct PolicyCheckIdentifier)arg2 policyFunction:(Function_b3117096 *)arg3 defaultPolicy:(unsigned char)arg4 appLinkURL:(id)arg5;
- (id)initWithFrame:(struct Frame *)arg1 identifier:(struct PolicyCheckIdentifier)arg2 policyFunction:(Function_b3117096 *)arg3 defaultPolicy:(unsigned char)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
