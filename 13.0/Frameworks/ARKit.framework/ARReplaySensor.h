//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARInternalSessionObserver-Protocol.h>
#import <ARKit/ARReplaySensorProtocol-Protocol.h>

@class ARImageCroppingTechnique, AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput, AVURLAsset, NSArray, NSDictionary, NSMutableArray, NSSet, NSString, NSURL;
@protocol ARReplaySensorDelegate, ARSensorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ARReplaySensor : NSObject <ARInternalSessionObserver, ARReplaySensorProtocol>
{
    _Bool _manualCommandLineMode;
    AVURLAsset *_asset;
    NSMutableArray *_arImageData;
    NSMutableArray *_arAccelerometerData;
    NSMutableArray *_arGyroData;
    NSMutableArray *_arDeviceOrientationData;
    NSMutableArray *_arLocationData;
    CDUnknownBlockType _customDataGetter;
    NSDictionary *_recordedResultGetters;
    double _originalToReplayTimestampDifference;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    long long _tick;
    double _frameRateScale;
    double _timestampWhenFramerateChanged;
    double _imageTimestampWhenFramerateChanged;
    int _imageIndexForPreloading;
    int _accelDataIndex;
    int _gyroDataIndex;
    int _deviceOrientationDataIndex;
    int _locationDataIndex;
    _Bool _running;
    _Bool _metadataLoadedFromAsset;
    _Bool _interrupted;
    _Bool _replayStarted;
    _Atomic _Bool _finishedReplaying;
    struct opaqueCMSampleBuffer *_nextSampleBuffer;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_imageOutput;
    AVAssetReaderTrackOutput *_depthOutput;
    struct opaqueCMSampleBuffer *_nextDepthSampleBuffer;
    AVAssetReaderOutputMetadataAdaptor *_oldMotionOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_accelOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_gyroOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_imageOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_accelOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_gyroOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_deviceMotionOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_locationMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_imageOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_deviceOrientationOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_customDataOutputMetadataAdaptor;
    NSDictionary *_recordedResultAdaptors;
    _Bool _displaySynchronizationMarker;
    long long _displaySynchronizationMarkerFrames;
    struct __CVBuffer *_synchronizationMarker;
    struct __CVPixelBufferPool *_synchronizationMarkerPool;
    struct OpaqueVTPixelTransferSession *_synchronizationTransferSession;
    unsigned long long _sensorDataTypes;
    ARImageCroppingTechnique *_croppingTechnique;
    _Bool _isReplayingManually;
    _Bool _synchronousMode;
    float _advanceFramesPerSecondMultiplier;
    int _imageIndex;
    id <ARSensorDelegate> _delegate;
    id <ARReplaySensorDelegate> _replaySensorDelegate;
    NSURL *_sequenceURL;
    NSString *_deviceModel;
    NSString *_osVersion;
    NSString *_arkitVersion;
    double _nominalFrameRate;
    unsigned long long _recordedSensorTypes;
    NSSet *_recordedResultClasses;
    unsigned long long _forcePlaybackFramesPerSecond;
    long long _nextFrameIndex;
    NSSet *_customDataClasses;
    long long _targetFrameIndex;
    struct CGSize _imageResolution;
}

@property long long targetFrameIndex; // @synthesize targetFrameIndex=_targetFrameIndex;
@property(nonatomic) int imageIndex; // @synthesize imageIndex=_imageIndex;
@property(readonly, nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(copy, nonatomic) NSSet *customDataClasses; // @synthesize customDataClasses=_customDataClasses;
@property float advanceFramesPerSecondMultiplier; // @synthesize advanceFramesPerSecondMultiplier=_advanceFramesPerSecondMultiplier;
@property long long nextFrameIndex; // @synthesize nextFrameIndex=_nextFrameIndex;
@property(nonatomic) unsigned long long forcePlaybackFramesPerSecond; // @synthesize forcePlaybackFramesPerSecond=_forcePlaybackFramesPerSecond;
@property(readonly, nonatomic, getter=isSynchronousMode) _Bool synchronousMode; // @synthesize synchronousMode=_synchronousMode;
@property(readonly, nonatomic) _Bool isReplayingManually; // @synthesize isReplayingManually=_isReplayingManually;
@property(readonly, nonatomic) NSSet *recordedResultClasses; // @synthesize recordedResultClasses=_recordedResultClasses;
@property(readonly, nonatomic) unsigned long long recordedSensorTypes; // @synthesize recordedSensorTypes=_recordedSensorTypes;
@property(readonly, nonatomic) double nominalFrameRate; // @synthesize nominalFrameRate=_nominalFrameRate;
@property(readonly, nonatomic) struct CGSize imageResolution; // @synthesize imageResolution=_imageResolution;
@property(readonly, nonatomic) NSString *arkitVersion; // @synthesize arkitVersion=_arkitVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(readonly, nonatomic) NSURL *sequenceURL; // @synthesize sequenceURL=_sequenceURL;
@property __weak id <ARReplaySensorDelegate> replaySensorDelegate; // @synthesize replaySensorDelegate=_replaySensorDelegate;
@property(nonatomic) __weak id <ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)readFileMetadataFromAsset:(id)arg1;
- (struct __CVBuffer *)requestNextDepthPixelBufferForTimestamp:(double)arg1;
- (struct __CVBuffer *)requestNextPixelBufferForTimestamp:(double)arg1;
- (void)enumerateDataWithIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)unpackTimestampedCV3DDictionaryItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (id)unpackTimestampedItemsOfClasses:(id)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (id)unpackItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (CDUnknownBlockType)createResultForTimestampGetterBlockFromTimestampedResults:(id)arg1;
- (void)preloadNextPixelBuffers:(int)arg1;
- (id)getResultDataForClasses:(id)arg1 atTimestamp:(double)arg2;
- (id)getNextLocationData;
- (id)getNextDeviceOrientationData;
- (id)getNextGyroData;
- (id)getNextAccelerometerData;
- (id)getNextImageData;
- (_Bool)hasLocationDataForTime:(double)arg1;
- (_Bool)hasDeviceOrientationDataForTime:(double)arg1;
- (_Bool)hasGyroDataForTime:(double)arg1;
- (_Bool)hasAccelerometerDataForTime:(double)arg1;
- (void)fastForwardIndexesToTime:(double)arg1;
- (_Bool)hasImageDataForTimestamp:(double)arg1;
- (_Bool)hasMoreData;
- (void)_didOutputSensorData:(id)arg1;
- (void)advance;
- (void)tick;
- (double)currentTime;
- (void)startReplayIfNeeded;
- (void)loadAllMetadata;
- (id)createAndAddMetadataAdaptorForTrack:(id)arg1;
- (_Bool)track:(id)arg1 hasMetadataIdentifier:(id)arg2;
- (void)failWithError:(id)arg1;
- (void)initializeAssetReaderWithAsset:(id)arg1 buffersOnly:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) _Bool finishedReplaying;
- (id)customDataForTimestamp:(double)arg1;
- (id)replayTechniqueForResultDataClasses:(id)arg1;
- (void)advanceToFrameIndex:(long long)arg1;
- (void)advanceFrame;
- (void)endReplay;
- (void)prepareForReplay;
- (void)endInterruption;
- (void)interrupt;
- (void)stop;
- (void)start;
@property(readonly, nonatomic) NSArray *recordedResultClassList;
- (unsigned long long)providedDataTypes;
- (void)dealloc;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(_Bool)arg2 synchronousMode:(_Bool)arg3;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(_Bool)arg2;
- (id)initWithDataFromFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long powerUsage;
@property(readonly) Class superclass;

@end

