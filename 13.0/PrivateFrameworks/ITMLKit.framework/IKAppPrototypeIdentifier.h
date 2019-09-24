//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKAppPrototypeIdentifier : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_selector;
    NSDictionary *_groupingValues;
}

@property(readonly, copy, nonatomic) NSDictionary *groupingValues; // @synthesize groupingValues=_groupingValues;
@property(readonly, copy, nonatomic) NSString *selector; // @synthesize selector=_selector;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 selector:(id)arg2 groupingValues:(id)arg3;

@end
