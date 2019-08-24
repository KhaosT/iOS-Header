//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHMediaRequestContextDelegate-Protocol.h>

@class NSMapTable, NSString;

@interface PDImageManager : NSObject <PHMediaRequestContextDelegate>
{
    NSMapTable *_requestContextsByID;
    _Atomic int _lastUsedRequestID;
    struct os_unfair_lock_s _lock;
    unsigned long long _managerID;
}

+ (_Bool)_allowVideoAccessForAsset:(id)arg1 options:(id)arg2;
+ (unsigned long long)_nextManagerID;
+ (id)defaultManager;
+ (id)_requestResultInfoForImageInfo:(id)arg1 videoInfo:(id)arg2 adjustmentInfo:(id)arg3 renderingError:(id)arg4;
+ (unsigned long long)_nextRequestID;
+ (void)_setupContentEditing;
@property(readonly, nonatomic) unsigned long long managerID; // @synthesize managerID=_managerID;
- (void).cxx_destruct;
- (void)mediaRequestContextDidFinish:(id)arg1;
- (void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(_Bool *)arg3 didFindImage:(_Bool *)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)mediaRequestContext:(id)arg1 spawnedNewRequest:(id)arg2;
- (int)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)cancelImageRequest:(int)arg1;
- (void)handleImageResult:(id)arg1 forRequest:(id)arg2 options:(id)arg3 info:(id)arg4 error:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 requestID:(int)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (int)nextID;
- (id)_infoDictionary:(id)arg1 withError:(id)arg2;
- (int)_runRequestWithContext:(id)arg1;
- (id)init;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (unsigned long long)requestContentEditingInputForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_imageRequestOptionsForAsset:(id)arg1 baseVersion:(long long)arg2 options:(id)arg3 progressEstimateForImageProgress:(CDUnknownBlockType)arg4;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_renderVideoFromVideoURL:(id)arg1 asset:(id)arg2 adjustmentData:(id)arg3 canHandleAdjustmentData:(_Bool)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)_videoRequestOptionsForBaseVersion:(long long)arg1 asset:(id)arg2 options:(id)arg3 progressEstimateForVideoProgress:(CDUnknownBlockType)arg4;
- (id)_adjustmentRequestOptionsFromFullOptions:(id)arg1;
- (void)buildAVAssetFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buildAVPlayerItemFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 playbackOnly:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
