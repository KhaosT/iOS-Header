//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasPlaybackDelegate-Protocol.h>

@class NSError, VideosExtrasContext;

@protocol VideosExtrasContextDelegate <VideosExtrasPlaybackDelegate>
- (void)extrasContext:(VideosExtrasContext *)arg1 hadFatalError:(NSError *)arg2;

@optional
- (void)extrasContext:(VideosExtrasContext *)arg1 extrasVisibilityNeedsUpdate:(_Bool)arg2;
- (void)extrasContextDidLoadMainMenuItems:(VideosExtrasContext *)arg1;
@end
