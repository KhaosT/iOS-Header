//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFHomeKitTransformItem.h>

#import <HomeUI/HFActionBuilderFactory-Protocol.h>
#import <HomeUI/HFServiceVendor-Protocol.h>

@class HFItem, NSSet, NSString;
@protocol HFHomeKitItemProtocol><HFServiceVendor><HFActionBuilderFactory;

@interface HUServiceGridTransformItem : HFHomeKitTransformItem <HFServiceVendor, HFActionBuilderFactory>
{
}

- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (_Bool)containsActions;
- (id)accessories;
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFActionBuilderFactory> *sourceServicePickerItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
