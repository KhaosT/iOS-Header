//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFeedCellDelegate-Protocol.h>

@class PUFeedInvitationCell, UIViewController;

@protocol PUFeedInvitationCellDelegate <PUFeedCellDelegate>

@optional
- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 presentViewController:(UIViewController *)arg2;
- (void)feedInvitationCellReportAsJunk:(PUFeedInvitationCell *)arg1;
- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 didAccept:(_Bool)arg2;
@end
