//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVPlayerItemLoading, SVVideo;

@protocol SVPlayerItemLoaderFactory <NSObject>
- (id <SVPlayerItemLoading>)createPlayerItemLoaderForVideo:(id <SVVideo>)arg1;
@end
