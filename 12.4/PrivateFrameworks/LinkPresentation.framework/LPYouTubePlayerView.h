//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <LinkPresentation/UIScrollViewDelegate-Protocol.h>

@class LPYouTubePlayerScriptMessageHandler, NSMutableArray, NSString, WKWebView;
@protocol LPYouTubePlayerDelegate;

@interface LPYouTubePlayerView : UIView <UIScrollViewDelegate>
{
    WKWebView *_webView;
    NSString *_videoID;
    long long _state;
    LPYouTubePlayerScriptMessageHandler *_scriptMessageHandler;
    _Bool _ready;
    NSMutableArray *_commandsPendingPlayerReadiness;
    _Bool _startsPlayingAutomatically;
    _Bool _showsControls;
    _Bool _muted;
    id <LPYouTubePlayerDelegate> _delegate;
    double _startTime;
    double _endTime;
}

@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool showsControls; // @synthesize showsControls=_showsControls;
@property(nonatomic) _Bool startsPlayingAutomatically; // @synthesize startsPlayingAutomatically=_startsPlayingAutomatically;
@property(nonatomic) __weak id <LPYouTubePlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveScriptMessage:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)createVideoPlayerView;
- (id)_parameterScript;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (void)seekTo:(double)arg1;
- (void)pause;
- (void)play;
- (void)evaluatePlayerCommand:(id)arg1;
- (void)dealloc;
- (void)loadVideoWithID:(id)arg1;
- (void)loadVideoWithEmbedURL:(id)arg1;
- (void)loadVideoWithURL:(id)arg1;
- (void)dispatchErrorForInvalidURL;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

