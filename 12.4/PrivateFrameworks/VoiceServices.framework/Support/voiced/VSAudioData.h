//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface VSAudioData : NSObject <NSCopying>
{
    NSData *_audioData;
    long long _packetCount;
    NSData *_packetDescriptions;
    struct AudioStreamBasicDescription _asbd;
}

+ (id)pcmAudioDataFromOpusAudio:(id)arg1;
+ (id)audioDataFromPresynthesisRequest:(id)arg1;
+ (id)audioDataFromSAUIAudioData:(id)arg1;
+ (id)audioDataFromFile:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSData *packetDescriptions; // @synthesize packetDescriptions=_packetDescriptions;
@property(nonatomic) long long packetCount; // @synthesize packetCount=_packetCount;
@property(nonatomic) struct AudioStreamBasicDescription asbd; // @synthesize asbd=_asbd;
@property(retain, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
- (void).cxx_destruct;
- (id)concatenateWithAudio:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)duration;
- (_Bool)writeToFilePath:(id)arg1;
- (_Bool)populatePCMDataWithSiriOpusSData:(id)arg1 withOpusASBD:(struct AudioStreamBasicDescription)arg2;
- (_Bool)populateWithOpusData:(id)arg1;
- (_Bool)populateWithPCMData:(id)arg1;

@end
