//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class DMFBook;

@interface DMFInstallManagedBookResultObject : CATTaskResultObject
{
    DMFBook *_book;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) DMFBook *book; // @synthesize book=_book;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBook:(id)arg1;

@end
