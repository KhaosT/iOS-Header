//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostCARenderServerFrameMetadata-Protocol.h>

@class NSString;

@interface SignpostContextInfo : NSObject <SignpostCARenderServerFrameMetadata>
{
    int _pid;
    unsigned int _frameSeed;
    unsigned int _contextId;
    unsigned int _transactionSeed;
    unsigned long long _earliestMCT;
    NSString *_executablePath;
}

@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) unsigned long long earliestMCT; // @synthesize earliestMCT=_earliestMCT;
@property(readonly, nonatomic) unsigned int transactionSeed; // @synthesize transactionSeed=_transactionSeed;
@property(readonly, nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(readonly, nonatomic) unsigned int frameSeed; // @synthesize frameSeed=_frameSeed;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *processName;
- (id)initWithContextInfoEvent:(id)arg1;

@end
