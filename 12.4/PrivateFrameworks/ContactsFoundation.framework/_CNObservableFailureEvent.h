//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservableEvent.h>

@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent
{
    NSError *_error;
}

- (void).cxx_destruct;
- (void)dematerializeWithObserver:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)error;
- (id)value;
- (_Bool)hasValue;
- (unsigned long long)eventType;
- (id)initWithError:(id)arg1;

@end
