//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSMutableArray, SignedLogHead;

@interface ConsistencyProofResponse_LogConsistencyResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int application; // @dynamic application;
@property(retain, nonatomic) SignedLogHead *endSlh; // @dynamic endSlh;
@property(nonatomic) _Bool hasEndSlh; // @dynamic hasEndSlh;
@property(nonatomic) _Bool hasStartSlh; // @dynamic hasStartSlh;
@property(nonatomic) int logType; // @dynamic logType;
@property(retain, nonatomic) NSMutableArray *proofHashesArray; // @dynamic proofHashesArray;
@property(readonly, nonatomic) unsigned long long proofHashesArray_Count; // @dynamic proofHashesArray_Count;
@property(retain, nonatomic) SignedLogHead *startSlh; // @dynamic startSlh;

@end
