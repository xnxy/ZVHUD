//
//  ZVProgressHUD.h
//  ZVProgressHUD
//
//  Created by CNTP on 2020/6/5.
//  Copyright © 2020 CNTP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ZVProgressHUDMaskType) {
    ZVProgressHUDMaskTypeClear = 0,       // don't allow user interactions
    ZVProgressHUDMaskTypeInteraction,     // allow user interactions
};

@interface ZVProgressHUD : NSObject

// show only message
+ (void)showInfoWithStatus:(NSString *)status;
+ (void)showInfoWithStatus:(NSString *)status maskType:(ZVProgressHUDMaskType)maskType;
+ (void)showInfoWithStatus:(NSString *)status maskType:(ZVProgressHUDMaskType)maskType completion:(void (^)(void))completion;
+ (void)showSuccessWithStatus:(NSString *)status;
+ (void)showErrorWithStatus:(NSString*)status;

// show indicator/message
+ (void)show;
+ (void)showWithMaskType:(ZVProgressHUDMaskType)maskType;
+ (void)showWithStatus:(NSString *)status;
+ (void)showWithStatus:(NSString *)status maskType:(ZVProgressHUDMaskType)maskType;
+ (void)showWithProgress:(CGFloat)progress;
+ (void)showWithProgress:(CGFloat)progress maskType:(ZVProgressHUDMaskType)maskType;

// dismiss hud
+ (void)dismiss;
+ (void)dismissWithDelay:(NSTimeInterval)delay;
+ (void)dismissWithDelay:(NSTimeInterval)delay completion:(void (^)(void))completion;

+ (BOOL)isVisible;

@end

NS_ASSUME_NONNULL_END
