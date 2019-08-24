//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTViewCarouselLayout-Protocol.h>

@class NSString;

@interface AVTViewCarouselLayout : NSObject <AVTViewCarouselLayout>
{
    struct CGSize _avtViewAspectRatio;
}

+ (struct CGSize)fullSizeForBounds:(struct CGSize)arg1;
+ (struct CGSize)severalItemsSizeForBounds:(struct CGSize)arg1 aspectRatio:(struct CGSize)arg2;
+ (id)adaptativeLayoutWithAVTViewAspectRatio:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize avtViewAspectRatio; // @synthesize avtViewAspectRatio=_avtViewAspectRatio;
- (struct CGSize)contentViewSizeForSize:(struct CGSize)arg1;
- (struct CGSize)avatarViewSizeForAvailableContentSize:(struct CGSize)arg1;
- (id)initWithAVTViewAspectRatio:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
