//
//  AppDelegate.m
//  MiAiApp
//
//  Created by 王沛 on 2017/5/17.
//  Copyright © 2015年 王沛. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    //初始化window
    [self initWindow];
    
    //初始化网络请求配置
    [self NetWorkConfig];
    
    //UMeng初始化
    //[self initUMeng];
    
    //初始化app服务
    [self initService];
    
    //初始化IM
    //[[IMManager sharedIMManager] initIM];
    
    //初始化用户系统
    [self initUserManager];
    
    //网络监听
    //[self monitorNetworkStatus];
    
    //广告页
    //[AppManager appStart];
    
    return YES;
}
- (void)applicationWillResignActive:(UIApplication *)application {}
- (void)applicationDidEnterBackground:(UIApplication *)application {}
- (void)applicationWillEnterForeground:(UIApplication *)application {}
- (void)applicationDidBecomeActive:(UIApplication *)application {}
- (void)applicationWillTerminate:(UIApplication *)application {}
@end
