//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SSTestingCoordinatorDelegate;

@interface SSTestingCoordinator : NSObject
{
    id <SSTestingCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <SSTestingCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleRunPPTRequest:(id)arg1;
- (void)_delayedHandleRunPPTRequest:(id)arg1;
- (_Bool)_runPPTRequestRequiresTakingScreenshot:(id)arg1;

@end
