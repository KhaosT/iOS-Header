//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSDate, NSError, NSUUID;

@interface MNRealtimeUpdate : NSObject <NSSecureCoding>
{
    NSUUID *_routeID;
    NSDate *_lastUpdated;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, nonatomic) NSUUID *routeID; // @synthesize routeID=_routeID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
