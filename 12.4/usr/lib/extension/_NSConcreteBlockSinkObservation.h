//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservation.h>

@class NSObject;
@protocol NSObservable;

__attribute__((visibility("hidden")))
@interface _NSConcreteBlockSinkObservation : NSObservation
{
    NSObject<NSObservable> *_LHSobservable;
    CDUnknownBlockType _block;
    int _tag;
}

- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (void)remove;
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;
- (id)debugDescription;
- (id *)_observerStorage;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;

@end
