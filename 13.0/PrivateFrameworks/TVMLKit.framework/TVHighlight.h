//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TVTimeRange;

@interface TVHighlight : NSObject
{
    NSString *_localizedName;
    NSString *_highlightDescription;
    TVTimeRange *_timeRange;
    NSURL *_imageURL;
    TVTimeRange *_dateRange;
}

@property(retain, nonatomic) TVTimeRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) TVTimeRange *timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) NSString *highlightDescription; // @synthesize highlightDescription=_highlightDescription;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;

@end

