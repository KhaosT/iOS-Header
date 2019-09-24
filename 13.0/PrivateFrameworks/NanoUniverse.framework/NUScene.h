//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoUniverse/NUAnimatable-Protocol.h>

@class MISSING_TYPE, NSArray, NSDate, NSMutableArray, NSString, NUSpheroid;

@interface NUScene : NSObject <NUAnimatable>
{
    NSMutableArray *_spheroids;
    unsigned long long _snap;
    NSMutableArray *_animations;
    NSDate *_date;
    CDUnknownBlockType _currentDateBlock;
    unsigned int _isUpdateNeeded:1;
    unsigned int _isUpdatable:1;
    float _orbit;
    float _roll;
    int _minFrameInterval;
    float _yearsSince1970;
    NUSpheroid *_focus;
    unsigned long long _backgroundType;
    unsigned long long _projectionType;
    unsigned long long _collectionType;
    MISSING_TYPE *_position;
    MISSING_TYPE *_target;
    MISSING_TYPE *_up;
}

@property(readonly, nonatomic) float yearsSince1970; // @synthesize yearsSince1970=_yearsSince1970;
@property(copy, nonatomic) CDUnknownBlockType currentDateBlock; // @synthesize currentDateBlock=_currentDateBlock;
@property(nonatomic) unsigned long long collectionType; // @synthesize collectionType=_collectionType;
@property(nonatomic) unsigned long long projectionType; // @synthesize projectionType=_projectionType;
@property(nonatomic) unsigned long long backgroundType; // @synthesize backgroundType=_backgroundType;
@property(nonatomic) int minFrameInterval; // @synthesize minFrameInterval=_minFrameInterval;
@property(nonatomic) float roll; // @synthesize roll=_roll;
@property(nonatomic) float orbit; // @synthesize orbit=_orbit;
@property(retain, nonatomic) NUSpheroid *focus; // @synthesize focus=_focus;
@property(readonly, nonatomic) MISSING_TYPE *up; // @synthesize up=_up;
@property(readonly, nonatomic) MISSING_TYPE *target; // @synthesize target=_target;
@property(readonly, nonatomic) MISSING_TYPE *position; // @synthesize position=_position;
@property(readonly, nonatomic) NSArray *spheroids; // @synthesize spheroids=_spheroids;
@property(nonatomic, getter=isUpdatable) _Bool updatable; // @synthesize updatable=_isUpdatable;
- (void).cxx_destruct;
- (void)setCamera:(float)arg1 target:up:roll: /* Error: Ran out of types for this method. */;
- (void)updateFromDateIfNeeded;
- (id)spheroidOfType:(unsigned long long)arg1;
- (void)updateSunLocationAnimated:(_Bool)arg1;
@property(readonly, nonatomic) NSDate *date; // @dynamic date;
- (void)removeAnimation:(id)arg1;
- (void)removeAllAnimationsFor:(id)arg1 withKeys:(unsigned long long)arg2;
- (void)addAnimation:(id)arg1;
- (_Bool)isAnimating:(id)arg1 forKeys:(unsigned long long)arg2;
- (void)update:(float)arg1;
@property(readonly, nonatomic) int acceptableFrameInterval;
- (void)setAnimatedFloat:(unsigned long long)arg1 forKey: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)animatedFloatForKey:(unsigned long long)arg1;
@property(nonatomic) unsigned long long snap; // @dynamic snap;
- (id)initWithSphereoids:(unsigned long long)arg1 currentDateBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
