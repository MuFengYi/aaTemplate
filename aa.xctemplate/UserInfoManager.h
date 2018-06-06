//
//  UserInfoManager.h
//  aw
//
//  Created by Abillchen on 2018/6/4.
//  Copyright © 2018年 Abillchen. All rights reserved.
//

#import <Foundation/Foundation.h>


//用户的基本信息....
@interface UserInfoManager : NSObject

//@property (nonatomic , copy) NSString     *xx

/**
 *
 通过单例模式对工具类进行初始化
 *
 */
+ (instancetype)shareUser;

/**
 *
 通过单例模式对工具类进行初始化
 *
 */
+ (void)configInfo:(NSDictionary *)infoDic;

/**
 *
 用户退出登录的操作
 *
 */
+ (void)loginOut;

@end
