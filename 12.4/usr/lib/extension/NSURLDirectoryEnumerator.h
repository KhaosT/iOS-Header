//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDirectoryEnumerator.h>

__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator
{
    struct __CFURLEnumerator *_enumerator;
    CDUnknownBlockType _errorHandler;
    _Bool shouldContinue;
}

@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (void)dealloc;
- (id)directoryAttributes;
- (id)fileAttributes;
- (unsigned long long)level;
- (void)skipDescendants;
- (void)skipDescendents;
- (id)nextObject;
- (id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(CDUnknownBlockType)arg4;

@end
