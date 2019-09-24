//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFAnalyticsObserverConnection, NSSet, NSString;

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating>
{
    AFAnalyticsObserverConnection *_observerConnection;
    NSSet *_filteredTagIdentifiers;
}

- (void).cxx_destruct;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitUntilInvalidated;
- (void)invalidate;
- (id)initWithObservation:(CDUnknownBlockType)arg1 filterByInstrumentationTypes:(id)arg2;
- (id)initWithObservation:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
