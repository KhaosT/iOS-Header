//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSMutableCopying-Protocol.h>

@class NSArray;

@interface _ML3DatabaseConnectionPoolDiagnostic : NSObject <NSMutableCopying>
{
    NSArray *_readerAvailableConnections;
    NSArray *_readerBusyConnections;
    NSArray *_writerAvailableConnections;
    NSArray *_writerBusyConnections;
}

@property(readonly, nonatomic) NSArray *writerBusyConnections; // @synthesize writerBusyConnections=_writerBusyConnections;
@property(readonly, nonatomic) NSArray *writerAvailableConnections; // @synthesize writerAvailableConnections=_writerAvailableConnections;
@property(readonly, nonatomic) NSArray *readerBusyConnections; // @synthesize readerBusyConnections=_readerBusyConnections;
@property(readonly, nonatomic) NSArray *readerAvailableConnections; // @synthesize readerAvailableConnections=_readerAvailableConnections;
- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

