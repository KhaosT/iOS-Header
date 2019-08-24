//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSResponse.h>

@interface TPSCallingLineIdRestrictionResponse : TPSResponse
{
    _Bool _editable;
    long long _state;
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
+ (id)unarchivedObjectClasses;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithsubscriptionContext:(id)arg1 editable:(_Bool)arg2 state:(long long)arg3 error:(id)arg4;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;

@end
