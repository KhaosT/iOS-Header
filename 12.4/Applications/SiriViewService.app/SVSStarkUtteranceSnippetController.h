//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SAUIAssistantUtteranceView, SVSStarkUtteranceSnippetView;

@interface SVSStarkUtteranceSnippetController : UIViewController
{
    SAUIAssistantUtteranceView *_aceObject;
    SVSStarkUtteranceSnippetView *_snippetView;
}

@property(readonly, nonatomic, getter=_snippetView) SVSStarkUtteranceSnippetView *snippetView; // @synthesize snippetView=_snippetView;
@property(readonly, nonatomic, getter=_aceObject) SAUIAssistantUtteranceView *aceObject; // @synthesize aceObject=_aceObject;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAceObject:(id)arg1;

@end
