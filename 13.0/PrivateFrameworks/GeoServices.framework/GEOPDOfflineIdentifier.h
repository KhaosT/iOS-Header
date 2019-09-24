//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineIdentifier : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    unsigned long long _offlineId;
    NSString *_offlineName;
    struct {
        unsigned int has_offlineId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_latLng:1;
        unsigned int read_offlineName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_offlineId:1;
        unsigned int wrote_offlineName:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) GEOLatLng *latLng;
@property(readonly, nonatomic) _Bool hasLatLng;
- (void)_readLatLng;
@property(nonatomic) _Bool hasOfflineId;
@property(nonatomic) unsigned long long offlineId;
@property(retain, nonatomic) NSString *offlineName;
@property(readonly, nonatomic) _Bool hasOfflineName;
- (void)_readOfflineName;

@end
