//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPTablePart.h"

@class RAPPlaceCorrectableString, RAPReportComposerIncorrectNameSection;

__attribute__((visibility("hidden")))
@interface RAPReportComposerIncorrectNamePart : RAPTablePart
{
    RAPReportComposerIncorrectNameSection *_incorrectNameSection;
    RAPPlaceCorrectableString *_correctableString;
}

@property(retain, nonatomic) RAPPlaceCorrectableString *correctableString; // @synthesize correctableString=_correctableString;
- (void).cxx_destruct;
- (id)initWithCorrectableString:(id)arg1;

@end
