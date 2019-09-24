//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseImport.h>

@class ML3MusicLibrary, MLDClient, MLDMediaLibraryWriter;

@interface MLDServiceDatabaseImport : ML3DatabaseImport
{
    ML3MusicLibrary *_library;
    MLDMediaLibraryWriter *_writer;
    MLDClient *_client;
}

@property(readonly, nonatomic) MLDClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) MLDMediaLibraryWriter *writer; // @synthesize writer=_writer;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)initWithDatabaseImport:(id)arg1 library:(id)arg2 writer:(id)arg3 client:(id)arg4;

@end
