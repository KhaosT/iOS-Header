//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/NSCopying-Protocol.h>

@interface TSBonjourIPv4Address : NSObject <NSCopying>
{
    unsigned char _linkLayerAddress[6];
    _Bool _hasLinkLayerAddress;
    unsigned int _ipv4Address;
}

+ (_Bool)getLinkLayerAddress:(char *)arg1 forIPv4Address:(unsigned int)arg2 error:(id *)arg3;
@property(nonatomic) _Bool hasLinkLayerAddress; // @synthesize hasLinkLayerAddress=_hasLinkLayerAddress;
@property(readonly, nonatomic) unsigned int ipv4Address; // @synthesize ipv4Address=_ipv4Address;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getLinkLayerAddressError:(id *)arg1;
@property(readonly, nonatomic) const char *linkLayerAddress; // @dynamic linkLayerAddress;
- (id)initWithIPv4Address:(unsigned int)arg1;
- (id)init;

@end
