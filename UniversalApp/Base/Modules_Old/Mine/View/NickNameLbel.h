//
//  NickNameLbel.h
//  MiAiApp
//
//  Created by 王沛 on 2017/6/13.
//  Copyright © 2015年 王沛. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 昵称Label 包含 昵称 性别 年龄 等级
 */
@interface NickNameLbel : UIView


- (void)setNickName:(NSString *)nickName sex:(UserGender)sex age:(NSInteger)age level:(NSInteger)level;

@end
