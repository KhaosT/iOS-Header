//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface FCCKPQueryRetrieveResponse : PBCodable <NSCopying>
{
    NSData *_continuationMarker;
    NSMutableArray *_queryResults;
}

@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) NSMutableArray *queryResults; // @synthesize queryResults=_queryResults;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasContinuationMarker;
- (id)queryResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryResultsCount;
- (void)addQueryResults:(id)arg1;
- (void)clearQueryResults;
- (void)dealloc;

@end
