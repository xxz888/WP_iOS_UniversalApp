//
//  UIButton+XYButton.h
//  MiAiApp
//
//  Created by 王沛 on 2017/6/1.
//  Copyright © 2015年 王沛. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (XYButton)

@property(nonatomic ,copy)void(^block)(UIButton*);

-(void)addTapBlock:(void(^)(UIButton*btn))block;

@end
