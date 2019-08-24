//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@interface PUToolbarViewModelChange : PUViewModelChange
{
    _Bool _toolbarItemsChanged;
    _Bool _accessoryViewChanged;
    _Bool _accessoryViewTopOutsetChanged;
    _Bool _accessoryViewMaximumHeightChanged;
    _Bool _maximumHeightChanged;
}

@property(nonatomic, setter=_setMaximumHeightChanged:) _Bool maximumHeightChanged; // @synthesize maximumHeightChanged=_maximumHeightChanged;
@property(nonatomic, setter=_setAccessoryViewMaximumHeightChanged:) _Bool accessoryViewMaximumHeightChanged; // @synthesize accessoryViewMaximumHeightChanged=_accessoryViewMaximumHeightChanged;
@property(nonatomic, setter=_setAccessoryViewTopOutsetChanged:) _Bool accessoryViewTopOutsetChanged; // @synthesize accessoryViewTopOutsetChanged=_accessoryViewTopOutsetChanged;
@property(nonatomic, setter=_setAccessoryViewChanged:) _Bool accessoryViewChanged; // @synthesize accessoryViewChanged=_accessoryViewChanged;
@property(nonatomic, setter=_setToolbarItemsChanged:) _Bool toolbarItemsChanged; // @synthesize toolbarItemsChanged=_toolbarItemsChanged;
- (_Bool)hasChanges;

@end
