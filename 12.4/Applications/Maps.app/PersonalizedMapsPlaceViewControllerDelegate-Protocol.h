//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MKMapItem, NSString, UIViewController;

@protocol PersonalizedMapsPlaceViewControllerDelegate
@property(readonly, copy, nonatomic) NSString *actionButtonTitle;
- (int)placeViewAnalyticTarget;
- (void)personalizedMapsPlaceViewController:(UIViewController *)arg1 actionButtonTappedForMapItem:(MKMapItem *)arg2;
@end
