//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPArtworkDataSourceVisualIdenticality-Protocol.h>

@class NSString;

@interface MPNowPlayingContentItemArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality>
{
    NSString *_identifier;
    NSString *_artworkIdentifier;
}

@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 artworkIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
