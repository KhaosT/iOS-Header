//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/NSCopying-Protocol.h>

@interface EKDayViewItemPath : NSObject <NSCopying>
{
    int _section;
    unsigned long long _index;
}

+ (id)itemPathWithIndex:(unsigned long long)arg1 inSection:(int)arg2;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) int section; // @synthesize section=_section;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1 inSection:(int)arg2;

@end
