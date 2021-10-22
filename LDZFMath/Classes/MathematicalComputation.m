//
//  MathematicalComputation.m
//  CRJMath_Example
//
//  Created by zhuyuhui on 2020/8/31.
//  Copyright © 2020 zhuyuhui434@gmail.com. All rights reserved.
//

#import "MathematicalComputation.h"

@implementation MathematicalComputation
- (instancetype)init {

    if (self = [super init]) {
    
        self.strategy = [ComputationStrategy new];
    }
    
    return self;
}

- (CGFloat)getValue_Y_with_X:(CGFloat)x {
    
    return [self.strategy functionWithValue:x];
}

+ (instancetype)mathematicalComputationWithStrategy:(ComputationStrategy *)strategy {
    
    MathematicalComputation *computation = [[self class] new];
    computation.strategy                 = strategy;
    
    return computation;
}

@end
