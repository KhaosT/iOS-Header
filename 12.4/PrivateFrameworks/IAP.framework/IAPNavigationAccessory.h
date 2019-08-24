//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IAPNavigationAccessory : NSObject
{
    _Bool __wasFoundInLastUpdate;
    unsigned long long _identifier;
    NSSet *_components;
}

@property _Bool _wasFoundInLastUpdate; // @synthesize _wasFoundInLastUpdate=__wasFoundInLastUpdate;
@property(retain) NSSet *components; // @synthesize components=_components;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)requestedSourceSupportsRouteGuidanceForAnyComponent;
- (_Bool)requestedSourceNameForAnyComponent;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDict:(id)arg1;

@end
