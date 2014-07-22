//
//  OSAPIClient.h
//  ObjectiveSpark
//
//  Created by Evan Coleman on 7/22/14.
//  Copyright (c) 2014 Evan Coleman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

@interface OSAPIClient : AFHTTPSessionManager

- (instancetype)initWithAccessToken:(NSString *)accessToken deviceID:(NSString *)deviceID;

- (NSURLSessionDataTask *)callFunction:(NSString *)func completion:(void (^)(id responseObject, NSError *error))completion;
- (NSURLSessionDataTask *)readVariable:(NSString *)var completion:(void (^)(id responseObject, NSError *error))completion;

@end
