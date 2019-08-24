//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WDAddDataViewController.h"

#import "WDAddDataManualEntryItemDelegate-Protocol.h"

@class NSString, WDAddDataManualEntryItem;

@interface WDUVExposureAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateRangeEntryItem;
    WDAddDataManualEntryItem *_valueEntryItem;
}

- (void).cxx_destruct;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)defaultEditingItem;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)generateHKObjects;
- (void)viewDidLoad;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
