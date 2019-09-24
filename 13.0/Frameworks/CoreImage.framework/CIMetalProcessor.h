//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CIMetalProcessor : CIImageProcessorKernel
{
}

+ (_Bool)allowSRGBTranferFuntionOnOutput;
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (_Bool)allowPartialOutputRegion;
+ (_Bool)synchronizeInputs;
+ (int)outputFormat;
+ (int)formatForInputAtIndex:(int)arg1;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (void)setFilterParamsAndImages:(id)arg1 arguments:(id)arg2 filter:(id)arg3;
+ (void)setFilterParams:(id)arg1 arguments:(id)arg2 filter:(id)arg3;

@end
