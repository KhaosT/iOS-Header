//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface _UIStatusBarTimeStringClientCache : NSObject
{
    NSCache *_timeStringCache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)ioSurfaceForTimeString:(id)arg1;
- (void)setIOSurface:(id)arg1 forTimeString:(id)arg2;
- (id)init;

@end
