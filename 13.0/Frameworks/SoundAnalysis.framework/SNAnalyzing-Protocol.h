//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoundAnalysis/SNProcessing-Protocol.h>

@class NSArray;

@protocol SNAnalyzing <SNProcessing>
@property(readonly, nonatomic) struct Box *resultsBox;
- (id)sharedProcessorConfiguration;
- (NSArray *)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;

@optional
- (void)primeGraph;
@end
