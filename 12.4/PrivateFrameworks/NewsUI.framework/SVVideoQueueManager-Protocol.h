//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol SVVideoQueue, SVVideoQueueModifying;

@protocol SVVideoQueueManager <NSObject>
- (void)removeModifier:(id <SVVideoQueueModifying>)arg1;
- (void)addModifier:(id <SVVideoQueueModifying>)arg1;
- (void)replaceCurrentQueueWithQueue:(id <SVVideoQueue>)arg1;
@end
