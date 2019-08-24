//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class ACAccount, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface MCOSXServerAccountPayloadHandler : MCNewPayloadHandler
{
    NSObject<OS_dispatch_semaphore> *_doneSema;
    _Bool _validationComplete;
    NSError *_validationError;
    ACAccount *_setAsideAccount;
}

@property(retain, nonatomic) ACAccount *setAsideAccount; // @synthesize setAsideAccount=_setAsideAccount;
- (void).cxx_destruct;
- (void)remove;
- (void)_deleteAccountAndAssociatedData:(id)arg1;
- (void)setAsideWithInstaller:(id)arg1;
- (_Bool)isInstalled;
- (id)_installedAccount;
- (id)accountStore;

@end
