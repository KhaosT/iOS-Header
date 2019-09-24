//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPTextualAttachment.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPTOCPageNumberAttachment : TSWPTextualAttachment
{
    NSString *_pageNumber;
    NSString *_bookmarkName;
}

- (void).cxx_destruct;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;
- (id)stringEquivalent;
- (int)elementKind;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(copy, nonatomic) NSString *bookmarkName;
@property(copy, nonatomic) NSString *pageNumber;

@end
