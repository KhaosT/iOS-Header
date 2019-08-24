//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UICollectionView;
@protocol PUTopResultDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchTopResultContentView : UIView <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <PUTopResultDelegate> _delegate;
    UICollectionView *_collectionView;
    NSMutableDictionary *_items;
}

@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <PUTopResultDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)setAsset:(id)arg1 image:(id)arg2 forIndex:(unsigned long long)arg3;
- (void)resetImages;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1;
- (void)handleTap:(id)arg1;
- (struct CGSize)contentSizeFittingSize:(struct CGSize)arg1 assetCount:(unsigned long long)arg2;
- (double)interItemSpacing;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
