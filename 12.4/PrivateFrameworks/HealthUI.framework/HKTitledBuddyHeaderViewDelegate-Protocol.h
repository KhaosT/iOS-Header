//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKTitledBuddyHeaderView, NSMutableAttributedString;

@protocol HKTitledBuddyHeaderViewDelegate <NSObject>
- (void)titledBuddyHeaderViewDidTapLinkButton:(HKTitledBuddyHeaderView *)arg1;

@optional
- (void)updateBodyTextAttributesWithMutableString:(NSMutableAttributedString *)arg1;
@end
