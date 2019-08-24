//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INFileURLEnumerable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface INMessageAttachment : NSObject <INFileURLEnumerable, NSCopying, NSSecureCoding>
{
    NSString *_filename;
    long long _type;
    NSURL *_fileURL;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithFilename:(id)arg1 type:(long long)arg2 fileURL:(id)arg3;
- (void)_enumerateFileURLsWithMutatingBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
