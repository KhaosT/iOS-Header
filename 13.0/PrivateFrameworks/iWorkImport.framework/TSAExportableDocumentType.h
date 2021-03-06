//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSAExportableDocumentType : NSObject
{
    NSString *_type;
    NSString *_localizedName;
    NSString *_exportProgressMessage;
}

+ (id)exportableTypeWithType:(id)arg1 localizedName:(id)arg2 exportProgressMessage:(id)arg3;
@property(readonly, nonatomic) NSString *exportProgressMessage; // @synthesize exportProgressMessage=_exportProgressMessage;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(id)arg1 localizedName:(id)arg2 exportProgressMessage:(id)arg3;

@end

