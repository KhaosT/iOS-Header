//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEventDataProvider.h>

@protocol MTEventHandlerDelegate;

@interface MTEventHandler : MTEventDataProvider
{
}

+ (id)cachableWithKey:(id)arg1 onBackgroundThread:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (void)clearEventContextCache;
+ (void)createEventContextCache;
+ (id)currentEventContextCache;
- (id)eventVersion:(id)arg1;
- (id)eventType;
- (_Bool)mtIncludeBaseFields;
- (id)knownFields;
- (id)metricsDataWithCallerSuppliedFields:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <MTEventHandlerDelegate> delegate; // @dynamic delegate;

@end

