//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@interface AFShowSettingRequest : AFSiriRequest
{
    long long _settingType;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (long long)settingType;
- (id)_initWithSettingType:(long long)arg1;

@end
