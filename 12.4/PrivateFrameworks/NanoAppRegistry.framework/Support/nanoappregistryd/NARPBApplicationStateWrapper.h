//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface NARPBApplicationStateWrapper : PBCodable <NSCopying>
{
    _Bool _isRemovedSystemApp;
    _Bool _isRestricted;
    struct {
        unsigned int isRemovedSystemApp:1;
        unsigned int isRestricted:1;
    } _has;
}

@property(nonatomic) _Bool isRemovedSystemApp; // @synthesize isRemovedSystemApp=_isRemovedSystemApp;
@property(nonatomic) _Bool isRestricted; // @synthesize isRestricted=_isRestricted;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsRemovedSystemApp;
@property(nonatomic) _Bool hasIsRestricted;

@end
