//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UIDragItem;

@protocol UICollectionViewDropItem <NSObject>
@property(nonatomic, readonly) struct CGSize previewSize;
@property(nonatomic, readonly) NSIndexPath *sourceIndexPath;
@property(nonatomic, readonly) UIDragItem *dragItem;
@end
