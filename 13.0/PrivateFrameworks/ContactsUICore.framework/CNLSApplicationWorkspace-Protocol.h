//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNApplicationProxy, CNObservable, NSArray, NSDictionary, NSString, NSURL, NSUserActivity;
@protocol CNSchedulerProvider;

@protocol CNLSApplicationWorkspace <NSObject>
- (void)openSensitiveURLInBackground:(NSURL *)arg1 withOptions:(NSDictionary *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)openSensitiveURLInBackground:(NSURL *)arg1 withOptions:(NSDictionary *)arg2;
- (void)openUserActivity:(NSUserActivity *)arg1 inApplication:(CNApplicationProxy *)arg2 options:(NSDictionary *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (CNApplicationProxy *)applicationForBundleIdentifier:(NSString *)arg1;
- (NSArray *)applicationsForUserActivityType:(NSString *)arg1;
- (NSArray *)applicationsAvailableForHandlingURLScheme:(NSString *)arg1;
- (CNObservable *)observableForApplicationsChangedWithSchedulerProvider:(id <CNSchedulerProvider>)arg1;
@end
