//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMetadataItem.h>

@class AVLazyValueLoadingMetadataItemInternal;

__attribute__((visibility("hidden")))
@interface AVLazyValueLoadingMetadataItem : AVMetadataItem
{
    AVLazyValueLoadingMetadataItemInternal *_lazyMetadataItem;
}

+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;
- (id)dataType;
- (id)value;
- (void)_waitForLoadingOfValueDependentKey:(id)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (long long)_valueStatus;
- (_Bool)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (void)_valueRequestDidFinish;
- (void)dealloc;
- (id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;

@end
