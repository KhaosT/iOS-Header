//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import "HKDataMetadataDeletionSectionDelegate-Protocol.h"
#import "WDDataMetadataElectrocardiogramSectionDelegate-Protocol.h"

@class HKElectrocardiogram, HRElectrocardiogramReportGenerator, NSMutableArray, WDElectrocardiogramReportDataSource;
@protocol HKDataMetadataViewControllerDelegate;

@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController <HKDataMetadataDeletionSectionDelegate, WDDataMetadataElectrocardiogramSectionDelegate>
{
    _Bool _actionsEnabled;
    HKElectrocardiogram *_sample;
    id <HKDataMetadataViewControllerDelegate> _delegate;
    NSMutableArray *_sections;
    WDElectrocardiogramReportDataSource *_reportDataSource;
    HRElectrocardiogramReportGenerator *_reportGenerator;
}

@property(nonatomic) _Bool actionsEnabled; // @synthesize actionsEnabled=_actionsEnabled;
@property(retain, nonatomic) HRElectrocardiogramReportGenerator *reportGenerator; // @synthesize reportGenerator=_reportGenerator;
@property(retain, nonatomic) WDElectrocardiogramReportDataSource *reportDataSource; // @synthesize reportDataSource=_reportDataSource;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <HKDataMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HKElectrocardiogram *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (void)deleteSampleTriggeredBySection:(id)arg1;
- (void)presentPDFViewController;
- (void)shareButtonTapped:(id)arg1;
- (void)electrocardiogramSectionDidSelectShareRow:(id)arg1;
- (_Bool)electrocardiogramSectionShouldShowShareRow:(id)arg1;
- (id)electrocardiogramSection:(id)arg1 regulatedBodyTextForSample:(id)arg2;
- (void)electrocardiogramSectionDidTapDetailButton:(id)arg1;
- (void)deletionSectionDidSelectRow:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_shortVersionNumberFromString:(id)arg1;
- (void)_loadSections;
- (_Bool)_addSectionIfNonNull:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)_localeOrDisplayTypeChange:(id)arg1;
- (void)dealloc;
- (id)initWithSample:(id)arg1 delegate:(id)arg2;

@end
