//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSError, NSMutableData, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

@interface SUHttpOperation : NSOperation <NSURLConnectionDataDelegate>
{
    NSURLConnection *_connection;
    NSURLRequest *_request;
    NSMutableData *_data;
    NSURLResponse *_response;
    NSError *_error;
    long long _statusCode;
    _Bool _allowRedirects;
    _Bool _done;
    _Bool _saveData;
}

@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) _Bool allowRedirects; // @synthesize allowRedirects=_allowRedirects;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_finished;
- (void)main;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
