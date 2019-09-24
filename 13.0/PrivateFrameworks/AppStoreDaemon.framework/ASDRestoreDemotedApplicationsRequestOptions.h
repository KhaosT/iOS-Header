//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSNumber, NSString;

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions
{
    NSNumber *_accountID;
    NSString *_appleID;
    NSArray *_bundleIDs;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIDs:(id)arg1;
- (id)initWithAccountID:(id)arg1 appleID:(id)arg2;

@end
