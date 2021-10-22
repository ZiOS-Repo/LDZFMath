//
//  ComputationStrategy.h
//  CRJMath_Example
//
//  Created by zhuyuhui on 2020/8/31.
//  Copyright © 2020 zhuyuhui434@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ComputationStrategy : NSObject
/**
 The function to compute new value with input value.

 @param value The input value.
 @return The new value.
 */
- (CGFloat)functionWithValue:(CGFloat)value;

@end

NS_ASSUME_NONNULL_END
