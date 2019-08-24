//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSArray, NSMutableDictionary;

@interface GKPlayerMultiPhotoView : UIImageView
{
    NSArray *_players;
    NSMutableDictionary *_photoImages;
}

@property(retain, nonatomic) NSMutableDictionary *photoImages; // @synthesize photoImages=_photoImages;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
- (void)refreshPhotos;
- (void)updateImage;
- (void)dealloc;

@end
