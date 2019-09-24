//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLImageLoadingUtilities : NSObject
{
}

+ (struct NSObject *)synchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(_Bool)arg3 outImageProperties:(const struct __CFDictionary **)arg4 outDeliveredPlaceholder:(_Bool *)arg5;
+ (struct NSObject *)synchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(_Bool)arg3 optimalSourcePixelSize:(struct CGSize)arg4 networkAccessAllowed:(_Bool)arg5 networkAccessForced:(_Bool)arg6 trackCPLDownload:(_Bool)arg7 outImageProperties:(const struct __CFDictionary **)arg8 outImageDataInfo:(id *)arg9 outCPLDownloadContext:(id *)arg10;
+ (void)imageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(_Bool)arg3 optimalSourcePixelSize:(struct CGSize)arg4 networkAccessAllowed:(_Bool)arg5 networkAccessForced:(_Bool)arg6 trackCPLDownload:(_Bool)arg7 isCanceledHandler:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9 sync:(_Bool)arg10;
+ (void)_assetsdImageForAsset:(id)arg1 withFormat:(id)arg2 allowPlaceholder:(_Bool)arg3 optimalSourcePixelSize:(struct CGSize)arg4 networkAccessAllowed:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 sync:(_Bool)arg7 isCanceledHandler:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
+ (id)newImageDataForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 networkAccessForced:(_Bool)arg6 trackCPLDownload:(_Bool)arg7 outImageDataInfo:(id *)arg8 outCPLDownloadContext:(id *)arg9;
+ (_Bool)canAccessImageForAsset:(id)arg1;

@end
