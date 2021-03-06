//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, AVVideoComposition, CAShapeLayer, ISVideoPlayerUIView, ISWrappedAVPlayer, NSObject, UIImageView, _PULivePhotoTrimScrubberLoupeViewImageRequest;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PULivePhotoTrimScrubberLoupeView : UIView
{
    UIImageView *_imageView;
    CAShapeLayer *_borderLayer;
    _Bool _imageIsValid;
    NSObject<OS_dispatch_queue> *_workQueue;
    _PULivePhotoTrimScrubberLoupeViewImageRequest *_currentImageRequest;
    ISVideoPlayerUIView *_videoView;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    CDStruct_1b6d18a9 _sourceTime;
}

@property(nonatomic) CDStruct_1b6d18a9 sourceTime; // @synthesize sourceTime=_sourceTime;
@property(copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_updateBorderLayerPath;
- (void)_PULivePhotoTrimScrubberLoupeView_commonInit;
- (void)_presentImage:(id)arg1 forSourceTime:(CDStruct_1b6d18a9)arg2;
- (void)_extractImageFromImageRequest:(id)arg1;
- (void)_updateImageIfNeeded;
- (void)_invalidateImage;
@property(retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadImage;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

