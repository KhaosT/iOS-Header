//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientState.h>

#import <MPSNeuralNetwork/MPSImageSizeEncodingState-Protocol.h>

@class MPSCNNConvolution, NSString;
@protocol MTLBuffer;

@interface MPSCNNConvolutionGradientState : MPSNNGradientState <MPSImageSizeEncodingState>
{
    _Bool _initialized;
    MPSCNNConvolution *_convolution;
    id <MTLBuffer> _intermediateWeightsBuffer;
    id <MTLBuffer> _intermeidateBiasesBuffer;
    unsigned long long _numReductionBlocks;
    _Bool _needReductionInN;
    _Bool _needReductionInXY;
    unsigned int _weightsLayout;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned int)arg4;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3;
@property(readonly, retain, nonatomic) MPSCNNConvolution *convolution; // @synthesize convolution=_convolution;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned int)arg4;
- (id)initWithResource:(id)arg1 weightsLayout:(unsigned int)arg2;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3;
- (id)initWithResource:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> gradientForBiases;
@property(readonly, nonatomic) id <MTLBuffer> gradientForWeights;
@property(readonly, nonatomic) unsigned long long sourceHeight;
@property(readonly, nonatomic) unsigned long long sourceWidth;
@property(readonly, nonatomic) unsigned long long numberOfBiasGradients;
@property(readonly, nonatomic) unsigned int gradientForWeightsLayout;
@property(readonly, nonatomic) unsigned long long numberOfWeightGradients;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
