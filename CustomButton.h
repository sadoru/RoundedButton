//
//  CustomButton.h
//  RoundedButton
//
//  Created by sadoru on 2015/06/10.
//  Copyright (c) 2015年 sadoru. All rights reserved.
//

#import <UIKit/UIKit.h>
IB_DESIGNABLE
@interface CustomButton : UIButton
@property IBInspectable UIColor *textColor;
@property (nonatomic) IBInspectable CGFloat cornerRadius;
@property (nonatomic) IBInspectable CGFloat borderWidth;
@property (nonatomic) IBInspectable UIColor *borderColor;
@end
