//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDHyperlinkRegion : NSObject
{
    NSURL *mURL;
    TSUBezierPath *mBezierPath;
}

+ (id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2;
@property(retain, nonatomic) TSUBezierPath *bezierPath; // @synthesize bezierPath=mBezierPath;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=mURL;
- (id)initWithURL:(id)arg1 bezierPath:(id)arg2;
- (void)dealloc;

@end

