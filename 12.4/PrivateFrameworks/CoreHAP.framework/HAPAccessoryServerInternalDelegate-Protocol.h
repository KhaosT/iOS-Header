//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPAccessoryServer, HAPCharacteristic, NSArray;

@protocol HAPAccessoryServerInternalDelegate <NSObject>

@optional
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateValueForCharacteristic:(HAPCharacteristic *)arg2;
- (NSArray *)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(HAPAccessoryServer *)arg1;
@end
