//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDSocialInteractionAdvisorTuningDelegate-Protocol.h>

@class NSString, _CDPModelTuningState, _CDPSimpleModelParameterManagerAccountState;

@interface _CDPSimpleModelParameterManager : NSObject <_CDSocialInteractionAdvisorTuningDelegate>
{
    _CDPSimpleModelParameterManagerAccountState *_accountState;
    NSString *_accountStateKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _CDPModelTuningState *lastTuningState;
- (void)saveAccountState;
- (void)loadAccountState;
- (void)modelTunerWillStop:(id)arg1;
- (void)modelTunerWillResume:(id)arg1;
- (void)getLambda:(float *)arg1 w0:(float *)arg2 threshold:(float *)arg3;
- (void)modelTuner:(id)arg1 heartBeatWithlambda:(float)arg2 w0:(float)arg3 threshold:(float)arg4 score:(float)arg5 progress:(float)arg6;
- (id)accountIdentifierForSettings:(id)arg1;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
