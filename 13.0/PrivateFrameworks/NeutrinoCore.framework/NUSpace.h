//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NUSpace : NSObject
{
    struct NSArray *_transformStack;
}

@property(retain) NSArray *transformStack; // @synthesize transformStack=_transformStack;
- (void).cxx_destruct;
- (_Bool)isEqualToSpace:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (CDStruct_1b6d18a9)transformTimeBackward:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1 toSpace:(id)arg2;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (struct CGPoint)transformPointBackward:(struct CGPoint)arg1;
- (struct CGPoint)transformPointForward:(struct CGPoint)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1 toSpace:(id)arg2;
- (id)description;
- (void)appendTransform:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTransformStack:(struct NSArray *)arg1;
- (id)init;

@end
