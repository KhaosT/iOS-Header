//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListSection.h>

@interface NCNotificationPriorityList : NCNotificationListSection
{
}

- (long long)_insertionIndexComparisonForNotificationRequest:(id)arg1 withRequest:(id)arg2;
- (id)allNonPersistentRequests;
- (id)clearRequestsPassingTest:(CDUnknownBlockType)arg1;
- (id)clearNonPersistentRequests;
- (id)clearAllRequests;

@end

