//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMSetupSupport/NSObject-Protocol.h>

@class WKScriptMessage, WKUserContentController;

@protocol WKScriptMessageHandler <NSObject>
- (void)userContentController:(WKUserContentController *)arg1 didReceiveScriptMessage:(WKScriptMessage *)arg2;
@end
