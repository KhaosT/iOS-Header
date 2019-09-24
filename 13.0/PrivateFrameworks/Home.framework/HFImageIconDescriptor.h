//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFIconDescriptor-Protocol.h>

@class NSString;

@interface HFImageIconDescriptor : NSObject <HFIconDescriptor>
{
    _Bool _shouldForceLTR;
    _Bool _isDemoModeDescriptor;
    NSString *_imageIdentifier;
}

@property(nonatomic) _Bool isDemoModeDescriptor; // @synthesize isDemoModeDescriptor=_isDemoModeDescriptor;
@property(readonly, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(readonly, nonatomic) _Bool shouldForceLTR; // @synthesize shouldForceLTR=_shouldForceLTR;
- (void).cxx_destruct;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDemoModeImageIdentifier:(id)arg1;
- (id)initWithImageIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
