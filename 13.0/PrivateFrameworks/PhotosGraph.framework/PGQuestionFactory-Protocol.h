//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, PGManager, PHFetchResult;

@protocol PGQuestionFactory <NSObject>
- (NSArray *)generateQuestionsWithPersons:(PHFetchResult *)arg1;
- (id)initWithManager:(PGManager *)arg1;
@end
