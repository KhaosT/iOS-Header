//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstFaceConfigEntry : NSObject
{
    int faceId;
    struct CGRect faceRect;
    int framesSinceLast;
}

@property int framesSinceLast; // @synthesize framesSinceLast;
@property struct CGRect faceRect; // @synthesize faceRect;
@property int faceId; // @synthesize faceId;
- (id)initWithRect:(struct CGRect)arg1 withFaceId:(int)arg2;

@end

