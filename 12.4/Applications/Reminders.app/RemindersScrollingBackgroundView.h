//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface RemindersScrollingBackgroundView : UIView
{
    UIImage *_textureImage;
}

+ (id)kitPaperTextureImage;
@property(retain) UIImage *textureImage; // @synthesize textureImage=_textureImage;
- (void).cxx_destruct;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)resizeForRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
