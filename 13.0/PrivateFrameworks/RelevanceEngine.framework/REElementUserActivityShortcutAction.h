//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REElementUserActivityAction.h>

@interface REElementUserActivityShortcutAction : REElementUserActivityAction
{
    _Bool _isLocalDonation;
}

@property(readonly, nonatomic) _Bool isLocalDonation; // @synthesize isLocalDonation=_isLocalDonation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_submitMetricsWithSuccess:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 isLocalDonation:(_Bool)arg3;

@end
