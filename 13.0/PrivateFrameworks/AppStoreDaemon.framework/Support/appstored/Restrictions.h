//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface Restrictions : NSObject
{
}

+ (id)_featureNameForMediaType:(long long)arg1;
+ (id)rankForMediaType:(long long)arg1;
+ (_Bool)isOnDeviceAppInstallationAllowed;
+ (_Bool)isDiagnosticsSubmissionAllowed;
+ (_Bool)isAutomaticAppDownloadsAllowed;
+ (_Bool)isAppAnalyticsAllowed;

@end

