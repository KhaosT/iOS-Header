//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SCRCStackNode : NSObject
{
    id _object;
    _SCRCStackNode *_prev;
    _SCRCStackNode *_next;
}

@property(retain, nonatomic) _SCRCStackNode *next; // @synthesize next=_next;
@property(retain, nonatomic) _SCRCStackNode *prev; // @synthesize prev=_prev;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;

@end
