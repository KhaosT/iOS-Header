//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <SIMSetupSupport/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSObject, NSString;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;

@interface TSCellularPlanQRCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    AVCaptureVideoPreviewLayer *_previewLayer;
    _Bool _canUseCamera;
    id <AVCaptureMetadataOutputObjectsDelegate> _delegate;
}

@property(nonatomic) id <AVCaptureMetadataOutputObjectsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool canUseCamera; // @synthesize canUseCamera=_canUseCamera;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void).cxx_destruct;
- (void)_changeCameraConfiguration;
- (void)_handleRuntimeError:(id)arg1;
- (void)stopRunning;
- (void)startRunning;
- (void)layoutSubviews;
- (void)setupCameraSession;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
