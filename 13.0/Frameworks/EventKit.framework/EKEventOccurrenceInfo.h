//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject
{
    EKObjectID *_objectID;
    double _date;
}

@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectID:(id)arg1 date:(double)arg2;

@end
