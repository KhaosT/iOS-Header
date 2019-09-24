//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface WLDAppVisibilityManager : NSObject
{
    _Bool _updateRequestedOnNetworkChange;
    _Bool _updateRequestedOnAccountChange;
    NSOperationQueue *_queue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)updateAppVisibility;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_networkReachabilityDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
