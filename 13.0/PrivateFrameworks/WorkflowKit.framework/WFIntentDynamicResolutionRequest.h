//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFIntentDynamicResolutionRequest : NSObject
{
    _Bool _cancelled;
    CDUnknownBlockType _resolutionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resolutionBlock; // @synthesize resolutionBlock=_resolutionBlock;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;
- (id)init;

@end
