//
//  TableViewCell.h
//  UniversalApp
//
//  Created by 王沛 on 2017/8/1.
//  Copyright © 2015年 王沛. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellModel.h"

@interface TableViewCell : UITableViewCell

@property (nonatomic,strong) CellModel * model;
@end
