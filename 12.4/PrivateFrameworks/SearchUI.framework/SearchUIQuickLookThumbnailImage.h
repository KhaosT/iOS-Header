//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIImage.h>

@class NSURL;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage
{
    NSURL *_url;
}

+ (id)quickLookThumbnailQueue;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (Class)classForCoder;
- (id)initWithURL:(id)arg1;

@end

