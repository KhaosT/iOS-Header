//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BUCountingAssertionProviderDelegate, OS_dispatch_queue;

@interface BUCountingAssertionProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _count;
    id <BUCountingAssertionProviderDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)_endAssertion;
- (_Bool)_beginAssertion;
- (id)newAssertion;
- (id)initWithDelegate:(id)arg1;

@end

