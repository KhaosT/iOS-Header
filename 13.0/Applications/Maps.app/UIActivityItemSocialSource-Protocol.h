//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIActivityViewController, UIImage;

@protocol UIActivityItemSocialSource <NSObject>

@optional
- (NSString *)activityViewController:(UIActivityViewController *)arg1 initialSocialTextForActivityType:(NSString *)arg2;
- (long long)activityViewController:(UIActivityViewController *)arg1 attachmentULRTypeForActivityType:(NSString *)arg2;
- (UIImage *)activityViewController:(UIActivityViewController *)arg1 thumbnailForActivityType:(NSString *)arg2;
@end
