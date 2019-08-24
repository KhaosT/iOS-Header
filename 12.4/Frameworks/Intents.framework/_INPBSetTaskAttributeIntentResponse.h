//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetTaskAttributeIntentResponse-Protocol.h>

@class NSString, _INPBTask;

@interface _INPBSetTaskAttributeIntentResponse : PBCodable <_INPBSetTaskAttributeIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBTask *_modifiedTask;
}

@property(retain, nonatomic) _INPBTask *modifiedTask; // @synthesize modifiedTask=_modifiedTask;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasModifiedTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
