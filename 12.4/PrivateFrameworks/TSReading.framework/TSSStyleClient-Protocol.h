//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKModel-Protocol.h>

@class NSSet;

@protocol TSSStyleClient <TSKModel>
- (void)replaceReferencedStylesUsingBlock:(TSSStyle * (^)(TSSStyle *))arg1;
- (NSSet *)referencedStyles;
@end
