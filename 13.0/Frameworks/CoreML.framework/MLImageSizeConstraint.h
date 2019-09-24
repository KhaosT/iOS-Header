//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@class NSArray, NSOrderedSet;

@interface MLImageSizeConstraint : NSObject <NSSecureCoding>
{
    long long _type;
    NSOrderedSet *_imageSizeSet;
    struct _NSRange _pixelsWideRange;
    struct _NSRange _pixelsHighRange;
}

+ (_Bool)supportsSecureCoding;
+ (id)closestImageSizeInArray:(id)arg1 toImageSize:(id)arg2 preferDownScaling:(_Bool)arg3;
+ (id)closestImageSizeInPixelsWideRange:(struct _NSRange)arg1 pixelsHighRange:(struct _NSRange)arg2 toImageSize:(id)arg3 preferInputAspectRatio:(_Bool)arg4;
+ (unsigned long long)locationClosestTo:(unsigned long long)arg1 inRange:(struct _NSRange)arg2;
@property(readonly, nonatomic) NSOrderedSet *imageSizeSet; // @synthesize imageSizeSet=_imageSizeSet;
@property(readonly, nonatomic) struct _NSRange pixelsHighRange; // @synthesize pixelsHighRange=_pixelsHighRange;
@property(readonly, nonatomic) struct _NSRange pixelsWideRange; // @synthesize pixelsWideRange=_pixelsWideRange;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isAllowedImageSize:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *enumeratedImageSizes;
- (id)initWithEnumeratedImageSizes:(id)arg1;
- (id)initWithPixelsWideRange:(struct _NSRange)arg1 pixelsHighRange:(struct _NSRange)arg2;
- (id)initUnspecified;
- (id)allowedImageSizeClosestToPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 preferDownScaling:(_Bool)arg3 preferInputAspectRatio:(_Bool)arg4;

@end
