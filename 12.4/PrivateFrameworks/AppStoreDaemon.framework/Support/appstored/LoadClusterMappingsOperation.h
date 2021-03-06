//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSDictionary;
@protocol PersonalizationBagContract;

@interface LoadClusterMappingsOperation : ISOperation
{
    id <PersonalizationBagContract> _bagContract;
    NSDictionary *_itemIDToBundleIDMappings;
    NSArray *_installedApps;
    NSArray *_clusterMappings;
}

@property(readonly, nonatomic) NSArray *clusterMappings; // @synthesize clusterMappings=_clusterMappings;
- (void).cxx_destruct;
- (id)_parseResponseData:(id)arg1;
- (void)_processInstalledApps;
- (id)_createClusterMappings:(id)arg1;
- (void)run;
- (id)init;

@end

