//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface TFMemoryUsage : PBCodable <NSCopying>
{
    unsigned long long _availableBytes;
    unsigned long long _totalBytes;
    struct {
        unsigned int availableBytes:1;
        unsigned int totalBytes:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTotalBytes;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(nonatomic) _Bool hasAvailableBytes;
@property(nonatomic) unsigned long long availableBytes; // @synthesize availableBytes=_availableBytes;

@end
