//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSInsertionPointHelper : NSObject
{
    struct _NSRange _charRange;
    long long _writingDirection;
    unsigned long long _count;
    unsigned long long _altCount;
    double *_logicalPositions;
    double *_logicalLeftBoundaries;
    double *_logicalRightBoundaries;
    unsigned long long *_logicalCharIndexes;
    double *_displayPositions;
    unsigned long long *_displayCharIndexes;
    double *_logicalAltPositions;
    unsigned long long *_logicalAltCharIndexes;
    double *_displayAltPositions;
    unsigned long long *_displayAltCharIndexes;
}

- (void)dealloc;

@end
