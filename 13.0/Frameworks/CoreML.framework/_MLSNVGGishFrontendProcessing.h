//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLCustomModel-Protocol.h>

@class MLModelDescription;
@protocol MLCustomModel;

__attribute__((visibility("hidden")))
@interface _MLSNVGGishFrontendProcessing : NSObject <MLCustomModel>
{
    id <MLCustomModel> _frontendProcessingModel;
    MLModelDescription *_modelDescription;
}

@property(readonly, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;

@end

