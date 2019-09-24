//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

#import <EventKitUI/EKCalendarItemInlineEditItem-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKEventDetailPredictedLocationCellDelegate-Protocol.h>
#import <EventKitUI/UITextFieldDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarItemLocationInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailPredictedLocationCellDelegate, EKCalendarItemInlineEditItem>
{
    NSMutableArray *_locationsAndCells;
    _Bool _sourceSupportsAvailabilityRequests;
    NSMutableDictionary *_conferenceRoomInfos;
}

+ (id)_locationPlaceholder;
+ (id)conferenceRoomNameForLocation:(id)arg1;
- (void).cxx_destruct;
- (id)participantForConferenceRoomName:(id)arg1;
- (_Bool)_showSuggestedLocation:(id)arg1;
- (_Bool)_showConferenceLocation:(id)arg1;
- (id)searchStringForEventAutocomplete;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (_Bool)forceTableReloadOnSave;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)_clearLocation:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_clearButtonTapped:(id)arg1;
- (void)_updateAvailabilityInformation;
- (id)_clearButtonView:(unsigned long long)arg1;
- (void)_refreshConferenceRoomCell:(id)arg1;
- (id)locationCellPairForCell:(id)arg1;
- (void)_updateLocation:(id)arg1 withConferenceRoom:(id)arg2;
- (void)_updateLocation:(id)arg1 withStructuredLocation:(id)arg2;
- (void)_updateCalendarItemLocation;
- (void)_updateAuxiliaryLocationsForNewLocation:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)isSaveable;
- (id)_makeCell:(unsigned long long)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (_Bool)isInline;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)refreshFromCalendarItemAndStore;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
