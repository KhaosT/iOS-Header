//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDAppContainerTuple, NSString;

__attribute__((visibility("hidden")))
@interface CKDAppContainerAccountTuple : NSObject <NSCopying>
{
    CKDAppContainerTuple *_appContainerTuple;
    NSString *_accountID;
}

@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) CKDAppContainerTuple *appContainerTuple; // @synthesize appContainerTuple=_appContainerTuple;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppContainerTuple:(id)arg1 accountID:(id)arg2;

@end

