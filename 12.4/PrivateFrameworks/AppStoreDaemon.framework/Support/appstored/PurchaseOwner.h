//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber;

@interface PurchaseOwner : NSObject <NSCopying>
{
    long long _ownerType;
    NSNumber *_purchaserDSID;
}

+ (id)primaryOwnerWithDSID:(id)arg1;
+ (id)machineOwner;
+ (id)familyOwnerWithDSID:(id)arg1;
+ (id)externalOwner;
+ (id)alternateOwnerWithDSID:(id)arg1;
@property(readonly) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(readonly) long long ownerType; // @synthesize ownerType=_ownerType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToOwner:(id)arg1;
@property(readonly, getter=isRestorable) _Bool restorable;
- (id)_initWithOwnerType:(long long)arg1 purchaserDSID:(id)arg2;

@end
