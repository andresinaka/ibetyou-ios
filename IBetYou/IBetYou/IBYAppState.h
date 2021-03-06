//
//  IBYAppState.h
//  IBetYou
//
//  Created by Pablo Villar on 5/23/14.
//  Copyright (c) 2014 Inaka. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IBYAppState : NSObject

@property (strong, nonatomic) NSString *loginToken;
@property (strong, nonatomic) NSString *userEmail;
@property (readwrite, nonatomic) NSInteger userPoints;

+ (instancetype)state;

@end
