//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WDClinicalLocationCell.h"

@class HKClinicalAccount, UIButton;

@interface WDClinicalAccountSourceCell : WDClinicalLocationCell
{
    UIButton *_webLinkButton;
    HKClinicalAccount *_account;
}

@property(readonly, copy, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) UIButton *webLinkButton; // @synthesize webLinkButton=_webLinkButton;
- (void).cxx_destruct;
- (void)_handleWebLinkTapped;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)willDisplay;
- (void)setAccount:(id)arg1 dataProvider:(id)arg2;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
