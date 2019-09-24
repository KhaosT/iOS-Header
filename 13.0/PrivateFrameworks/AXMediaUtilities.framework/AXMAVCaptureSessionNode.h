//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMSourceNode.h>

#import <AXMediaUtilities/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>
#import <AXMediaUtilities/AXMAVCaptureSessionNodeFrameDelegate-Protocol.h>

@class AVCaptureSession, AXMVisionAnalysisOptions, NSObject, NSString;
@protocol AXMAVCaptureSessionNodeDelegate, AXMAVCaptureSessionNodeFrameDelegate, OS_dispatch_queue;

@interface AXMAVCaptureSessionNode : AXMSourceNode <AVCaptureVideoDataOutputSampleBufferDelegate, AXMAVCaptureSessionNodeFrameDelegate>
{
    NSObject<OS_dispatch_queue> *_autotrigger_queue;
    id <AXMAVCaptureSessionNodeDelegate> _captureSessionNodeDelegate;
    id <AXMAVCaptureSessionNodeFrameDelegate> _frameDelegate;
    AVCaptureSession *_captureSession;
    AXMVisionAnalysisOptions *_analysisOptions;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(nonatomic) __weak AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) __weak id <AXMAVCaptureSessionNodeFrameDelegate> frameDelegate; // @synthesize frameDelegate=_frameDelegate;
@property(nonatomic) __weak id <AXMAVCaptureSessionNodeDelegate> captureSessionNodeDelegate; // @synthesize captureSessionNodeDelegate=_captureSessionNodeDelegate;
- (void).cxx_destruct;
- (void)captureSessionNode:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)triggerWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 interfaceOrientation:(long long)arg2 mirrored:(_Bool)arg3 options:(id)arg4 userContext:(id)arg5;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)endVideoFrameEvents;
- (void)endAutoTriggerOfVideoFrameEvents;
- (void)beginFrameEventsWithAVCaptureSession:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)autoTriggerVideoFrameEventsWithAVCaptureSession:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)nodeInitialize;
- (void)produceImage:(id)arg1;
- (void)setShouldProcessRemotely:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
