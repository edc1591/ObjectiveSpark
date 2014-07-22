//
//  OSAPIClient+RACSupport.h
//  ObjectiveSpark
//
//  Created by Evan Coleman on 7/22/14.
//  Copyright (c) 2014 Evan Coleman. All rights reserved.
//

#import "OSAPIClient.h"

#import <ReactiveCocoa/ReactiveCocoa.h>

@interface OSAPIClient (RACSupport)

- (RACSignal *)rac_callFunction:(NSString *)func;

- (RACSignal *)rac_readVariable:(NSString *)var;

@end
