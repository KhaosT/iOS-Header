//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (MapsSharedExtras)
+ (id)_maps_cancellationError;
+ (id)storePlatformErrorWithUserInfo:(id)arg1;
+ (id)searchErrorWithUserInfo:(id)arg1;
- (_Bool)_maps_isErrorOfDomain:(id)arg1 code:(long long)arg2;
@property(readonly, nonatomic) _Bool _maps_isCancellation;
@end
