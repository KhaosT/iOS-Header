//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendar.h>

#import <Intents/INJSONSerializable-Protocol.h>

@class NSString;

@interface NSCalendar (INJSONSerialization) <INJSONSerializable>
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
