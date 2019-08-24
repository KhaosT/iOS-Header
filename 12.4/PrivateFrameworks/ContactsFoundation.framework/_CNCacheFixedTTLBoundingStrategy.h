//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNCacheBoundingStrategy-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol CNTimeProvider;

@interface _CNCacheFixedTTLBoundingStrategy : NSObject <CNCacheBoundingStrategy>
{
    double _ttl;
    id <CNTimeProvider> _timeProvider;
    NSMutableDictionary *_timestamps;
}

@property(readonly, nonatomic) NSMutableDictionary *timestamps; // @synthesize timestamps=_timestamps;
@property(readonly, nonatomic) id <CNTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;
- (void).cxx_destruct;
- (_Bool)shouldEvictKey:(id)arg1;
- (void)willAccessKey:(id)arg1;
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id *)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithTTL:(double)arg1 timeProvider:(id)arg2;
- (id)initWithTTL:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
