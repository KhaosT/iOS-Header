//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AWAttentionAwarenessConfiguration;

@protocol AWRemoteClient
- (void)useUnitTestSampling:(_Bool)arg1;
- (void)pollWithTimeout:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)resetAttentionLostTimer;
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)getLastEvent:(void (^)(AWAttentionEvent *))arg1;
- (void)setClientConfig:(AWAttentionAwarenessConfiguration *)arg1 shouldReset:(_Bool)arg2;
- (void)invalidate;
@end
