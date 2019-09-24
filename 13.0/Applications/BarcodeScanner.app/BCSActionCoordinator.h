//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCSAlertControllerDelegate-Protocol.h"
#import "SFSafariViewControllerDelegate-Protocol.h"

@class BCSQRCodeParser, NSString, VNBarcodeObservation, _SFLinkRedirectionResolver;
@protocol BCSAction, BCSActionCoordinatorDelegate, OS_dispatch_queue;

@interface BCSActionCoordinator : NSObject <BCSAlertControllerDelegate, SFSafariViewControllerDelegate>
{
    VNBarcodeObservation *_currentObservation;
    NSObject<OS_dispatch_queue> *_parsingQueue;
    id <BCSAction> _parsedAction;
    BCSQRCodeParser *_qrCodeParser;
    CDUnknownBlockType _actionPickerItemBlock;
    CDUnknownBlockType _firstTimePromptBlock;
    _SFLinkRedirectionResolver *_linkResolver;
    _Bool _deviceIsBeingUnlocked;
    id <BCSActionCoordinatorDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool deviceIsBeingUnlocked; // @synthesize deviceIsBeingUnlocked=_deviceIsBeingUnlocked;
@property(nonatomic) __weak id <BCSActionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)alertControllerDidCancel:(id)arg1;
- (void)alertControllerDidAllow:(id)arg1;
- (void)alertController:(id)arg1 didSelectActionItem:(id)arg2;
- (void)_launchBarcodeScannerAppFromLockscreenWithQueryOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleCalendarICSString:(id)arg1;
- (_Bool)_handleActionPickerItemIfCalendarAction:(id)arg1;
- (_Bool)_handleActionPickerItemIfHomeAction:(id)arg1;
- (void)_handleContactInfo:(id)arg1;
- (id)_tempVCardFileURL;
- (_Bool)_handleActionPickerItemIfContactsAction:(id)arg1;
- (void)requestDeviceUnlockIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_handleActionPickerItemIfSpecialHandlingRequired:(id)arg1;
- (void)performActionPickerItem:(id)arg1;
- (_Bool)_performActionAndReturnIfLogged:(id)arg1;
- (void)performAction:(id)arg1;
- (void)logActivatedEventForAction:(id)arg1;
- (id)homeScreenAppIconWithIdentifier:(id)arg1;
- (id)_calendarAppIcon;
- (id)homeScreenAppIconForAction:(id)arg1;
- (void)showItemsWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resolveRedirectionForURL:(id)arg1;
- (void)showFirstTimePromptIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateParsedActionWithURL:(id)arg1 appLink:(id)arg2;
- (_Bool)_handleSpecialCodesForAction:(id)arg1 presentingViewController:(id)arg2;
- (void)_parseBarcodeObservation:(id)arg1;
- (id)actionForObservation:(id)arg1;
- (void)startParsingBarcodeObservation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
