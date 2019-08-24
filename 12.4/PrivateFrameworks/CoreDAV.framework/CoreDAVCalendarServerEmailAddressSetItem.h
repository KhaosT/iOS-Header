//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem
{
    NSMutableSet *_emailAddresses;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // @synthesize unauthenticated=_unauthenticated;
@property(retain, nonatomic) NSMutableSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void).cxx_destruct;
- (void)addEmailAddress:(id)arg1;
- (id)description;
- (id)init;

@end
