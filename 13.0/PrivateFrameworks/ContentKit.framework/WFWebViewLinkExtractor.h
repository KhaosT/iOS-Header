//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFWebViewLinkExtractor : NSObject
{
}

+ (id)linkPositionRetrievalJavaScript;
+ (void)extractLinksFromScriptResult:(id)arg1 withDestinationWidth:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)extractLinksFromWKWebView:(id)arg1 withDestinationWidth:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
