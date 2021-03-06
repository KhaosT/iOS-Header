//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDMediaLayout.h>

@interface TSDAudioLayout : TSDMediaLayout
{
}

- (id)movieInfo;
- (int)wrapType;
- (_Bool)canFlip;
- (_Bool)allowsConnections;
- (struct CGRect)alignmentFrame;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (_Bool)shouldDisplayGuides;
- (id)layoutGeometryFromInfo;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)supportsRotation;
- (id)initWithInfo:(id)arg1;

@end

