//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject
{
    NSMutableDictionary *_generalConfigurations;
    NSMutableDictionary *_observationGroupConfigurations;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)allConfigurations;
- (id)configurationForRequest:(id)arg1 withObservationGroup:(id)arg2;
- (id)init;

@end

