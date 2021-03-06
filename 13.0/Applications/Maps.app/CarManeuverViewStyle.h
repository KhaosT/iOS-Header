//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface CarManeuverViewStyle : NSObject <NSCopying>
{
    _Bool _hasLaneGuidance;
    _Bool _hasShield;
    _Bool _secondarySignVisible;
    unsigned long long _variant;
    unsigned long long _layoutType;
    unsigned long long _destination;
    unsigned long long _compressionStage;
}

+ (id)styleWithVariant:(unsigned long long)arg1 destination:(unsigned long long)arg2 layoutType:(unsigned long long)arg3;
@property(nonatomic) unsigned long long compressionStage; // @synthesize compressionStage=_compressionStage;
@property(nonatomic) _Bool secondarySignVisible; // @synthesize secondarySignVisible=_secondarySignVisible;
@property(nonatomic) _Bool hasShield; // @synthesize hasShield=_hasShield;
@property(nonatomic) _Bool hasLaneGuidance; // @synthesize hasLaneGuidance=_hasLaneGuidance;
@property(readonly, nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) unsigned long long variant; // @synthesize variant=_variant;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int desiredFraming;
@property(readonly, nonatomic) struct CGSize arrowReferenceSize;
@property(readonly, nonatomic) CDStruct_092aca68 arrowMetrics;
@property(readonly, nonatomic) _Bool canHaveLaneGuidance;
@property(readonly, nonatomic) _Bool isSecondary;
@property(readonly, nonatomic) long long labelLineBreakMode;
@property(readonly, nonatomic) _Bool shouldScaleInstructionsPreferredFont;
@property(readonly, nonatomic) long long instructionsMaxNumberOfTotalLines;
@property(readonly, nonatomic) long long instructionsMaxNumberOfLinesWithPreferredFont;
@property(readonly, nonatomic) double instructionsAlternateFontLineSpacing;
@property(readonly, nonatomic) UIFont *instructionsAlternateFont;
@property(readonly, nonatomic) UIFont *instructionsPreferredFont;
@property(readonly, nonatomic) UIColor *arrowAccentColor;
@property(readonly, nonatomic) UIColor *arrowMainColor;
@property(readonly, nonatomic) UIColor *instructionsColor;
@property(readonly, nonatomic) UIColor *distanceColor;
@property(readonly, nonatomic) UIFont *distanceFont;
- (_Bool)_isDisplayedInWidget;
@property(readonly, nonatomic) _Bool displaysShield;
- (id)initWithVariant:(unsigned long long)arg1 destination:(unsigned long long)arg2 layoutType:(unsigned long long)arg3;

@end

