//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXPresentation : NSObject
{
}

+ (id)readFromPackage:(id)arg1 fileName:(id)arg2 reader:(id)arg3 cancel:(id)arg4 isThumbnail:(_Bool)arg5 delegate:(id)arg6;
+ (void)readSlideIndicesWithPresentationPart:(id)arg1 presentationState:(id)arg2;
+ (void)readPresentationProperties:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (struct CGSize)readSizeFromChildOfElement:(struct _xmlNode *)arg1 childName:(const char *)arg2 state:(id)arg3;

@end
