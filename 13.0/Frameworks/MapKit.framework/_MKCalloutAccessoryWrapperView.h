//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/_MKCalloutAccessoryView-Protocol.h>

@class NSString;
@protocol _MKCalloutAccessoryView;

__attribute__((visibility("hidden")))
@interface _MKCalloutAccessoryWrapperView : UIView <_MKCalloutAccessoryView>
{
    UIView<_MKCalloutAccessoryView> *_view;
}

- (void).cxx_destruct;
- (id)_mapkit_accessoryControlToExtendWithCallout;
- (struct CGSize)intrinsicContentSize;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
