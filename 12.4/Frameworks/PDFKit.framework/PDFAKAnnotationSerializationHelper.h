//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDFAKAnnotationSerializationHelper : NSObject
{
}

+ (_Bool)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFDictionary:(struct CGPDFDictionary *)arg2;
+ (_Bool)_annotationClassHasSeniority:(id)arg1;
+ (id)akAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 andDictionary:(struct CGPDFDictionary *)arg2;
+ (void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(struct __CFDictionary *)arg2;

@end
