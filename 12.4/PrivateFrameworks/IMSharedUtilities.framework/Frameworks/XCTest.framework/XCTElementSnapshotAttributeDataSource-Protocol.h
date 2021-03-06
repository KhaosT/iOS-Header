//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, XCAccessibilityElement;

@protocol XCTElementSnapshotAttributeDataSource <NSObject>
@property(readonly) _Bool usePointTransformationsForFrameConversions;
@property(readonly) _Bool supportsHostedViewCoordinateTransformations;
@property(readonly) _Bool allowsRemoteAccess;
- (id)parameterizedAttribute:(NSString *)arg1 forElement:(XCAccessibilityElement *)arg2 parameter:(id)arg3 error:(id *)arg4;
- (NSDictionary *)attributesForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 error:(id *)arg3;
@end

