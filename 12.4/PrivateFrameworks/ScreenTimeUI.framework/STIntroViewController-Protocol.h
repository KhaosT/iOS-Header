//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/NSObject-Protocol.h>

@class STIntroductionModel, UINavigationController;

@protocol STIntroViewController <NSObject>
@property(copy) CDUnknownBlockType completionBlock;
@property(readonly) STIntroductionModel *model;
- (UINavigationController *)navigationController;
- (id)initWithIntroductionModel:(STIntroductionModel *)arg1;
@end
