//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventRouterManagerBase.h>

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase
{
    _Bool _needsFlush;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool needsFlush; // @synthesize needsFlush=_needsFlush;
- (void)_routerUpdated:(id)arg1;
- (void)_flush;
- (void)_flushTrigger;
- (void)setEventRouters:(id)arg1;
- (void)dealloc;
- (id)init;

@end
