//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutInstruction-Protocol.h>

@class NSString;

@interface SXFirstViewportLayoutInstruction : NSObject <SXLayoutInstruction>
{
    _Bool _fullfilled;
}

@property(nonatomic) _Bool fullfilled; // @synthesize fullfilled=_fullfilled;
- (void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2;
- (_Bool)isFulfilledForBlueprint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
