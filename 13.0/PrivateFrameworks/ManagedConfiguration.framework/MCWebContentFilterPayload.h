//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary, NSString;

@interface MCWebContentFilterPayload : MCPayload
{
    _Bool _autoFilterEnabled;
    _Bool _filterBrowsers;
    _Bool _filterSockets;
    NSString *_filterType;
    NSArray *_permittedURLStrings;
    NSArray *_whitelistedBookmarks;
    NSArray *_blacklistedURLStrings;
    NSDictionary *_pluginConfiguration;
    NSString *_name;
    NSString *_pluginBundleID;
}

+ (id)pluginFilterKeysAndClasses;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(nonatomic) _Bool filterSockets; // @synthesize filterSockets=_filterSockets;
@property(nonatomic) _Bool filterBrowsers; // @synthesize filterBrowsers=_filterBrowsers;
@property(copy, nonatomic) NSString *pluginBundleID; // @synthesize pluginBundleID=_pluginBundleID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDictionary *pluginConfiguration; // @synthesize pluginConfiguration=_pluginConfiguration;
@property(retain, nonatomic) NSArray *blacklistedURLStrings; // @synthesize blacklistedURLStrings=_blacklistedURLStrings;
@property(retain, nonatomic) NSArray *whitelistedBookmarks; // @synthesize whitelistedBookmarks=_whitelistedBookmarks;
@property(retain, nonatomic) NSArray *permittedURLStrings; // @synthesize permittedURLStrings=_permittedURLStrings;
@property(nonatomic) _Bool autoFilterEnabled; // @synthesize autoFilterEnabled=_autoFilterEnabled;
@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)description;
- (id)restrictions;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end
