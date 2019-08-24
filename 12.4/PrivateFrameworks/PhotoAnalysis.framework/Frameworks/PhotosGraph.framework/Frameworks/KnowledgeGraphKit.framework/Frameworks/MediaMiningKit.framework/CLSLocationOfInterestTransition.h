//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSUUID;

@interface CLSLocationOfInterestTransition : NSObject
{
    NSUUID *_identifier;
    NSDateInterval *_transitionInterval;
    long long _transportationMode;
}

@property(readonly, nonatomic) long long transportationMode; // @synthesize transportationMode=_transportationMode;
@property(readonly, nonatomic) NSDateInterval *transitionInterval; // @synthesize transitionInterval=_transitionInterval;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 transitionInterval:(id)arg2 transportationMode:(long long)arg3;

@end
