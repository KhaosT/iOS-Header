//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LUIUserGridViewController.h"

@class NSNumber;

@interface LUIClassUserGridViewController : LUIUserGridViewController
{
    _Bool _enableEnglishLocaleNaming;
    NSNumber *_classID;
}

@property(nonatomic) _Bool enableEnglishLocaleNaming; // @synthesize enableEnglishLocaleNaming=_enableEnglishLocaleNaming;
@property(retain, nonatomic) NSNumber *classID; // @synthesize classID=_classID;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)footerButtonImageType;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
