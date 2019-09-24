//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRecordDescriptor.h>

@class NSString, WFFileRepresentation;

@interface WFFileRecordDescriptor : WFRecordDescriptor
{
    WFFileRepresentation *_file;
    NSString *_name;
    NSString *_sourceAppIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFile:(id)arg1 name:(id)arg2 recordClass:(Class)arg3 sourceAppIdentifier:(id)arg4;
- (id)initWithFile:(id)arg1 name:(id)arg2 recordClass:(Class)arg3;

@end
