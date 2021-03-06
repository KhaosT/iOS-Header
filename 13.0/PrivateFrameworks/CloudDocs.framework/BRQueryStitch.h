//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRFileObjectID, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface BRQueryStitch : NSObject
{
    NSArray *_contexts;
    BRFileObjectID *_objid;
    BOOL _kind;
    NSURL *_fromURL;
    NSURL *_url;
}

@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSURL *fromURL; // @synthesize fromURL=_fromURL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)done;
- (void)_deletionDone;
- (void)_renameDone;
- (void)_creationDone;
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)setQueries:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;

@end

