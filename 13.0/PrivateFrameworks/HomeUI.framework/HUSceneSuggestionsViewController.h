//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUPresentationDelegateHost-Protocol.h>

@class HUSceneSuggestionsItemManager, NSString;
@protocol HUPresentationDelegate, HUSceneEditorDelegate;

@interface HUSceneSuggestionsViewController : HUItemTableViewController <HUPresentationDelegateHost>
{
    id <HUPresentationDelegate> _presentationDelegate;
    id <HUSceneEditorDelegate> _sceneEditorDelegate;
    HUSceneSuggestionsItemManager *_suggestionsItemManager;
}

@property(nonatomic) __weak HUSceneSuggestionsItemManager *suggestionsItemManager; // @synthesize suggestionsItemManager=_suggestionsItemManager;
@property(nonatomic) __weak id <HUSceneEditorDelegate> sceneEditorDelegate; // @synthesize sceneEditorDelegate=_sceneEditorDelegate;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)_showActionEditorForNewCustomScene;
- (void)_showActionEditorForActionSetSuggestionItem:(id)arg1;
- (void)_cancel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

