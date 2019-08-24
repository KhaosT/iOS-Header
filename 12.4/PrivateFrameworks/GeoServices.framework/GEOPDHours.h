//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDHoursThreshold, PBUnknownFields;

@interface GEOPDHours : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _days;
    struct GEOPDLocalTimeRange *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    GEOPDHoursThreshold *_hoursThreshold;
}

+ (id)completeOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (_Bool)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (id)_allHoursForPlaceData:(id)arg1;
+ (_Bool)operatingHoursAvailableForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOPDHoursThreshold *hoursThreshold; // @synthesize hoursThreshold=_hoursThreshold;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasHoursThreshold;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1;
- (void)addTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (void)clearTimeRanges;
@property(readonly, nonatomic) struct GEOPDLocalTimeRange *timeRanges;
@property(readonly, nonatomic) unsigned long long timeRangesCount;
- (int)StringAsDays:(id)arg1;
- (id)daysAsString:(int)arg1;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (int)dayAtIndex:(unsigned long long)arg1;
- (void)addDay:(int)arg1;
- (void)clearDays;
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;

@end
