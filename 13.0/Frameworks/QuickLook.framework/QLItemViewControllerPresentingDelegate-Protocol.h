//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSString, QLItemPresenterViewController, QLItemViewController;

@protocol QLItemViewControllerPresentingDelegate
@property(readonly) QLItemPresenterViewController *itemPresenterViewController;
@property(readonly, nonatomic) NSString *hostApplicationBundleIdentifier;
- (void)previewItemViewController:(QLItemViewController *)arg1 didFailWithError:(NSError *)arg2;
@end
