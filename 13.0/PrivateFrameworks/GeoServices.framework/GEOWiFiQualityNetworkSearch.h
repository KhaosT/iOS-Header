//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityNetworkSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSMutableArray *_ess;
    GEOLocation *_location;
    unsigned long long _radius;
    struct {
        unsigned int has_radius:1;
        unsigned int read_ess:1;
        unsigned int read_location:1;
        unsigned int wrote_ess:1;
        unsigned int wrote_location:1;
        unsigned int wrote_radius:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)essType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) unsigned long long radius;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)_readLocation;
- (id)essAtIndex:(unsigned long long)arg1;
- (unsigned long long)essCount;
- (void)_addNoFlagsEss:(id)arg1;
- (void)addEss:(id)arg1;
- (void)clearEss;
@property(retain, nonatomic) NSMutableArray *ess;
- (void)_readEss;

@end
