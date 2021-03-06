//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@interface PRRangeMeasurement : NSObject <NSCopying, NSSecureCoding>
{
    double _measurement;
    double _uncertainty;
}

+ (_Bool)supportsSecureCoding;
+ (id)measurementWithRange:(double)arg1 uncertainty:(double)arg2;
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, nonatomic) double measurement; // @synthesize measurement=_measurement;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(double)arg1 uncertainty:(double)arg2;

@end

