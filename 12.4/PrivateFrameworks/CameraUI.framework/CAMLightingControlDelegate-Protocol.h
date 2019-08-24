//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMLightingControl;

@protocol CAMLightingControlDelegate <NSObject>
- (void)lightingControlDidChangeSelectedLightingType:(CAMLightingControl *)arg1;

@optional
- (void)lightingControlDidChangeExpanded:(CAMLightingControl *)arg1;
- (void)lightingControl:(CAMLightingControl *)arg1 willChangeExpanded:(_Bool)arg2;
@end
