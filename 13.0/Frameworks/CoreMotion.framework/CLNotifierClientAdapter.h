//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/CLNotifierServiceClientProtocol-Protocol.h>

@class NSString;

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol>
{
    struct CLNotifierClientBase *_client;
    _Bool _valid;
}

+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, copy) NSString *debugDescription;
- (void)onNotification:(int)arg1 withData:(id)arg2;
- (void)invalidate;
- (id)initWithClient:(struct CLNotifierClientBase *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
