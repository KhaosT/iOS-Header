//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWCTemplateFormattable-Protocol.h>

@class NSString, NWMTemperatureFormatter;

@interface NWCWeatherTemplateFormatter : NSObject <NWCTemplateFormattable>
{
    NWMTemperatureFormatter *_temperatureFormatter;
}

+ (id)sharedFormatter;
@property(retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter; // @synthesize temperatureFormatter=_temperatureFormatter;
- (void).cxx_destruct;
- (id)switcherTemplateWithFamily:(long long)arg1;
- (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)utilitarianSmallTemplateForConditions:(id)arg1;
- (id)utilitarianLargeTemplateForConditions:(id)arg1;
- (id)modularSmallTemplateForConditions:(id)arg1;
- (id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(_Bool)arg2 airQualityConditions:(id)arg3 conditions:(id)arg4 dailyForecastedConditions:(id)arg5;
- (id)graphicCornerTemplateForCurrentObservations:(id)arg1 dailyForecastedConditions:(id)arg2;
- (id)graphicCircularTemplateForCurrentObservations:(id)arg1 dailyForecastedConditions:(id)arg2;
- (id)graphicBezelTemplateForCurrentObservations:(id)arg1 dailyForecastedConditions:(id)arg2;
- (id)extraLargeTemplateForConditions:(id)arg1;
- (id)circularSmallTemplateForConditions:(id)arg1;
- (id)circularMediumTemplateForConditions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

