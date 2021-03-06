//
//  UINavigationController+CS.h
//  NSLNavigationSolution
//
//  Created by Leo Lee on 17/03/2017.
//  Copyright © 2017 Leo Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UINavigationControllerCustomizable <NSObject>

/**
 当手势滑动或点击返回按钮时调用

 @param navigationController 当前导航控制器
 @param usingGesture 是否使用手势滑动：区分是手势滑动还是点击返回按钮
 @return 是否继续完成手势滑动或点击按钮操作
 */
- (BOOL)navigationController:(UINavigationController *)navigationController shouldJumpToViewControllerUsingGesture:(BOOL)usingGesture;

@end

@interface UIViewController (NSLNavigationSolution)

/// 是否禁用手势返回
@property (nonatomic, assign) BOOL nsl_interactivePopDisabled;

/// 是否设置导航栏透明
@property (nonatomic, assign) BOOL nsl_navigationBarTranslucent;

@end

@interface UINavigationController (NSLNavigationSolution)

/// 设置需要跳转的控制器
@property (nonatomic, strong) UIViewController *nsl_jumpViewController;

/// 点击返回按钮
- (void)nsl_clickBackBarButtonItem;

@end

NS_ASSUME_NONNULL_END
