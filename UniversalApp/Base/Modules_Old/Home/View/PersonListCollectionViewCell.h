//
//  PersonListCollectionViewCell.h
//  MiAiApp
//
//  Created by 王沛 on 2017/7/14.
//  Copyright © 2015年 王沛. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@interface PersonListCollectionViewCell : UICollectionViewCell

@property (strong, nonatomic) UIImageView *imgView;
@property(nonatomic,strong)PersonModel *personModel;

@end
