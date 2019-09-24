//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (TSUAdditions)
+ (id)keyPathsForValuesAffectingTsu_isPlayable;
+ (id)tsu_playableKeysWithKeys:(id)arg1;
+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;
- (_Bool)p_doesTrack:(id)arg1 matchCodecTypes:(id)arg2;
@property(readonly, nonatomic) _Bool tsu_isPlayable;
@property(readonly, nonatomic) struct CGSize naturalSizeWithPreferredTransforms;
@end
