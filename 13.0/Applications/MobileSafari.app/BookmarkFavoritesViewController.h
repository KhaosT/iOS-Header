//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BookmarkFavoritesGridViewDelegate-Protocol.h"
#import "BookmarksFolderViewController-Protocol.h"
#import "_SFWebBookmarkActionHandler-Protocol.h"

@class BookmarkFavoritesGridView, ForYouRecommendationMediator, NSMutableArray, NSString, WebBookmark, WebBookmarkCollection, WebBookmarkList;
@protocol BookmarkFavoritesViewControllerDelegate;

@interface BookmarkFavoritesViewController : UIViewController <BookmarkFavoritesGridViewDelegate, _SFWebBookmarkActionHandler, BookmarksFolderViewController>
{
    WebBookmarkCollection *_collection;
    BookmarkFavoritesGridView *_favoritesGridView;
    WebBookmarkList *_favoritesList;
    _Bool _ignoreBookmarksFolderContentsDidChangeNotification;
    _Bool _showWhitelistFavorites;
    ForYouRecommendationMediator *_mediator;
    NSMutableArray *_currentSiriSuggestions;
    WebBookmark *_folder;
    id <BookmarkFavoritesViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <BookmarkFavoritesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WebBookmark *folder; // @synthesize folder=_folder;
- (void).cxx_destruct;
- (void)bookmark:(id)arg1 didProduceNavigationIntent:(id)arg2 userInfo:(id)arg3;
- (void)deleteBookmark:(id)arg1 userInfo:(id)arg2;
- (void)editBookmark:(id)arg1 userInfo:(id)arg2;
- (void)_downvoteSource:(unsigned long long)arg1 forRecommendation:(id)arg2;
- (void)_banWebsiteWithRecommendation:(id)arg1;
- (void)_openRecommendationInNewTabWithRecommendation:(id)arg1;
- (void)_commitPreviewViewController:(id)arg1;
- (id)_previewViewControllerForBookmark:(id)arg1;
- (void)bookmarkFavoritesGridViewContentChanged:(id)arg1;
- (void)bookmarkFavoritesGridView:(id)arg1 dropBookmarkWithCoordinator:(id)arg2;
- (_Bool)bookmarkFavoritesGridView:(id)arg1 canHandleDropSession:(id)arg2;
- (_Bool)bookmarkFavoritesGridViewIsPresentedInsideBlankTab:(id)arg1;
- (long long)bookmarkFavoritesGridViewLayoutType:(id)arg1;
- (void)bookmarkFavoritesGridView:(id)arg1 updatedContentSize:(struct CGSize)arg2;
- (void)bookmarkFavoritesGridView:(id)arg1 banFrequentlyVisitedSite:(id)arg2;
- (void)bookmarkFavoritesGridView:(id)arg1 promoteFrequentlyVisitedSite:(id)arg2 toFavoriteAtIndex:(unsigned long long)arg3;
- (void)bookmarkFavoritesGridView:(id)arg1 willCommitPreviewViewController:(id)arg2;
- (id)bookmarkFavoritesGridView:(id)arg1 contextMenuConfigurationWithIdentifier:(id)arg2 forSiriSuggestion:(id)arg3;
- (id)bookmarkFavoritesGridView:(id)arg1 contextMenuConfigurationWithIdentifier:(id)arg2 forBookmark:(id)arg3;
- (id)_downvoteActionTitleForRecommendationSource:(unsigned long long)arg1;
- (void)_setReadingListRecommendationAsReadWithRecommendation:(id)arg1;
- (void)bookmarkFavoritesGridView:(id)arg1 didSelectActionButton:(id)arg2 forSiriSuggestion:(id)arg3;
- (void)bookmarkFavoritesGridView:(id)arg1 didToggleExpansionForSection:(long long)arg2 expanded:(_Bool)arg3;
- (void)bookmarkFavoritesGridView:(id)arg1 didSelectRecommendation:(id)arg2;
- (_Bool)bookmarkFavoritesGridViewCanPromoteFrequentlyVisitedSiteToFavorite:(id)arg1;
- (void)didTapOutsideBookmarkFavoritesGridView:(id)arg1;
- (void)bookmarkFavoritesGridView:(id)arg1 didSelectBookmark:(id)arg2;
- (void)_updateNavigationBarHiddenAnimated:(_Bool)arg1;
- (void)setScrollViewScrollsToTop:(_Bool)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)loadFavoritesList;
- (void)_observeBookmarkNotificationsForCollection:(id)arg1;
- (void)_stopObservingBookmarksNotificationsForCollection:(id)arg1;
- (void)_updateFavoritesListAnimated:(_Bool)arg1;
- (void)_updateFavoritesList;
- (void)_recomputeFrequentlyVisitedSitesIfNecessary;
- (void)_updateVisibleFrequentlyVisitedSites;
- (void)_receivedFrequentlyVisitedSitesDidChangeNotification:(id)arg1;
- (void)_receivedBookmarksFolderContentChangedNotification:(id)arg1;
- (void)_receivedBookmarksReloadOrSpecialFolderChangeNotification:(id)arg1;
- (_Bool)_canReorderFavorites;
- (id)bookmarksNavigationController;
@property(nonatomic, getter=isPresentedWithinPopover) _Bool presentedWithinPopover;
- (void)setAdjustedForSidebar:(_Bool)arg1;
- (unsigned long long)_existingHandoffRecommendationIndex;
- (void)_fetchHandoffResult;
- (void)_scheduleHandoffApplicationUpdate:(id)arg1;
- (void)_updateImageForRecommendation:(id)arg1;
- (void)_updateRecommendationsForTopics:(id)arg1;
- (void)_updateRecommendationsForAllTopics;
- (void)_updateSiriSuggestions:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (struct CGSize)preferredContentSize;
@property(readonly, nonatomic) BookmarkFavoritesGridView *favoritesGridView;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)test_overrideBookmarkCollection:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 bookmarksCollection:(id)arg2 showWhiteListFavorites:(_Bool)arg3;
- (id)initWithBookmarksCollection:(id)arg1 showWhiteListFavorites:(_Bool)arg2;
- (id)initWithFolder:(id)arg1 inCollection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

