//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TestFlightUploadSubTask.h"

@class NSArray;

@interface FetchImageUploadURLsTask : TestFlightUploadSubTask
{
    NSArray *_signedURLs;
}

@property(readonly, nonatomic) NSArray *signedURLs; // @synthesize signedURLs=_signedURLs;
- (void).cxx_destruct;
- (void)_handleResult:(id)arg1;
- (id)_fetchImageURLsRequest;
- (void)main;

@end
