//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSABaseApplicationDelegate;

__attribute__((visibility("hidden")))
@interface TSAServerApplicationDelegate : NSObject
{
    TSABaseApplicationDelegate *_baseApplicationDelegate;
}

+ (id)sharedDelegate;
@property(retain, nonatomic) TSABaseApplicationDelegate *baseApplicationDelegate; // @synthesize baseApplicationDelegate=_baseApplicationDelegate;
- (void).cxx_destruct;
- (id)initWithBaseApplicationDelegate:(id)arg1;
- (id)init;

@end
