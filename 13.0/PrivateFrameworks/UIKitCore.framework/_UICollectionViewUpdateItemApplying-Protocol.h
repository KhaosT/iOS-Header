//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, _UIDataSourceSnapshotter;

@protocol _UICollectionViewUpdateItemApplying <NSObject>
- (void)_willPerformDiff:(_Bool)arg1;
- (void)_reloadData;
- (void)_deleteAllItems;
- (void)_performUpdateWithCollectionViewUpdateItems:(NSArray *)arg1 dataSourceSnapshotter:(_UIDataSourceSnapshotter *)arg2 updateHandler:(void (^)(void))arg3 completion:(void (^)(void))arg4;
@end
