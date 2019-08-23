//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBAWDMetricDelegate;

@interface SBAWDMetric : NSObject
{
    id <SBAWDMetricDelegate> _delegate;
}

@property(nonatomic) __weak id <SBAWDMetricDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)configureWithData:(id)arg1;
- (unsigned long long)metricID;
- (Class)dataClass;
- (void)_postMetric:(id)arg1 withID:(unsigned int)arg2;
- (void)postWithDataBuilder:(CDUnknownBlockType)arg1;
- (unsigned long long)componentID;

@end
