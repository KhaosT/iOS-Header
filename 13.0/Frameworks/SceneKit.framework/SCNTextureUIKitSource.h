//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNTextureCoreAnimationSource.h>

@class UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface SCNTextureUIKitSource : SCNTextureCoreAnimationSource
{
    _Bool _setup;
    _Bool _windowReady;
    id _source;
    UIWindow *_uiWindow;
    UIView *_uiView;
    struct CGSize _sizeCache;
    unsigned int _textureID;
    struct __C3DEngineContext *_engineContext;
    struct __C3DTextureSampler *_textureSampler;
}

@property(retain, nonatomic) id source; // @synthesize source=_source;
@property(retain, nonatomic) UIView *uiView; // @synthesize uiView=_uiView;
@property(retain, nonatomic) UIWindow *uiWindow; // @synthesize uiWindow=_uiWindow;
- (void)_layerTreeDidUpdate;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct CGSize)layerSizeInPixels;
- (double)layerContentsScaleFactor;
- (id)layer;
- (float)clearValue;
- (id)layerToFocusForRenderedLayer:(id)arg1;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)setup;
- (void)dealloc;
- (_Bool)supportsMetal;

@end

