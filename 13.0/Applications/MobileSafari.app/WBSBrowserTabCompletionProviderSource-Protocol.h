//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WBSBrowserTabCompletionInfo, WBSBrowserTabCompletionProvider;

@protocol WBSBrowserTabCompletionProviderSource <NSObject>
- (WBSBrowserTabCompletionInfo *)selectedTabInfoForBrowserTabCompletionProvider:(WBSBrowserTabCompletionProvider *)arg1;
- (NSArray *)tabInfosForBrowserTabCompletionProvider:(WBSBrowserTabCompletionProvider *)arg1;
@end
