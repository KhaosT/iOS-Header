//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXImportConcurrentAction.h>

@class NSArray, NSMutableArray, NSProgress, NSString, PXImportController;

@interface PXImportDeleteAction : PXImportConcurrentAction
{
    NSArray *_assets;
    NSMutableArray *_removedAssets;
    _Bool _userInitiatedDelete;
    NSString *_sessionUuid;
    PXImportController *_importController;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property _Bool userInitiatedDelete; // @synthesize userInitiatedDelete=_userInitiatedDelete;
@property __weak PXImportController *importController; // @synthesize importController=_importController;
@property(readonly, nonatomic) NSString *sessionUuid; // @synthesize sessionUuid=_sessionUuid;
- (void).cxx_destruct;
- (void)sendActionProgress:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingDeleteProgress;
- (void)startObservingDeleteProgress;
- (void)didRemove:(id)arg1;
- (void)_performMockAction;
- (void)_performRealAction;
- (void)_preAction;
- (_Bool)canDeleteAssets;
- (void)cancel;
- (id)performAction;
- (void)finish;
- (void)start;
- (void)dealloc;
- (id)initWithAssets:(id)arg1;

@end
