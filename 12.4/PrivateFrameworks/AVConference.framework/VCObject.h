//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCObject : NSObject
{
    NSString *_logPrefix;
    struct _opaque_pthread_mutex_t _mutex;
    id _reportingAgent;
}

@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

