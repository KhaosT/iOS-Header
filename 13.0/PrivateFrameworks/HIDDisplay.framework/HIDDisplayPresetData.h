//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HIDDisplayPresetInterface, NSData;

@interface HIDDisplayPresetData : NSObject
{
    long long _index;
    HIDDisplayPresetInterface *_deviceRef;
}

- (void).cxx_destruct;
@property(readonly) NSData *uniqueID;
- (_Bool)set:(id)arg1 error:(id *)arg2;
- (id)get:(id *)arg1;
@property(readonly) _Bool writable;
@property(readonly) _Bool valid;
- (void)setHidDisplay:(id)arg1;
- (id)hidDisplay;
- (id)initWithDisplayDevice:(id)arg1 index:(long long)arg2;

@end
