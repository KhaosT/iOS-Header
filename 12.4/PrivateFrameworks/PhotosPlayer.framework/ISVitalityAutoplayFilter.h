//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISVitalityFilter.h>

@interface ISVitalityAutoplayFilter : ISVitalityFilter
{
    long long __state;
}

@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
- (void)_startAutoplay;
- (void)inputDidChange;

@end

