//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCNavigationController.h>

@class NTKCompanionCustomPhotosEditor, NTKDigitalTimeLabelStyle, NTKFace, _NTKCFaceDetailPhotoCropViewController;

@interface NTKCFaceDetailPhotoCropViewController : NTKCNavigationController
{
    _NTKCFaceDetailPhotoCropViewController *_implementationVC;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NTKDigitalTimeLabelStyle *timeStyle;
@property(readonly, nonatomic) NTKFace *face;
@property(readonly, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property(readonly, nonatomic) unsigned long long index;
- (void)viewDidLoad;
- (id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4;

@end

