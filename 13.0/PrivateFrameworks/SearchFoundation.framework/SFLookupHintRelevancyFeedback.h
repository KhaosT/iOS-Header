//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFLookupHintRelevancyFeedback : SFFeedback
{
    _Bool _discarded;
    NSString *_context;
    NSString *_domain;
    unsigned long long _grade;
    struct _NSRange _hintRange;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long grade; // @synthesize grade=_grade;
@property(nonatomic) _Bool discarded; // @synthesize discarded=_discarded;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) struct _NSRange hintRange; // @synthesize hintRange=_hintRange;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 hintRange:(struct _NSRange)arg2 domain:(id)arg3 discarded:(_Bool)arg4 grade:(unsigned long long)arg5;

@end
