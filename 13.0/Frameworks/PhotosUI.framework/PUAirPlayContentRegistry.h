//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, UIViewController;
@protocol PHAirPlayControllerContentProvider;

__attribute__((visibility("hidden")))
@interface PUAirPlayContentRegistry : NSObject
{
    id <PHAirPlayControllerContentProvider> _currentContentProvider;
    NSPointerArray *__contentProviders;
    UIViewController *__cachedCurrentContent;
}

@property(retain, nonatomic, setter=_setCachedCurrentContent:) UIViewController *_cachedCurrentContent; // @synthesize _cachedCurrentContent=__cachedCurrentContent;
@property(retain, nonatomic, setter=_setContentProviders:) NSPointerArray *_contentProviders; // @synthesize _contentProviders=__contentProviders;
@property(nonatomic, setter=_setCurrentContentProvider:) id <PHAirPlayControllerContentProvider> currentContentProvider; // @synthesize currentContentProvider=_currentContentProvider;
- (void).cxx_destruct;
- (void)clearContent;
- (id)contentForController:(id)arg1;
- (void)_updateCurrentContentProvider;
- (void)_invalidateCurrentContent;
- (unsigned long long)_indexOfContentProvider:(id)arg1;
- (void)removeContentProvider:(id)arg1;
- (void)addContentProvider:(id)arg1;
- (id)init;

@end
