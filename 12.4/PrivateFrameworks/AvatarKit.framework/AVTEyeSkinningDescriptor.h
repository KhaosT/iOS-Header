//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode;

@interface AVTEyeSkinningDescriptor : NSObject
{
    SCNNode *_readMorpherNode;
    SCNNode *_leftEyeJoint;
    SCNNode *_rightEyeJoint;
    long long _leftEyeLookDownTargetIndex;
    long long _leftEyeLookInTargetIndex;
    long long _leftEyeLookOutTargetIndex;
    long long _leftEyeLookUpTargetIndex;
    long long _rightEyeLookDownTargetIndex;
    long long _rightEyeLookInTargetIndex;
    long long _rightEyeLookOutTargetIndex;
    long long _rightEyeLookUpTargetIndex;
}

@property(nonatomic) long long rightEyeLookUpTargetIndex; // @synthesize rightEyeLookUpTargetIndex=_rightEyeLookUpTargetIndex;
@property(nonatomic) long long rightEyeLookOutTargetIndex; // @synthesize rightEyeLookOutTargetIndex=_rightEyeLookOutTargetIndex;
@property(nonatomic) long long rightEyeLookInTargetIndex; // @synthesize rightEyeLookInTargetIndex=_rightEyeLookInTargetIndex;
@property(nonatomic) long long rightEyeLookDownTargetIndex; // @synthesize rightEyeLookDownTargetIndex=_rightEyeLookDownTargetIndex;
@property(nonatomic) long long leftEyeLookUpTargetIndex; // @synthesize leftEyeLookUpTargetIndex=_leftEyeLookUpTargetIndex;
@property(nonatomic) long long leftEyeLookOutTargetIndex; // @synthesize leftEyeLookOutTargetIndex=_leftEyeLookOutTargetIndex;
@property(nonatomic) long long leftEyeLookInTargetIndex; // @synthesize leftEyeLookInTargetIndex=_leftEyeLookInTargetIndex;
@property(nonatomic) long long leftEyeLookDownTargetIndex; // @synthesize leftEyeLookDownTargetIndex=_leftEyeLookDownTargetIndex;
@property(retain, nonatomic) SCNNode *rightEyeJoint; // @synthesize rightEyeJoint=_rightEyeJoint;
@property(retain, nonatomic) SCNNode *leftEyeJoint; // @synthesize leftEyeJoint=_leftEyeJoint;
@property(retain, nonatomic) SCNNode *readMorpherNode; // @synthesize readMorpherNode=_readMorpherNode;
- (void).cxx_destruct;

@end
