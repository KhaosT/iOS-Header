//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TSCH3DShaderStatement <NSObject>
- (void)setGeneratedForType:(struct TSCH3DShaderType)arg1;
- (NSString *)string;
- (struct TSCH3DShaderType)linkageType;
- (_Bool)isLinked;
- (NSArray *)resolve;
@end
