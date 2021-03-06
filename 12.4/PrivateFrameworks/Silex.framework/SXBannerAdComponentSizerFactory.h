//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerFactory-Protocol.h>

@class NSString;
@protocol SXAdControllerProvider, SXDOMObjectProviding;

@interface SXBannerAdComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXAdControllerProvider> _adControllerProvider;
}

@property(readonly, nonatomic) id <SXAdControllerProvider> adControllerProvider; // @synthesize adControllerProvider=_adControllerProvider;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
- (void).cxx_destruct;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithDOMObjectProvider:(id)arg1 adControllerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

