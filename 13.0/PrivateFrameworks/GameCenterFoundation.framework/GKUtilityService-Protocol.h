//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSString, NSURL;

@protocol GKUtilityService <NSObject>
- (oneway void)deleteCachedImageDataFromSubdirectory:(NSString *)arg1 withFileName:(NSString *)arg2 handler:(void (^)(void))arg3;
- (oneway void)loadCachedImageDataFromSubdirectory:(NSString *)arg1 withFileName:(NSString *)arg2 handler:(void (^)(NSData *))arg3;
- (oneway void)cacheImageData:(NSData *)arg1 inSubdirectory:(NSString *)arg2 withFileName:(NSString *)arg3 handler:(void (^)(void))arg4;
- (oneway void)requestImageDataForURL:(NSURL *)arg1 subdirectory:(NSString *)arg2 fileName:(NSString *)arg3 handler:(void (^)(NSData *))arg4;
- (oneway void)getStoreBagValuesForKeys:(NSArray *)arg1 handler:(void (^)(NSString *, NSString *, NSString *, NSData *, NSDictionary *, NSError *))arg2;
@end
