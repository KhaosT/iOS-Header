//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class FCArticle, NSString;

@protocol NUArticleDataProvider <NSObject>
@property(readonly, nonatomic) FCArticle *article;
@property(readonly, copy, nonatomic) NSString *articleID;
- (void)cancelAssetPrefetch;
- (void)prefetchAssets;
- (void)loadContextWithCompletionBlock:(void (^)(SXContext *, id <NUFontRegistrator>, NSError *))arg1;
@end
