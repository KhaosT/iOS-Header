//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FCBackgroundTaskable <NSObject>
- (void)fc_setMinimumBackgroundFetchInterval:(double)arg1;
- (void)fc_endBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)fc_beginBackgroundTaskWithName:(NSString *)arg1 expirationHandler:(void (^)(void))arg2;
@end
