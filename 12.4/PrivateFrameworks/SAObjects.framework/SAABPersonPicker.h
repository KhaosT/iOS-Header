//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUIDomainObjectPicker.h>

@class NSArray;

@interface SAABPersonPicker : SAUIDomainObjectPicker
{
}

+ (id)personPickerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)personPicker;
@property(nonatomic) _Bool showImmediately;
@property(copy, nonatomic) NSArray *persons;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
