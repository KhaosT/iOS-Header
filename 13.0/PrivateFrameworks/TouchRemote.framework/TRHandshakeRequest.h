//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@interface TRHandshakeRequest : TRRequestMessage
{
    long long _protocolVersion;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
