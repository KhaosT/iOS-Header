//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUAssetHidingHelper;

__attribute__((visibility("hidden")))
@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer
{
    _Bool _isHiding;
    PUAssetHidingHelper *_assetHidingHelper;
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(nonatomic) _Bool isHiding; // @synthesize isHiding=_isHiding;
@property(retain, nonatomic) PUAssetHidingHelper *assetHidingHelper; // @synthesize assetHidingHelper=_assetHidingHelper;
- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

