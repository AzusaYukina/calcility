//
//  MathArctanh.h
//  iCalculator
//
//  Created by curie on 13-11-19.
//  Copyright (c) 2013年 Fish Tribe. All rights reserved.
//

#import "MathOperator.h"


@interface MathArctanh : MathOperator

+ (instancetype)arctanh;

- (MathResult *)operateOnOperand:(MathResult *)operand;

@end
