//
//  OSAPIClient.m
//  ObjectiveSpark
//
//  Created by Evan Coleman on 7/22/14.
//  Copyright (c) 2014 Evan Coleman. All rights reserved.
//

#import "OSAPIClient.h"

@implementation OSAPIClient

- (instancetype)initWithAccessToken:(NSString *)accessToken {
    self = [super initWithBaseURL:[NSURL URLWithString:@"https://api.spark.io/v1/devices/"]];
    if (self != nil) {

    }
    return self;
}

@end
