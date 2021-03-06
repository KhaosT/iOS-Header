//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTTransitionScheduler-Protocol.h>

@interface AVTSynchronousTransitionScheduler : NSObject <AVTTransitionScheduler>
{
    _Bool _isRunningEvent;
    CDUnknownBlockType _eventHandler;
}

@property(nonatomic) _Bool isRunningEvent; // @synthesize isRunningEvent=_isRunningEvent;
@property(readonly, copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)didCompleteEvent;
- (void)stop;
- (void)scheduleEvent;
- (id)initWithEventHandler:(CDUnknownBlockType)arg1;

@end

