//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADEmbeddedMediaFile.h>

@class TSPData;

__attribute__((visibility("hidden")))
@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile
{
    _Bool isAudioOnly;
    TSPData *_tspData;
}

@property(retain, nonatomic) TSPData *tspData; // @synthesize tspData=_tspData;
- (void)setIsAudioOnly:(_Bool)arg1;
- (_Bool)isAudioOnly;
- (void)dealloc;

@end

