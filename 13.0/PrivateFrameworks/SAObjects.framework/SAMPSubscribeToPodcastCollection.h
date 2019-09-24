//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString, SAMPPodcastCollection;

@interface SAMPSubscribeToPodcastCollection : SADomainCommand
{
}

+ (id)subscribeToPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)subscribeToPodcastCollection;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAMPPodcastCollection *podcastCollection;
@property(copy, nonatomic) NSString *hashedRouteUID;
@property(copy, nonatomic) NSString *assetInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
