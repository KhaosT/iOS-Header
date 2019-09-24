//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHFolderIconVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    struct CGSize _gridCellSize;
    struct CGSize _gridCellSpacing;
}

@property(nonatomic) struct CGSize gridCellSpacing; // @synthesize gridCellSpacing=_gridCellSpacing;
@property(nonatomic) struct CGSize gridCellSize; // @synthesize gridCellSize=_gridCellSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
