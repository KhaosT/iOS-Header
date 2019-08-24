//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@interface SUClipCornersImageModifier : SUImageModifier
{
    double _cornerRadius;
    int _corners;
}

@property(nonatomic) int corners; // @synthesize corners=_corners;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (struct CGPath *)_copyClippingPathForRect:(struct CGRect)arg1;
- (void)drawBeforeImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (_Bool)isEqual:(id)arg1;

@end
