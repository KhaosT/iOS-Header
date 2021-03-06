//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURLRequest, NSURLResponse, WKFrameInfo;

@interface WKNavigationResponse : NSObject <WKObject>
{
    struct ObjectStorage<API::NavigationResponse> _navigationResponse;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) _Bool canShowMIMEType;
@property(readonly, copy, nonatomic) NSURLResponse *response;
@property(readonly, nonatomic, getter=isForMainFrame) _Bool forMainFrame;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) NSURLRequest *_request;
@property(readonly, nonatomic) WKFrameInfo *_frame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

