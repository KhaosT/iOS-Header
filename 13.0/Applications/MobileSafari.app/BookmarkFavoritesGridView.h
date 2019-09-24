//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BookmarkFavoriteViewCalloutDelegate-Protocol.h"
#import "BookmarkFavoritesGridCollectionViewCellDelegate-Protocol.h"
#import "BookmarkFavoritesGridSectionHeaderViewDelegate-Protocol.h"
#import "CollectionViewDelegateBookmarkFavoritesGridLayout-Protocol.h"
#import "SiriSuggestionsCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDragDelegate_Private-Protocol.h"
#import "UICollectionViewDropDelegate_Private-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "_SFSiteIconViewUpdateObserver-Protocol.h"

@class BookmarkFavoritesGridLayout, BookmarkFavoritesGridSectionHeaderView, NSArray, NSDictionary, NSMapTable, NSString, SiriSuggestionsCollectionViewCell, UICollectionView, UITapGestureRecognizer, _UICollectionViewDiffableDataSource;
@protocol BookmarkFavoritesGridViewDelegate;

@interface BookmarkFavoritesGridView : UIView <BookmarkFavoritesGridSectionHeaderViewDelegate, SiriSuggestionsCollectionViewCellDelegate, BookmarkFavoriteViewCalloutDelegate, BookmarkFavoritesGridCollectionViewCellDelegate, CollectionViewDelegateBookmarkFavoritesGridLayout, UICollectionViewDropDelegate_Private, UICollectionViewDragDelegate_Private, UIGestureRecognizerDelegate, UIScrollViewDelegate, _SFSiteIconViewUpdateObserver>
{
    double _rowHeight;
    double _previousContentViewWidth;
    struct UIEdgeInsets _contentInset;
    UITapGestureRecognizer *_tapOutsideRecognizer;
    _Bool _isShowingFavorites;
    BookmarkFavoritesGridSectionHeaderView *_favoritesHeader;
    BookmarkFavoritesGridSectionHeaderView *_frequentsHeader;
    BookmarkFavoritesGridSectionHeaderView *_siriSuggestionsHeader;
    _Bool _isEditingSiriSuggestions;
    SiriSuggestionsCollectionViewCell *_lastPannedCell;
    double _lastPannedCellStartingOffset;
    NSMapTable *_recommendationMetadataTokens;
    BookmarkFavoritesGridLayout *_collectionViewLayout;
    _UICollectionViewDiffableDataSource *_collectionViewDataSource;
    NSDictionary *_bookmarksByIdentifier;
    UIView *_siriSuggestionsWelcomeView;
    NSDictionary *_siriSuggestionsByIdentifier;
    long long _layoutType;
    _Bool _allowsReordering;
    _Bool _hasTransparentBackground;
    _Bool _showsPrivateBrowsingExplanation;
    _Bool _adjustedForSidebar;
    _Bool _presentedWithinPopover;
    NSArray *_bookmarks;
    NSArray *_frequentlyVisitedSites;
    NSArray *_siriSuggestions;
    id <BookmarkFavoritesGridViewDelegate> _delegate;
    UIView *_contentView;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic, getter=isPresentedWithinPopover) _Bool presentedWithinPopover; // @synthesize presentedWithinPopover=_presentedWithinPopover;
