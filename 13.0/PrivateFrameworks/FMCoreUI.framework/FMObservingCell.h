//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableDictionary, NSMutableSet;

@interface FMObservingCell : UITableViewCell
{
    id _representedObject;
    NSMutableDictionary *_kvoObservationTokens;
    NSMutableSet *_notificationTokens;
}

@property(retain, nonatomic) NSMutableSet *notificationTokens; // @synthesize notificationTokens=_notificationTokens;
@property(retain, nonatomic) NSMutableDictionary *kvoObservationTokens; // @synthesize kvoObservationTokens=_kvoObservationTokens;
@property(nonatomic) __weak id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (void)removeNotificationTokens;
- (void)addNotificationToken:(id)arg1;
- (void)removeKVOObservationTokens;
- (void)addKVOObservationToken:(id)arg1 forObject:(id)arg2;
- (void)addObserversForRepresentedObject:(id)arg1;
- (void)prepareForReuse;

@end

