//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@protocol SFUserActivityInfo <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSURL *urlValue;
@property(copy, nonatomic) NSString *stringValue;
@property(copy, nonatomic) NSString *key;
@property(nonatomic) int valueType;
@end
