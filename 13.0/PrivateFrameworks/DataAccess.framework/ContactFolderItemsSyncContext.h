//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNChangeHistoryAnchor;

@interface ContactFolderItemsSyncContext : NSObject
{
    int _abPersonChangeId;
    int _abGroupChangeId;
    CNChangeHistoryAnchor *_cnChangeAnchor;
}

@property(retain, nonatomic) CNChangeHistoryAnchor *cnChangeAnchor; // @synthesize cnChangeAnchor=_cnChangeAnchor;
@property(nonatomic) int abGroupChangeId; // @synthesize abGroupChangeId=_abGroupChangeId;
@property(nonatomic) int abPersonChangeId; // @synthesize abPersonChangeId=_abPersonChangeId;
- (void).cxx_destruct;

@end
