//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AskPermission/NSCopying-Protocol.h>
#import <AskPermission/NSMutableCopying-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface APLogConfig : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_category;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;
+ (id)sharedUIServiceConfig;
+ (id)sharedPluginConfig;
+ (id)sharedSettingsConfig;
+ (id)sharedFrameworkConfig;
+ (id)sharedExtensionConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedConfig;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // @synthesize propertyAccessQueue=_propertyAccessQueue;
@property(retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // @synthesize backingOSLogObject=_backingOSLogObject;
@property(copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
- (id)init;

@end
