//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXCMMSuggestionView;

@protocol PXCMMSuggestionViewDelegate <NSObject>
- (void)presentDetailViewForSuggestionView:(PXCMMSuggestionView *)arg1 animated:(_Bool)arg2;

@optional
- (void)dynamicUserInterfaceTraitDidChange;
- (void)suggestionViewSizeThatFitsDidChange:(PXCMMSuggestionView *)arg1;
@end
