//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVInteractionContext-Protocol.h>

@class NSString, UIView;

@interface SVInteractionContext : NSObject <SVInteractionContext>
{
    UIView *_sourceView;
    struct CGRect _sourceRect;
}

@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (id)initWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
