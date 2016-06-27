//
//  ZCTabBar.h
//  ZhaoChe
//
//  Created by chetuan003 on 6/27/16.
//  Copyright © 2016 chetuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZCTabBar : UITabBar

@property (strong, nonatomic) UIButton *actionBtn;
@property (copy, nonatomic) void(^actionBtnClickedBlock)();

@end
