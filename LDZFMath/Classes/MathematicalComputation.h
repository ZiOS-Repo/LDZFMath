//
//  MathematicalComputation.h
//
//  Created by zhuyuhui on 2020/8/31.
//  Copyright © 2020 zhuyuhui434@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ComputationStrategy.h"

NS_ASSUME_NONNULL_BEGIN

@interface MathematicalComputation : NSObject

/**
 The computation strategy.
 */
@property (nonatomic, strong) ComputationStrategy *strategy;

/**
 Get value Y with input value X.

 @param x The input value X.
 @return The result Y.
 */
- (CGFloat)getValue_Y_with_X:(CGFloat)x;

#pragma mark - Constructor

+ (instancetype)mathematicalComputationWithStrategy:(ComputationStrategy *)strategy;

@end

NS_ASSUME_NONNULL_END
