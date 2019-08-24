//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DOCLocalServiceBrowserViewControllerProxy-Protocol.h"
#import "DOCServiceBrowserViewControllerInProcessProxy-Protocol.h"

@class MISSING_TYPE;

@interface _TtC5Files31DOCServiceBrowserViewController : UIViewController <DOCServiceBrowserViewControllerInProcessProxy, DOCLocalServiceBrowserViewControllerProxy>
{
    MISSING_TYPE *hostProxy;
    MISSING_TYPE *strongHostProxy;
    MISSING_TYPE *configuration;
    MISSING_TYPE *lastAppearance;
    MISSING_TYPE *currentViewController;
    MISSING_TYPE *currentSource;
    MISSING_TYPE *hostProvidedActions;
    MISSING_TYPE *builtinActions;
    MISSING_TYPE *searchContext;
    MISSING_TYPE *cachedRecentsViewController.storage;
    MISSING_TYPE *currentLocation;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)getInProcessDisplayInformationForItem:(id)arg1 waitForNewThumbnail:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)revealItem:(id)arg1;
- (void)deselectAllItems;
- (void)selectAllItems;
- (void)clearCurrentInteraction;
- (void)clearCurrentOpenInteraction;
- (id)getCurrentCollectionItem;
- (void)updateSearchContext:(id)arg1;
- (void)getPopoverTrackerForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTransitionControllerForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTransitionControllerForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)importDocumentWithURL:(id)arg1 intoLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)importDocumentWithURLWrapper:(id)arg1 intoLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchParentLocationForLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchItemForURL:(id)arg1 bumpLastOpenDate:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getSaveLocationForCurrentBrowserOrDefaultSaveLocationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)hostProvidedActionsDidChange:(id)arg1;
- (void)performBuiltinActionWithIdentifier:(id)arg1;
- (void)performHostActionWithIdentifier:(id)arg1;
- (void)deleteAllTrashedFiles;
- (void)recoverAllTrashedFiles;
- (void)showContentForLocation:(id)arg1 viewHierarchyPreparationHandler:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showContentForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showPickerForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateAppearance:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostProxy:(id)arg1 configuration:(id)arg2;

@end
