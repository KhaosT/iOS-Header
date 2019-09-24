//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKAccount, PKPaymentPass, PKPaymentTransactionGroup;

@interface PKPaymentTransactionGroupItem : NSObject <PKDashboardItem>
{
    PKPaymentTransactionGroup *_group;
    PKPaymentPass *_paymentPass;
    PKAccount *_account;
}

@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(retain, nonatomic) PKPaymentTransactionGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
