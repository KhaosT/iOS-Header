//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelKind.h>

@class MPModelAlbumKind;

@interface MPModelComposerKind : MPModelKind
{
    MPModelAlbumKind *_albumKind;
}

+ (_Bool)supportsSecureCoding;
+ (id)kindWithAlbumKind:(id)arg1;
+ (id)identityKind;
@property(readonly, copy, nonatomic) MPModelAlbumKind *albumKind; // @synthesize albumKind=_albumKind;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;

@end

