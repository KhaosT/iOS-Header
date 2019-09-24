//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

@class UIColor, UILabel, UIScrollView, UITextView;

@interface PKSoftwareUpdateTableView : UITableView
{
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UITextView *_messageView;
    long long _context;
    UIColor *_textColor;
    UIColor *_linkColor;
}

@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_messageAttributedStringWithTextColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end
