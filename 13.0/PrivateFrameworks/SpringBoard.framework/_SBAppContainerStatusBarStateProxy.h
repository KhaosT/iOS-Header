//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBAppContainerViewController;

@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy
{
    SBAppContainerViewController *_appVCBackReference;
}

@property(nonatomic) __weak SBAppContainerViewController *appVCBackReference; // @synthesize appVCBackReference=_appVCBackReference;
- (void).cxx_destruct;
- (_Bool)_statusBarAppearsOutsideOfAJailedApp;
- (long long)_fallbackInterfaceOrientation;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (long long)overrideStatusBarStyle;
- (double)_statusBarAlpha;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(_Bool)arg2;
- (long long)_statusBarStyle;

@end
