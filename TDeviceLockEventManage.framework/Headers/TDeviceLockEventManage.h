//
//  TDeviceLockEventManage.h
//  LockScreenDemo
//
//  Created by zeb on 2019/2/15.
//  Copyright © 2019年 zeb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/** 解锁通知 */
#define TDeviceLockEventManageDidUnLockedNotification     @"com.timing.devicelockmanager.lockstate.unlocked"
/** 锁屏通知 */
#define TDeviceLockEventManageDidLockedNotification     @"com.timing.devicelockmanager.lockstate.locked"
/** 锁屏完成通知 */
#define TDeviceLockEventManageDidLockcompleteNotification     @"com.timing.devicelockmanager.lockcomplete"

NS_ASSUME_NONNULL_BEGIN

@interface TDeviceLockEventManage : NSObject

/** 是否锁屏 */
@property (nonatomic, assign) BOOL isDeviceLocked;
/** 是否监听 */
@property (nonatomic, assign) BOOL isListening;


/** 单例 */
+ (instancetype)shareManager;
/** 开始监听 */
- (void)startListening;
/** 停止监听 */
- (void)stopListening;

@end

NS_ASSUME_NONNULL_END
