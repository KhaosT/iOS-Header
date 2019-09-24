//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLExpressable-Protocol.h>

@class NSString;

@interface EFSQLLikeEscapedExpression : NSObject <EFSQLExpressable>
{
    unsigned short _escapeCharacter;
    NSString *_value;
    unsigned long long _pattern;
}

@property(readonly, nonatomic) unsigned long long pattern; // @synthesize pattern=_pattern;
@property(readonly, nonatomic) unsigned short escapeCharacter; // @synthesize escapeCharacter=_escapeCharacter;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)_stringForPattern:(unsigned long long)arg1 literal:(id)arg2;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 escapeCharacter:(unsigned short)arg3;
- (id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2;
- (id)initWithValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
