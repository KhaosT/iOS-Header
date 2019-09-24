//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ActionKitUI/UIDocumentInteractionControllerDelegate-Protocol.h>

@class NSString, WFContentItem;

__attribute__((visibility("hidden")))
@interface WFContentItemViewController : UITableViewController <UIDocumentInteractionControllerDelegate>
{
    WFContentItem *_contentItem;
}

@property(readonly, nonatomic) WFContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (void).cxx_destruct;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithContentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
