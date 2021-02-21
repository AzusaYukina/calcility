//
//  MathSub.h
//  iCalculator
//
//  Created by  on 12-8-2.
//  Copyright (c) 2012年 Fish Tribe. All rights reserved.
//

#import "MathOperator.h"


@interface MathSub : MathOperator

+ (instancetype)sub;

- (MathResult *)operateOnLeftOperand:(MathResult *)leftOperand rightOperand:(MathResult *)rightOperand;

@end
