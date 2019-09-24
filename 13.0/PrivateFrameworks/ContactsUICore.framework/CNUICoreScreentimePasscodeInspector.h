//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreScreentimePasscodeCheck-Protocol.h>

@class CNFuture, NSString;
@protocol CNCancelable, CNSchedulerProvider;

@interface CNUICoreScreentimePasscodeInspector : NSObject <CNUICoreScreentimePasscodeCheck>
{
    CNFuture *_isPasscodeEnabledFuture;
    CNFuture *_managementState;
    id <CNCancelable> _managementStateDidChangeToken;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (id)managementStateDidChangeObservableWithSchedulerProvider:(id)arg1;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNCancelable> managementStateDidChangeToken; // @synthesize managementStateDidChangeToken=_managementStateDidChangeToken;
@property(readonly, nonatomic) CNFuture *managementState; // @synthesize managementState=_managementState;
@property(retain, nonatomic) CNFuture *isPasscodeEnabledFuture; // @synthesize isPasscodeEnabledFuture=_isPasscodeEnabledFuture;
- (void).cxx_destruct;
- (unsigned long long)screentimePasscodeStatusOfDelegateWithInfo:(id)arg1;
- (void)clearIsPasscodeEnabledFuture;
- (id)makeIsPasscodeEnabledFuture;
- (unsigned long long)screentimePasscodeStatus;
- (void)dealloc;
- (id)initWithManagementState:(id)arg1 managementStateChangedObservable:(id)arg2 schedulerProvider:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
