//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TransitPreferences : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _showICFares;
    int _sortOption;
    long long _disabledModes;
    NSNumber *_surchargeOption;
}

+ (long long)disabledModesByTogglingMode:(long long)arg1 inModes:(long long)arg2;
+ (_Bool)isModeDisabled:(long long)arg1 inModes:(long long)arg2;
+ (long long)enabledModesFromDisabled:(long long)arg1;
@property(nonatomic) _Bool showICFares; // @synthesize showICFares=_showICFares;
@property(retain, nonatomic) NSNumber *surchargeOption; // @synthesize surchargeOption=_surchargeOption;
@property(nonatomic) int sortOption; // @synthesize sortOption=_sortOption;
@property(nonatomic) long long disabledModes; // @synthesize disabledModes=_disabledModes;
- (void).cxx_destruct;
- (_Bool)isModeDisabled:(long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTransitPreferences:(id)arg1;
- (void)_copyPropertiesTo:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)transitPreferencesByOverridingPropertiesWithUserInfo:(id)arg1;

@end
