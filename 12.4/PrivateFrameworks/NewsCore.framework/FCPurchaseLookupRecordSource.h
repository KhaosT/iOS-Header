//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

@interface FCPurchaseLookupRecordSource : FCRecordSource
{
}

+ (id)defaultCachePolicy;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)storeFilename;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordType;

@end
