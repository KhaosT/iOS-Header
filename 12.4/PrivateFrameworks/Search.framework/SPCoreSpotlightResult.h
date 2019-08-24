//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SFSearchResult_Compatibility.h>

#import <Search/NSCopying-Protocol.h>

@class NSArray, NSDate, NSString;

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility <NSCopying>
{
    _Bool _completed;
    _Bool _hasAssociatedUserActivity;
    NSString *_relatedUniqueIdentifier;
    NSString *_itemIdentifier;
    NSDate *_interestingDate;
    NSString *_domainIdentifier;
    long long _incomingCount;
    long long _outgoingCount;
    NSString *_relatedBundleID;
    NSString *_mailConversationIdentifier;
    NSArray *_launchDates;
    NSDate *_contentCreationDate;
    NSString *_bundleID;
    struct ranking_index_score_t _buddyScore;
}

@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSDate *contentCreationDate; // @synthesize contentCreationDate=_contentCreationDate;
@property(retain, nonatomic) NSArray *launchDates; // @synthesize launchDates=_launchDates;
@property(nonatomic) _Bool hasAssociatedUserActivity; // @synthesize hasAssociatedUserActivity=_hasAssociatedUserActivity;
@property(retain) NSString *mailConversationIdentifier; // @synthesize mailConversationIdentifier=_mailConversationIdentifier;
@property(retain) NSString *relatedBundleID; // @synthesize relatedBundleID=_relatedBundleID;
@property long long outgoingCount; // @synthesize outgoingCount=_outgoingCount;
@property long long incomingCount; // @synthesize incomingCount=_incomingCount;
@property(retain) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property _Bool completed; // @synthesize completed=_completed;
@property(retain) NSDate *interestingDate; // @synthesize interestingDate=_interestingDate;
@property(retain) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property struct ranking_index_score_t buddyScore; // @synthesize buddyScore=_buddyScore;
@property(retain) NSString *relatedUniqueIdentifier; // @synthesize relatedUniqueIdentifier=_relatedUniqueIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (Class)classForCoder;
@property int title_maxlines;
- (_Bool)hasDetail;
@property(retain) NSArray *compatibilityDescriptions;
- (id)init;

@end
