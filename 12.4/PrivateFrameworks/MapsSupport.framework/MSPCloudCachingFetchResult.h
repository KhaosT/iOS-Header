//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudCachingFetchResult-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MSPCloudCachingFetchResult : NSObject <MSPCloudCachingFetchResult>
{
    NSDictionary *_records;
    NSDictionary *_deletedRecordNamesByRecordType;
}

@property(readonly, nonatomic) NSDictionary *deletedRecordNamesByRecordType; // @synthesize deletedRecordNamesByRecordType=_deletedRecordNamesByRecordType;
@property(readonly, nonatomic) NSDictionary *records; // @synthesize records=_records;
- (void).cxx_destruct;
- (id)initWithCKFetchResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
