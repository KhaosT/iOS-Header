//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface CAMAnimationDelegate : NSObject <CAAnimationDelegate>
{
    CDUnknownBlockType _completion;
    CDUnknownBlockType _start;
}

@property(copy, nonatomic) CDUnknownBlockType start; // @synthesize start=_start;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

