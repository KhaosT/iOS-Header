//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentPass.h>

@interface PKPaymentPass (NanoPassKit)
- (void)npkSetPreferredPaymentApplication:(id)arg1;
- (id)npkPreferredInAppPaymentApplication;
- (id)npkPreferredContactlessPaymentApplication;
- (id)npkDevicePaymentApplicationForAID:(id)arg1;
- (id)npkSortedDeviceInAppPaymentApplications;
- (id)npkSortedDeviceContactlessPaymentApplications;
- (_Bool)npkHasUserSelectableInAppPaymentApplications;
- (_Bool)npkHasUserSelectableContactlessPaymentApplications;
- (id)npkDeviceInAppPaymentApplications;
- (id)npkDeviceContactlessPaymentApplications;
@end
