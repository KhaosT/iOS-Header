//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding>
{
    long long _sequenceNumber;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (id)description;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSequenceNumber:(long long)arg1;

@end

