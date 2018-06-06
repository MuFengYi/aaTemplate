//
//  HttpRequest.h
//  ONEDAYAPP
//
//  Created by macro macro on 16/8/3.
//  Copyright © 2016年 macro macro. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AFNetworking;
@interface HttpRequest : NSObject

+ (HttpRequest *)sharedInstance;

- (void)GET:(NSString *)URLString dict:(id)dict succeed:(void (^)(id data))succeed failure:(void (^)(NSError *error))failure;
- (void)POST:(NSString *)URLString dict:(id)dict succeed:(void (^)(id data))succeed failure:(void (^)(NSError *error))failure;
@end
