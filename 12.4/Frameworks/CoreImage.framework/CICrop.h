//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

#import <CoreImage/_CIFilterProperties-Protocol.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CICrop : CIFilter <_CIFilterProperties>
{
    CIImage *inputImage;
    CIVector *inputRectangle;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputRectangle; // @synthesize inputRectangle;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;

@end

