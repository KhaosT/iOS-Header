//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WAKView;

__attribute__((visibility("hidden")))
@interface WebHTMLViewPrivate : NSObject
{
    _Bool closed;
    _Bool ignoringMouseDraggedEvents;
    _Bool printing;
    _Bool paginateScreenContent;
    WAKView *layerHostingView;
    struct RetainPtr<WebEvent> mouseDownEvent;
    _Bool handlingMouseDownEvent;
    struct RetainPtr<WebEvent> keyDownEvent;
    _Bool exposeInputContext;
    struct CGPoint lastScrollPosition;
    _Bool inScrollPositionChanged;
    struct RetainPtr<WebPluginController> pluginController;
    struct RetainPtr<NSArray> pageRects;
    struct WebHTMLViewInterpretKeyEventsParameters *interpretKeyEventsParameters;
    struct RetainPtr<WebDataSource> dataSource;
    SEL selectorForDoCommandBySelector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;

@end

