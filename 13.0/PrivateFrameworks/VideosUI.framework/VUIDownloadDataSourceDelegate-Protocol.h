//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, VUIDownloadDataSource;

@protocol VUIDownloadDataSourceDelegate <NSObject>

@optional
- (void)downloadManager:(VUIDownloadDataSource *)arg1 downloadsDidChange:(NSArray *)arg2;
- (void)downloadManager:(VUIDownloadDataSource *)arg1 downloadedFetchDidFinishWithEntities:(NSArray *)arg2;
@end

