//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MNTracePlayer, NSArray, UIViewController;
@protocol MapsDebugViewController;

@protocol MapsDebugViewControllerDelegate <NSObject>
@property(nonatomic) _Bool locationPulseEnabled;
@property(nonatomic) _Bool hasShownNavModeAdvisory;
- (void)debugControllerDidFinish:(UIViewController<MapsDebugViewController> *)arg1;
- (void)debugController:(UIViewController<MapsDebugViewController> *)arg1 choseTracePlayer:(MNTracePlayer *)arg2 startNav:(_Bool)arg3;
- (NSArray *)allVisibleMapViewsButNotCarPlayForDebugController:(UIViewController<MapsDebugViewController> *)arg1;
- (NSArray *)allVisibleMapViewsForDebugController:(UIViewController<MapsDebugViewController> *)arg1;
@end
