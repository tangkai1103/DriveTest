//
//  SheQuVC.h
//  DriveTest
//
//  Created by lanou3g on 15/11/16.
//  Copyright © 2015年 第一小组. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^MyBlock)(NSError *err);

@interface SheQuVC : UIViewController

@property (nonatomic, copy) MyBlock block;

@end
