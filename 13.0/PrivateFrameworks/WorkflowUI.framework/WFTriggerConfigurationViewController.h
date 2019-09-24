//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class WFTrigger, WFTriggerManager;
@protocol WFTriggerConfigurationViewControllerDelegate;

@interface WFTriggerConfigurationViewController : UIViewController
{
    WFTrigger *_trigger;
    id <WFTriggerConfigurationViewControllerDelegate> _delegate;
    WFTriggerManager *_triggerManager;
    unsigned long long _mode;
}

@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) WFTriggerManager *triggerManager; // @synthesize triggerManager=_triggerManager;
@property(nonatomic) __weak id <WFTriggerConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (void)finish;
- (void)dismiss:(id)arg1;
- (void)viewDidLoad;
- (_Bool)isModalInPresentation;
- (void)updateNextButtonEnabledState;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;

@end
