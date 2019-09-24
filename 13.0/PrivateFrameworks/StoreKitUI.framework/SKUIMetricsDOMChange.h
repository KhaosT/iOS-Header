//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SKUIMetricsDOMChange : NSObject <NSCopying>
{
    _Bool _fromDeferredMessage;
    double _buildStartTime;
    double _buildEndTime;
    double _renderStartTime;
    double _renderEndTime;
}

@property(nonatomic, getter=isFromDeferredMessage) _Bool fromDeferredMessage; // @synthesize fromDeferredMessage=_fromDeferredMessage;
@property(nonatomic) double renderEndTime; // @synthesize renderEndTime=_renderEndTime;
@property(nonatomic) double renderStartTime; // @synthesize renderStartTime=_renderStartTime;
@property(nonatomic) double buildEndTime; // @synthesize buildEndTime=_buildEndTime;
@property(nonatomic) double buildStartTime; // @synthesize buildStartTime=_buildStartTime;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReportDomBuildTimesMessagePayload:(id)arg1;

@end
