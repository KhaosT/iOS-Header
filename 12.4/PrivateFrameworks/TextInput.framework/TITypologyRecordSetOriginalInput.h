//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class NSString;

@interface TITypologyRecordSetOriginalInput : TITypologyRecord
{
    NSString *_originalInput;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *originalInput; // @synthesize originalInput=_originalInput;
- (void).cxx_destruct;
- (id)shortDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end

