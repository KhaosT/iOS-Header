//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask
{
    CoreDAVAction *_backingAction;
}

@property(retain, nonatomic) CoreDAVAction *backingAction; // @synthesize backingAction=_backingAction;
- (void).cxx_destruct;
- (id)description;

@end
