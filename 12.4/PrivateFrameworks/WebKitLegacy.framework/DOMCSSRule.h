//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMObject.h>

@class DOMCSSStyleSheet, NSString;

@interface DOMCSSRule : DOMObject
{
}

@property(readonly) DOMCSSRule *parentRule;
@property(readonly) DOMCSSStyleSheet *parentStyleSheet;
@property(copy) NSString *cssText;
@property(readonly) unsigned short type;
- (void)dealloc;

@end

