//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKCameraController.h>

@class VKTimedAnimation;
@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKAnnotationTrackingCameraController : VKCameraController
{
    id <VKTrackableAnnotation> _annotation;
    id <VKTrackableAnnotationPresentation> _annotationPresentation;
    VKTimedAnimation *_currentAnimation;
    Matrix_6e1d3589 _currentAnimationStartPoint;
    Matrix_6e1d3589 _currentAnimationStartCameraPosition;
    Matrix_6e1d3589 _currentAnimationEndPoint;
    Matrix_6e1d3589 _currentAnimationEndCameraPosition;
    double _pendingChangeDuration;
    VKTimedAnimation *_currentHeadingAnimation;
    double _pendingHeadingChangeDuration;
    float _headingAnimationCompletedAngle;
    long long _headingAnimationDisplayRate;
    long long _zoomStyle;
    struct {
        unsigned int hasPendingChange:1;
        unsigned int paused:1;
        unsigned int trackingHeading:1;
        unsigned int hasPendingHeadingChange:1;
        unsigned int isInitialRegionChange:1;
        unsigned int isJumpingToAnnotation:1;
        unsigned int annotationImplementsAccuracy:1;
        unsigned int annotationImplementsHeading:1;
        unsigned int annotationImplementsExpectedCoordinateUpdateInterval:1;
        unsigned int annotationImplementsExpectedHeadingUpdateInterval:1;
    } _flags;
}

@property(nonatomic) long long headingAnimationDisplayRate; // @synthesize headingAnimationDisplayRate=_headingAnimationDisplayRate;
@property(nonatomic) long long zoomStyle; // @synthesize zoomStyle=_zoomStyle;
@property(readonly, nonatomic) id <VKTrackableAnnotation> annotation; // @synthesize annotation=_annotation;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (_Bool)isAnimating;
- (void)setGesturing:(_Bool)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 isInitial:(_Bool)arg3;
- (void)updateFramerate;
@property(readonly, nonatomic, getter=isTrackingHeading) _Bool trackingHeading;
- (void)dealloc;
- (id)init;

@end
