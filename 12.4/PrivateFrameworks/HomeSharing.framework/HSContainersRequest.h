//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSContainersRequest : HSRequest
{
    _Bool _shouldParseResponse;
}

+ (id)requestWithDatabaseID:(unsigned int)arg1;
@property(nonatomic) _Bool shouldParseResponse; // @synthesize shouldParseResponse=_shouldParseResponse;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1;
- (id)initWithAction:(id)arg1;

@end
