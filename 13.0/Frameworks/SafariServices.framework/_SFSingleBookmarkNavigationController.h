//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <SafariServices/_SFBookmarkInfoViewControllerDelegate-Protocol.h>

@class NSString, WebBookmarkCollection, _SFBookmarkInfoViewController;
@protocol _SFSingleBookmarkNavigationControllerDelegate;

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate>
{
    _SFBookmarkInfoViewController *_infoViewController;
    WebBookmarkCollection *_collection;
    _Bool _delegateNotifiedOfResult;
    id <_SFSingleBookmarkNavigationControllerDelegate> _bookmarkNavDelegate;
}

@property(nonatomic) __weak id <_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate; // @synthesize bookmarkNavDelegate=_bookmarkNavDelegate;
- (void).cxx_destruct;
- (_Bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1;
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (_Bool)prepareForPresentationForAddingBookmark:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentBookmark:(id)arg3;
- (id)_lastSelectedFolder;
- (id)initForAddingToFavoritesInCollection:(id)arg1;
- (id)initWithFolderOfBookmarks:(id)arg1 inCollection:(id)arg2;
- (id)initWithCollection:(id)arg1;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2;
- (id)_initWithBookmark:(id)arg1 childBookmarks:(id)arg2 inCollection:(id)arg3 addingBookmark:(_Bool)arg4 toFavorites:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
