//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRandomTextGenerator, NSMutableDictionary;

@interface ICObfuscator : NSObject
{
    ICRandomTextGenerator *_randomTextGenerator;
    NSMutableDictionary *_imageMap;
}

@property(retain, nonatomic) NSMutableDictionary *imageMap; // @synthesize imageMap=_imageMap;
@property(retain, nonatomic) ICRandomTextGenerator *randomTextGenerator; // @synthesize randomTextGenerator=_randomTextGenerator;
- (void).cxx_destruct;
- (id)obfuscatedImageOfSize:(struct CGSize)arg1;
- (id)obfuscatedStringOfLength:(unsigned long long)arg1;
- (id)obfuscateString:(id)arg1;
- (void)dealloc;
- (id)init;

@end
