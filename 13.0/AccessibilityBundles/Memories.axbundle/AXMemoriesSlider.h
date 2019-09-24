//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSString;

@interface AXMemoriesSlider : UIAccessibilityElement
{
    long long _sliderType;
    NSString *_selectedDescription;
}

@property(retain, nonatomic) NSString *selectedDescription; // @synthesize selectedDescription=_selectedDescription;
@property(nonatomic) long long sliderType; // @synthesize sliderType=_sliderType;
- (void).cxx_destruct;
- (id)_accessibilityUserTestingElementBaseType;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (long long)_axContainingSelectedItem;
- (id)_axContainingCollectionView;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end
