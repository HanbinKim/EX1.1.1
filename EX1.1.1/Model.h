//
//  Model.h
//  EX1.1.1
//
//  Created by SDT-1 on 2014. 1. 9..
//  Copyright (c) 2014년 SDT-1. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Model : NSObject

@property NSMutableArray *data;

- (void)addProduct:(id)product;
- (void)deletePoductAt:(int)index;

- (id)productAt:(int)productId;
- (int)numberOfProducts;

+ (Model *)sharedModel;

@end
