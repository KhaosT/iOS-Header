//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@interface MPModelStoreBrowseMusicKitRequestOperation : MPStoreModelRequestOperation
{
}

- (id)radioGenresURLWithStoreBagDictionary:(id)arg1;
- (id)browseURLWithStoreBagDictionary:(id)arg1;
- (id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id *)arg3;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;

@end

