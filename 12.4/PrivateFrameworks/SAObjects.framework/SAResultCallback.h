//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAResultCallback : AceObject <SAAceSerializable>
{
}

+ (id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2;
+ (id)resultCallback;
@property(copy, nonatomic) NSArray *commands;
@property(copy, nonatomic) NSArray *commandReferences;
@property(nonatomic) long long code;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
