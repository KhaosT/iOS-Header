//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationBar.h>

#import <StoreKitUI/SKUIPositionAdjusting-Protocol.h>

@class NSString;

@interface SKUIScrollingTabNavigationBar : SUNavigationBar <SKUIPositionAdjusting>
{
    struct UIOffset _positionOffset;
}

@property(nonatomic) struct UIOffset positionOffset;
- (void)setFrame:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
