//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentBehavior.h>

@interface SXParallaxComponentBehavior : SXComponentBehavior
{
    int _cachedDirection;
}

+ (id)typeString;
@property(readonly, nonatomic) int cachedDirection; // @synthesize cachedDirection=_cachedDirection;
- (Class)handlerClassForComponent:(id)arg1;
- (int)directionWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) int direction; // @dynamic direction;
@property(readonly, nonatomic) double factor; // @dynamic factor;

@end
