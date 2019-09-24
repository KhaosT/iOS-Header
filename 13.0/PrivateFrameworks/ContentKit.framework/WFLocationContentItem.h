//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFLocationContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
- (_Bool)includesFileRepresentationInSerializedItem;
- (id)preferredFileType;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getMKMapSnapshotImageForSize:(struct CGSize)arg1 scale:(double)arg2 named:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;

@end
