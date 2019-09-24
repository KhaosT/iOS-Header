//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWebView.h>

@class NSString, UIColor, UIView;
@protocol SUWebViewDelegate;

@interface SUWebView : UIWebView
{
    _Bool _isPinned;
    UIColor *_originalBackgroundColor;
    BOOL _originalShowsBackgroundShadow;
    double _pinnedHeaderInsetAdjustment;
    UIView *_pinnedHeaderView;
    unsigned int _scrollingDisabled:1;
    _Bool _showsTopBackgroundShadow;
    long long _synchronousLayoutCount;
    UIColor *_topBackgroundColor;
}

@property(retain, nonatomic) UIColor *topBackgroundColor; // @synthesize topBackgroundColor=_topBackgroundColor;
@property(nonatomic) _Bool showsTopBackgroundShadow; // @synthesize showsTopBackgroundShadow=_showsTopBackgroundShadow;
- (void).cxx_destruct;
- (void)view:(id)arg1 didSetFrame:(struct CGRect)arg2 oldFrame:(struct CGRect)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_setRichTextReaderViewportSettings;
- (void)_setPinnedHeaderView:(id)arg1 withTopInsetAdjustment:(double)arg2;
@property(readonly, nonatomic) id windowScriptObject;
@property(readonly, nonatomic) NSString *title;
@property(nonatomic, getter=isScrollingEnabled) _Bool scrollingEnabled;
- (void)loadArchive:(id)arg1;
- (_Bool)getStatusBarStyle:(long long *)arg1;
- (void)endSynchronousLayout;
- (void)beginSynchronousLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id <SUWebViewDelegate> delegate; // @dynamic delegate;

@end
