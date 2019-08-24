//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingColorAuditTableViewCell : UITableViewCell
{
    UIView *colorView;
    NSLayoutConstraint *heightConstraint;
    _Bool _expanded;
    NSString *_symbol;
    UIColor *_color;
}

@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
