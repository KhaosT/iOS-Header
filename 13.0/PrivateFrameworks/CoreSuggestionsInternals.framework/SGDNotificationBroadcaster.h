//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGDNotificationBroadcaster : NSObject
{
}

+ (unsigned long long)notificationCount;
+ (void)emitReminderUpdated:(id)arg1;
+ (void)emitReminderDeleted:(id)arg1;
+ (void)emitEventUpdated:(id)arg1;
+ (void)emitEventDeleted:(id)arg1;
+ (void)emitContactUpdated:(id)arg1;
+ (void)emitContactDeleted:(id)arg1;

@end

