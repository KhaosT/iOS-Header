//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRAirPlayDiagnosticsService : NSObject
{
}

+ (id)sharedInstance;
- (id)filePathForAirPlayLogsForTimestamp:(id)arg1 error:(id *)arg2;
- (id)_connectedIPAddress;
- (int)_fetchRemoteLogsForIPAddress:(id)arg1 filepath:(id *)arg2 timestamp:(id)arg3;
- (id)URLforCarPlayDiagnosticsFolderWithTimestamp:(id)arg1;

@end

