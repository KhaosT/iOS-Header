//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchConnectivity/WCXPCManagerSharedProtocol-Protocol.h>

@class NSString;

@protocol WCXPCManagerDelegate <WCXPCManagerSharedProtocol>
- (_Bool)supportsActiveDeviceSwitch;
- (NSString *)currentPairingID;
- (void)xpcConnectionInterrupted;
@end
