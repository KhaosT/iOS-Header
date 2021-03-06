//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDPinPairingDialog.h"

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDPinPairingDialog_ATV : MRDPinPairingDialog
{
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_titleKey;
    NSString *_pinKey;
    NSString *_messageKey;
    NSString *_timeoutKey;
}

- (void).cxx_destruct;
- (void)closeAll;
- (void)closeForClient:(id)arg1 userCancelled:(_Bool)arg2;
- (void)closeForClient:(id)arg1;
- (void)showWithPin:(id)arg1 forClient:(id)arg2;
- (void)dealloc;
- (id)init;

@end

