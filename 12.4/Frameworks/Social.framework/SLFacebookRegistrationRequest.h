//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/SLFacebookRequest.h>

@class SLFacebookRegistrationInfo;

@interface SLFacebookRegistrationRequest : SLFacebookRequest
{
    SLFacebookRegistrationInfo *_registrationInfo;
}

- (void).cxx_destruct;
- (id)_urlEncodedString:(id)arg1;
- (id)_tokenSecret;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)_sha1HashForString:(id)arg1;
- (void)_prepareRequestForValidation;
- (id)initWithRegistrationInfo:(id)arg1;

@end

