//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FCNewsAppConfiguration, FCOperationCanceling;

@protocol FRBackgroundFetchable <NSObject>
- (id <FCOperationCanceling>)backgroundFetchWithAppConfiguration:(id <FCNewsAppConfiguration>)arg1 completionHandler:(void (^)(unsigned long long))arg2;
@end
