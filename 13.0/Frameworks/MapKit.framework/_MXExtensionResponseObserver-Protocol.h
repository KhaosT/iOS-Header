//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSError, NSObject;
@protocol NSSecureCoding;

@protocol _MXExtensionResponseObserver <NSObject>
- (void)receiveUpdatedResponse:(NSObject<NSSecureCoding> *)arg1 error:(NSError *)arg2;
@end
