//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSString;

@interface PHAssetCollection (PhotosUICore)
+ (id)px_importHistoryAssetCollection;
+ (id)px_smartAlbumWithSubtype:(long long)arg1;
+ (id)px_otherAlbumsSubtypes;
+ (id)px_mediaTypeSmartAlbumSubtypes;
@property(readonly, copy, nonatomic) NSString *px_estimatedAssetsCountLocalizedString;
- (_Bool)px_allowsAssetsDrop;
- (_Bool)px_isUserCreated;
- (_Bool)px_shouldUseFacesRectForSmartCropping;
@end