@property(nonatomic, getter=isAdjustedForSidebar) _Bool adjustedForSidebar; // @synthesize adjustedForSidebar=_adjustedForSidebar;
@property(nonatomic) _Bool showsPrivateBrowsingExplanation; // @synthesize showsPrivateBrowsingExplanation=_showsPrivateBrowsingExplanation;
@property(nonatomic) _Bool hasTransparentBackground; // @synthesize hasTransparentBackground=_hasTransparentBackground;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <BookmarkFavoritesGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsReordering; // @synthesize allowsReordering=_allowsReordering;
@property(readonly, copy, nonatomic) NSArray *siriSuggestions; // @synthesize siriSuggestions=_siriSuggestions;
@property(readonly, copy, nonatomic) NSArray *frequentlyVisitedSites; // @synthesize frequentlyVisitedSites=_frequentlyVisitedSites;
@property(readonly, copy, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
- (void).cxx_destruct;
- (void)siteIconViewDidUpdate:(id)arg1;
- (long long)_numberOfItemsThatFitInWidth:(double)arg1 withItemWidth:(double)arg2 interitemWidth:(double)arg3;
- (long long)_maximumNumberOfCollapsedItemsForSectionType:(long long)arg1;
- (void)_setSectionType:(long long)arg1 expanded:(_Bool)arg2;
- (_Bool)_shouldExpandSectionType:(long long)arg1;
- (void)bookmarkFavoritesGridSectionHeaderView:(id)arg1 didChangeIsEditing:(_Bool)arg2;
- (void)bookmarkFavoritesGridSectionHeaderViewDidSelectShowLess:(id)arg1;
- (void)bookmarkFavoritesGridSectionHeaderViewDidSelectShowMore:(id)arg1;
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)_previewSourceViewForItemAtIndexPath:(id)arg1;
- (id)bookmarkPreviewSourceViewAtLocation:(struct CGPoint)arg1;
- (void)favoriteCellDidTapOnFavoriteView:(id)arg1;
- (void)siriSuggestionsCollectionViewCellDidTapCard:(id)arg1;
- (void)siriSuggestionsCollectionViewCell:(id)arg1 didSelectActionButton:(id)arg2;
- (struct CGRect)collectionView:(id)arg1 layout:(id)arg2 iconRectForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)_didSelectSiriSuggestionsWelcomeViewCloseButton;
- (unsigned long long)_numberOfTimesWelcomeViewHasBeenShown;
- (void)_incrementWelcomeViewTimesShownCounterIfApplicableBy:(unsigned long long)arg1;
- (_Bool)_shouldShowSiriSuggestionsWelcomeView;
- (void)_didTapPrivacyLabel:(id)arg1;
- (id)_siriSuggestionsWelcomeView;
- (id)_sectionHeaderTitleForSection:(long long)arg1;
- (void)updateCollectionViewToCurrentState;
- (void)_updateSectionHeaderExpansionToggleForSection:(long long)arg1;
- (id)_viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)collectionView:(id)arg1 willCommitMenuWithAnimator:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (id)_enqueueLeadImageRequestForCell:(id)arg1 withRecommendation:(id)arg2;
- (id)_bodyTextForExplanationType:(long long)arg1;
- (id)_headerTextForExplanationType:(long long)arg1;
- (id)_cellForItemAtIndexPath:(id)arg1 identifier:(id)arg2;
- (void)_configureCollectionViewLayout;
- (struct UIEdgeInsets)_collectionViewSectionInset;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)_itemIdentifierForIndexPath:(id)arg1;
- (long long)_typeForSection:(long long)arg1;
- (struct CGSize)_collectionViewItemSize;
- (void)setScrollViewScrollsToTop:(_Bool)arg1;
- (void)_tapOutsideRecognized:(id)arg1;
- (_Bool)_isTapPointOutOfRange:(struct CGPoint)arg1;
- (id)_favoriteCellAtPoint:(struct CGPoint)arg1 indexPath:(id *)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)_iconSize;
- (_Bool)_isPad;
- (double)_paddingBelowNavigationBar;
- (unsigned long long)_defaultNumberOfFavoritesPerRow;
- (unsigned long long)_numberOfFavoritesPerRowUsingAccessibilityCategory:(_Bool)arg1;
- (unsigned long long)_numberOfFavoritesPerRow;
- (double)_horizontalSpaceBetweenIcons;
- (double)_favoritesAndFrequentlyVisitedCollectionViewInterItemSpacing;
- (id)defaultFontTextStyle;
- (double)_spaceBetweenIconAndLabelBaseline;
- (_Bool)_hasMaxPhoneSizedDisplay;
- (_Bool)_isTallLayout;
- (void)_updateScrollView;
- (void)_ensureMetricsForFavoriteView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateMetricsForFavoriteViewsIfNeeded;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setKeyboardDismissMode:(long long)arg1;
- (_Bool)_shouldUseVibrantEffect;
- (void)_rebuildItemsByIdentifier;
- (void)_reloadCollectionViewToCurrentStateAnimated:(_Bool)arg1;
- (void)_copyIconDataFromBookmarks:(id)arg1 toBookmarks:(id)arg2;
- (double)_rowHeight;
- (void)cancelGestures;
- (void)resetScrollPosition;
@property(readonly, nonatomic) struct CGPoint contentOffset;
- (void)_updateContentInset;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (id)bookmarkAtLocation:(struct CGPoint)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)reloadBookmark:(id)arg1;
- (void)_removeSiriSuggestionsPassingTest:(CDUnknownBlockType)arg1;
- (void)filterOutSiriSuggestionsWithSource:(unsigned long long)arg1;
- (void)filterOutSiriSuggestionsWithDomain:(id)arg1;
- (void)reloadSiriSuggestion:(id)arg1;
- (void)setSiriSuggestions:(id)arg1 animated:(_Bool)arg2;
- (void)setBookmarks:(id)arg1 isFavorites:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setFrequentlyVisitedSites:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
