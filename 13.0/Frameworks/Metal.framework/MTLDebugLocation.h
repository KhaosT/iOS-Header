//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLDebugInstrumentationData, MTLDebugSubProgram;

__attribute__((visibility("hidden")))
@interface MTLDebugLocation : NSObject
{
    MTLDebugInstrumentationData *_data;
    struct DebugLocation *_debugLoc;
}

- (void)dealloc;
- (oneway void)releaseInternal;
- (oneway void)release;
- (id)retain;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
@property(readonly, nonatomic) MTLDebugLocation *inlinedAt;
@property(readonly, nonatomic) unsigned int column;
@property(readonly, nonatomic) unsigned int line;
@property(readonly, nonatomic) MTLDebugSubProgram *scope;

@end

