//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest
{
    long long _filteringPolicy;
    long long _requestEndpoint;
    NSURL *_customForYouURL;
}

+ (id)allSupportedSectionProperties;
+ (id)allSupportedItemProperties;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSURL *customForYouURL; // @synthesize customForYouURL=_customForYouURL;
@property(nonatomic) long long requestEndpoint; // @synthesize requestEndpoint=_requestEndpoint;
@property(nonatomic) long long filteringPolicy; // @synthesize filteringPolicy=_filteringPolicy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
