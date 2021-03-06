//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class NSArray, UIImage, WDProfile;

@interface WDUninstalledAppSourcesViewController : HKTableViewController
{
    WDProfile *_profile;
    NSArray *_uninstalledSources;
}

@property(retain, nonatomic) NSArray *uninstalledSources; // @synthesize uninstalledSources=_uninstalledSources;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_uninstalledSourcesFromSources:(id)arg1;
- (void)reloadSources;
@property(readonly) UIImage *uninistalledAppImage;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

@end

