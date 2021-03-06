//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, MISSING_TYPE, NSData, NSMapTable, NSMutableDictionary, NSObject, SKDisplayLink, SKScene, SKTransition;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SKViewDelegate;

@interface SKView : UIView
{
    struct SKCStats _currentStats;
    struct SKCStats _nextStats;
    struct SKCStats _frameStats;
    struct SKCRenderer *_renderer;
    MISSING_TYPE *_viewScale;
    MISSING_TYPE *_viewTranslation;
    shared_ptr_2ce53ef7 _framebuffer;
    shared_ptr_bb77cfd9 _frameBufferColorTexture;
    shared_ptr_bb77cfd9 _frameBufferDepthStencilTexture;
    unsigned int _colorRenderBuffer;
    unsigned int _depthStencilRenderBuffer;
    struct shared_ptr<jet_fence> _renderFence;
    CAEAGLLayer *_eaglLayer;
    _Bool _needsInitialUpdate;
    _Bool _didRunOnce;
    _Bool _viewFramebufferIsValid;
    MISSING_TYPE *_viewFramebufferPixelSize;
    _Bool _isBackgrounded;
    _Bool _allowsTransparency;
    _Bool _priorResignActivePausedState;
    unsigned long long _frameInterval;
    unsigned long long _preferredFramesPerSecond;
    SKDisplayLink *_displayLink;
    NSObject<OS_dispatch_queue> *_updateQueue;
    double _timePreviousUpdate;
    _Bool _prefersLowPowerGPU;
    _Bool _usesAsyncUpdateQueue;
    _Bool _hasRenderedOnce;
    _Bool _hasRenderedForCurrentUpdate;
    _Bool _disableInput;
    _Bool _mouseIsDown;
    _Bool _rightMouseIsDown;
    SKTransition *_transition;
    SKScene *_nextScene;
    SKScene *_scene;
    _Bool _paused;
    NSData *_spriteArrayHint;
    NSMutableDictionary *_viewRenderOptions;
    NSMapTable *_touchMap;
    float _prevBackingScaleFactor;
    CDUnknownBlockType _dynamicRenderBlock;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_semaphore> *_renderSemaphore;
    int _queuedFrameCount;
    double _prevVsyncRenderTime;
    double _prevRenderTime;
    NSObject<SKViewDelegate> *_delegate;
    struct SKCRenderer *__layerBackedRenderer;
    NSMutableDictionary *__info;
    double _physicsDebugStrokeWidth;
    struct CGSize _pixelSize;
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3;
+ (id)debugHierarchyAdditionalGroupingIDs;
+ (void)_setCurrentTime:(double)arg1;
+ (Class)layerClass;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double physicsDebugStrokeWidth; // @synthesize physicsDebugStrokeWidth=_physicsDebugStrokeWidth;
@property(retain, nonatomic) NSMutableDictionary *_info; // @synthesize _info=__info;
@property struct SKCRenderer *_layerBackedRenderer; // @synthesize _layerBackedRenderer=__layerBackedRenderer;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(nonatomic) __weak NSObject<SKViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_preferredFocusMovementStyle;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)_focusedItemRegionContainer;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_getPerformanceStats;
- (int)_spriteSubmitCount;
- (int)_spriteRenderCount;
- (double)_fps;
@property(nonatomic, getter=isPaused) _Bool paused;
- (float)_getViewContentsScale;
- (id)snapshot;
- (void)set_viewTranslation:(struct CGPoint)arg1;
- (struct CGPoint)_viewTranslation;
- (void)set_viewScale:(double)arg1;
- (double)_viewScale;
@property(readonly) NSMutableDictionary *options;
- (void)notifyWillRenderContent;
- (_Bool)hasValidViewFramebuffer;
- (id)getRenderOptions;
- (void)_renderContent;
- (void)renderContent;
- (void)willRenderContent;
- (CDStruct_14d5dc5e)getViewTransform;
- (MISSING_TYPE *)getViewport;
- (struct SKCNode *)getRootNode;
- (shared_ptr_2ce53ef7)nextFramebuffer;
- (struct SKCRenderer *)chooseViewRenderer;
- (id)textureFromNode:(id)arg1 crop:(struct CGRect)arg2;
- (void)_setUpdateQueue:(id)arg1;
- (void)renderToIOSurfaceID:(unsigned int)arg1 withScaleFactor:(double)arg2;
- (unsigned long long)_getEffectivePreferredFramesPerSecond;
@property(nonatomic) long long preferredFramesPerSecond;
@property(nonatomic) float preferredFrameRate;
@property(nonatomic) long long frameInterval;
- (void)writeContentsToPNG:(id)arg1;
- (void)runOnce;
- (void)onInit;
- (_Bool)isEqualToView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 updateQueue:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)textureFromNode:(id)arg1 withOptions:(id)arg2;
- (id)textureFromNode:(id)arg1;
- (void)_update:(double)arg1;
@property(readonly, nonatomic) SKScene *scene;
- (void)_reshape;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)presentScene:(id)arg1 transition:(id)arg2;
- (void)presentScene:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) _Bool allowsTransparency;
- (_Bool)isOpaque;
- (double)alphaValue;
- (void)remakeFramebuffer:(double)arg1;
- (void)dealloc;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromScene:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toScene:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_endFrameStats;
- (void)set_renderUpdateEnabled:(_Bool)arg1;
- (_Bool)_renderUpdateEnabled;
- (void)stopRenderCallbacks;
- (void)startRenderCallbacks;
- (void)setUpRenderCallback;
- (_Bool)_usesAsyncUpdateQueue;
- (void)set_usesAsyncUpdateQueue:(_Bool)arg1;
@property(nonatomic, getter=isAsynchronous) _Bool asynchronous;
- (void)_dispatchRenderToIOSurfaceID:(unsigned int)arg1 async:(_Bool)arg2 onQueue:(id)arg3 waitOnFence:(_Bool)arg4 preRender:(CDUnknownBlockType)arg5 postRender:(CDUnknownBlockType)arg6;
- (void)_renderToIOSurfaceID:(unsigned int)arg1 scaleFactor:(float)arg2 asynchronous:(_Bool)arg3 waitOnFence:(_Bool)arg4 preRender:(CDUnknownBlockType)arg5 postRender:(CDUnknownBlockType)arg6;
- (void)_renderToIOSurfaceID:(unsigned int)arg1 scaleFactor:(float)arg2 asynchronous:(_Bool)arg3 preRender:(CDUnknownBlockType)arg4 postRender:(CDUnknownBlockType)arg5;
- (void)_renderSynchronouslyForTime:(double)arg1 preRender:(CDUnknownBlockType)arg2 postRender:(CDUnknownBlockType)arg3;
- (void)_vsyncRenderForTime:(double)arg1 preRender:(CDUnknownBlockType)arg2 postRender:(CDUnknownBlockType)arg3;
- (_Bool)_shouldRenderForTime:(double)arg1;
- (void)renderForTime:(double)arg1 shouldBlock:(_Bool)arg2;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (void)_commonInit;
- (void)_ensureRenderer;
- (void)remakeFramebuffer;
- (void)debugPrint;
- (id)captureToFile:(id)arg1;
- (id)archiveToFile:(id)arg1;
- (void)_showAllStats;
- (_Bool)_showsCPUStats;
- (void)set_showsCPUStats:(_Bool)arg1;
- (_Bool)_showsGPUStats;
- (void)set_showsGPUStats:(_Bool)arg1;
@property(nonatomic) _Bool showsDrawCount;
@property(nonatomic) _Bool showsNodeCount;
@property(nonatomic) _Bool showsQuadCount;
@property(nonatomic) _Bool showsFields;
@property(nonatomic) _Bool showsPhysics;
@property(nonatomic) _Bool showsFPS;
@property(nonatomic) _Bool ignoresSiblingOrder;
@property(nonatomic) _Bool disableStencilBuffers;
@property(nonatomic) _Bool shouldCullNonVisibleNodes;
- (void)setDynamicRenderBlock:(CDUnknownBlockType)arg1;

@end

