//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplicationSceneSettings.h>

#import <CarPlayUIServices/CRSUIDashboardWidgetSceneSettings-Protocol.h>

@class NSObject, NSString;
@protocol OS_xpc_object;

@interface CRSUIDashboardWidgetSceneSettings : UIApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings>
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property(readonly, nonatomic) unsigned long long widgetStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

