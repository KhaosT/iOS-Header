//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisplacementDistortion : CIFilter
{
    CIImage *inputImage;
    CIImage *inputDisplacementImage;
    NSNumber *inputScale;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CIDisplaceFromImage;

@end
