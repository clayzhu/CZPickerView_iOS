//
//  CZPickerView.h
//  MuYiOrder
//
//  Created by ug19 on 2017/5/13.
//  Copyright © 2017年 Clay Zhu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CZPickerView;

@protocol CZPickerViewDelegate <NSObject>

/**
 点击“取消”或“确定”按钮后回调的代理方法

 @param czPickerView CZPickerView 对象，可以通过该对象获取 identifier 等属性的值
 @param index 选择的行数
 @param isClickSure YES-点击了“确定”，NO-点击了“取消”
 */
- (void)czPickerView:(CZPickerView *)czPickerView selectedRow:(NSUInteger)index clickSureButton:(BOOL)isClickSure;

@end

@interface CZPickerView : UIView

/** 如果一个页面需要使用多个 CZPickerView，可以使用 identifier 标记 */
@property (strong, nonatomic) NSString *identifier;
/** 设定主色调 */
@property (strong, nonatomic) UIColor *mainColor;

@property (strong, nonatomic) NSArray<NSString *> *dataSource;
@property (assign, nonatomic) NSUInteger selectedIndex;

@property (weak, nonatomic) id<CZPickerViewDelegate> delegate;

/** 初始化基础样式和控件 */
- (void)setupPickerView;

/** 显示 pickerView */
- (void)showPickerView;
/** 隐藏 pickerView */
- (void)hidePickerView;

@end
