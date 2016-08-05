//
//  WeatherDataObject.m
//  OpenWeather
//
//  Created by Phanindra Kumar on 05/08/16.
//  Copyright © 2016 Phanindra Kumar. All rights reserved.
//

#import "WeatherDataObject.h"

@implementation WeatherDataObject

@synthesize mainDict,unixTimeStamp,weatherDataArray,cloudsDict,windDict,rainDict,sysDict,dateTimeStr,dateOnlyStr;


- (instancetype)initWithDictionary:(NSDictionary*)dictionary {
    if (self = [super init]) {
        
        self.unixTimeStamp = dictionary[@"dt"];
        self.mainDict = dictionary[@"main"];
        self.weatherDataArray = dictionary[@"weather"];
        self.cloudsDict = dictionary[@"clouds"];
        self.windDict = dictionary[@"wind"];
        self.rainDict = dictionary[@"rain"];
        self.sysDict = dictionary[@"sys"];
        self.dateTimeStr = dictionary[@"dt_txt"];
        NSArray *dataTimesArray = [self.dateTimeStr componentsSeparatedByString:@" "];
        self.dateOnlyStr = [dataTimesArray firstObject];

    }
    return self;
}

@end
