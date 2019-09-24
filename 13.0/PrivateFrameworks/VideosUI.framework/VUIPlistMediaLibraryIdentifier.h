//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIMediaLibraryIdentifier-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier>
{
    NSURL *_libraryFileURL;
}

@property(copy, nonatomic) NSURL *libraryFileURL; // @synthesize libraryFileURL=_libraryFileURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
