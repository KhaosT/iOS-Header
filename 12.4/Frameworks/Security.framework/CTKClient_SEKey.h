//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CTKClient_SEKey : NSObject
{
    id _keyHolder;
    id _accessControl;
    id _keyType;
}

@property(readonly) id keyType; // @synthesize keyType=_keyType;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
@property(readonly) NSDictionary *attributes;
- (_Bool)lifetimeControlWithType:(long long)arg1 error:(id *)arg2;
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id *)arg3;
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (id)computeSharedSecret:(id)arg1 error:(id *)arg2;
- (id)signDigest:(id)arg1 error:(id *)arg2;
- (id)publicKeyWithError:(id *)arg1;
- (_Bool)deleteWithError:(id *)arg1;
@property(readonly) id objectID;
- (id)initWithKeyType:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 ACMContext:(id)arg3 applePayEnabled:(_Bool)arg4 error:(id *)arg5;
@property(readonly) struct __SecAccessControl *accessControl;
- (id)initWithObjectID:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
@property(readonly) struct __SecKey *key;

@end

