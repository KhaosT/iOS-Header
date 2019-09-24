//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEORPUpdatedLabel, NSMutableArray, NSString, PBDataReader;

@interface GEORPDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    GEOMapRegion *_displayRegion;
    GEORPUpdatedLabel *_label;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSMutableArray *_places;
    int _directionsType;
    int _displayStyle;
    int _mapType;
    struct {
        unsigned int has_directionsType:1;
        unsigned int has_displayStyle:1;
        unsigned int has_mapType:1;
        unsigned int read_displayRegion:1;
        unsigned int read_label:1;
        unsigned int read_localizedDescription:1;
        unsigned int read_localizedTitle:1;
        unsigned int read_places:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_label:1;
        unsigned int wrote_localizedDescription:1;
        unsigned int wrote_localizedTitle:1;
        unsigned int wrote_places:1;
        unsigned int wrote_directionsType:1;
        unsigned int wrote_displayStyle:1;
        unsigned int wrote_mapType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)placeType;
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
- (int)StringAsMapType:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapType;
@property(nonatomic) int mapType;
- (int)StringAsDirectionsType:(id)arg1;
- (id)directionsTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDirectionsType;
@property(nonatomic) int directionsType;
@property(retain, nonatomic) GEORPUpdatedLabel *label;
@property(readonly, nonatomic) _Bool hasLabel;
- (void)_readLabel;
- (id)placeAtIndex:(unsigned long long)arg1;
- (unsigned long long)placesCount;
- (void)_addNoFlagsPlace:(id)arg1;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
@property(retain, nonatomic) NSMutableArray *places;
- (void)_readPlaces;
@property(retain, nonatomic) GEOMapRegion *displayRegion;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
- (void)_readDisplayRegion;
@property(retain, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) _Bool hasLocalizedDescription;
- (void)_readLocalizedDescription;
@property(retain, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) _Bool hasLocalizedTitle;
- (void)_readLocalizedTitle;
- (int)StringAsDisplayStyle:(id)arg1;
- (id)displayStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasDisplayStyle;
@property(nonatomic) int displayStyle;

@end
