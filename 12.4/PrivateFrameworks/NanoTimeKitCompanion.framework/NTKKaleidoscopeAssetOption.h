//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKKaleidoscopeAssetOption : NTKEnumeratedEditOption
{
}

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)optionWithAsset:(unsigned long long)arg1 forDevice:(id)arg2;
- (_Bool)optionExistsInOSVersion:(unsigned int)arg1;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) unsigned long long asset;
- (long long)swatchStyle;

@end
