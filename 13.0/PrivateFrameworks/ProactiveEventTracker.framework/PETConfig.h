//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PETConfig : NSObject
{
    NSDictionary *_config;
    unsigned long long _version;
    NSDictionary *_messageGroups;
}

@property(readonly) unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)isAggregatedForMessageName:(id)arg1;
- (unsigned long long)sigFigsForMessageName:(id)arg1;
- (id)bucketsForMessageName:(id)arg1;
- (double)messageSamplingForMessageName:(id)arg1;
- (double)deviceSamplingForMessageName:(id)arg1 isSeed:(_Bool)arg2;
- (id)whitelistForMessageName:(id)arg1;
- (id)_whitelistHelper:(id)arg1;
- (id)_groupConfigForMessageName:(id)arg1;
- (id)_configForMessageName:(id)arg1;
- (id)groupForMessageName:(id)arg1;
- (void)_enumerateMessageConfigsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGroupConfigsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)samplingLimitForMessageGroup:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)writeToFile:(id)arg1;
- (id)initWithFile:(id)arg1;

@end
