//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPUserCredentials : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_icloudUserMapsAuthToken;
    NSString *_icloudUserPersonId;
    struct {
        unsigned int read_icloudUserMapsAuthToken:1;
        unsigned int read_icloudUserPersonId:1;
        unsigned int wrote_icloudUserMapsAuthToken:1;
        unsigned int wrote_icloudUserPersonId:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (id)_credentialsForPrimaryICloudAccount;
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
@property(retain, nonatomic) NSString *icloudUserMapsAuthToken;
@property(readonly, nonatomic) _Bool hasIcloudUserMapsAuthToken;
- (void)_readIcloudUserMapsAuthToken;
@property(retain, nonatomic) NSString *icloudUserPersonId;
@property(readonly, nonatomic) _Bool hasIcloudUserPersonId;
- (void)_readIcloudUserPersonId;

@end

