//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@interface SFSearchViewAppearFeedback : SFFeedback
{
    _Bool _isOnLockScreen;
    _Bool _isOverApp;
    _Bool _readerTextAvailable;
    unsigned long long _viewAppearEvent;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property(nonatomic) _Bool isOverApp; // @synthesize isOverApp=_isOverApp;
@property(nonatomic) _Bool isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property(nonatomic) unsigned long long viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;

@end
