//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPaymentSetupFieldCell;

@protocol PKPaymentSetupFieldCellDelegate <NSObject>

@optional
- (void)fieldCellDidTapButton:(PKPaymentSetupFieldCell *)arg1;
- (_Bool)fieldCellEditableTextFieldShouldClear:(PKPaymentSetupFieldCell *)arg1;
- (_Bool)fieldCellEditableTextFieldShouldReturn:(PKPaymentSetupFieldCell *)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(PKPaymentSetupFieldCell *)arg1;
- (_Bool)fieldCellEditableTextFieldShouldBeginEditing:(PKPaymentSetupFieldCell *)arg1;
@end
