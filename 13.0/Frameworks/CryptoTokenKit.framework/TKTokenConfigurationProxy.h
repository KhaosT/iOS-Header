//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface TKTokenConfigurationProxy : NSObject
{
    id <NSXPCProxyCreating> _proxyCreator;
}

@property(readonly, nonatomic) id <NSXPCProxyCreating> proxyCreator; // @synthesize proxyCreator=_proxyCreator;
- (void).cxx_destruct;
- (id)configurationProtocol;
- (id)initWithProxyCreator:(id)arg1;

@end
